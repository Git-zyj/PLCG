/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_15 -= (((max(((268435456 ? 2620300368 : var_0)), (max(189, (arr_2 [7] [i_2])))))) ? (!var_11) : (min((arr_2 [i_0] [i_0]), var_10)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] = 38;
                                arr_16 [i_3] [i_3] [i_2] [i_3] [i_1] [i_0] [i_1] = (~(arr_4 [i_0]));
                                var_16 = (max(var_16, ((((min(2620300372, (243 >= 2620300368))) ^ (((arr_3 [i_0] [1]) ? (arr_10 [i_1] [i_1] [i_2]) : 2620300339)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_23 [i_5] [i_1] = (~(arr_13 [i_5 - 2]));
                                var_17 = ((!((!(arr_18 [11] [i_5] [4] [i_6 + 3] [i_0] [i_2])))));
                                arr_24 [7] [i_5] [i_5] [i_5] = (((max((arr_5 [i_1] [i_1]), 2620300368))));
                                var_18 += ((-516096 || (((~(arr_18 [i_0] [i_5] [i_2] [i_1] [i_1] [i_0]))))));
                            }
                        }
                    }
                    arr_25 [i_0] [i_1] [i_2] = ((((arr_4 [i_2]) ? 1 : (arr_4 [i_0]))));

                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        arr_28 [14] [i_1] [i_1] [i_1] [i_1] = 2620300368;
                        arr_29 [i_0] [i_0] [i_1] [i_2] [i_2] [i_7] = (((((arr_10 [i_0] [i_1] [i_2]) && ((max(21731, (arr_12 [i_0] [i_1] [i_2] [i_2] [1] [i_7])))))) || (((7858886664437560269 ? var_6 : 146)))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        arr_34 [i_0] [i_1] [i_2] [i_8] [i_1] [i_8] = ((63 ? (arr_2 [i_0] [i_1]) : 2620300368));
                        var_19 = (((arr_1 [i_0] [i_1]) + 9221120237041090560));
                        var_20 &= (arr_32 [i_2] [i_0]);
                        var_21 -= 9221120237041090560;
                    }
                }
            }
        }
    }
    var_22 = (min((min(var_0, (min(var_13, var_3)))), 1));
    #pragma endscop
}
