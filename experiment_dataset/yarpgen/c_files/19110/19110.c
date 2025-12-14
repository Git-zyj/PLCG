/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] &= ((~(((arr_4 [i_0] [i_0]) ? (arr_1 [i_1]) : ((-57 ^ (arr_1 [i_1])))))));
                arr_6 [i_0] [i_1] = var_11;
            }
        }
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_13 = (arr_7 [i_2] [i_2]);
        arr_9 [i_2] = (arr_7 [i_2] [i_2]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_14 = 60;
                    arr_14 [24] = (!var_11);

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_15 = (65518 ? 9813 : 12288);
                            arr_21 [i_2] [i_2] [i_6] [i_2] [i_2] [i_3] = (arr_15 [i_4] [i_4] [i_4]);
                            var_16 = (arr_13 [i_4]);
                            arr_22 [20] [i_4] [16] = (max((arr_17 [i_4] [i_5]), (min((max(var_3, (arr_8 [i_2] [i_2]))), ((var_12 ^ (arr_12 [i_5] [i_4] [i_3] [1])))))));
                        }

                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_17 = ((((((((3910135803 - (arr_7 [i_7] [i_2])))) ? (arr_11 [i_7] [i_7]) : (((arr_8 [i_2] [i_3]) | (arr_18 [i_3] [i_7])))))) ? 126 : (min((((arr_16 [i_3] [i_4] [i_4]) ? 65 : var_1)), (((-1586376467 ? (arr_17 [i_3] [i_3]) : (arr_8 [1] [i_3]))))))));
                            arr_25 [i_2] [i_2] [i_5] [i_5] [i_7] = ((-(((!(arr_8 [i_2] [i_2]))))));
                            arr_26 [i_2] [i_2] [i_2] [i_2] [i_2] = (min((max((arr_17 [i_4] [i_5]), (arr_8 [i_2] [i_5]))), (arr_8 [i_7] [i_4])));
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        arr_30 [i_8] [i_2] [i_2] = (((arr_11 [i_3] [i_8]) ? (arr_11 [i_4] [i_3]) : var_10));
                        arr_31 [i_2] [i_3] [i_4] [i_4] [i_4] [i_8] = -12515;
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_18 = ((-(((arr_8 [i_3] [i_4]) | (arr_28 [i_3])))));
                        var_19 = (min(var_19, -46058));
                        arr_34 [i_2] [i_3] [i_3] [i_4] [i_4] = (((arr_24 [14] [i_3] [i_3] [i_2] [i_2]) ? (arr_13 [i_2]) : (arr_29 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])));
                    }
                    var_20 = (arr_23 [i_4] [4] [i_4] [18] [i_2] [i_2] [i_2]);
                }
            }
        }
        var_21 = (min(var_21, ((min(((-((max((arr_33 [i_2]), 24576))))), ((((arr_18 [i_2] [i_2]) >= (arr_23 [i_2] [i_2] [4] [i_2] [i_2] [0] [i_2])))))))));
    }
    /* vectorizable */
    for (int i_10 = 3; i_10 < 19;i_10 += 1) /* same iter space */
    {

        for (int i_11 = 1; i_11 < 19;i_11 += 1)
        {
            arr_39 [i_11] = (((((arr_17 [i_11] [i_11 + 1]) + 2147483647)) >> (((arr_27 [i_10 + 1] [i_11] [i_11] [i_11] [i_11 + 1] [i_11]) - 217))));
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 19;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 17;i_13 += 1)
                {
                    {
                        var_22 = ((~(arr_35 [i_10] [i_10])));

                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            var_23 = (arr_24 [i_10] [i_11] [i_10] [i_13] [i_14]);
                            arr_51 [i_14] [i_13] [i_13] [i_12] [i_11] [i_10] = (arr_46 [i_10] [i_11] [i_13] [i_14]);
                        }
                        for (int i_15 = 0; i_15 < 20;i_15 += 1)
                        {
                            arr_54 [15] [15] [i_12] [i_13] [15] = ((~(((var_0 > (arr_19 [i_11] [i_13] [i_11] [19] [i_11] [i_10]))))));
                            var_24 = (((arr_29 [i_11 - 1] [i_13] [i_13 + 3] [i_11 - 1] [0] [0]) ? (((-127 - 1) ? (arr_45 [i_13] [i_12] [i_11] [1]) : var_8)) : (arr_35 [i_10 + 1] [i_11 - 1])));
                        }
                        for (int i_16 = 0; i_16 < 20;i_16 += 1)
                        {
                            arr_57 [i_11] &= (((arr_42 [i_11]) - ((((arr_49 [i_10] [i_10] [i_12] [i_10] [i_16]) ? -75 : var_5)))));
                            var_25 = (arr_48 [i_11]);
                            var_26 = (max(var_26, var_12));
                        }
                        var_27 = (max(var_27, (((~((((arr_28 [8]) || (arr_36 [i_13])))))))));
                        arr_58 [i_10] [i_10] [i_10] [i_12] [i_13] [i_13] = (-1586376467 - -1612164496);
                    }
                }
            }
            arr_59 [i_10] [i_11] [i_10] = ((!(((~(arr_56 [i_11] [i_11] [i_11] [i_11] [i_10]))))));
        }
        var_28 = var_10;
    }
    for (int i_17 = 3; i_17 < 19;i_17 += 1) /* same iter space */
    {
        arr_63 [2] = (var_7 | var_9);
        arr_64 [i_17] = (max((max((arr_60 [i_17]), (((arr_37 [6] [i_17]) ? var_0 : 18446744073709551615)))), (((3 ? 65522 : 237)))));
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 16;i_18 += 1)
    {
        var_29 = (max(var_29, ((((arr_8 [2] [i_18]) + (arr_46 [i_18] [i_18] [i_18] [7]))))));
        arr_67 [i_18] = (arr_45 [i_18] [i_18] [i_18] [i_18]);
    }
    var_30 = ((((max((var_8 | var_2), ((min(var_10, var_5)))))) ? (((-((max(-12835, 247)))))) : var_4));
    #pragma endscop
}
