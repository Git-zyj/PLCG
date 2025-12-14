/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 = var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 *= ((39626 / (((-(arr_0 [i_0]))))));
        var_16 ^= (~25893);
        arr_2 [i_0] = (((((((arr_0 [i_0]) >= var_6)) ? (((arr_0 [i_0]) ^ 18446744073709551615)) : 25893)) < ((max(-var_9, (((arr_0 [i_0]) * 16286)))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = arr_4 [i_0] [i_1] [i_1];
            arr_6 [i_0] [i_1] [i_0] = (~((-(arr_1 [1] [6]))));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_9 [i_0] [i_0] [i_2] = ((max(-var_8, (arr_4 [i_0] [4] [i_2]))));
            var_17 = (((arr_3 [i_0] [i_0]) ? ((min(var_5, (arr_3 [i_0] [i_0])))) : ((min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0]))))));
            var_18 = (max(var_18, (~0)));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            arr_13 [i_0] = -4471616835930406655;
            var_19 = (arr_0 [i_0]);
        }
    }
    for (int i_4 = 2; i_4 < 10;i_4 += 1)
    {
        var_20 = (max(var_20, (arr_14 [0])));

        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
        {
            var_21 = (((((~53887) ? ((max((arr_11 [i_4 + 2] [i_5]), 244))) : (arr_10 [i_4]))) ^ (((var_5 + 2147483647) >> ((((max((arr_8 [i_4 - 1] [i_4] [i_4 - 1]), (arr_4 [i_4] [20] [i_5])))) - 49517))))));
            arr_19 [i_4] [7] [i_5] = ((((min(var_12, (~var_3)))) ? (min(49248, (max(1, (arr_1 [i_4 + 2] [i_4 + 2]))))) : (arr_4 [i_4 - 2] [i_5] [i_4 - 2])));

            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                var_22 = ((~(((arr_20 [i_4 + 1] [i_4] [i_6 - 1]) ? ((max((arr_16 [i_4] [i_4]), (arr_20 [i_4] [i_4] [i_6 + 1])))) : (((!(arr_23 [i_4] [i_5] [i_6]))))))));
                var_23 = ((((!(arr_22 [i_4 - 2] [i_6 - 1] [i_4 - 2] [i_4]))) || (arr_22 [i_5] [i_6 + 1] [5] [i_4])));

                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    arr_27 [i_4] [i_4] [i_6 + 1] [11] = 1;
                    var_24 = (arr_24 [5]);
                    arr_28 [i_4] [i_5] [9] [9] = (min(4916180774180094099, (arr_21 [i_4 - 1] [i_4])));
                    var_25 = (min(var_25, (min((((arr_16 [i_6] [i_7]) ? var_4 : ((~(arr_24 [i_4]))))), ((-((min((arr_0 [i_4]), var_5)))))))));
                }
            }
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                var_26 = (~32588);
                arr_31 [i_4 - 1] [1] [i_4] [i_4] = (arr_23 [3] [3] [i_4 - 2]);
            }
            for (int i_9 = 3; i_9 < 11;i_9 += 1)
            {
                var_27 = ((-(1 >> 3)));
                var_28 = (~var_5);
            }
            var_29 = (min(var_29, (((~(max((((arr_32 [i_4] [i_5] [3]) ? var_3 : (arr_29 [8] [8] [i_4]))), var_4)))))));
        }
        for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
        {

            for (int i_11 = 1; i_11 < 10;i_11 += 1)
            {
                var_30 = (max(var_30, (((((~(~18446744073709551615))) & (~var_1))))));
                var_31 = (max(var_31, ((min((arr_1 [22] [i_4]), (arr_15 [i_10] [10]))))));
                arr_39 [i_4] [i_10] [i_4] = (arr_32 [i_4 + 2] [i_11 - 1] [i_11 + 1]);
                var_32 = var_2;

                /* vectorizable */
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    var_33 = (arr_23 [i_4 - 1] [i_10] [i_11 + 1]);
                    var_34 = ((~((-(arr_29 [i_10] [i_4] [i_4])))));

                    for (int i_13 = 3; i_13 < 8;i_13 += 1) /* same iter space */
                    {
                        var_35 = (arr_38 [i_4] [i_12] [i_13]);
                        var_36 = ((((((arr_17 [i_12] [9]) << (((var_7 + 6944773027791737839) - 12))))) ? (arr_34 [0] [i_4 - 2]) : ((~(arr_33 [1] [i_11] [i_12])))));
                        arr_45 [i_4] [i_10] [i_11 + 1] = ((~(~var_11)));
                        arr_46 [3] [1] [11] [3] [11] [i_4] = arr_29 [i_4] [i_4] [i_11];
                    }
                    for (int i_14 = 3; i_14 < 8;i_14 += 1) /* same iter space */
                    {
                        arr_49 [i_4] [i_4] = -var_4;
                        var_37 ^= (((arr_4 [i_10] [i_11 - 1] [i_14 + 2]) ? (arr_30 [i_14] [i_14 + 3]) : (arr_4 [i_11 + 2] [i_11 + 2] [i_14 - 3])));
                        arr_50 [i_4] = ((!(((var_6 ? (arr_17 [i_11] [i_11]) : (arr_23 [i_10] [i_11 + 1] [i_14]))))));
                        var_38 = (4294967281 | 65528);
                    }
                    for (int i_15 = 3; i_15 < 8;i_15 += 1) /* same iter space */
                    {
                        var_39 = (max(var_39, (!var_12)));
                        arr_54 [i_4 + 1] [i_10] [i_11 + 2] [i_12] [4] [i_4] = ((~((~(arr_53 [i_4] [i_4] [8] [6])))));
                    }
                    var_40 = (!2631);
                    arr_55 [9] [i_4] [i_12] [0] = var_5;
                }
                for (int i_16 = 1; i_16 < 11;i_16 += 1)
                {
                    var_41 = (min(var_41, (arr_34 [i_4 - 2] [i_10])));
                    var_42 *= ((-(~var_6)));
                    arr_58 [i_4] [i_10] [i_4] [i_16 + 1] [i_10] = ((arr_1 [5] [i_4 - 1]) ? (arr_1 [i_4] [i_4 + 2]) : ((~(arr_1 [i_4] [i_4 + 2]))));
                }
            }
            var_43 = ((~((min((max(46689, (arr_34 [i_10] [5]))), (!1790946916))))));
        }
    }
    for (int i_17 = 0; i_17 < 12;i_17 += 1)
    {
        var_44 = (~(max((((arr_21 [i_17] [3]) << (3059 - 3023))), (~var_4))));
        var_45 ^= arr_17 [i_17] [6];
    }
    #pragma endscop
}
