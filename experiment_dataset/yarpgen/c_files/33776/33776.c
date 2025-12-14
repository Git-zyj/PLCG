/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_0] [i_4] = 127;
                                var_17 = ((((((arr_0 [i_3] [7]) ? 373 : 1006632960))) ? ((((arr_6 [i_1] [i_1] [i_2] [11]) == -87))) : ((min((arr_6 [i_1] [i_2] [i_1] [i_1]), 940)))));
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_0] [i_1] = (min((arr_1 [i_1]), ((~(arr_12 [i_1] [i_0] [i_0] [i_1] [i_1])))));
                arr_16 [i_0] [i_1] [i_1] = (((arr_11 [i_1] [i_1] [i_1] [i_1] [i_0]) < (min(29916, (var_7 * 3092143727)))));
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_18 = (min(var_18, (var_6 % 2977617261462157569)));
        var_19 = (min(var_19, 940));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_20 = (max((min((arr_21 [i_6] [i_6]), (arr_20 [i_6]))), (1 ^ 180)));
        arr_22 [i_6] = -var_5;
        arr_23 [i_6] [i_6] = (((var_9 | 118) ? (min((arr_21 [i_6] [i_6]), (arr_21 [i_6] [i_6]))) : (((~(arr_20 [i_6]))))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    {
                        var_21 = ((+(((arr_24 [i_7] [i_7]) ? var_5 : (arr_24 [i_7] [i_7])))));
                        var_22 = (min(var_22, (arr_27 [i_8])));
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        arr_33 [i_10] [i_10] = ((((1 ? (arr_24 [8] [i_10]) : 86))));

        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            arr_37 [i_10] [i_11] [i_10] = ((-8299702828489808372 ? ((24603 ? (var_1 <= 17) : 29)) : ((-(arr_28 [i_11] [6] [6] [i_10])))));

            /* vectorizable */
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                arr_42 [i_10] [i_11] [i_11] = (((((2147483647 ? (arr_38 [i_12] [i_11] [i_11] [i_10]) : (arr_35 [i_10] [i_10] [i_12])))) ? 1270472002989427307 : (arr_21 [i_10] [i_10])));
                var_23 = ((~((107076991 ? var_11 : (arr_20 [i_11])))));
                arr_43 [i_12] = ((((((arr_30 [i_12] [i_12]) & (arr_19 [i_11])))) ? 64512 : (((arr_28 [i_10] [i_11] [i_12] [i_10]) ? (arr_32 [i_10] [i_12]) : 0))));
            }

            /* vectorizable */
            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                arr_47 [i_11] [i_11] [i_10] [i_10] = ((1 ? (arr_35 [i_11] [i_11] [i_10]) : 684202838));
                arr_48 [i_10] [i_11] [i_13] = ((3288334345 != (arr_25 [i_13] [i_13])));
                var_24 = (~197);
                var_25 -= ((1823517997 != ((var_0 ? 29931 : 1))));
            }
            arr_49 [i_10] [i_11] = ((((((((1 | (arr_34 [i_10] [i_11] [i_11])))) ? (22056 >> 0) : ((var_16 & (arr_32 [i_10] [i_11])))))) ? ((((arr_28 [i_10] [i_10] [22] [i_11]) << (arr_28 [i_10] [i_10] [12] [8])))) : ((var_14 - (arr_45 [i_10] [i_11] [i_11] [i_10])))));
            var_26 -= -22057;
        }
        arr_50 [i_10] = ((((-(arr_44 [i_10] [i_10] [i_10] [i_10]))) <= (((127 ? (arr_38 [i_10] [i_10] [i_10] [i_10]) : (4294967295 || 2147483647))))));
        var_27 = 2147483647;
        arr_51 [i_10] [i_10] = ((((((arr_24 [8] [i_10]) ? (arr_24 [12] [i_10]) : 389))) ? (((arr_24 [2] [i_10]) ? (arr_24 [16] [i_10]) : (arr_24 [18] [i_10]))) : -22043));
    }
    var_28 = (min(var_28, var_7));
    #pragma endscop
}
