/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = (min(var_20, (min((~var_11), ((var_2 ? (min(32763, var_18)) : (var_18 >= var_19)))))));
        arr_2 [i_0] = (min(((((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : var_1))) & (max(var_7, (arr_1 [i_0] [i_0]))))), var_14));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            var_21 = ((((((arr_3 [i_1]) ? (arr_6 [12]) : var_7))) ? ((((arr_0 [i_1] [i_2]) & (arr_5 [i_1] [i_1])))) : ((var_4 ? (arr_1 [16] [i_1]) : var_1))));
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_12 [i_1] [i_1] [i_1] [i_1] [12] [i_1] = var_5;
                        arr_13 [i_1] [9] [2] [9] = ((~(!var_2)));
                        arr_14 [i_1] [i_1] [0] = ((-760059434 ? 22 : var_2));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    {
                        arr_21 [i_5] &= (arr_5 [i_1] [i_1]);
                        var_22 = (max(var_22, (arr_6 [i_1])));
                    }
                }
            }
        }
        for (int i_7 = 3; i_7 < 12;i_7 += 1)
        {
            var_23 = (((arr_9 [i_1] [i_1] [i_7]) ? (arr_10 [i_1] [i_7] [i_7] [i_7]) : ((((arr_1 [16] [16]) | (arr_9 [1] [1] [1]))))));
            arr_25 [i_1] [i_1] [i_1] = (((var_3 - (arr_23 [i_1]))));
        }
        for (int i_8 = 2; i_8 < 14;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    arr_36 [i_10] [i_9] [i_9] [i_9] [i_9] [i_1] = var_10;
                    arr_37 [i_10] [i_9] [i_9] [i_1] = ((((((!(arr_11 [i_1] [i_1] [i_1] [0]))))) < ((var_13 ? (arr_31 [4] [4] [i_1] [i_10]) : (arr_8 [i_1] [i_1] [i_1])))));
                    var_24 = (min(var_24, (arr_30 [i_10] [i_10])));
                }
                for (int i_11 = 2; i_11 < 14;i_11 += 1)
                {
                    arr_40 [i_9] [i_8] [i_9] [6] = ((-(arr_18 [i_1] [i_1] [i_11 + 1] [i_11])));
                    arr_41 [i_9] = ((((((arr_1 [i_1] [i_1]) ? var_19 : var_19))) < var_18));

                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        arr_45 [i_1] [i_1] [i_8] [i_9] [i_11 - 1] [i_1] = 28769;
                        var_25 = (--828);
                    }
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        arr_48 [i_9] = ((~(arr_42 [i_1] [i_9] [i_9] [i_11 + 1] [i_13])));
                        arr_49 [i_1] [i_8] [i_9] [i_9] = ((var_3 ? -var_2 : (var_15 && -792893489)));
                    }
                    for (int i_14 = 1; i_14 < 14;i_14 += 1)
                    {
                        arr_52 [i_1] [i_1] [i_9] [i_1] [i_1] [i_1] [i_1] = ((var_15 <= (arr_24 [i_1] [i_8 + 1] [i_1])));
                        arr_53 [i_1] [i_1] [i_1] [i_1] [i_1] [i_9] [i_1] = (arr_47 [i_1] [i_8 - 1]);
                    }
                    for (int i_15 = 1; i_15 < 14;i_15 += 1)
                    {
                        arr_58 [i_9] [i_8] [i_9] [i_8] [i_9] = ((var_0 / (arr_3 [i_9])));
                        var_26 = ((var_5 ? var_11 : (arr_8 [i_1] [i_1] [i_1])));
                        var_27 = (max(var_27, (((!(arr_23 [i_11]))))));
                    }
                    arr_59 [9] [i_9] [13] [i_9] [9] = ((((((arr_42 [i_1] [i_9] [i_9] [i_9] [i_11]) + (arr_47 [i_1] [i_11])))) ? ((((8239607935914256784 < (arr_11 [i_1] [i_8] [2] [i_11]))))) : (arr_16 [i_1] [i_9])));
                }
                arr_60 [i_9] [i_8] [i_9] [i_8] = var_17;
                arr_61 [i_1] [i_9] [i_9] [10] = (((!var_10) || (arr_20 [i_1] [i_1] [i_9] [i_9])));

                for (int i_16 = 0; i_16 < 15;i_16 += 1)
                {
                    var_28 ^= var_3;
                    var_29 = (arr_38 [i_1] [i_9]);
                }
                for (int i_17 = 2; i_17 < 14;i_17 += 1)
                {
                    arr_68 [i_1] [i_9] [i_9] [i_17] = var_14;
                    arr_69 [i_17] [i_9] [i_9] [i_1] = (arr_42 [i_8] [i_9] [i_8] [i_9] [i_1]);
                }
            }
            arr_70 [13] [13] [14] = (((arr_22 [i_8 - 2]) ? (((arr_18 [i_1] [i_1] [i_8 - 2] [i_8]) ? (arr_27 [i_1] [i_8 + 1]) : -12610)) : var_10));
        }
        /* LoopNest 2 */
        for (int i_18 = 1; i_18 < 14;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 15;i_19 += 1)
            {
                {
                    arr_77 [i_18] [i_18] [i_18] [i_18] = ((var_7 + 2147483647) >> (((arr_46 [i_18 + 1] [i_18 + 1]) - 17182360730858253434)));
                    var_30 |= arr_62 [i_1] [14] [i_19] [14];
                    arr_78 [i_18] [i_18] [6] [6] = (((arr_67 [13] [14] [i_18 - 1] [i_19] [i_18]) ? (arr_19 [i_1] [i_18 - 1] [i_18 + 1]) : (arr_26 [9] [i_18] [i_18 + 1])));
                    arr_79 [i_18] [i_18] [i_18] = ((var_16 + (arr_26 [i_18 + 1] [i_18 + 1] [3])));
                }
            }
        }
    }
    var_31 |= var_8;

    for (int i_20 = 2; i_20 < 9;i_20 += 1)
    {
        arr_82 [i_20] [i_20] = (((((!(((-31778 ? (arr_8 [i_20] [5] [i_20]) : var_17)))))) < ((((arr_56 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20]) || 4317929809259467800)))));
        /* LoopNest 3 */
        for (int i_21 = 1; i_21 < 9;i_21 += 1)
        {
            for (int i_22 = 4; i_22 < 9;i_22 += 1)
            {
                for (int i_23 = 2; i_23 < 9;i_23 += 1)
                {
                    {
                        arr_89 [i_20] [i_22] [i_22] [i_21] [i_21] = (var_19 || 28769);

                        /* vectorizable */
                        for (int i_24 = 0; i_24 < 10;i_24 += 1)
                        {
                            arr_93 [i_21 + 1] [i_21 + 1] = (((arr_24 [i_20 - 1] [i_23 - 2] [i_20 - 1]) || 1));
                            var_32 = (+(((arr_76 [i_24] [i_20]) ? var_15 : var_17)));
                        }
                        arr_94 [i_20] = (~((-((63 ? (arr_84 [i_22 - 4]) : var_14)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
