/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_4 [i_1] [i_1] [i_1] = (((((109 ? var_7 : (arr_3 [i_1])))) ? (max((arr_0 [i_0] [i_0]), (arr_2 [i_0] [i_1]))) : -83));
            var_17 = (((min((arr_2 [i_0] [i_1]), ((var_9 << (-1094517036636755437 + 1094517036636755495)))))) ? (~var_8) : (((((!(arr_0 [i_0] [i_0])))) >> (((arr_2 [i_0] [i_1]) - 81)))));
        }
        var_18 = ((1094517036636755427 ? (min((arr_3 [i_0]), (arr_3 [i_0]))) : (((arr_3 [i_0]) ? 43 : (arr_3 [i_0])))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    {
                        var_19 = (((((((min(33, (arr_7 [i_3])))) ? (max(var_0, 1)) : (var_14 & var_13)))) ? ((-(((arr_14 [i_0] [i_2] [i_2] [i_3] [i_4]) ? var_12 : (arr_10 [i_0] [i_0] [i_0]))))) : (((var_10 ? -var_0 : (((241 / (arr_5 [i_3] [i_3] [i_2])))))))));
                        arr_15 [i_0] |= ((-((max(((var_12 != (arr_3 [i_2]))), (arr_11 [i_0] [i_2] [i_3]))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_20 = (((((arr_3 [i_0]) ? (arr_1 [i_6] [i_5]) : var_5)) - (arr_12 [i_0] [i_5] [i_6])));
                        var_21 = (min((((arr_9 [i_5] [i_7] [i_7] [i_7]) ? (((arr_10 [i_0] [i_0] [i_6]) ? (arr_3 [i_7]) : (arr_7 [i_5]))) : (arr_22 [i_0] [i_5] [i_0] [i_0]))), (arr_19 [i_5] [i_5] [i_7] [i_5])));

                        for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                        {
                            var_22 = ((((8918876622268074191 ? 90 : 3170984148))));
                            var_23 = (((arr_11 [i_5] [i_7] [i_5]) + (((min((arr_20 [i_8] [i_8]), 1))))));
                            var_24 *= ((((((arr_5 [i_0] [i_5] [i_0]) ? (arr_5 [i_6] [i_6] [i_0]) : -14374))) ? var_2 : ((min((arr_5 [0] [i_6] [i_0]), (arr_5 [i_5] [i_6] [i_0]))))));
                        }
                        for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                        {
                            var_25 = var_9;
                            arr_29 [i_5] [i_5] [16] [i_7] = ((-var_15 ? (min((arr_3 [i_0]), (arr_19 [1] [11] [1] [i_7]))) : (arr_19 [i_0] [i_9] [i_6] [i_5])));
                        }
                        arr_30 [i_0] [i_5] [i_5] [i_6] [i_5] [14] = (arr_20 [i_0] [i_5]);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        var_26 -= var_8;
        var_27 = (arr_33 [i_10]);
        var_28 &= var_14;
        var_29 = (((arr_31 [i_10]) - (((((arr_33 [23]) == (arr_33 [6])))))));

        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            var_30 = -14402;

            for (int i_12 = 2; i_12 < 23;i_12 += 1)
            {
                arr_40 [i_10] [i_10] = (~-var_2);
                arr_41 [i_10] [i_11] [i_10] [i_12] = ((((((arr_34 [1]) ? -105 : -12758))) ? (1 << 1) : (arr_37 [i_11] [i_12 + 1] [i_12])));
                var_31 = ((62321 ? 0 : 324300927938324051));
            }
        }
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            var_32 |= arr_45 [i_10] [i_10];
            arr_46 [i_10] = (((arr_36 [i_10] [i_13]) != ((var_13 ? var_9 : var_9))));
            arr_47 [i_10] [i_10] = (arr_39 [i_10] [i_13] [i_13] [i_13]);
            var_33 |= (~6329424441706071444);
            var_34 = (((arr_39 [i_10] [i_13] [i_13] [i_10]) << (((arr_37 [i_10] [i_13] [i_10]) - 2037721230582061646))));
        }
    }
    for (int i_14 = 4; i_14 < 17;i_14 += 1)
    {
        arr_51 [i_14] = var_3;
        var_35 = (((((((var_4 ? var_1 : (arr_9 [16] [i_14] [i_14] [i_14])))) ^ -var_6)) ^ ((var_11 ? var_0 : (((~(arr_35 [i_14] [i_14]))))))));
    }
    var_36 *= 26;
    #pragma endscop
}
