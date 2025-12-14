/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 = (max(((-var_9 ? 1 : ((var_3 ? (arr_0 [i_0]) : (arr_1 [i_0]))))), ((-(arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_17 += (((arr_4 [i_0] [i_0]) ? (min((1 % 63), (((arr_5 [i_0]) ? (arr_6 [i_0] [i_0]) : (arr_4 [i_0] [i_2]))))) : (((var_9 >> (((max(var_11, 32741)) - 2716013880)))))));
                    var_18 = (max(var_18, (((((min(var_9, var_13)))) >> (((arr_2 [i_1] [i_1]) - 92))))));
                    arr_7 [i_0] [i_1] [i_2 - 2] [i_0] = ((((((((var_4 >> (1432087970339616868 - 1432087970339616855)))) ? ((min(var_10, (arr_2 [12] [i_0])))) : -1))) ? 1 : var_13));
                    arr_8 [i_1] = (~1023);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = ((((~(arr_10 [14]))) % (arr_12 [i_3] [i_3])));
        arr_14 [i_3] = ((var_12 >> (((arr_9 [i_3]) + 40))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 19;i_6 += 1)
                {
                    {
                        arr_22 [i_3] [i_4] [i_5] [i_6] = (((arr_20 [i_5]) ? (((arr_21 [i_3] [i_4] [i_5] [i_3]) >> (((arr_12 [i_4] [i_4]) - 44462)))) : ((-(arr_21 [11] [i_5] [i_4] [1])))));
                        var_19 = var_15;
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        var_20 = ((!((min((((arr_17 [i_7] [i_7] [i_7] [i_7]) ? var_13 : var_1)), ((var_5 ? 1 : (arr_11 [i_7]))))))));
        arr_25 [i_7] [i_7] = (~1);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                {
                    arr_34 [i_7] [i_8] [i_9] = (((((arr_17 [i_7] [i_8] [i_9] [i_9]) ? ((max(var_9, (arr_23 [i_7])))) : ((var_5 >> (((arr_30 [i_7] [i_8] [i_9] [i_7]) + 1705324186)))))) * (~36)));
                    arr_35 [i_8] [i_8] [i_9] = (max((min(1468280708, 12)), var_13));
                    arr_36 [i_8] = (-5 * 1);
                    arr_37 [i_7] [i_8] = (min((((!var_7) ? ((var_9 ? (arr_30 [i_7] [i_7] [i_8] [2]) : 14039773230610592468)) : (min((arr_17 [i_7] [i_7] [i_8] [i_7]), var_2)))), ((((((-14 * 4032) + 2147483647)) >> ((((~(arr_16 [i_8]))) - 1431470295)))))));
                }
            }
        }
    }
    var_21 = (-(((!var_4) ? 1 : ((var_6 ? var_9 : 9942)))));
    /* LoopNest 2 */
    for (int i_10 = 4; i_10 < 9;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 10;i_11 += 1)
        {
            {
                arr_42 [i_10] = (arr_6 [i_10] [i_11]);
                arr_43 [i_10] [i_10] = (((((-((1 >> (-121 + 138)))))) * (((var_6 % 32742) ? (min(var_12, (arr_28 [i_10] [i_10] [i_10]))) : (arr_26 [i_10] [i_11])))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        {
                            arr_51 [i_10] [i_11 - 1] [i_10] [1] = (max((((arr_39 [i_10]) ? -28810 : (arr_39 [i_10]))), (((((max((arr_19 [i_13] [i_12] [i_11] [i_11] [13]), -4036))) ? ((-(arr_29 [i_10] [6]))) : var_3)))));
                            arr_52 [i_10] [i_10] [i_11] [i_11] [i_13] = (((var_10 ? 2 : (arr_5 [i_10]))));
                        }
                    }
                }
                arr_53 [4] [i_10] [4] = (((((~((var_9 ? (arr_9 [i_10]) : (arr_31 [i_10])))))) ? ((max((arr_23 [i_11 - 1]), var_1))) : (arr_50 [i_10] [i_10] [i_10 - 2] [i_10])));
                var_22 *= arr_10 [i_10 + 1];
            }
        }
    }
    #pragma endscop
}
