/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] = var_17;
        arr_4 [i_0] [i_0] = 255;
        arr_5 [i_0] [i_0] = (arr_2 [i_0 - 1]);
        var_18 = (min(var_18, (((var_11 ? (arr_0 [i_0 - 1]) : (arr_1 [i_0 + 1]))))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {
            var_19 = (((((arr_1 [i_0]) > 127)) ? (arr_7 [i_0]) : (arr_7 [i_0])));

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                arr_10 [i_0] [i_1] [i_1] [i_1] = ((-(((arr_7 [i_0]) ? var_0 : -11093))));
                arr_11 [i_0] = (((arr_7 [i_0]) ? (arr_8 [i_0] [i_0 - 1]) : var_1));
                var_20 = (min(var_20, var_14));
            }
            arr_12 [i_0 + 1] [i_0] [i_0 + 1] = (!165);
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
        {
            arr_15 [i_0] [i_0] = ((!((((arr_13 [i_0 - 1] [i_3]) ? 0 : var_13)))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        arr_23 [i_3] [i_3] [i_0] [3] = (arr_21 [i_3] [i_5]);
                        var_21 = (max(var_21, (arr_7 [i_4])));
                    }
                }
            }
            var_22 = var_17;
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
        {
            arr_26 [i_0] [0] [i_6] &= ((~(~14)));

            for (int i_7 = 1; i_7 < 9;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    arr_32 [i_0 + 1] [i_6] [i_7 - 1] [i_0] = ((-(arr_13 [i_6] [i_6])));
                    arr_33 [i_0] [i_8] [i_7] [i_8] [i_8] [i_8] |= (arr_21 [i_0] [i_7 + 1]);
                    var_23 = (arr_7 [i_0]);
                    var_24 = 67;
                    var_25 = ((2358051480 ? 18446744073709551615 : 65535));
                }
                for (int i_9 = 3; i_9 < 7;i_9 += 1) /* same iter space */
                {
                    arr_36 [i_0] [1] [i_0] [i_0] = (arr_29 [i_7 - 1] [i_9 + 3] [i_0 - 1]);
                    var_26 = (((32742 ^ 7) ? 1 : (arr_2 [i_0 + 1])));
                }
                for (int i_10 = 3; i_10 < 7;i_10 += 1) /* same iter space */
                {
                    var_27 = 117;

                    for (int i_11 = 3; i_11 < 9;i_11 += 1) /* same iter space */
                    {
                        var_28 -= (((arr_19 [i_11 - 3]) ? (123 >= 255) : (~var_7)));
                        var_29 = (max(var_29, -1));
                        var_30 = (((((32187 ? -1 : 71))) ? ((88 ? 0 : (arr_2 [i_11]))) : -var_7));
                        var_31 = (max(var_31, ((((arr_39 [i_0] [i_6] [i_7 + 1] [i_10] [i_11 - 3] [i_11 - 2]) ? (arr_39 [i_0 - 1] [i_6] [7] [i_10 + 1] [i_11] [i_10]) : (arr_39 [i_0 - 1] [i_6] [i_6] [i_10 + 2] [i_10 + 2] [2]))))));
                    }
                    for (int i_12 = 3; i_12 < 9;i_12 += 1) /* same iter space */
                    {
                        var_32 = (min(var_32, 17));
                        arr_43 [i_0] [i_0] [2] [i_10 - 3] [i_12] = (arr_21 [i_0 - 1] [i_0 - 1]);
                        var_33 = 21149;
                        var_34 = -21;
                    }
                    for (int i_13 = 3; i_13 < 9;i_13 += 1) /* same iter space */
                    {
                        arr_47 [i_0] = ((1023 ? ((var_5 ? 65535 : -66)) : 0));
                        var_35 = (min(var_35, (arr_40 [i_10 - 2] [i_6] [i_7] [i_13 - 3] [0])));
                        var_36 = (max(var_36, ((((arr_1 [i_0 - 1]) + ((65524 ? 65535 : 35405)))))));
                        var_37 = ((((((arr_41 [6]) ? (arr_44 [8] [8] [4]) : (arr_21 [i_0 - 1] [i_0 - 1])))) ? var_6 : var_2));
                    }
                }
                for (int i_14 = 3; i_14 < 7;i_14 += 1) /* same iter space */
                {
                    arr_50 [i_6] [i_0] [i_6] = (((arr_17 [i_0] [i_0 - 1]) ? (arr_17 [i_0] [i_0 - 1]) : (arr_17 [i_0] [i_0 + 1])));
                    var_38 = ((21 ? 1 : -64));
                    arr_51 [i_0 + 1] [i_0] [i_0] [i_0] [3] [3] = (arr_16 [i_0 + 1] [i_0] [i_0 - 1] [i_6]);
                }
                arr_52 [8] [8] |= (arr_22 [i_0 - 1] [i_6] [2] [i_6] [6] [i_7 + 1]);
                var_39 -= (-39334199 ? (var_8 % var_10) : (arr_7 [6]));
            }
            for (int i_15 = 2; i_15 < 8;i_15 += 1)
            {
                var_40 = 329967840;
                var_41 = (((arr_30 [i_0] [i_0] [i_15] [i_6]) ? ((9223372036854775807 ? 0 : (arr_7 [i_0]))) : -13488));
            }
            for (int i_16 = 0; i_16 < 10;i_16 += 1)
            {
                var_42 = (((((arr_39 [i_16] [i_6] [9] [i_0 + 1] [i_0 + 1] [9]) ? 32896 : (arr_17 [i_0] [i_0]))) < (arr_0 [i_0 - 1])));
                var_43 = ((((((arr_27 [3] [i_6] [6]) - (arr_22 [i_0] [i_0] [7] [7] [i_0] [i_0 + 1])))) ? (arr_27 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (arr_16 [i_0] [i_0] [i_16] [i_0 - 1])));
            }
        }
    }
    var_44 = 32618;
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 12;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 12;i_18 += 1)
        {
            {
                arr_65 [10] [i_17] [i_18] = (1936915828 ? (max((((var_13 ? (arr_63 [i_17]) : (arr_64 [i_18] [i_17] [i_17])))), (max(var_13, (arr_59 [i_17]))))) : (min((max((arr_59 [i_17]), (arr_62 [i_17] [i_17] [8]))), -60)));
                var_45 *= ((63 ? 48869 : (max((arr_64 [i_17] [i_18] [i_18]), 65535))));
                var_46 = (arr_58 [5]);
            }
        }
    }
    #pragma endscop
}
