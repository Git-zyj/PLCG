/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] &= var_7;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, ((((arr_1 [6]) * (arr_6 [i_0] [i_0 - 2] [i_4 + 1]))))));
                                var_18 &= (-(((arr_2 [i_0] [i_1 + 1] [i_2 - 1]) / (arr_3 [i_0 - 1] [i_1 - 1]))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] [8] [i_0] = (arr_15 [16] [16] [16] [16] [16]);
                    var_19 -= (((43014 ? 1644389109 : 50461)) == (15 || -6244950505495103683));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 3; i_5 < 17;i_5 += 1)
    {
        arr_20 [i_5] = (arr_18 [i_5 - 1]);
        var_20 = (min(var_20, (arr_18 [i_5 - 1])));
        var_21 = (((arr_18 [i_5 - 1]) || (arr_18 [i_5 + 1])));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 16;i_6 += 1)
    {
        var_22 = var_11;
        var_23 -= ((arr_2 [i_6] [i_6] [10]) && var_11);
        arr_24 [i_6] [i_6] = (arr_2 [11] [16] [11]);
    }
    #pragma endscop
}
