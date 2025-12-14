/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((max(((max(var_6, var_6))), (~18446744073709551612)))) ? (var_4 >= var_10) : var_11));
    var_13 = (max(var_7, var_6));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_14 ^= (((((((var_3 ? (arr_1 [i_0] [6]) : (arr_1 [i_0 + 2] [4]))) ^ ((((arr_0 [8] [8]) ? 12 : var_7)))))) || ((((arr_1 [i_0 + 3] [4]) ? (arr_1 [i_0 + 2] [6]) : (arr_1 [i_0 + 3] [2]))))));

        for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_15 *= 17483825541986404337;
            var_16 = (min(var_16, ((min(((((arr_0 [6] [i_1 + 1]) || var_0))), (arr_2 [i_1 + 1]))))));
            var_17 = (max(var_17, ((((!((max(var_11, (arr_1 [4] [4]))))))))));
        }
        for (int i_2 = 1; i_2 < 13;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_15 [i_4] [i_0] [i_0] [i_0 + 3] = (arr_12 [i_0] [i_2 + 1] [i_3 + 3] [i_4]);
                        var_18 = ((962918531723147274 ? ((-2408 ? (arr_11 [12] [i_2 + 1] [i_2 + 1] [i_4 - 2]) : 384)) : ((min(-var_2, (arr_9 [i_4 - 1] [i_0] [i_4]))))));
                        var_19 = (var_7 ? (min(((var_11 ? var_10 : var_7)), (((962918531723147279 ? (arr_0 [i_0] [i_0]) : (arr_5 [i_3] [i_0])))))) : ((((arr_6 [i_2 - 1] [i_3] [i_0]) ? (arr_6 [i_2 + 1] [i_2] [i_0]) : (arr_6 [i_0] [i_0] [i_0])))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            arr_27 [i_0] [i_2] [i_2] [i_7] = (((arr_0 [i_0] [i_2 - 1]) / (arr_0 [i_0] [i_2 - 1])));
                            var_20 = (((((!(arr_9 [i_7] [i_0] [i_5])))) | (arr_6 [i_0] [i_5] [i_0])));
                            var_21 = (max(var_21, ((((arr_21 [i_7] [i_7] [i_7] [i_0 + 3]) ? var_10 : (arr_0 [i_7] [i_6]))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 4; i_8 < 13;i_8 += 1)
                        {
                            var_22 = (((arr_4 [i_0 - 2] [i_0 - 1] [i_0 + 2]) ? (arr_4 [i_0 - 2] [i_0 - 2] [i_0 - 1]) : (arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1])));
                            arr_32 [i_0] [i_2 - 1] [i_6] [13] [i_8 + 1] = var_9;
                        }
                        var_23 = (max(var_23, (((-((+(((arr_14 [i_0] [10] [i_5] [i_6] [i_5]) ? -125 : var_4)))))))));
                        var_24 *= (arr_5 [i_0 + 2] [i_5]);
                        var_25 = var_0;
                        arr_33 [i_0 + 3] [i_0] [i_5] [i_0 + 3] = ((((((-(arr_16 [i_0] [i_2 - 1] [i_0]))))) >= ((var_9 ? var_4 : (arr_12 [i_2 + 1] [9] [1] [i_0 + 2])))));
                    }
                }
            }
            arr_34 [i_0 - 1] [i_0] = var_7;
            /* LoopNest 3 */
            for (int i_9 = 3; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 13;i_11 += 1)
                    {
                        {
                            var_26 = (~(var_5 ^ var_0));
                            var_27 = ((~((min((arr_19 [i_0 - 1] [i_9 - 3] [i_0] [i_10]), (arr_19 [i_0 - 1] [i_9 - 1] [i_0] [i_10]))))));
                            var_28 += ((~((var_7 ? (min(var_1, var_6)) : (arr_23 [i_0] [i_2 + 1] [i_9 - 3] [i_11])))));
                        }
                    }
                }
            }
        }
        for (int i_12 = 1; i_12 < 13;i_12 += 1) /* same iter space */
        {
            var_29 = (((var_5 ? (arr_19 [i_0 + 3] [i_0 + 2] [i_0] [i_12]) : (arr_19 [i_0 + 3] [i_0] [i_0] [i_0 + 2]))));

            for (int i_13 = 1; i_13 < 12;i_13 += 1)
            {
                var_30 -= ((962918531723147288 ? (((!((max((arr_30 [i_0 - 1] [12] [i_0 + 3] [10] [4] [i_13 + 1]), (arr_0 [6] [10]))))))) : ((((arr_2 [i_0 - 1]) != (arr_2 [i_0 + 3]))))));
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 11;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        {
                            var_31 *= (((((arr_14 [i_0] [i_12 + 1] [i_13 + 1] [i_14] [i_15]) ? (var_3 * 17483825541986404343) : (arr_41 [i_0 - 2] [i_0 - 2]))) < 962918531723147279));
                            var_32 = ((-(arr_3 [i_0] [i_0 + 3] [i_0 + 1])));
                        }
                    }
                }
            }
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                arr_58 [i_0] [i_12] [i_0] = (arr_41 [i_0 + 3] [i_0]);
                var_33 = (max(var_33, ((((max((arr_36 [i_0 - 2]), (arr_36 [i_0 - 1])))) ? (min(var_3, (arr_36 [i_0 - 2]))) : (((arr_36 [i_0 + 1]) ? (arr_36 [i_0 - 1]) : var_6))))));
            }
            var_34 = (max(var_34, var_0));
            arr_59 [i_0] [i_12] = (arr_48 [i_0 - 1] [i_12 + 1] [i_12 - 1]);
            var_35 = (min(var_35, ((((((((((arr_7 [i_12 + 1] [i_12 - 1]) ? (arr_48 [i_0 + 2] [i_0 + 2] [i_0 + 2]) : var_10))) ? var_3 : (arr_20 [i_12] [i_12 + 1] [2] [2] [i_12 - 1])))) ? (arr_30 [i_12 - 1] [12] [12] [12] [i_0] [i_0]) : var_7)))));
        }
    }
    #pragma endscop
}
