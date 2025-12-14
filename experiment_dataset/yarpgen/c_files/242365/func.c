/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242365
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (var_8) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_3)) ? (var_12) : (var_2))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    var_20 = ((/* implicit */unsigned int) var_0);
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (max((((/* implicit */unsigned int) min((var_1), (var_1)))), (min((((/* implicit */unsigned int) var_0)), (var_15))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            {
                var_22 &= ((/* implicit */signed char) ((arr_2 [i_0 - 3] [i_0 - 2]) ? (((/* implicit */int) min(((_Bool)0), (arr_2 [i_0 - 3] [i_0 - 3])))) : (((arr_2 [i_0 + 1] [i_0 - 1]) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 2])) : (((/* implicit */int) arr_2 [i_0 - 3] [i_0 - 3]))))));
                var_23 = ((/* implicit */unsigned short) arr_1 [i_0 - 2]);
                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_1 - 2])) ? (((arr_2 [i_1 - 1] [i_1 - 1]) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 3] [i_1 - 2])) : (((/* implicit */int) arr_2 [i_1 + 1] [i_1])))) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_1 - 1])))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (((/* implicit */int) max((arr_2 [i_0] [(unsigned char)0]), (arr_2 [i_0] [i_1])))) : (((/* implicit */int) max((arr_0 [i_1]), (((/* implicit */unsigned char) arr_2 [i_0 - 3] [i_1 - 3]))))))), (max((((/* implicit */int) arr_3 [i_1 - 2])), (((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_1 + 1]))))))));
            }
        } 
    } 
}
