/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20937
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((var_6), (var_8))), (((/* implicit */long long int) var_5))))) && (((/* implicit */_Bool) var_3))));
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) var_9))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned int) ((arr_3 [i_0] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1 + 2]))))))), (min((((unsigned long long int) arr_1 [i_0])), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1 + 1] [18])) / (((/* implicit */int) arr_1 [i_0])))))))));
                var_15 = ((/* implicit */unsigned int) max((((min((var_3), (((/* implicit */unsigned long long int) var_8)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0]))))))), (((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_1] [i_0])))));
                var_16 = ((/* implicit */signed char) arr_0 [i_0]);
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((((_Bool) var_3)) ? (arr_3 [i_0] [i_0]) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((arr_4 [i_0] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
            }
        } 
    } 
    var_17 = min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_5)) == (var_9)))), (var_8)))), (((max((var_9), (((/* implicit */unsigned long long int) var_1)))) - (max((var_4), (((/* implicit */unsigned long long int) var_10)))))));
}
