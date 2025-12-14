/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    var_15 = ((((var_10 + var_8) ? (max(var_6, (arr_1 [i_0] [i_0]))) : ((max((arr_2 [i_2 + 2]), var_6))))));
                    var_16 = ((var_1 != ((((arr_0 [i_0] [i_1]) ? var_6 : (arr_5 [i_0] [i_0]))))));
                }
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_17 = (max((arr_5 [i_0] [i_0]), (((var_13 && (arr_4 [i_0]))))));
                                var_18 = ((((-84 && 4936290907481348947) && (-13755 && 180))));
                            }
                        }
                    }
                    var_19 = (arr_7 [i_0] [i_1] [i_3 - 1]);
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_20 = (((!var_14) && (((arr_15 [9] [9] [i_7 + 2] [i_0] [i_7 + 2] [i_0 + 1] [i_3]) && var_8))));
                                var_21 &= (arr_18 [i_0] [i_0 - 1] [12] [i_0 - 1] [i_0]);
                            }
                        }
                    }
                    var_22 = ((!((!((((arr_13 [i_0 - 1] [i_1] [9] [i_3]) ? var_11 : (arr_8 [i_0] [i_1] [i_3] [i_3]))))))));
                }
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    var_23 = (((((((~(arr_6 [i_0] [i_0] [0]))) + 2147483647)) >> ((((12217 << (232 - 220))) - 50040828)))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            {
                                var_24 ^= ((var_12 ? var_0 : ((((arr_21 [0] [i_1] [i_10] [12]) >= (arr_6 [i_8] [2] [i_10]))))));
                                var_25 = (((-(arr_18 [i_0] [i_1] [i_8] [i_8] [1]))));
                                var_26 -= (min((((!(var_6 || var_13)))), -2115143826));
                            }
                        }
                    }
                    arr_25 [i_0] [i_1] [i_0] [i_0] = ((((((max(var_11, (arr_4 [i_0])))) ? (!var_2) : (arr_2 [i_0]))) | (min((arr_13 [i_1] [i_1] [i_8] [4]), (min((arr_3 [i_0] [i_1] [i_8]), var_10))))));
                    arr_26 [i_0] [i_1] [1] = (((24 ? 16777208 : 10)));
                    var_27 = ((var_8 | ((((max(var_12, var_2))) ? ((var_6 * (arr_6 [i_0 - 1] [11] [i_8]))) : (max(var_3, var_9))))));
                }

                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_28 = (max(var_28, ((((16777204 / -109) >= 7299634805166860750)))));
                    arr_29 [9] [i_1] [i_0] [9] = (((((arr_4 [i_0]) ? (arr_24 [i_0 - 1] [i_0 + 1] [i_0 - 1] [7] [i_0 + 1] [i_1]) : ((((!(arr_3 [3] [i_1] [i_11])))))))) ? (((max((arr_22 [1] [1]), var_0)))) : ((((13755 ? var_2 : 13750)) | (((arr_9 [i_11] [i_11] [i_11] [i_0] [4] [i_11]) << (var_12 - 28711))))));
                }
            }
        }
    }

    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
    {
        var_29 = -var_9;
        arr_33 [i_12] = ((((((((-(arr_30 [13])))) ? (arr_31 [i_12]) : (arr_30 [i_12])))) ? ((((var_8 ? var_7 : (arr_31 [i_12]))) | ((min(var_10, var_4))))) : (arr_31 [i_12])));
        var_30 = (arr_31 [i_12]);
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_14 = 2; i_14 < 21;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 22;i_15 += 1)
            {
                {
                    var_31 = (max((max((arr_36 [i_14] [i_14] [i_14 + 1]), (arr_36 [i_14 - 1] [i_14 - 1] [i_14 - 1]))), (arr_34 [i_15])));
                    var_32 -= ((-(((var_6 != (arr_35 [i_15]))))));
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 19;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 20;i_17 += 1)
                        {
                            {
                                var_33 = ((!(((var_11 >= (arr_44 [i_13] [i_14] [i_13] [i_13] [i_17 - 1] [1]))))));
                                arr_47 [i_13] [1] [0] [i_16] [i_13] |= ((!((((((var_10 ? var_8 : var_4))) ? ((-(arr_45 [i_13] [i_13] [9] [i_13]))) : (((arr_39 [i_16]) ? (arr_30 [4]) : var_3)))))));
                                arr_48 [i_13] [i_13] [1] [i_16 + 1] [i_17] [i_14] = (((var_4 | ((var_2 ? var_4 : (arr_41 [i_13]))))));
                            }
                        }
                    }
                }
            }
        }
        var_34 = var_9;
    }
    for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
    {
        var_35 -= (((!(((var_11 ? (arr_46 [i_18] [18] [4] [i_18] [i_18] [i_18]) : var_6))))) || var_4);
        arr_52 [i_18] = (((((arr_46 [i_18] [2] [i_18] [i_18] [i_18] [i_18]) & (arr_38 [i_18] [i_18] [i_18])))) > (max(var_9, var_2)));
        var_36 = ((((~(arr_36 [i_18] [5] [i_18]))) == (((var_0 ? var_3 : (arr_44 [i_18] [i_18] [i_18] [i_18] [i_18] [5]))))));
    }
    var_37 = (((((var_2 + var_14) & (max(var_11, var_12)))) != (((((var_2 == var_4) > var_3))))));
    #pragma endscop
}
