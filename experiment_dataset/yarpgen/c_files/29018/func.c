/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29018
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
    var_11 = ((/* implicit */unsigned long long int) min((var_2), (var_5)));
    var_12 = ((/* implicit */short) min((((var_3) ^ (var_3))), (((/* implicit */unsigned long long int) var_5))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = arr_3 [i_0 - 1];
                var_13 = ((/* implicit */signed char) arr_3 [i_0 - 1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (signed char i_3 = 3; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_7 [i_0] [i_0] [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))))), (max((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_5 [i_0]))))))) || (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]))));
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_12 [i_3 - 1] [i_0 - 1] [i_3 - 3] [i_0 - 1] [i_0]) >> (((arr_12 [i_3 - 3] [i_3 - 1] [i_3 - 1] [i_0 - 1] [i_0]) - (9951785817345064574ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_3 + 1] [i_1] [i_0]), (arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))) : (min((((/* implicit */unsigned long long int) arr_5 [i_0 - 1])), (((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
