/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202170
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
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((_Bool) (signed char)-95)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))) : (((/* implicit */int) ((short) (unsigned char)247)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) min((var_9), (((/* implicit */short) (unsigned char)0))))) : (((/* implicit */int) (signed char)-126)))) : (((/* implicit */int) var_7)))))));
    var_12 = ((/* implicit */signed char) (~(((/* implicit */int) var_6))));
    var_13 = ((/* implicit */unsigned int) var_9);
    var_14 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)247))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_15 += min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)9)) != (((/* implicit */int) (short)-14852))))), (max((arr_1 [i_0]), (((/* implicit */unsigned int) 726836915)))));
        arr_2 [i_0] = ((/* implicit */_Bool) (unsigned char)244);
    }
}
