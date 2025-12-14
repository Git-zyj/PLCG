/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    var_20 -= (((var_14 ? (!var_18) : var_3)));

    for (int i_0 = 3; i_0 < 14;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] [i_2] [i_2] [i_4 + 2] = ((min(var_14, ((-7299176245252963127 ? 24041 : 33554431)))));
                                var_21 = (min((~64), (max((arr_9 [i_0] [i_0] [i_2] [i_3]), ((33554424 ? 109 : 2732910168))))));
                            }
                        }
                    }
                    arr_14 [i_2] = (min(1336126018, ((-(arr_12 [i_0 - 3] [i_0 - 3] [i_1] [i_2] [i_2])))));
                    arr_15 [i_2] [i_1] = (min(-var_11, (((var_1 ? (arr_0 [i_2]) : var_10)))));
                }
            }
        }
        arr_16 [12] [i_0] &= ((var_18 ? (((arr_3 [i_0 - 2] [i_0] [i_0]) ? var_12 : (arr_3 [i_0 + 2] [i_0 - 2] [i_0 - 2]))) : (((arr_9 [i_0] [i_0] [i_0 - 1] [i_0]) ? (arr_3 [i_0 + 2] [i_0] [i_0]) : (arr_0 [i_0])))));
    }
    for (int i_5 = 3; i_5 < 14;i_5 += 1) /* same iter space */
    {
        var_22 = (((min(var_2, 246))) != ((((~var_16) != ((((arr_19 [i_5]) ? var_10 : 17499)))))));
        arr_21 [i_5] = (max((-32767 - 1), 8522825728));
        var_23 = (max(var_23, (~2066224245)));
        arr_22 [i_5] = (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]);

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            arr_26 [i_5] [i_6] [i_5] = (arr_11 [1] [1] [i_5] [i_5 - 3] [11] [i_6] [i_6]);
            arr_27 [i_5 - 2] [i_5 - 2] [i_5 - 2] = (max((!25521), (131 != 32753)));
            var_24 = var_13;

            /* vectorizable */
            for (int i_7 = 1; i_7 < 15;i_7 += 1)
            {
                arr_31 [i_5] [i_6] [5] [i_5] = 4652704895334985663;
                arr_32 [i_5] [i_5] [i_6] [i_7] = ((!(arr_2 [i_6] [i_5 + 3])));
                arr_33 [i_5] [i_6] [i_7] = 0;
            }
            /* vectorizable */
            for (int i_8 = 2; i_8 < 13;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        arr_43 [i_10] [i_9] [7] [7] &= ((4294967295 ? 24 : 0));
                        var_25 = (-1 ? ((var_9 ? (arr_5 [i_8] [i_8] [i_10]) : -1)) : 124);
                        arr_44 [i_8] = (arr_39 [i_5] [i_6] [i_8] [i_5]);
                        var_26 = (((arr_18 [i_8 + 4]) ? var_15 : (arr_18 [i_8 + 1])));
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_27 = (min(var_27, (arr_18 [i_8])));
                        arr_49 [i_11] [i_11] [i_11] [i_5] = (arr_18 [i_8 + 4]);
                    }
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        arr_52 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 - 3] [i_5 + 3] [i_5] = var_7;
                        var_28 ^= (arr_8 [i_8 + 3] [i_5 - 2] [1] [i_5 + 3]);
                    }

                    for (int i_13 = 3; i_13 < 14;i_13 += 1)
                    {
                        var_29 = arr_36 [i_5] [i_5] [i_5 - 2] [i_13 + 2];
                        arr_55 [i_9] [i_6] [i_9] |= 31;
                        var_30 = (((arr_4 [i_5] [i_6] [i_8]) - 113));
                    }
                    arr_56 [i_9] [i_6] &= ((18014398509481952 ? (((arr_34 [i_5] [i_5] [9] [i_5]) ? (arr_36 [i_5] [1] [1] [8]) : -37225307)) : (arr_25 [i_5 + 1] [i_5 - 1] [i_5])));
                }
                for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                {

                    for (int i_15 = 2; i_15 < 14;i_15 += 1)
                    {
                        arr_63 [i_5 + 3] [i_6] [i_8] [i_5 + 3] [i_8] = (((arr_7 [i_8 + 2] [i_5 - 1] [i_8 - 1] [i_15 + 1]) & (arr_7 [i_8 - 2] [i_5 - 2] [1] [i_15 + 3])));
                        arr_64 [i_5] = (arr_51 [i_5 + 3] [i_8 - 2] [i_15 - 2]);
                        arr_65 [i_5] [i_6] [i_5] = (!var_18);
                        var_31 *= (arr_36 [i_6] [i_8] [i_14] [i_15 - 2]);
                    }
                    arr_66 [2] [i_6] [i_6] [i_14] [i_14] [i_8] = (32746 < -25543);
                }
                for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                {
                    var_32 -= (((arr_19 [i_5 + 2]) * var_18));
                    arr_69 [i_16] [i_6] [i_6] [i_5] = ((((((arr_38 [i_5 - 1] [i_6] [i_6] [12] [i_16] [i_16]) ? var_8 : var_11))) || 33067));
                    arr_70 [i_5] = 32766;

                    for (int i_17 = 0; i_17 < 17;i_17 += 1)
                    {
                        arr_75 [i_5] [i_6] [i_5] [3] [i_5] [7] = (((arr_4 [i_6] [i_17] [i_8 + 4]) & (arr_59 [8] [i_5 - 3] [i_8 + 2] [i_8])));
                        arr_76 [i_5] [i_17] = (((arr_46 [i_5] [i_5 - 1] [i_6] [i_6] [i_17] [i_17]) ? var_6 : (arr_46 [i_5] [i_5 - 2] [i_8] [1] [i_17] [i_17])));
                        arr_77 [i_5] [i_5] [i_5 - 3] [13] [i_5] &= (((131071 | (arr_29 [i_17]))));
                    }
                    arr_78 [i_16] [i_16] [i_16] [i_16] = (!-1368566579);
                }
                var_33 = ((-(arr_17 [i_5 - 3])));
            }
        }
    }
    for (int i_18 = 3; i_18 < 14;i_18 += 1) /* same iter space */
    {
        var_34 += (max((!113), (45619 == 25535)));
        var_35 = (!-var_13);
    }
    #pragma endscop
}
