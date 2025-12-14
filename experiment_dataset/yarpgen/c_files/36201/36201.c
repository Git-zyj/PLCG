/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 += (min((arr_0 [i_0 + 1]), (arr_0 [i_0 - 1])));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        var_16 = (((((arr_2 [i_0]) * (arr_6 [i_3 - 1] [1] [i_0]))) < (arr_7 [i_0] [1])));
                        var_17 = (min(var_17, ((((((arr_5 [i_0] [3] [i_3]) + 2147483647)) >> (((((arr_3 [i_2] [12]) | (arr_0 [i_1]))) - 4157599704)))))));

                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            var_18 = ((arr_0 [i_3 + 1]) ^ (arr_9 [i_3 + 2] [i_4 - 2] [i_0 - 1] [i_2 + 2] [i_3]));
                            arr_13 [i_4] [i_4] [i_2] = arr_9 [i_0] [i_1] [i_1] [10] [i_0];
                            var_19 = (max(var_19, ((((arr_2 [i_1]) * (((arr_1 [i_2]) / (arr_2 [i_0]))))))));
                        }
                        var_20 = (((arr_3 [i_0] [i_3]) ^ (arr_3 [i_0 - 1] [i_2 + 1])));
                    }
                }
            }
        }
        arr_14 [9] = (arr_9 [i_0] [i_0] [i_0] [i_0] [1]);
        arr_15 [11] = (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_21 = (((((max((arr_17 [i_5]), (arr_17 [i_6]))))) < (((((arr_19 [i_5] [i_6] [i_7]) + 9223372036854775807)) << (min((arr_20 [i_7] [i_6]), (arr_16 [i_7])))))));
                        var_22 = (min(var_22, ((min((((arr_20 [i_5] [i_6]) || (arr_22 [i_5]))), (((arr_23 [i_6] [i_6] [i_6]) < (arr_17 [i_5]))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            {
                                arr_33 [i_9] [i_9] [i_6] [i_7] [i_9] = (min((arr_25 [i_5] [i_6] [i_7] [i_9] [i_10] [i_5]), (min((arr_25 [i_7] [i_5] [i_7] [1] [i_10] [i_5]), (arr_25 [i_6] [i_6] [i_6] [5] [i_10] [i_9])))));
                                arr_34 [i_10] [i_7] [i_7] = (((arr_25 [11] [i_6] [i_6] [i_7] [i_9] [i_9]) && ((min((arr_16 [i_10]), 13227)))));
                                var_23 = (min(((max((arr_17 [i_5]), (arr_28 [i_5] [i_5] [i_7] [i_5] [i_5])))), (((arr_16 [14]) % (arr_29 [i_5] [i_7])))));
                            }
                        }
                    }
                    var_24 = (arr_19 [i_5] [i_6] [i_7]);
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 4; i_12 < 22;i_12 += 1)
                        {
                            {
                                var_25 = (((0 + 13227) + (min(-27888, 12900284305152400363))));
                                var_26 = (((arr_27 [i_5] [i_5] [i_5] [i_11]) & (max((((arr_38 [i_12] [i_11] [i_7] [2]) | (arr_37 [17]))), (arr_32 [i_5] [i_6] [i_6] [i_11] [i_6])))));
                            }
                        }
                    }

                    for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
                    {
                        var_27 = (min((arr_36 [i_5] [i_6] [i_7] [i_7] [i_13]), (min((arr_19 [8] [i_6] [i_6]), (arr_32 [22] [i_6] [i_7] [12] [i_5])))));
                        var_28 = (max(var_28, (min(27904, (arr_21 [i_5] [i_13] [i_13])))));
                    }
                    for (int i_14 = 0; i_14 < 24;i_14 += 1) /* same iter space */
                    {
                        var_29 = (((((max((arr_17 [i_5]), (arr_26 [22] [22] [i_7] [i_7]))) + ((((arr_40 [i_5] [21] [i_6] [i_5] [7]) | (arr_42 [6] [i_6] [i_7] [i_7] [i_14])))))) != (arr_21 [i_5] [7] [8])));
                        var_30 = (arr_35 [i_5] [i_7]);
                        var_31 |= arr_23 [i_7] [i_6] [i_5];
                        var_32 = ((((min((arr_41 [i_5] [i_6] [i_5] [i_14] [i_14]), ((max((arr_38 [i_5] [i_5] [i_6] [i_14]), (arr_31 [i_5] [i_6] [i_7] [9] [13]))))))) || (arr_17 [i_7])));
                    }
                }
            }
        }
        var_33 = (max(var_33, ((((arr_23 [i_5] [i_5] [i_5]) == (min((arr_23 [i_5] [i_5] [i_5]), (arr_41 [i_5] [i_5] [i_5] [i_5] [i_5]))))))));
    }
    var_34 = var_11;
    #pragma endscop
}
