/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_16 = (-((6322667072684706980 ? var_4 : 7853686413048744204)));
                        arr_10 [i_0] = (13081 || 6322667072684706980);
                    }
                    for (int i_4 = 2; i_4 < 18;i_4 += 1)
                    {
                        arr_14 [i_4] [i_1] [i_2] [i_4] = (((arr_1 [i_0 - 1]) ? (arr_8 [2] [i_1] [i_1] [i_1] [i_1]) : ((((10593057660660807411 ? -601813682 : 119))))));
                        arr_15 [i_4] [i_2] [16] [16] [i_4] = (~var_4);
                        var_17 ^= 7853686413048744204;
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_18 = ((var_6 ? (arr_11 [i_0] [i_1] [i_1] [i_6 - 1]) : (arr_1 [i_1])));
                                arr_22 [i_6] [i_6] [1] [i_2] [i_6] [i_0 - 3] = var_2;
                            }
                        }
                    }
                    arr_23 [i_0] [4] [i_2] &= (((((arr_13 [i_0] [i_2] [i_0 - 3] [i_0] [i_0]) ? (arr_13 [12] [i_1] [i_0 - 1] [i_0] [i_0]) : 1)) + (arr_13 [i_2 - 4] [i_1] [i_0 - 3] [i_0] [i_0])));
                }
            }
        }
    }
    var_19 |= var_11;
    var_20 -= (!(((~(~var_13)))));
    #pragma endscop
}
