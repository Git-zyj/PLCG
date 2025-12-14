/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (((((arr_2 [i_0] [i_0 - 1]) / (((23 ? (arr_0 [i_0]) : (arr_5 [i_1])))))) / (((((7228476112609918630 ? var_5 : var_13)) * var_17)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] [i_1] [i_2] [i_3] = (min(2084514361, 7228476112609918641));
                            arr_13 [i_3 + 1] [i_1] [1] [i_1] [i_0] = (((arr_4 [i_1] [i_2] [i_1]) ? (arr_4 [i_1] [i_2] [i_1]) : (max(18, 11218267961099632976))));
                            arr_14 [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1] = (((arr_3 [i_3 + 2]) * (((arr_0 [i_3 + 4]) ? (arr_0 [i_3 + 2]) : (arr_3 [i_0 + 2])))));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 22;i_4 += 1)
                            {
                                arr_18 [i_0] [i_1] [0] [i_3 + 4] [i_4] = (((1 * var_17) * 7228476112609918639));
                                arr_19 [i_0] [i_0] [i_0] [i_1] [i_0] [i_3] [i_1] = (((arr_5 [i_1]) ? (((4377 ? (arr_4 [i_1] [i_1] [i_1]) : (arr_5 [i_1])))) : ((var_8 ? 4371 : (arr_2 [i_1] [i_3])))));
                                arr_20 [i_0] [i_0 + 3] [i_0] [i_0] [i_1] = (arr_0 [i_0 + 3]);
                            }
                        }
                    }
                }
                arr_21 [i_0 + 4] [i_1] [i_0] = (max((arr_2 [i_0 - 2] [i_0 + 4]), (((arr_2 [i_0 + 1] [i_0 + 1]) ? (arr_2 [i_0 + 4] [i_0 + 1]) : (arr_3 [i_0 + 3])))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            arr_27 [i_0] [i_1] [i_0] [18] [6] [i_0] = (arr_11 [i_0 + 4]);
                            arr_28 [i_0] [i_1] [i_5] [i_6] = ((-var_1 * (arr_16 [i_1] [i_1] [i_1] [1])));
                            arr_29 [i_0] [1] [10] [i_0] [1] [i_6] &= (((((arr_11 [i_6]) ? 1 : (arr_11 [i_6]))) * (arr_11 [i_5])));
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 2; i_7 < 9;i_7 += 1)
    {
        arr_32 [i_7] = (((arr_17 [i_7 + 1] [i_7 + 2]) * 255));
        arr_33 [i_7] = 1;
    }
    var_18 = ((var_14 ? (-4393 / 603697671) : (~var_15)));
    #pragma endscop
}
