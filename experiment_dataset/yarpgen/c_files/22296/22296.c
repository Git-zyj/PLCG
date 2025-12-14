/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((47736 ? 17799 : 17783));
    var_16 = var_4;

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        var_17 *= ((!(((var_4 ? (arr_1 [i_0 + 3]) : (arr_1 [5]))))));
        var_18 = ((((((arr_0 [i_0 + 1]) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 + 2])))) ? (arr_0 [i_0]) : (((arr_1 [i_0]) ? 47775 : (((!(arr_0 [i_0]))))))));
        var_19 *= (max((((var_11 / (arr_0 [i_0 + 2])))), var_4));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_4 [i_1] = ((-(arr_2 [i_1])));
        arr_5 [i_1] [i_1] = (arr_3 [i_1]);
        var_20 += ((var_1 > (arr_2 [i_1])));
        arr_6 [i_1] = ((-(arr_3 [i_1])));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_9 [i_2] = (max(((~(arr_8 [i_2]))), var_2));
        var_21 = arr_7 [i_2];

        for (int i_3 = 2; i_3 < 16;i_3 += 1) /* same iter space */
        {
            arr_14 [i_2] = (((((17799 == (arr_11 [i_2] [i_3])))) == (((~(17804 && 17794))))));
            arr_15 [i_2] [i_3] [i_3] = ((((max(47731, 17799)))) ? 47775 : (((~(arr_7 [i_3])))));
            var_22 ^= (arr_8 [i_3 + 2]);
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 16;i_4 += 1) /* same iter space */
        {
            var_23 = var_1;
            arr_19 [i_2] = (((arr_18 [i_2] [i_2] [i_4 + 1]) ? var_11 : (arr_12 [4] [i_4 - 1] [i_4 - 2])));
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            arr_23 [i_2] [i_2] [i_2] |= (arr_18 [i_5 - 1] [i_5 + 1] [i_5 - 1]);
            arr_24 [i_2] [i_2] [i_2] = ((-((var_4 ? var_0 : var_4))));
        }
        for (int i_6 = 4; i_6 < 17;i_6 += 1)
        {
            arr_27 [i_2] = ((((((var_11 | var_1) ? ((var_8 ? var_0 : (arr_18 [i_6] [i_2] [i_2]))) : ((((arr_16 [i_6 - 2]) && var_6)))))) ? ((var_1 ? (arr_16 [i_6 + 1]) : ((17810 ? (arr_25 [11] [i_2]) : var_4)))) : (((17777 ? 17777 : 47775)))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 17;i_8 += 1)
                {
                    {
                        arr_34 [i_2] [i_7] [i_7] [i_8 - 1] = (max((var_9 - 47732), (arr_29 [i_6 - 2] [i_7] [i_6 + 1])));
                        var_24 = ((arr_32 [i_2] [i_2] [i_2] [i_2] [i_2] [0]) * (!-var_14));
                    }
                }
            }
            arr_35 [i_6] [i_2] [i_2] = (min(47758, 47749));
        }
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            var_25 &= (((max((((arr_39 [5]) ? var_0 : (arr_38 [i_9]))), (((arr_36 [i_9]) * var_3))))) ? ((var_8 ? (((arr_36 [i_9]) ? (arr_40 [i_9]) : (arr_39 [i_9]))) : (max(var_1, var_12)))) : var_2);
            var_26 = (max(var_26, (((((max(((var_4 ? (arr_39 [i_10]) : var_14)), -var_0))) ? (((max((arr_37 [i_9]), var_0)))) : (arr_40 [i_9]))))));
            arr_41 [i_9] [i_9] [i_10] = (arr_40 [i_9]);
        }
        /* LoopNest 3 */
        for (int i_11 = 2; i_11 < 21;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    {

                        for (int i_14 = 0; i_14 < 25;i_14 += 1)
                        {
                            arr_52 [i_9] [i_11 + 1] = (((((17805 ? 47731 : 17793))) ? ((((((var_0 ? var_11 : var_11))) ? var_11 : var_3))) : ((((max((arr_45 [1] [1] [i_13] [i_14]), var_1))) ? (arr_42 [i_13] [i_11 + 1] [13]) : var_12))));
                            var_27 = (~17793);
                        }

                        for (int i_15 = 0; i_15 < 25;i_15 += 1)
                        {
                            arr_55 [i_9] [i_11] [i_11] [7] [i_15] = 17793;
                            arr_56 [i_9] [i_9] [i_9] [i_9] [i_9] = (arr_46 [i_12] [i_13] [i_11 + 3]);
                            arr_57 [i_9] = (((((var_1 * (arr_47 [i_11 + 4] [i_11 + 4])))) | (min(-17811, (arr_53 [i_11 + 4] [i_11] [i_11] [i_11 + 1] [i_11 + 3])))));
                        }
                        arr_58 [0] [i_11 + 2] [i_12] [i_13] [i_13] = ((-((-47742 ? ((((!(arr_46 [i_12] [i_11] [i_11]))))) : var_4))));

                        for (int i_16 = 0; i_16 < 25;i_16 += 1)
                        {
                            var_28 = ((((max(var_0, (((var_2 > (arr_53 [i_11] [i_13] [17] [i_11] [i_9]))))))) || var_1));
                            var_29 = ((-(arr_37 [i_11 + 3])));
                            arr_61 [i_9] [i_11] [i_12] [i_9] [i_16] [i_9] = var_2;
                        }
                    }
                }
            }
        }
        var_30 = (min(var_30, (47731 || 17763)));
    }
    var_31 = var_13;
    #pragma endscop
}
