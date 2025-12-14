/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= max(var_5, (((((var_3 ? var_17 : var_9))) ? var_13 : ((min(1, var_4))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_20 = (min(var_20, (arr_4 [i_1])));
                            arr_14 [i_0] [3] [i_0] [i_3] [1] = ((((!(arr_1 [i_0 - 2] [8])))));
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            arr_18 [i_0 - 2] [i_0 - 3] [i_0] [i_0 + 1] [i_5] [i_0] |= (var_4 ? ((1 ? -7296192885564522882 : 1)) : -var_5);
                            arr_19 [i_3] [i_3] [i_3] [i_3] [i_0] = (~var_3);
                            var_21 &= (12289 >> 1);
                            var_22 &= (arr_6 [i_0] [i_1]);
                        }
                        var_23 = (((arr_15 [i_0] [i_0] [i_2] [i_0] [i_1]) ? (arr_1 [i_0 + 1] [i_3 - 1]) : (arr_10 [i_1])));
                        arr_20 [i_0 + 1] [i_1] [i_2] [i_0] = ((!(arr_2 [i_0])));
                    }
                    for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        var_24 = (min((arr_2 [i_0]), (arr_8 [i_1])));
                        var_25 = (min(var_25, (((1 ? 1 : (max((min((arr_8 [i_0 - 1]), -1894282829)), (arr_2 [i_1]))))))));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_26 = (max(var_26, ((~(((arr_21 [i_1] [i_7] [i_2]) ? (arr_21 [i_0] [i_7] [i_0 - 2]) : (arr_25 [i_0 + 1] [i_0 + 1] [i_7] [i_7] [i_0] [i_0])))))));
                            arr_27 [i_0] [i_0] [i_0] [i_7] [i_0] = (arr_1 [i_2] [i_0 + 1]);
                            var_27 *= ((var_12 >= (arr_2 [i_1])));
                            var_28 *= ((((var_11 | (arr_15 [i_0 - 1] [i_0] [i_0 + 1] [i_1] [i_0]))) ^ 1955908359));
                            arr_28 [i_0] [i_1] [i_1] [i_1] [i_1] = ((-9 ? 0 : (((arr_7 [i_0] [i_0]) ? (arr_23 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [19] [i_0]) : (arr_4 [i_0])))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 0;i_8 += 1)
                        {
                            var_29 = ((-(arr_25 [i_0] [i_0 - 1] [i_0] [i_0 - 2] [i_0 - 3] [i_0])));
                            var_30 = (i_0 % 2 == zero) ? (((!((((arr_9 [i_8] [i_8] [i_0] [i_0] [i_1] [i_0]) + 7296192885564522874)))))) : (((!((((arr_9 [i_8] [i_8] [i_0] [i_0] [i_1] [i_0]) - 7296192885564522874))))));
                        }
                        arr_31 [i_2] [i_0] [i_2] [i_6 + 2] = (((arr_7 [i_0] [i_0]) ? (arr_21 [i_0] [i_0] [1]) : (arr_7 [i_0] [i_0])));
                        var_31 = (arr_3 [i_0] [i_0 + 1] [i_0 - 2]);
                    }
                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 17;i_9 += 1) /* same iter space */
                    {
                        arr_34 [i_0 - 3] [i_1] [i_1] [12] [i_2] [i_9] &= (((arr_29 [i_0 + 1]) < (arr_33 [i_0] [i_2] [i_1])));
                        arr_35 [i_0] [i_0] = (arr_6 [i_0 - 3] [i_0]);
                        var_32 = var_18;
                        arr_36 [i_0] [i_2] = ((var_16 != (((arr_32 [i_0] [i_1] [i_0] [i_0]) ? var_13 : var_1))));
                    }
                    arr_37 [i_2] [i_0] [i_2] = (((!1) ? var_10 : var_7));
                    var_33 = ((-(((arr_9 [i_0 - 2] [14] [i_2] [i_0] [i_2] [i_0]) - (arr_9 [i_0 - 1] [i_0 - 1] [12] [i_0] [i_2] [i_2])))));
                    arr_38 [12] [i_1] [i_2] [i_0] = (arr_7 [i_1] [i_0]);
                    var_34 = (min(var_34, (((((((var_5 ? (arr_0 [i_1]) : var_18)) <= ((min((arr_2 [i_1]), var_16))))) ? 1955908359 : ((-var_9 << (var_6 - 52745822))))))));
                }
            }
        }
    }
    #pragma endscop
}
