/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28875
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_19 *= ((/* implicit */unsigned long long int) ((max((arr_0 [i_0]), ((+(0U))))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        var_20 += ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) ((unsigned long long int) var_3)))) == ((~(((/* implicit */int) ((arr_0 [i_0]) == (1336288683U))))))));
    }
    var_21 = ((/* implicit */int) 2958678613U);
    var_22 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_16)) < (((/* implicit */int) var_9))))) == (((/* implicit */int) var_14))));
}
