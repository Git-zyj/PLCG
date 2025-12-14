/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_4);
    var_20 = var_11;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_21 += (arr_1 [i_0 + 1] [i_0 + 3]);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 = (min(var_22, (~var_3)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1 - 1] [i_2] [i_3 - 2] [i_4] [i_0 - 1] [i_4 - 1] = 22534;
                                var_23 = (arr_2 [i_1 - 1] [i_2]);
                                var_24 *= (!-56);
                                arr_13 [i_0] [i_1] [i_2] [1] [i_4] |= (arr_0 [i_0 + 2]);
                                var_25 = var_10;
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        arr_17 [i_5] = ((((!(arr_2 [i_5] [i_5])))));
        var_26 *= (+-6077175682607848480);
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            arr_28 [i_6] = (~35);
                            var_27 ^= ((~((~(arr_4 [14])))));
                            var_28 *= -1563149622260770766;
                            arr_29 [1] = 1903611425;
                            var_29 *= -1919621940;
                        }
                        for (int i_10 = 1; i_10 < 19;i_10 += 1)
                        {
                            arr_34 [i_10] [i_10 + 1] [i_10] [0] [i_10 + 3] = -62219;
                            arr_35 [6] [i_6] [i_7] [i_8] [i_10 + 3] = (~var_10);
                            var_30 = -var_14;
                        }
                        arr_36 [i_5] [i_6] [i_5] [i_8] = (arr_30 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]);

                        for (int i_11 = 1; i_11 < 22;i_11 += 1)
                        {
                            arr_40 [i_5] [i_6] [i_11] = 1;
                            arr_41 [i_5] [i_6] [i_7] [i_8] [i_8] = (!6929725819921147010);
                        }
                        /* vectorizable */
                        for (int i_12 = 1; i_12 < 22;i_12 += 1)
                        {
                            arr_44 [i_5] [i_7] [i_8] = (!1563149622260770739);
                            arr_45 [i_5] [i_6] [i_7] [i_8] [i_12] = (!var_8);
                            arr_46 [i_5] [5] [i_6] [i_7] [15] [i_8] [5] = -var_9;
                        }
                        var_31 = -44365;
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 1; i_13 < 15;i_13 += 1)
    {
        for (int i_14 = 2; i_14 < 17;i_14 += 1)
        {
            {
                var_32 = ((-(arr_19 [i_13])));
                arr_53 [8] [i_13] [0] &= ((~(arr_38 [i_13 + 3] [i_14 + 1] [i_14 - 1] [i_14] [i_14] [i_13 + 1] [i_14])));
            }
        }
    }
    #pragma endscop
}
