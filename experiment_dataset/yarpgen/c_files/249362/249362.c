/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_10 = ((min((arr_3 [i_1] [i_2 - 1] [i_3]), (min((arr_10 [i_2] [i_1] [i_1]), var_9)))));
                                var_11 += (arr_1 [i_3]);
                            }
                        }
                    }
                    var_12 = (max((arr_12 [i_2] [i_2 + 1] [i_2] [i_0] [i_2] [i_0] [i_0]), ((((arr_11 [i_2 - 3] [i_2] [i_2 + 2] [i_2 - 1] [i_2 - 2] [i_2 - 3]) <= (arr_11 [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2 - 1]))))));
                }
            }
        }
    }
    var_13 = var_6;
    var_14 = var_8;
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            {
                arr_17 [i_6] [i_6] [i_5 + 1] = (arr_14 [i_5]);
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                arr_26 [i_5 + 2] [i_6] [i_7] [i_8] [i_9] = (min(((min((max(var_1, (arr_23 [i_5] [i_6] [i_8] [i_9]))), (arr_22 [i_5 - 1] [i_6] [i_7] [i_8 - 2] [i_9] [i_9])))), ((-(min((arr_24 [i_6]), (arr_18 [i_5] [i_6] [i_8 + 1])))))));
                                var_15 = (max(var_15, (((var_9 ? (((-(min((arr_15 [i_5 + 1] [i_8] [i_8]), var_1))))) : ((537202121 ? -6010043147421472548 : 0)))))));
                                var_16 = ((((max((arr_18 [i_8 - 2] [i_7] [i_6]), var_0))) ? (!1179674327) : var_2));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 12;i_11 += 1)
                    {
                        {
                            var_17 = (max(var_17, (((arr_30 [i_5] [i_6] [i_6] [i_10] [i_11]) ? ((min((min((arr_22 [i_10] [i_6] [i_10] [i_11 - 1] [i_10] [i_5 - 1]), var_1)), (((-(arr_20 [i_11]))))))) : (arr_21 [i_11] [i_11] [i_11] [i_11] [i_6] [i_5])))));
                            var_18 = ((((((arr_30 [i_5 + 2] [i_11 - 2] [i_10] [i_11] [i_5 - 1]) / (((arr_22 [i_5 + 2] [i_6] [i_6] [i_6] [i_10] [i_11 - 2]) ? var_2 : (arr_29 [i_5 - 1] [i_6] [i_5])))))) ? ((~(((arr_15 [i_5] [i_6] [i_5 + 1]) ? var_5 : var_1)))) : (max((arr_15 [i_5] [i_6] [i_5 + 1]), ((max(1, -18582)))))));
                            arr_31 [i_5 + 1] [i_6] [i_10] [i_6] = (((min((((var_9 ? var_2 : var_2))), (((arr_19 [i_5]) ? var_5 : (arr_29 [i_5 - 1] [i_6] [i_11 - 2]))))) << var_7));
                        }
                    }
                }

                for (int i_12 = 2; i_12 < 10;i_12 += 1)
                {
                    arr_36 [i_5] [i_6] = min(var_8, (arr_25 [i_12 - 2] [i_12] [i_12] [i_12 + 3]));

                    /* vectorizable */
                    for (int i_13 = 3; i_13 < 12;i_13 += 1)
                    {

                        for (int i_14 = 0; i_14 < 13;i_14 += 1) /* same iter space */
                        {
                            arr_43 [i_14] [i_6] [i_12 - 1] [i_6] [i_5 + 2] = var_8;
                            var_19 = (((arr_15 [i_5 + 1] [i_6] [i_12]) || var_3));
                            arr_44 [i_6] [i_12] [i_6] = (((arr_39 [i_5] [i_5 + 2] [i_5 + 1] [i_6]) ? (arr_13 [i_5 + 2] [i_6]) : ((var_9 ? var_2 : var_7))));
                            var_20 = ((!(!var_0)));
                        }
                        for (int i_15 = 0; i_15 < 13;i_15 += 1) /* same iter space */
                        {
                            arr_48 [i_5 + 2] [i_6] [i_6] [i_13] [i_15] [i_6] = (~20106);
                            arr_49 [i_5] [i_6] [i_12 + 1] [i_13 - 1] [i_6] [i_15] [i_12] = ((-(var_9 || var_6)));
                        }
                        var_21 = (arr_41 [i_13 - 2] [i_6] [i_12 + 1] [i_13 - 3] [i_5 - 1] [i_13 - 2]);
                        var_22 = (((arr_24 [i_6]) ? (arr_38 [i_5 + 1] [i_12 - 1] [i_13 + 1]) : (((arr_35 [i_5 - 1] [i_5 + 2] [i_12 + 1] [i_13]) ? var_2 : var_4))));
                    }
                    for (int i_16 = 0; i_16 < 13;i_16 += 1)
                    {
                        var_23 = ((((max(((((arr_14 [i_6]) ? var_7 : (arr_23 [i_16] [i_12 - 1] [i_6] [i_5])))), (min(var_3, var_0))))) ? (~var_3) : ((~((-(arr_18 [i_5] [i_6] [i_16])))))));
                        var_24 ^= (max(((((min((arr_30 [i_16] [i_16] [i_12 + 3] [i_6] [i_5 + 2]), var_9))) ? var_2 : (((101 << (649251460 - 649251440)))))), var_7));
                        var_25 = (max(var_25, (arr_20 [6])));
                        arr_52 [i_6] [i_12] [i_6] [i_6] [i_5 - 1] [i_6] = var_7;
                    }
                }
                arr_53 [i_6] [i_6] [i_6] = arr_24 [i_6];
            }
        }
    }
    #pragma endscop
}
