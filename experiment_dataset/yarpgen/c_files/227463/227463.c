/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 4294963200;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_2] = 15668375463081512684;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [7] [i_1] [i_2] [0] [i_1] = ((((((arr_11 [i_1 - 1] [i_4] [i_4] [i_4] [i_4] [i_1] [i_4]) - (arr_11 [i_1 + 1] [i_1 - 3] [i_1 + 1] [i_1 - 3] [i_1 + 1] [i_1] [12])))) ? (max((arr_11 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_4] [i_4] [i_1] [i_4]), (arr_11 [i_1 + 4] [i_4] [3] [i_4] [i_4] [i_1] [i_4]))) : (max((arr_11 [i_1 - 3] [1] [i_4] [i_4] [i_4] [i_1] [i_4]), (arr_11 [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_2] [i_1] [i_2])))));
                                var_19 -= -1731984608;
                                arr_14 [i_0] [18] [i_1] [i_3] [i_4 + 2] = (((arr_7 [i_0] [i_1 + 3] [i_0] [i_4]) != ((min(var_0, ((0 ? (arr_3 [i_0]) : var_15)))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_20 = (max((((arr_10 [i_1] [i_1] [i_1 + 4] [i_1] [i_1]) ? (arr_10 [i_1] [i_1] [i_1] [i_5] [1]) : 2642595368435059390)), (arr_10 [i_1] [i_1] [8] [i_2] [i_5])));
                        var_21 -= -1731984617;
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_23 [i_0] [i_0] [i_0] [4] [i_0] [i_0] [i_1] = (max(56284868278908668, ((1 ? 1 : (((arr_20 [i_0] [i_6] [7]) ? var_3 : 2642595368435059372))))));
                                var_22 = (max(489978035, 12932));
                                var_23 = (!0);
                            }
                        }
                    }
                    var_24 *= 1;
                }
            }
        }
    }
    var_25 = var_2;
    var_26 = 1731984607;
    #pragma endscop
}
