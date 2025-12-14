/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_13 = var_8;
            arr_6 [i_1] [11] = min((arr_5 [i_0]), (((arr_3 [i_0] [i_1]) ^ (arr_3 [i_0] [i_1]))));

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_14 = (max(var_14, ((min(203, ((-70 ? 1 : 17946161588891479458)))))));
                            arr_16 [i_2] [9] [16] [i_2] [i_1] [i_2] = (((~-915140398) >= 31));
                            arr_17 [i_2] [i_3] [i_2] [i_0] [i_2] = 1;
                            arr_18 [i_2] = (max((min(((min(2404482169, 1))), (max(var_8, 1)))), ((((min(48801, (arr_2 [i_0] [i_0] [i_0])))) ? (915140397 >> 1) : ((1 ? 18446744073709551613 : -87))))));
                        }
                    }
                }
                arr_19 [4] [i_2] [i_2] [i_0] = (max(-var_3, var_11));
                arr_20 [i_2] [6] [i_2] [i_2] = var_12;
                arr_21 [7] [i_2] [i_2] = ((3001424689 ? -11778 : (((15915104926207571261 || (arr_8 [i_2] [i_2]))))));
                arr_22 [i_2] [i_2] [i_2] [i_2] = 1857215581;
            }
            var_15 = var_1;
            arr_23 [i_0] = (arr_13 [i_0] [i_0] [i_1] [i_0] [i_1]);
        }
        arr_24 [i_0] = (((-(min(var_11, (arr_12 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 9;i_5 += 1)
    {
        arr_29 [i_5] = (arr_1 [i_5 - 3] [i_5]);
        arr_30 [i_5] [i_5] = ((32 ? (arr_2 [i_5 - 1] [i_5 - 3] [i_5]) : (arr_2 [i_5 - 2] [i_5 + 2] [i_5 - 3])));
        var_16 = (~18446744073709551610);

        for (int i_6 = 4; i_6 < 8;i_6 += 1)
        {
            arr_35 [i_5] [i_5 + 2] = 43;
            arr_36 [i_5] [i_6] = (1 | 88);
            arr_37 [i_5] [i_6] = ((var_4 ? var_2 : var_6));
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 9;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    {
                        var_17 |= (((arr_42 [i_5 + 2] [i_5] [i_6] [i_7] [i_8]) ? (arr_42 [1] [i_6] [i_6 - 1] [i_6 + 3] [i_8]) : (arr_42 [i_5] [i_6 + 3] [i_7] [i_8] [7])));
                        arr_44 [4] [i_7] [i_6 + 1] [2] [2] = ((var_10 ? ((var_4 % (arr_3 [15] [14]))) : (arr_12 [i_5 + 2] [i_5 + 1])));
                        var_18 = (max(var_18, 7));
                        var_19 = (max(var_19, (1 % 1)));
                    }
                }
            }
        }
    }
    var_20 = ((((min((((-88 ? var_5 : var_7))), var_5))) ? (((10718761700943211911 ? 7727982372766339713 : 101))) : 2760012751));
    #pragma endscop
}
