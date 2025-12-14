/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= ((var_8 ? ((((!(-127 - 1))))) : var_12));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [3] = ((159546953 ? 89 : 511));
                    arr_11 [i_2] [i_1] [i_0] [i_0] = 247;
                    arr_12 [i_0] [i_1] [i_2] [1] = ((var_13 ? (!1) : (max((arr_2 [i_1]), (arr_2 [i_1])))));
                    arr_13 [0] [0] [0] [i_0] = ((min((arr_8 [i_0] [i_1] [i_2]), (arr_1 [i_1] [i_2]))));
                }
            }
        }
    }
    var_15 = (~var_8);

    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_16 [i_3] [i_3] = (min(((((min((arr_7 [i_3] [i_3] [1]), -17756))) ? (1 > var_2) : ((~(arr_7 [i_3] [i_3] [i_3]))))), (((max(162, (arr_14 [i_3] [i_3])))))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            arr_28 [i_3] = 101;
                            arr_29 [i_3] [i_4] [i_5] [i_6] [i_5] = ((56 ? (6627 * -105) : ((25421 ? 1 : 15865))));
                            arr_30 [i_5] [i_5] [9] [i_3] = var_1;
                            arr_31 [i_3] [i_3] [i_7] = ((-166 ? ((-(arr_21 [7] [i_6] [2]))) : ((((((var_8 + (arr_26 [5] [7] [i_5] [i_6] [i_7])))) - (min((arr_15 [i_4]), (arr_18 [i_4]))))))));
                            arr_32 [i_3] [i_3] = -14740;
                        }
                        for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                        {
                            arr_35 [i_5] [i_6] [i_5] [i_4] [i_5] &= ((-(arr_26 [i_3] [i_4] [i_5] [i_6] [i_8])));
                            arr_36 [i_5] [i_4] &= ((!((!(arr_15 [i_8])))));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_39 [i_3] [i_4] [i_5] [i_5] [i_5] = (((var_3 - (arr_18 [i_5]))));
                            arr_40 [i_5] = 7;
                            arr_41 [i_9] [i_6] [i_3] [7] [i_3] = (97 % 4294967295);
                            arr_42 [i_6] [i_4] [i_3] = (((arr_19 [i_5] [i_3]) < (25421 - -24)));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            arr_47 [i_3] [i_10] [i_10] [i_3] [i_10] = ((((arr_27 [i_4] [i_4] [i_4] [i_10]) ? -74 : var_7)));
                            arr_48 [5] [i_3] [i_5] [i_3] [i_3] = (arr_25 [i_10] [1] [i_5] [i_5] [1] [i_4] [i_3]);
                        }
                        arr_49 [i_3] [i_3] [i_3] [i_5] = ((((((var_4 < (arr_26 [1] [1] [1] [i_6] [5]))))) ? (((!(arr_37 [i_3] [7] [i_5] [7] [i_5] [i_5] [i_6])))) : ((max((min(113, (arr_5 [i_3] [i_6]))), (min(-24416, (arr_19 [i_3] [i_3]))))))));

                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            arr_52 [i_3] [i_11] = ((!(arr_9 [i_4] [i_5] [i_6] [i_11])));
                            arr_53 [i_5] [i_5] [i_5] = (min((!var_10), -4));
                            arr_54 [i_3] [i_4] [i_4] [i_5] [i_4] [i_11] [5] = (min(var_5, (arr_7 [i_5] [i_5] [i_4])));
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 0;i_12 += 1)
                        {
                            arr_58 [i_3] [i_6] [i_3] [3] [i_3] = 1;
                            arr_59 [i_3] [i_3] [i_5] [i_5] [i_6] [6] = var_8;
                            arr_60 [i_3] [i_4] [i_3] [9] [i_12] [i_3] = (((1 ? -8263 : (-9223372036854775807 - 1))));
                            arr_61 [i_6] [i_4] [i_6] [i_3] [i_5] [i_4] [i_3] = (((arr_46 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) ? (arr_46 [i_3] [i_3] [i_5] [i_12 + 1] [i_12 + 1] [i_3]) : (arr_46 [0] [i_4] [i_5] [i_5] [i_6] [i_12 + 1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
