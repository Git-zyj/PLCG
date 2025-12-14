/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [6] &= max((max(var_1, var_18)), var_16);
                var_20 ^= (arr_3 [2]);
            }
        }
    }

    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_21 = ((-63 - ((var_19 ^ (~var_4)))));
        arr_8 [i_2] = (max(((-(((arr_7 [i_2]) ? var_12 : var_8)))), (!var_9)));

        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {

            /* vectorizable */
            for (int i_4 = 3; i_4 < 13;i_4 += 1)
            {
                var_22 -= (arr_11 [i_3] [i_3]);

                for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                {
                    arr_16 [i_2] [6] [i_3] [i_3] [i_3] = (var_2 ? (arr_12 [i_5] [i_3] [i_3] [i_2]) : (arr_15 [i_4] [i_4] [i_2] [i_2]));
                    arr_17 [i_2] [i_2] [i_2] [i_3] [i_2] = var_8;
                    arr_18 [i_2] [i_3] [i_4] [i_4] [12] [10] |= ((var_2 || (arr_11 [i_5] [i_3 + 1])));
                    var_23 |= var_5;
                    arr_19 [i_3] [i_3] [i_3] [i_5] = ((arr_11 [i_4] [i_4 + 1]) ? (arr_11 [i_4] [i_4 - 3]) : (arr_11 [14] [i_4 + 2]));
                }
                for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                {
                    arr_22 [i_2] |= ((-(255 + 251)));
                    var_24 += ((((var_6 ? (arr_13 [i_3] [i_3] [i_2]) : (arr_6 [i_2] [i_3]))) >= ((~(arr_14 [4] [i_2] [i_2] [8])))));

                    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                    {
                        var_25 = (min(var_25, (arr_21 [i_2] [i_2] [4] [4] [0])));
                        arr_26 [i_7] [i_3] [2] [2] [11] [i_3] [i_2] = var_14;
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                    {
                        arr_29 [i_2] [i_3] [i_2] [1] [i_8] = (arr_13 [i_2] [i_3] [i_3]);
                        var_26 = ((((-(arr_20 [i_2] [i_3] [i_4] [i_6] [i_8] [i_3]))) - 9));
                    }
                }
                for (int i_9 = 1; i_9 < 14;i_9 += 1)
                {
                    var_27 = var_7;

                    for (int i_10 = 3; i_10 < 14;i_10 += 1)
                    {
                        var_28 = (max(var_28, ((((arr_6 [i_2] [i_2]) - var_5)))));
                        var_29 ^= (((((var_17 / (arr_28 [i_2] [i_2])))) ? (((arr_35 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) ? (arr_15 [i_2] [i_3] [10] [i_10]) : (arr_9 [i_10 - 2] [i_3]))) : (arr_7 [i_2])));
                        var_30 = (max(var_30, (245 && 4294967295)));
                    }
                }
                arr_36 [i_2] [i_3 - 2] [i_2] [i_4] |= (((arr_13 [i_4] [14] [i_2]) | ((1 ? 254 : -279681536))));
                var_31 = (min(var_31, (((250 ? -32738 : 15)))));
                arr_37 [i_2] [i_3 + 1] &= -1;
            }
            /* vectorizable */
            for (int i_11 = 1; i_11 < 14;i_11 += 1)
            {
                var_32 += (arr_28 [8] [i_2]);
                arr_42 [i_2] [i_3] [i_3] [10] = (((arr_39 [i_3] [i_3 + 1] [i_11]) + var_4));
            }
            var_33 -= (((var_3 <= var_4) / ((~(arr_41 [i_2] [i_3 - 2] [i_2])))));
            var_34 = ((((~(((arr_21 [i_3] [i_3] [i_3] [i_2] [7]) >> (((arr_41 [i_2] [i_2] [i_3 - 1]) - 60012)))))) < ((-((var_4 ? var_11 : -73))))));
        }
        var_35 = (max(var_35, (((~(arr_13 [i_2] [i_2] [i_2]))))));
    }
    for (int i_12 = 3; i_12 < 9;i_12 += 1)
    {
        var_36 = ((((var_17 & ((((arr_27 [i_12] [i_12]) | (arr_23 [i_12] [i_12] [i_12])))))) == (232 > 15)));
        arr_45 [i_12] = (((arr_24 [i_12 - 2] [i_12 - 2] [i_12 - 2] [i_12 - 2]) >= var_2));
        var_37 = (max(var_37, (15775 / 19)));
        var_38 = (min(var_38, ((((((-(arr_13 [8] [i_12 + 1] [8])))) ? ((((~var_18) ^ (arr_35 [12] [12] [8] [12] [12] [i_12 - 3])))) : 33)))));
    }
    #pragma endscop
}
