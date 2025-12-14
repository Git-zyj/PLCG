/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53029
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_19 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) min((var_13), (((/* implicit */unsigned short) var_0)))))))));
    var_20 = ((/* implicit */_Bool) var_7);
    var_21 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */int) ((short) var_0))) : (((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_9)))))))));
    var_22 = ((/* implicit */short) (~(((/* implicit */int) ((((unsigned long long int) var_16)) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)-68)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) var_5);
        arr_5 [i_0] = ((/* implicit */_Bool) max((((arr_3 [i_0] [i_0]) ^ (((/* implicit */long long int) 471821079U)))), (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0] [i_0])))))));
        arr_6 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_0]))));
    }
}
