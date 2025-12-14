/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 += 24;
                    var_20 = ((((15 ? 98 : var_18)) > ((-(arr_5 [i_0])))));
                }
            }
        }
        var_21 = (arr_6 [i_0 + 1] [20]);
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        arr_13 [i_3] [10] = (17592186044416 || -100);

        for (int i_4 = 4; i_4 < 10;i_4 += 1)
        {
            var_22 = (~24);
            arr_16 [i_4] = var_15;
            arr_17 [i_4] [i_4] [6] = (((92 ? -96 : var_10)));
        }
        var_23 = var_10;
        var_24 *= var_17;

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                var_25 ^= var_10;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        {
                            var_26 = (arr_9 [i_7] [i_7] [i_7]);
                            var_27 = (var_8 ? var_8 : (arr_20 [11] [i_3 + 2]));
                            var_28 = (arr_15 [i_5] [i_5]);
                            arr_28 [i_5] = var_10;
                            var_29 = (min(var_29, ((((arr_6 [i_3] [i_3 + 2]) / (arr_6 [i_3] [i_3 + 2]))))));
                        }
                    }
                }
            }
            arr_29 [i_5] [i_3] = (((114 & -5850434707352032200) ? 107 : 1717414478));
            var_30 = (((arr_20 [i_3] [i_3 + 2]) > (arr_20 [i_3] [i_3 + 1])));
        }
        for (int i_9 = 1; i_9 < 8;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                var_31 = (((arr_27 [10] [6] [i_9 + 3] [i_10] [i_10] [i_10] [i_10]) ? (((arr_10 [i_3 + 2]) ? (arr_24 [10] [i_9 - 1]) : var_12)) : ((((arr_8 [i_3 + 2] [i_9 + 1] [i_10] [i_9 + 1]) <= 36843)))));
                var_32 = (((((arr_31 [i_3]) ^ 37565))) * var_3);
            }
            var_33 = var_18;

            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                arr_38 [2] [i_9 + 1] [4] = (arr_26 [i_9] [i_9] [i_9] [i_9 + 4] [i_9]);
                var_34 = (arr_9 [i_9 + 3] [i_3 + 2] [i_3 + 2]);
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        {
                            arr_45 [i_11] [i_13] [i_3 + 2] = 28704;
                            var_35 = (((arr_0 [i_9 - 1] [i_3 - 1]) == (arr_0 [i_9 - 1] [i_3 + 1])));
                        }
                    }
                }
                var_36 = 27988;
                arr_46 [i_3] [i_9 + 4] [i_11] [i_11] = (((~28692) ? var_0 : var_3));
            }

            for (int i_14 = 1; i_14 < 11;i_14 += 1)
            {
                arr_51 [9] [6] = (arr_44 [i_3 + 1] [i_9 - 1] [2]);
                arr_52 [i_3] [i_3] [i_9] [i_14] = var_8;
                arr_53 [i_14] = (((!0) * (((arr_14 [i_9]) ? -103 : 13747))));
                arr_54 [5] [5] = ((var_5 >> ((((var_8 ? (arr_30 [i_3 + 2] [i_3]) : var_12)) - 2842023357))));
                arr_55 [i_3] = (arr_44 [i_9 - 1] [i_3 - 1] [1]);
            }
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 12;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 11;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 8;i_17 += 1)
                    {
                        {
                            arr_64 [1] [i_16 - 2] [i_15] [i_3] [i_3] = (arr_25 [i_17] [i_16 + 1] [i_16] [i_9] [i_3]);
                            var_37 = ((arr_3 [i_9 + 4] [i_16 - 2] [i_17]) ? (arr_50 [i_3 + 2] [i_3 + 2] [i_15]) : 7528399411120516222);
                            arr_65 [4] [i_9] [i_9] [i_15] [11] [i_17 + 1] [i_17 + 4] &= (!253);
                            arr_66 [5] [1] [i_15] [5] [i_3 - 1] = 73;
                        }
                    }
                }
            }
        }
        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            var_38 = (arr_9 [i_3 - 1] [i_3 + 2] [i_3 - 1]);
            arr_69 [i_3] [i_3] = ((~(arr_11 [4])));
            /* LoopNest 2 */
            for (int i_19 = 3; i_19 < 11;i_19 += 1)
            {
                for (int i_20 = 1; i_20 < 10;i_20 += 1)
                {
                    {
                        var_39 = var_3;
                        arr_75 [i_19] [i_18] = 13;
                        var_40 = ((!(arr_60 [i_20] [i_3] [i_3] [i_18] [i_3])));
                        var_41 = ((37544 | (arr_23 [i_3 + 2] [i_3 + 2] [i_19] [i_20])));
                    }
                }
            }
        }
    }
    var_42 = ((var_16 ? var_16 : ((max(var_17, var_0)))));
    #pragma endscop
}
