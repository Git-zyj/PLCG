/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            var_19 = ((((var_2 == (arr_3 [i_0] [i_1]))) ? (var_6 / var_4) : ((~(arr_4 [i_0] [i_1 - 1] [i_1])))));
            var_20 = var_12;
            var_21 ^= ((~(var_18 + var_2)));
            arr_6 [i_0] = (arr_5 [i_0] [i_0]);
        }
        for (int i_2 = 4; i_2 < 12;i_2 += 1)
        {
            arr_9 [i_0] [i_0] = ((-((var_5 ? var_12 : (((max(var_2, var_8))))))));
            var_22 -= var_5;

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                var_23 = (i_3 % 2 == 0) ? (((-(max(-var_6, ((var_3 + (arr_11 [i_3] [i_2] [i_3] [i_3])))))))) : (((-(max(-var_6, ((var_3 - (arr_11 [i_3] [i_2] [i_3] [i_3]))))))));
                var_24 = (~(min(((var_0 ? var_14 : var_13)), (arr_0 [i_2]))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_25 += ((((min((arr_2 [i_4] [i_4]), var_8)) <= (min(var_10, (arr_2 [i_2] [i_3]))))));
                            arr_17 [i_0] [i_0] [i_3] = (min((((var_7 <= var_1) ? ((((arr_2 [i_3] [i_3]) != (arr_12 [i_0] [i_2] [i_3] [i_4])))) : -var_13)), ((((((var_8 ? (arr_3 [i_0] [i_2]) : (arr_14 [i_3])))) == ((var_13 ? var_10 : var_8)))))));
                            arr_18 [i_3] [i_3] [i_3] = ((var_5 - ((((var_2 ? var_11 : var_2)) | ((var_6 ? var_11 : var_14))))));
                        }
                    }
                }
                arr_19 [i_0] [i_2] [i_3] [i_3] |= (((((((var_18 ? (arr_8 [i_3]) : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))) ^ (var_3 ^ var_15))) % (min(((min(var_13, var_5))), (arr_5 [i_0] [i_0])))));
                arr_20 [i_3] = (((min((min(var_1, (arr_3 [i_3] [i_2 + 1]))), var_10)) / (((var_2 ? var_12 : var_7)))));
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                var_26 = (var_18 != var_0);
                var_27 = (max(var_27, (((var_4 * (arr_10 [i_0] [i_0] [i_2] [i_0]))))));
            }
            arr_24 [i_0] [i_2 - 1] = ((((((~(arr_22 [i_2 - 2] [i_2] [i_2] [i_2 + 1]))) + 2147483647)) >> (((arr_22 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1]) - 38))));
            arr_25 [i_2] [i_2] = (((((((arr_5 [i_0] [i_0]) != var_12)))) < var_15));
        }

        /* vectorizable */
        for (int i_7 = 1; i_7 < 11;i_7 += 1)
        {
            var_28 = (arr_27 [i_7]);
            arr_28 [i_7] [i_0] = ((!((((arr_21 [i_7] [i_7] [i_0]) * var_16)))));
        }
        /* vectorizable */
        for (int i_8 = 2; i_8 < 9;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 12;i_10 += 1)
                {
                    {
                        arr_41 [i_8] [i_10] = ((~(arr_39 [i_8 + 2])));
                        var_29 = (max(var_29, (arr_14 [i_9])));

                        for (int i_11 = 1; i_11 < 12;i_11 += 1)
                        {
                            arr_44 [i_0] [i_0] [i_10] = ((var_4 * (var_18 | var_17)));
                            arr_45 [i_10] [i_10] = (((var_14 << var_16) >> (((~var_7) + 1467))));
                        }
                        var_30 = (min(var_30, ((((arr_23 [i_10 + 1] [i_10 + 1] [i_8 + 4]) & (~var_9))))));
                        var_31 = ((((arr_39 [i_8]) - (arr_15 [i_0] [i_0] [i_10] [i_0] [i_0]))));
                    }
                }
            }
            arr_46 [i_0] = (((((var_2 && (arr_36 [i_8] [i_8] [i_8] [i_8])))) * (var_18 == var_15)));
        }
    }

    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        arr_49 [i_12] |= (((((var_15 ? (arr_47 [i_12]) : -var_15))) && ((var_18 > (var_9 && var_9)))));
        arr_50 [i_12] [i_12] = var_15;
    }
    for (int i_13 = 2; i_13 < 18;i_13 += 1)
    {
        arr_54 [i_13] = ((((((((var_3 ? var_16 : var_9))) / (max(var_18, var_10))))) ? ((((min(var_17, var_14))) - ((var_2 + (arr_51 [i_13]))))) : ((((!var_9) != var_5)))));
        arr_55 [i_13] [i_13] |= (min((min((arr_52 [i_13] [i_13]), (max(var_14, var_6)))), (((((((arr_47 [i_13]) != (arr_48 [i_13])))) >= ((var_0 ? var_9 : var_4)))))));
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 19;i_14 += 1)
        {
            for (int i_15 = 2; i_15 < 16;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 17;i_16 += 1)
                {
                    {
                        arr_62 [i_13] [i_16] [i_13] [i_13] [i_13] = ((-((min(var_11, ((((arr_57 [i_13]) != var_15))))))));
                        arr_63 [i_16] = ((-((-(arr_47 [i_13])))));
                    }
                }
            }
        }
        var_32 = (max(var_32, ((min(((((var_18 >= var_10) && var_10))), (var_1 > var_15))))));
    }
    var_33 = ((!(((~(var_6 != var_14))))));
    #pragma endscop
}
