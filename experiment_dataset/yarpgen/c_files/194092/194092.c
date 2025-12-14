/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-var_8 ? var_10 : var_1));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = (min((((((max((arr_2 [i_0]), var_3))) ? var_4 : var_10))), ((((max(var_4, (arr_2 [i_1])))) ? (arr_1 [9] [i_1]) : (max(1366071093, (arr_1 [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] = ((+((var_1 ? (arr_0 [i_0 - 1] [i_0 + 1]) : (arr_3 [i_0 + 1] [i_0 + 1])))));
                            arr_11 [i_0] [i_1] [i_2] [i_3] = ((!(((3 ? -333995414 : 3)))));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_14 &= (~0);
                                arr_14 [i_4] [i_1] [3] [i_2] [i_1] [i_1] [i_0] = (((((~(max(var_8, (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (min((~30446), ((max(3726, (arr_9 [5] [i_1] [5] [5])))))) : (arr_5 [i_0] [i_0] [i_0])));
                                var_15 = (max(var_6, ((-(arr_0 [i_0] [i_0 - 1])))));
                            }
                        }
                    }
                }
                var_16 = ((!(((var_3 ? ((((arr_13 [i_0] [i_0] [4] [8] [8] [i_1] [0]) == var_4))) : (arr_7 [i_0] [i_0] [i_0] [i_0]))))));
                var_17 = (max((max(((((arr_0 [i_1] [i_1]) << (43047 - 43020)))), (max(-21568, 12385400413013231585)))), ((min(4294967295, 43047)))));
            }
        }
    }

    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_18 = ((41 ? 19 : (((~-6318) ? 0 : 253))));
        var_19 = (min(var_19, (((((((arr_16 [i_5]) ? (max(var_11, (arr_15 [i_5]))) : var_9))) ? ((((var_0 ? var_5 : (arr_16 [5]))))) : var_10)))));
        var_20 = (min((((-41 ? 115 : 1366071093))), (((var_10 <= (arr_16 [i_5]))))));
        arr_17 [13] = ((!(((~(arr_15 [9]))))));
    }
    for (int i_6 = 3; i_6 < 11;i_6 += 1)
    {
        arr_21 [i_6] = ((-(((!((max((arr_19 [6] [6]), (arr_15 [i_6])))))))));
        var_21 = (max(var_4, (min(((var_11 ? 1 : (arr_16 [i_6]))), (arr_19 [i_6 + 2] [i_6 - 2])))));
        var_22 = (min(var_22, (max(47, (((((var_5 ? (arr_20 [12] [4]) : (arr_20 [i_6] [i_6])))) ? (arr_16 [i_6 + 3]) : var_4))))));
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
    {
        arr_25 [i_7] = ((!((!(((var_11 ? (arr_22 [17]) : var_10)))))));
        var_23 = -30446;
        var_24 = (min(var_24, (((+((~(((arr_23 [i_7] [i_7]) - var_2)))))))));

        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            arr_28 [i_7] [i_8] [i_8] = (((((-(arr_26 [i_7] [i_7])))) ? (((max((arr_24 [i_8]), (arr_24 [i_7]))))) : (min(12, (arr_23 [13] [i_8])))));
            var_25 = (((arr_22 [i_7]) ? -1250 : 1250));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    {
                        var_26 = ((((min((arr_30 [i_8] [i_9] [8]), (arr_30 [i_8] [i_9] [i_9])))) ? (((arr_35 [i_7] [i_7] [i_10]) ? (arr_35 [i_9] [i_8] [i_7]) : (arr_35 [i_9] [i_7] [i_7]))) : (((max((arr_22 [19]), (arr_22 [i_7])))))));
                        var_27 ^= (arr_24 [i_8]);
                        var_28 = (arr_30 [i_8] [i_8] [i_8]);
                        var_29 = var_2;
                    }
                }
            }
        }
        for (int i_11 = 2; i_11 < 19;i_11 += 1)
        {
            arr_39 [1] [i_11] = (((((arr_38 [i_11 + 2] [i_11] [i_11]) ? (arr_33 [i_11 + 3] [i_11 + 3] [i_11 - 2] [i_11 + 3] [i_11]) : (arr_33 [i_11 + 2] [i_11 + 2] [i_11 + 1] [19] [i_11]))) + (max(((max(var_10, 12048))), ((4294967295 ? (arr_24 [i_11]) : (arr_32 [0] [i_11] [0] [i_11])))))));
            var_30 *= (((((max(28132, 12041))) ? var_10 : (((arr_34 [i_7] [18] [18] [i_11]) ? (arr_38 [2] [i_11] [2]) : (-127 - 1))))));
            var_31 = 4661577140004353723;
        }
    }
    for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
    {
        var_32 = ((~((min((arr_33 [i_12] [2] [i_12] [i_12] [i_12]), (arr_32 [i_12] [15] [i_12] [13]))))));
        var_33 = (min(var_33, ((max(4294967295, (max(((((arr_33 [i_12] [0] [i_12] [0] [i_12]) != (arr_24 [i_12])))), (max(1991228899, 4294967295)))))))));
    }
    #pragma endscop
}
