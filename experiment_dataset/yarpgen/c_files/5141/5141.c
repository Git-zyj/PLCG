/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((min(((var_5 || ((min(70, 77))))), (((((var_10 ? var_9 : var_7))) && ((max(var_0, var_0))))))))));
    var_14 = var_9;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = (min(var_15, (((-(((!((((arr_1 [3]) ? (arr_1 [12]) : (arr_0 [i_0]))))))))))));

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [11] = (min(-4678, (((!((((arr_0 [i_0]) ? (arr_4 [i_0] [i_0]) : (arr_0 [3])))))))));

            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                var_16 = (((arr_4 [i_0] [i_2]) ? var_3 : 218));
                arr_8 [i_0] [i_1] [i_2] [i_2] = (arr_3 [2] [5]);
                var_17 -= (arr_2 [i_0]);
            }
            var_18 += ((!(arr_0 [i_0])));
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                var_19 = (max(var_19, (((((((arr_7 [i_0] [i_0] [1]) ^ (arr_6 [i_4] [i_4] [i_4] [i_4]))))) ? (max((arr_2 [i_0]), (arr_2 [i_4]))) : (max((arr_2 [i_3]), 58720256))))));
                arr_13 [5] [5] [i_3] [5] = (!(((-(arr_6 [i_0] [1] [i_0] [i_0])))));
                arr_14 [i_0] [i_0] [i_0] [i_0] = (~(((arr_9 [i_0] [0]) / (arr_2 [i_0]))));
                arr_15 [i_0] [i_0] [i_4] = (((((((arr_12 [i_0] [i_0] [i_0]) ? (arr_4 [i_0] [i_4]) : var_10)))) ? ((28 ? (arr_3 [i_0] [i_0]) : (arr_1 [i_0]))) : -71));
                arr_16 [i_0] [i_3] [i_3] [i_4] = (min((arr_11 [2] [2] [6]), 32766));
            }
            for (int i_5 = 3; i_5 < 13;i_5 += 1)
            {
                var_20 = ((-(min(var_10, (((arr_11 [11] [13] [i_5]) ? var_0 : 18446744073709551612))))));
                arr_19 [i_3] [i_3] [i_3] &= 1;
                var_21 = (arr_0 [4]);
                var_22 &= ((!((((arr_11 [1] [i_5 + 1] [i_5]) & (arr_11 [i_5 + 1] [i_5 + 1] [i_5]))))));
            }
            var_23 = (min(var_12, ((0 ? (-77 || var_11) : (arr_10 [i_0] [i_3])))));
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            arr_23 [i_0] = (min((arr_4 [i_0] [i_0]), var_4));

            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                var_24 = (min(var_24, ((((((var_6 ? (((min((arr_4 [i_6] [i_6]), (arr_6 [i_0] [8] [1] [i_7]))))) : (min(var_11, (arr_2 [i_6])))))) ? (min((arr_20 [i_6] [i_6] [i_6]), (((-56 ? 228 : var_12))))) : 74)))));
                arr_26 [2] = (((min(((min(1, (arr_1 [i_6])))), (arr_2 [i_7])))) ? (((min((min(0, 1)), (((1 > (arr_2 [1])))))))) : var_2);
                arr_27 [i_0] [i_6] [i_7] = ((0 ? var_0 : -71));
            }
        }
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            arr_30 [i_8] [0] = 1;

            /* vectorizable */
            for (int i_9 = 1; i_9 < 13;i_9 += 1)
            {
                var_25 = (max(var_25, (arr_12 [i_0] [12] [i_9 + 1])));
                var_26 *= (arr_6 [i_0] [i_9 + 1] [i_9] [i_9 - 1]);
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        {
                            arr_37 [i_0] [i_9] [i_9 - 1] [i_10] = (arr_2 [i_0]);
                            arr_38 [i_0] [i_9] [6] [i_0] [8] = 1;
                        }
                    }
                }
                arr_39 [i_0] [i_8] [i_9] [10] = (((arr_33 [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_9 + 1]) ? (arr_25 [i_9 + 1]) : (arr_4 [i_9 + 1] [i_9 - 1])));
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                var_27 = (((arr_21 [i_12] [i_0]) ? 220 : (arr_21 [i_0] [i_0])));
                var_28 &= 1;
            }
            /* vectorizable */
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                var_29 = var_1;
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 10;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        {
                            arr_51 [i_14] = (((arr_17 [i_0] [i_8] [i_13] [2]) ? (arr_20 [i_13] [i_14] [i_14]) : (((arr_20 [12] [12] [9]) / (arr_0 [11])))));
                            arr_52 [4] [i_8] [4] [4] [i_15] |= ((-(!-63)));
                        }
                    }
                }
                var_30 = (max(var_30, (((var_6 & (~-2188382071608142551))))));
            }
            var_31 = (min(var_31, ((((arr_6 [i_0] [i_0] [i_0] [i_0]) ? (~0) : ((((arr_40 [i_0] [i_8]) ? 84 : -72))))))));
        }
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 11;i_16 += 1)
    {
        var_32 *= ((((arr_6 [4] [i_16] [13] [5]) < (arr_46 [i_16] [i_16] [i_16]))));
        var_33 = ((~(arr_4 [i_16] [13])));
        arr_55 [i_16] |= ((arr_34 [i_16] [i_16] [2] [i_16] [i_16]) > (arr_12 [i_16] [i_16] [i_16]));
    }
    #pragma endscop
}
