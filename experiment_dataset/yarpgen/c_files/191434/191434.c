/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((~(max(((min(var_10, var_8))), 4503599625273344)))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = var_2;
        var_15 *= (arr_1 [i_0]);
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        var_16 *= var_7;
        var_17 = (arr_0 [i_1]);
        var_18 ^= -1948136918;

        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_19 = (min(var_19, (arr_5 [i_1] [i_1])));
            arr_7 [i_1 - 1] [7] = var_5;
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
        {
            arr_10 [i_3] [i_1] = var_0;
            arr_11 [i_3] [i_3] |= (~var_7);
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            var_20 = 23971;
            var_21 *= (arr_1 [i_1 - 1]);
            var_22 *= (arr_2 [i_1]);
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_23 = (max(var_23, var_0));
        arr_16 [i_5] = -var_4;
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_24 = var_6;
        var_25 ^= var_4;
        var_26 = 23260;
    }

    for (int i_7 = 1; i_7 < 13;i_7 += 1)
    {

        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            arr_24 [i_7] [i_7] = -123;
            arr_25 [i_7] [i_7] = 3326308507;
            arr_26 [16] [16] &= var_11;
        }
        for (int i_9 = 3; i_9 < 14;i_9 += 1)
        {

            for (int i_10 = 3; i_10 < 13;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        {
                            arr_38 [i_7] [i_9] [i_9] [i_7] = (arr_34 [i_10] [i_10] [i_12]);
                            var_27 = arr_23 [i_7 + 3] [i_7 + 3];
                            var_28 = 6529848589051595688;
                            var_29 = var_9;
                            arr_39 [i_7] [i_7] = (arr_34 [i_10 - 2] [i_10] [i_10]);
                        }
                    }
                }
                arr_40 [i_7 + 4] [i_9] [i_7] = ((~((~(arr_30 [i_9] [i_9] [i_7] [5])))));
            }
            for (int i_13 = 3; i_13 < 13;i_13 += 1)
            {
                var_30 *= -3774523172337529606;
                var_31 = var_7;
                var_32 = (arr_30 [5] [i_9] [i_7] [i_9]);
            }
            arr_43 [i_7] [6] = (arr_32 [i_7] [i_7]);
        }
        var_33 |= (~42275);
        arr_44 [i_7] = arr_22 [i_7] [i_7];

        /* vectorizable */
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            var_34 |= (arr_32 [i_7] [1]);

            for (int i_15 = 1; i_15 < 16;i_15 += 1)
            {
                var_35 = (arr_20 [i_7] [i_15]);
                arr_51 [i_7] [i_15] [i_7] [i_7] = var_1;
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 17;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 15;i_17 += 1)
                    {
                        {
                            arr_57 [i_17] [i_17 + 2] [i_7] [i_7] [i_14] [i_7 + 4] = var_11;
                            arr_58 [i_17] [i_7] [i_7] [i_15] [i_7] [i_7] [i_7] = (arr_42 [i_15 - 1] [i_15 - 1]);
                            var_36 = arr_56 [i_15] [i_16] [i_15] [i_16] [i_16];
                            var_37 = (max(var_37, (arr_33 [i_7] [i_7] [i_7] [10])));
                        }
                    }
                }

                for (int i_18 = 2; i_18 < 16;i_18 += 1)
                {
                    var_38 = (~9223372036854775802);
                    arr_61 [i_7] [i_7] [i_15] [i_15 - 1] [i_18] [i_18] = var_9;
                    var_39 = (min(var_39, (arr_52 [0] [i_18] [i_18] [i_18 + 1])));

                    for (int i_19 = 2; i_19 < 15;i_19 += 1)
                    {
                        arr_64 [i_7] = (~17246);
                        arr_65 [i_7] [13] [i_15] [i_14] [i_14] [i_7] = (~var_1);
                    }
                    for (int i_20 = 2; i_20 < 15;i_20 += 1)
                    {
                        var_40 = 51261;
                        arr_69 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [1] = var_3;
                        arr_70 [i_14] [i_7] = ((-(arr_29 [i_18] [i_14])));
                        arr_71 [i_7] = (~(~2));
                        var_41 = (~1);
                    }
                }
                for (int i_21 = 2; i_21 < 15;i_21 += 1)
                {
                    var_42 = (arr_27 [12]);
                    arr_75 [16] [16] [i_7] [i_21] = (arr_18 [i_7]);
                }
                for (int i_22 = 0; i_22 < 17;i_22 += 1)
                {
                    arr_79 [i_7] [i_7] [i_7 + 2] [i_7 + 2] [i_7] [i_7] = var_11;
                    var_43 = ((~(arr_63 [i_22] [i_14] [i_15] [i_15] [i_14] [3])));
                }
            }
            for (int i_23 = 1; i_23 < 13;i_23 += 1)
            {
                var_44 = var_7;
                arr_83 [i_14] [12] |= -655144013;
            }
        }
    }
    #pragma endscop
}
