/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = (1 - 44623);
        var_15 += (226 || 0);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [6] [i_1] [i_2] = var_1;
                    arr_8 [13] [i_1] [i_2] = ((!(arr_4 [i_1])));
                    arr_9 [4] [i_1] [i_2 + 1] = ((4194304 / (~-13)));
                    arr_10 [i_0] [i_0] = (!-184773881);
                }
            }
        }
        var_16 = 184773880;
        var_17 -= ((214 ? (!2147483647) : (!192)));
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_18 = arr_3 [i_3];

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_19 = (0 || 49040);

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_20 = var_7;
                var_21 -= ((~((1 >> (9223372036854775807 - 9223372036854775788)))));
            }
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_22 -= ((120 ? 35 : 393216));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_23 = (~(~2048));
                            var_24 = 242;
                            arr_32 [i_3] [i_3] [i_6] [i_7] [i_7] [i_8] [i_3] = (((2147483647 ? 1 : 1)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 18;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 19;i_11 += 1)
                    {
                        {
                            var_25 = (((arr_5 [i_11 + 1] [i_11 + 1] [i_11 - 3] [i_11 + 1]) & (arr_5 [i_11 - 2] [i_11 - 2] [i_11 - 3] [i_11 - 2])));
                            arr_37 [i_3] [i_6] [i_7] [i_6] [i_11 - 2] [i_10] [0] = 112;
                            var_26 -= ((-(102 - 2147483628)));
                            arr_38 [i_3] [i_6] [i_7] [i_10 + 2] [i_11] = var_7;
                            var_27 = var_2;
                        }
                    }
                }
                arr_39 [1] [1] [i_7] = 41283;
            }
            for (int i_12 = 3; i_12 < 18;i_12 += 1)
            {
                var_28 = (arr_33 [1] [i_12] [i_6] [i_3] [i_6] [i_3]);
                var_29 ^= -0;
                var_30 = 1;
            }
            var_31 = 1;
            arr_43 [i_3] [i_6] [i_6] = (~255);
        }
        for (int i_13 = 0; i_13 < 20;i_13 += 1)
        {
            /* LoopNest 2 */
            for (int i_14 = 1; i_14 < 18;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 20;i_15 += 1)
                {
                    {
                        arr_52 [i_15] [i_3] [i_3] = 3;
                        arr_53 [9] [i_14] [i_13] [i_3] = -102;
                    }
                }
            }
            var_32 = (((30 ? 1 : var_12)));
        }
        for (int i_16 = 0; i_16 < 20;i_16 += 1)
        {
            var_33 = 0;
            var_34 = (((((~11) + 2147483647)) >> ((1 ? 1 : 12))));
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                for (int i_18 = 1; i_18 < 19;i_18 += 1)
                {
                    {

                        for (int i_19 = 0; i_19 < 20;i_19 += 1)
                        {
                            var_35 |= ((arr_58 [i_3]) ? ((228 ? 2147483640 : 243)) : 1);
                            arr_66 [i_19] [i_16] [i_19] [i_18 + 1] [i_19] [i_19] [i_19] &= 37;
                        }
                        for (int i_20 = 2; i_20 < 19;i_20 += 1)
                        {
                            var_36 += (45 * 22);
                            arr_70 [1] [i_16] [i_17] [i_16] [i_20] [i_20] [i_20] = (~39);
                            var_37 = (23307 - 29);
                            var_38 += (((65525 / 24) && (-217837176 || var_0)));
                        }
                        for (int i_21 = 1; i_21 < 1;i_21 += 1)
                        {
                            var_39 = (max(var_39, (-96 < 109)));
                            arr_75 [i_21] [i_16] [i_17] [i_18 + 1] [i_21] [i_16] = (0 > 226);
                        }
                        var_40 = (min(var_40, 1));
                        var_41 = ((1 ? (arr_46 [i_3] [i_18 - 1] [i_17]) : 156));
                    }
                }
            }
        }
    }
    for (int i_22 = 3; i_22 < 16;i_22 += 1)
    {
        var_42 = var_10;
        var_43 = (min(var_43, (122 * 0)));
        var_44 = (1 / 24);
    }
    var_45 = (((((1 ? ((max(1, 59246))) : (128 / 3172)))) ? (13 && -919437976) : (((252 <= 32) ? ((2147483647 ? var_13 : -16)) : (!65535)))));
    #pragma endscop
}
