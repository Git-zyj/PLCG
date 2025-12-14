/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (!-var_6)));
    var_14 = (min(var_4, var_6));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (((((~(arr_2 [i_0] [i_0])))) ? (!var_8) : (min((var_3 ^ var_6), ((((arr_2 [i_0] [i_0]) ? (arr_0 [i_0]) : var_2)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_15 = arr_0 [i_1];
                        var_16 = (min((max(var_2, (arr_2 [i_0] [i_1]))), ((16128 ? 1538652303 : (arr_13 [i_3])))));
                        var_17 = (arr_11 [i_0] [i_3] [i_2] [8] [i_3] [i_0]);

                        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                        {
                            var_18 += (~-1538652303);
                            var_19 = ((min(var_3, -1538652303)));
                            arr_16 [i_0] [i_1] [i_3] [i_4] = ((((-51250 ? 1008 : (((arr_6 [i_1] [6]) ? (arr_11 [18] [i_4] [4] [i_3] [13] [i_2]) : var_10)))) >= ((max((arr_13 [i_2]), (arr_13 [i_0]))))));
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            var_20 = ((~(min((max(210, (arr_15 [i_0] [i_0] [i_2] [i_2] [i_3] [4] [9]))), (arr_14 [i_0] [i_0] [13] [i_0] [1] [i_0] [i_0])))));
                            var_21 = (747541530 || 0);
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_22 [i_0] [4] [i_0] [i_0] = (!((max((((0 ? var_5 : 22))), ((var_12 ? var_11 : var_9))))));
                            var_22 = (arr_17 [17] [17] [i_2] [i_2] [i_6]);
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_3] [i_6] = ((!((var_7 <= (arr_20 [i_0] [i_1] [15] [i_3] [0])))));
                            arr_24 [i_0] [i_1] [i_2] = (max((arr_17 [i_0] [i_1] [i_6] [i_3] [i_6]), ((max((!var_8), ((!(arr_6 [i_0] [i_1]))))))));
                            var_23 = (max(var_23, (((((((!var_7) ^ (~1008)))) % (((max((arr_9 [i_0] [i_2] [i_3] [i_6]), (arr_19 [i_0] [8] [i_0] [i_3]))) ^ (~var_5))))))));
                        }
                        arr_25 [i_0] [i_1] [i_2] [i_3] = (((((32767 | (arr_7 [i_0] [i_1] [i_2] [i_3])))) ? (arr_20 [i_0] [i_3] [8] [i_1] [6]) : ((min((arr_7 [i_3] [i_2] [i_1] [i_0]), (arr_7 [i_3] [i_3] [i_3] [i_3]))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 13;i_7 += 1)
    {
        arr_28 [i_7] [4] = (25 ? 3735398566 : (arr_4 [0]));

        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            var_24 = (((arr_19 [i_7] [i_7] [i_7 + 1] [i_7 + 3]) ? (arr_19 [i_7] [i_7 + 2] [i_7 + 2] [i_7 + 2]) : (arr_19 [i_7] [6] [i_7 + 3] [i_7 + 1])));
            var_25 = (var_4 ? (var_8 & 1) : (((arr_27 [i_7]) ? 225 : (arr_30 [i_7] [i_8]))));
            arr_33 [4] |= ((var_6 ? ((31073 ? (arr_15 [i_7 + 2] [i_7] [i_7 + 2] [i_7] [14] [i_8] [i_8]) : -115871448)) : (arr_32 [i_7] [8] [i_7])));
            var_26 = (max(var_26, var_6));
        }
        var_27 = (~0);
        var_28 = (((arr_11 [i_7] [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7] [13]) ^ ((((arr_18 [5] [i_7 + 3] [6] [i_7 + 3] [i_7 + 3]) >= (arr_6 [i_7] [i_7]))))));
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        arr_36 [i_9] &= var_12;
        arr_37 [i_9] = (((((arr_12 [i_9] [i_9]) || ((!(arr_30 [i_9] [i_9]))))) ? 45449 : (((((!(arr_11 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))) || 9223372036854775807)))));
        var_29 = (arr_11 [8] [8] [10] [i_9] [i_9] [i_9]);
    }
    var_30 = var_11;
    var_31 = var_12;
    #pragma endscop
}
