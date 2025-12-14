/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20399
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) ((((unsigned int) max((((/* implicit */unsigned int) arr_0 [i_1] [i_1])), (1149893224U)))) << (((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))), (arr_1 [i_1 + 1] [i_1]))) - (2227038590U)))));
                arr_5 [i_0 + 1] [i_0 + 1] = ((/* implicit */signed char) max((((/* implicit */short) (signed char)127)), ((short)32753)));
                var_17 = ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)8322)));
                var_18 = ((/* implicit */int) min((var_18), (max((((/* implicit */int) arr_0 [i_0 + 1] [i_1 + 1])), (((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((/* implicit */int) var_2)) : ((+(((/* implicit */int) var_12))))))))));
                var_19 = ((/* implicit */int) arr_1 [(unsigned char)10] [i_1 - 2]);
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((var_12) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned int) var_14)) : (4294967294U)))) && (((/* implicit */_Bool) var_4)))))));
}
