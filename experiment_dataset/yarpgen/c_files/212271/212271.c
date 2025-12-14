/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 7;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [4] = (((!var_3) ? (39 + 14686) : ((((arr_1 [i_0 + 1] [i_4 - 1]) <= (arr_1 [i_0 - 1] [i_4 + 2]))))));
                                var_18 = (((arr_11 [2] [i_1] [2] [i_1]) * (arr_5 [i_1] [i_2] [i_4])));
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_0] = (arr_13 [2] [i_1] [i_1] [4] [i_1] [i_1] [i_1]);
            }
        }
    }

    for (int i_5 = 2; i_5 < 18;i_5 += 1)
    {
        var_19 = ((((((arr_18 [i_5 + 1]) ? (arr_18 [i_5 - 2]) : var_8))) ? ((((arr_18 [i_5 + 1]) / (arr_18 [i_5 + 1])))) : ((var_11 + (arr_18 [i_5 + 1])))));
        var_20 = ((+(((arr_16 [i_5 + 1]) ? (arr_16 [i_5 - 2]) : var_8))));
        var_21 = (min(((((var_17 ? (arr_16 [i_5]) : (arr_16 [i_5]))) * (((var_15 ? -29767 : (arr_18 [i_5])))))), (arr_17 [i_5] [i_5])));
        var_22 = (min(((min(((max(var_13, 500703631))), (var_15 / var_3)))), ((-1876 ? (((94 << (((arr_16 [i_5]) - 7805550579492874411))))) : var_9))));
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 21;i_8 += 1)
            {
                {
                    arr_25 [6] [i_7] [i_8] [i_7] = (min(((var_13 / (arr_23 [i_7] [14] [i_8 + 1]))), ((((var_0 <= var_2) != ((((arr_23 [i_8] [6] [i_6]) && (arr_24 [10] [19] [i_6] [i_6])))))))));
                    arr_26 [i_8] [i_8 - 3] [i_7] [0] = (((max((var_2 >= var_14), (min(var_3, var_5)))) == ((((arr_22 [i_7 - 2] [i_8 - 1] [i_8]) & 19787)))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    {
                        var_23 = (((((arr_24 [i_10 - 3] [i_10 + 1] [i_10 + 1] [i_10 - 1]) != (arr_24 [i_10 - 3] [i_10 + 1] [i_10 + 1] [i_10 - 1]))) ? (max((arr_24 [i_10 - 3] [i_10 + 1] [i_10 + 1] [i_10 - 1]), (arr_23 [i_10 - 3] [i_10 + 1] [i_10 + 1]))) : (((arr_24 [i_10 - 3] [i_10 + 1] [i_10 + 1] [i_10 - 1]) ? (arr_23 [i_10 - 3] [i_10 + 1] [i_10 + 1]) : (arr_24 [i_10 - 3] [i_10 + 1] [i_10 + 1] [i_10 - 1])))));
                        var_24 = ((-(((((arr_20 [i_6]) || var_13)) ? (min(var_12, var_8)) : (var_5 * var_9)))));
                        var_25 = (((arr_31 [i_6] [i_9] [i_9] [i_10 - 1] [i_6]) ? (((arr_23 [i_11] [i_6] [i_6]) - ((14386059633547518494 + (arr_23 [11] [i_9] [13]))))) : ((-((-1152377188 ? (arr_29 [7]) : var_4))))));
                        arr_33 [i_6] [i_9] [i_9] [15] [20] [i_6] = ((((((((arr_24 [i_6] [10] [i_10] [i_10]) ? (arr_32 [i_6]) : var_8)) << (var_8 + 117)))) ? ((((var_14 == (arr_29 [i_6]))) ? (((arr_29 [i_6]) ? (arr_29 [i_10]) : (arr_20 [i_9]))) : ((-(arr_24 [i_6] [i_9] [i_10] [i_11]))))) : (arr_29 [i_6])));
                        var_26 = ((((arr_31 [i_10 + 2] [i_10 + 1] [i_10 - 2] [i_10 - 3] [i_10 + 1]) ? var_2 : (arr_31 [i_10 - 2] [i_10 - 3] [i_10 - 3] [i_10 + 1] [i_10 - 2]))) / var_4);
                    }
                }
            }
        }
    }
    for (int i_12 = 2; i_12 < 22;i_12 += 1)
    {
        var_27 = (((((arr_35 [i_12 - 1] [i_12 + 1]) ? (arr_36 [i_12]) : (min(var_15, -1152377188)))) < (21705 == var_3)));
        arr_37 [i_12] = ((~(((((((arr_35 [8] [i_12]) ? var_2 : var_13))) && (arr_36 [i_12 - 1]))))));

        for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
        {
            arr_40 [i_12] [i_12] [i_13] = arr_35 [i_12] [i_13];
            var_28 = var_2;
            arr_41 [i_12] [i_13] = (((var_17 ? (((-(arr_36 [i_12]))) : (((arr_38 [i_12] [i_13]) + var_6))))));
        }
        for (int i_14 = 0; i_14 < 24;i_14 += 1) /* same iter space */
        {
            arr_44 [i_12] = (((arr_36 [i_12 - 1]) - (max(var_16, (min(var_6, (arr_36 [0])))))));
            var_29 = (--6691869950875339830);
            var_30 = (max(((((arr_36 [i_12]) * var_6))), var_2));
            var_31 = var_7;
            var_32 = (arr_38 [i_12 + 2] [i_12 + 1]);
        }
        var_33 = (((~1576) / 3794263664));
        var_34 = var_17;
    }
    var_35 = var_11;
    var_36 = ((~((var_0 ? (29840 == var_9) : var_9))));
    #pragma endscop
}
