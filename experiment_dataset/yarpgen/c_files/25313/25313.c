/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~((-(~var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [0] [i_1] = 1;
                var_19 += (((~18289) | (arr_0 [i_0] [i_1])));
                var_20 = ((min((arr_2 [i_0 + 3] [i_1]), 700146971)));
                var_21 = (arr_2 [i_0 + 3] [i_0 + 1]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_22 = (((max((((!(arr_11 [i_2])))), (max(var_15, (arr_13 [0] [i_3] [i_4]))))) << (((((((arr_8 [20] [i_3]) ^ (arr_13 [i_2] [12] [1])))) && ((((arr_6 [i_2] [16]) - (arr_6 [i_2] [i_2])))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_20 [18] [i_3] [i_4] [i_6] [2] = ((((((var_5 ? (arr_6 [i_2] [i_2 - 1]) : var_0))) ? (arr_10 [i_2]) : (((arr_15 [4] [i_5] [18] [i_3]) ? -18280 : (arr_16 [i_2]))))));
                                var_23 = 18786;
                                var_24 = ((+(max((arr_17 [i_2 + 1]), var_14))));
                                arr_21 [i_6] [0] [9] [12] = ((-(7043500588537620428 & -var_12)));
                                var_25 = ((-(arr_15 [i_2] [i_3] [1] [i_2])));
                            }
                        }
                    }
                    arr_22 [i_2 - 3] = 21123;

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_25 [2] [i_4] [i_4] [15] [3] = ((~((-(arr_13 [18] [i_3] [i_4])))));
                        var_26 = var_5;
                        var_27 = ((~(arr_12 [i_2 + 1] [i_2 - 3] [i_2] [i_2 - 3])));
                    }
                }
            }
        }
    }
    var_28 = -2663336818581642180;
    #pragma endscop
}
