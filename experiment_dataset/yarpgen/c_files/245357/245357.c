/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 *= (arr_8 [i_0 + 2] [i_0 + 1]);

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_14 = (((((((15243 ? 0 : 16993959903811216032))) ? var_10 : (arr_3 [0] [i_0 + 1] [i_2]))) | -29988));
                        arr_11 [i_0] [i_1] [i_1] [1] [i_3] = 977602268;
                        var_15 = (min(var_15, ((max(((var_5 ? (arr_9 [i_0 + 2] [i_0 - 2]) : (arr_9 [i_0 + 2] [i_0 - 2]))), (((max(31075, var_2)))))))));
                    }
                    var_16 *= (arr_2 [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 9;i_5 += 1)
                        {
                            {
                                var_17 = (!var_12);
                                arr_17 [i_1] [i_1] [i_2] &= (max(((-(arr_13 [i_4 - 1] [i_4] [10] [i_5 + 2] [i_5 + 1]))), var_10));
                                var_18 *= var_11;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (min(var_19, var_9));
    #pragma endscop
}
