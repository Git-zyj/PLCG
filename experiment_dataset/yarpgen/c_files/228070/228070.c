/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = max(((-((0 ? 15 : 17270)))), (arr_2 [i_0]));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 = (((((arr_1 [i_0]) >> (2836188441 - 2836188391))) << (((max((arr_1 [i_0]), (arr_1 [i_0]))) - 10207622826633766675))));
                                var_12 = ((((((max((arr_1 [11]), 21))))) < (((arr_9 [i_1] [i_2] [i_3]) * ((var_4 ? (arr_2 [i_0]) : 16385386503259067678))))));
                            }
                        }
                    }
                }
                var_13 = (min(var_13, var_9));
            }
        }
    }
    var_14 = ((var_9 ? ((var_3 * ((15 ? 27833 : 0)))) : 56655));
    var_15 = (min(var_15, 0));
    #pragma endscop
}
