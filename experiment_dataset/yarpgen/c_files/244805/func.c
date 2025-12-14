/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244805
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        for (int i_4 = 4; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_11 [2LL] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) 2147483647);
                                arr_12 [i_0] [4ULL] [i_2] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_4]);
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [i_1] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_0 [i_0]) * (((/* implicit */unsigned long long int) min((var_1), (arr_6 [i_1] [(_Bool)1] [i_0] [i_0])))))))));
                arr_14 [10] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_9 [i_1] [i_0] [i_0])))), (((/* implicit */int) (_Bool)1))));
                var_11 = ((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) max((max(((~(var_9))), (((/* implicit */unsigned long long int) min((var_2), (-1LL)))))), (((/* implicit */unsigned long long int) -1LL))));
}
