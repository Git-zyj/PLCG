/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [i_1] [10] [15] [i_1] = (((((112 || 1) << (-29730 + 29743))) >> (((1 > (arr_9 [i_1] [i_2 - 2] [i_1]))))));
                        var_10 = ((arr_6 [i_0] [i_0] [21]) | -313878786128738609);
                        var_11 = (!var_2);
                    }
                }
            }
        }
        var_12 = (arr_7 [1] [i_0] [i_0]);
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
    {
        var_13 ^= ((!((!(arr_8 [i_4] [i_4] [i_4])))));
        var_14 = (1 >= -13924);

        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            arr_18 [i_4] [i_4] [i_5] = (~46749);
            arr_19 [i_5] = (!27);
            arr_20 [i_5] = ((42 ? -2110751583 : ((-(arr_8 [i_4] [i_4] [i_5])))));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            var_15 = var_4;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        arr_30 [5] [19] [i_8] = ((!(5938074464743297964 || -2110751563)));
                        var_16 = var_3;
                        arr_31 [i_4] [i_6] [i_8] [i_7] [i_8] = ((((min(32550, 0))) ? (((arr_28 [i_4] [i_6] [i_8]) / (arr_28 [i_4] [i_6] [i_7]))) : (arr_5 [i_6] [i_7])));
                    }
                }
            }
            var_17 = (((((~(var_9 | 61999)))) ? (max((~var_4), 0)) : 15));
        }

        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {

            for (int i_10 = 1; i_10 < 19;i_10 += 1) /* same iter space */
            {
                var_18 = var_9;

                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    var_19 = (((((65508 ? 18446744073709551615 : -7582))) ? 313878786128738613 : 313878786128738609));
                    var_20 = (min(var_20, (~var_0)));
                    arr_40 [i_4] [1] [i_4] [i_9] = (max((((8191 != (~var_9)))), var_3));
                }
                /* vectorizable */
                for (int i_12 = 1; i_12 < 19;i_12 += 1) /* same iter space */
                {

                    for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                    {
                        var_21 = (+-2211226153883457829);
                        var_22 = var_5;
                        var_23 = ((var_7 ? (arr_1 [i_12 - 1] [i_9]) : 1));
                    }
                    for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                    {
                        var_24 = var_1;
                        arr_49 [i_12] [i_9] [i_9] [i_4] = (!1);
                        arr_50 [i_4] [i_4] [4] [i_9] [12] [i_12] = ((((30 ? 2051190660 : -313878786128738601))) ? ((0 ? -5081543195451291427 : 313878786128738633)) : (!var_3));
                    }
                    var_25 = (((((arr_14 [i_4]) ? 4096 : 655))) ? ((var_6 ? 251 : (arr_27 [i_4] [6] [i_4] [1] [i_4]))) : (arr_45 [i_12 + 2] [i_10 + 1] [i_10] [i_10 + 2] [i_4]));

                    for (int i_15 = 1; i_15 < 18;i_15 += 1) /* same iter space */
                    {
                        var_26 = ((-313878786128738601 ? 16576 : 55810));
                        var_27 = (arr_22 [i_12 + 2]);
                        arr_54 [i_4] [1] [i_9] [i_4] [8] = (arr_9 [22] [i_12] [i_9]);
                        var_28 = -5938074464743297965;
                    }
                    for (int i_16 = 1; i_16 < 18;i_16 += 1) /* same iter space */
                    {
                        var_29 = ((((((arr_34 [i_9] [i_9] [i_9] [i_9]) | (arr_2 [i_4] [1])))) ? (~55803) : (arr_29 [i_16] [i_16] [15] [i_9] [i_16 - 1] [i_16])));
                        var_30 = (~(15865 + 679687022));
                        arr_57 [18] [i_9] = arr_1 [i_4] [i_9];
                    }
                    arr_58 [i_9] [5] [i_10] [i_10] = (((-57 ? var_1 : var_2)));
                }
                /* vectorizable */
                for (int i_17 = 1; i_17 < 19;i_17 += 1) /* same iter space */
                {
                    var_31 = (~-1433136743);
                    var_32 = ((65530 ? 65 : 22135));
                }
            }
            for (int i_18 = 1; i_18 < 19;i_18 += 1) /* same iter space */
            {
                arr_64 [i_9] [i_18] [i_9] [i_9] = 0;
                var_33 = (max(var_33, (arr_37 [4] [i_9])));
            }
            arr_65 [i_9] [i_9] [i_9] = (2 || 1);
            var_34 = (((~(arr_51 [i_9] [i_9] [i_9] [i_9] [i_4] [i_4] [i_4]))));
            /* LoopNest 3 */
            for (int i_19 = 0; i_19 < 21;i_19 += 1)
            {
                for (int i_20 = 2; i_20 < 20;i_20 += 1)
                {
                    for (int i_21 = 1; i_21 < 1;i_21 += 1)
                    {
                        {
                            var_35 = ((~(~1)));
                            arr_73 [i_21] [i_20] [i_9] [i_9] [i_4] = ((~((8459241446645610207 ? ((((arr_42 [19] [i_20] [11] [1] [i_9] [18]) << (-18862 + 18864)))) : (arr_68 [i_21 - 1] [i_20 - 2] [13])))));
                            arr_74 [i_4] [i_4] [i_9] [0] [14] = -20273;
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_22 = 1; i_22 < 1;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 21;i_23 += 1)
                {
                    for (int i_24 = 1; i_24 < 1;i_24 += 1)
                    {
                        {
                            var_36 = ((~(((arr_17 [i_4] [3]) ? 408124878 : 41107))));
                            var_37 = (min(var_37, 3299262657));
                        }
                    }
                }
            }
        }
        var_38 = -936596832;
    }
    for (int i_25 = 0; i_25 < 21;i_25 += 1) /* same iter space */
    {
        var_39 = var_3;
        arr_85 [i_25] = ((~((~(((var_2 != (arr_45 [1] [i_25] [i_25] [i_25] [i_25]))))))));
    }
    for (int i_26 = 0; i_26 < 21;i_26 += 1) /* same iter space */
    {
        var_40 *= ((((((((arr_78 [i_26] [10] [14] [1] [0]) | var_8))))) | var_1));
        /* LoopNest 2 */
        for (int i_27 = 1; i_27 < 18;i_27 += 1)
        {
            for (int i_28 = 0; i_28 < 1;i_28 += 1)
            {
                {
                    var_41 = (~var_8);
                    var_42 = (((max(22653, -2110751573))));
                    var_43 = ((((-(min(42882, (arr_66 [i_26] [i_27] [i_27]))))) | (~1)));
                }
            }
        }

        /* vectorizable */
        for (int i_29 = 0; i_29 < 21;i_29 += 1)
        {
            var_44 = (((var_1 << (((arr_61 [i_26]) - 87)))));
            var_45 *= (!-19130);
            arr_95 [5] [18] [5] = (22653 >> 0);
            var_46 = (min(var_46, ((((((~(arr_45 [4] [i_29] [i_26] [i_26] [16])))) ? (((arr_75 [18] [i_29] [1] [18]) ? var_0 : var_9)) : (arr_47 [i_26] [19] [i_26] [i_29] [i_29]))))));
        }
    }
    var_47 = 2;
    #pragma endscop
}
