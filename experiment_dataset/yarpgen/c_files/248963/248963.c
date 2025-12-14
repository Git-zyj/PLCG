/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;
    var_20 = ((((var_0 ? var_9 : 0))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [12] = (max(var_14, (((!(((var_0 ? 1 : (arr_1 [8] [8])))))))));
        arr_3 [i_0] = var_3;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {

                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        arr_16 [i_1] [8] [i_2] [8] [i_4 - 1] = (((arr_4 [i_1]) ? ((var_17 / (arr_15 [0] [12] [2] [i_4] [i_2] [i_4 - 1]))) : var_6));
                        arr_17 [i_4] [13] = var_17;
                    }
                    for (int i_5 = 3; i_5 < 12;i_5 += 1)
                    {
                        arr_20 [3] = (arr_7 [i_1] [i_3] [i_1]);
                        arr_21 [1] [10] [10] [10] = var_16;
                        arr_22 [i_3] [i_3] [i_1] [i_1] [i_1] = (((((~(arr_19 [i_1] [i_2] [i_2] [i_5])))) / 3571327788143295665));
                    }
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            arr_27 [3] [0] [i_6] = 2678400029383507817;
                            arr_28 [i_1] [i_1] [i_3] [i_6] [i_7] = var_17;
                            arr_29 [i_1] [i_2] = ((arr_14 [3] [11] [i_6] [i_6 - 1]) || -7716147738142703107);
                            arr_30 [1] [1] = var_8;
                            arr_31 [5] [i_1] [9] [6] [13] [i_2] [i_1] = ((-(((arr_18 [i_1] [i_1] [i_3] [6] [i_7] [1]) - 1))));
                        }
                        arr_32 [i_3] [10] [i_3] [i_3] [5] = ((-5931261721476482594 | (((arr_23 [10] [i_2] [i_2] [i_6]) ? var_2 : 1))));
                        arr_33 [12] = (~var_6);
                    }
                    arr_34 [i_3] = (!var_8);
                    arr_35 [2] [i_3] = -var_1;
                }
            }
        }
        arr_36 [i_1] = (arr_13 [i_1] [i_1] [i_1] [2] [i_1] [3]);
    }
    var_21 = var_13;
    var_22 = ((((max(var_8, 1))) ? (((~var_14) % var_14)) : (~-1)));
    #pragma endscop
}
