/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = 255;
            var_16 &= (((arr_0 [i_0] [i_0]) % (arr_4 [i_0] [i_0] [i_0 - 1])));

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_17 = (min(var_17, (((arr_1 [i_1 + 2] [4]) == (arr_2 [i_0] [i_0] [i_2])))));
                var_18 ^= (249 + 62);
                arr_10 [i_0] [i_1] [i_2] = 104;
                var_19 = (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                arr_11 [i_0] [i_1 + 2] [15] [i_1] = var_10;
            }
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_19 [i_0 + 1] [i_0] [i_1] [i_0 - 1] [i_0] [i_0] = ((var_0 ? (48 / var_6) : (48 % 7)));
                            arr_20 [1] [i_1] [i_3] = (arr_5 [i_0] [i_0 + 1] [i_3]);
                        }
                    }
                }
                var_20 ^= ((~(arr_13 [i_0 + 3] [i_0])));
            }
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                var_21 = (min(var_21, -921));
                var_22 = ((-((var_3 ? 0 : var_14))));
                var_23 ^= (((arr_2 [i_0 + 1] [i_0 + 1] [i_6]) * (arr_2 [i_0 - 1] [i_1 - 2] [i_6])));
                var_24 = var_5;
            }
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                arr_25 [i_1] = (((7215940873439067018 + (arr_13 [i_0 + 2] [i_1]))));
                var_25 = (var_3 - var_5);
            }
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        {
                            var_26 = (max(var_26, -var_4));
                            arr_34 [i_1] [i_9] [i_1] [i_1] [i_1] [i_0] = (((((9 ? var_6 : var_1))) ? var_0 : var_0));
                        }
                    }
                }
            }
        }
        var_27 ^= 77;
        var_28 -= var_10;
    }
    /* vectorizable */
    for (int i_11 = 1; i_11 < 12;i_11 += 1)
    {
        var_29 += 7680;
        /* LoopNest 2 */
        for (int i_12 = 4; i_12 < 12;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                {
                    arr_43 [i_12] |= ((var_8 - (65517 < var_8)));
                    var_30 = (arr_27 [i_11 + 1] [i_12]);
                    arr_44 [i_11 + 2] [i_11] [i_11 + 2] = ((arr_22 [i_11 + 1]) ? 0 : (arr_22 [i_11 + 1]));

                    for (int i_14 = 1; i_14 < 12;i_14 += 1)
                    {
                        arr_48 [i_11] [i_11] [i_11] [i_11] [i_11 + 1] [4] = var_0;
                        var_31 |= (-var_7 & var_0);
                    }
                }
            }
        }
        var_32 = var_12;
        var_33 |= (((((18446744073709551612 ? 0 : 593447080976855231))) ? (arr_26 [i_11] [i_11 - 1] [i_11 + 1]) : 5468));
    }
    for (int i_15 = 0; i_15 < 24;i_15 += 1)
    {
        var_34 = var_12;

        for (int i_16 = 1; i_16 < 23;i_16 += 1)
        {
            arr_56 [i_15] = arr_54 [i_15] [i_15] [12];
            var_35 += max((((81 / ((var_3 ? var_1 : (arr_53 [i_15] [i_15] [i_15])))))), (arr_55 [i_15]));
        }
        for (int i_17 = 3; i_17 < 23;i_17 += 1)
        {
            /* LoopNest 2 */
            for (int i_18 = 3; i_18 < 23;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 0;i_19 += 1)
                {
                    {
                        var_36 |= max((arr_54 [i_17 - 2] [i_17 - 3] [i_17 + 1]), -var_10);
                        arr_64 [i_15] = -4356029251219181195;
                        arr_65 [3] [i_17] [3] [i_18] [3] = ((-(max(var_8, (max(14, 0))))));
                        arr_66 [i_15] [i_15] [i_18 - 2] [20] = ((var_2 || ((max((arr_57 [i_15] [i_15] [i_15]), (!var_4))))));
                        var_37 = 36028247263150080;
                    }
                }
            }
            var_38 = var_1;
            var_39 += ((arr_53 [i_17 - 1] [i_15] [i_15]) ? (max(-63, (arr_63 [i_17] [i_17] [i_17 - 2] [i_17 - 1] [i_17 + 1] [i_17 - 3]))) : (((var_4 % ((max(16256, (arr_52 [i_15]))))))));
            var_40 = (max((((!(arr_53 [i_17 - 3] [0] [i_17 + 1])))), ((59724 ? 1 : (arr_63 [22] [22] [23] [i_17 + 1] [i_17 - 2] [12])))));
        }
    }
    var_41 &= 9151314442816847872;
    var_42 = var_12;
    #pragma endscop
}
