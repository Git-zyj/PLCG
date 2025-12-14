/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = (arr_1 [i_0]);
                arr_6 [i_0] [i_0] = 1;
                var_14 = (max(var_14, ((((((var_3 ? 1 : var_1))) ? (min(((var_10 ? var_8 : (arr_5 [i_0]))), ((max((arr_2 [i_0] [i_0]), var_10))))) : 12)))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_15 = (max(((min((arr_8 [i_0]), (arr_8 [i_0])))), (((arr_8 [i_0]) ? var_3 : (arr_8 [i_0])))));

                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        var_16 = (min(var_16, ((max((((min(var_2, (arr_11 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0]))))), ((min(1, 70))))))));
                        var_17 = (max(var_17, ((max((arr_5 [i_0 - 3]), (arr_0 [i_0 - 3]))))));
                        arr_12 [i_0] [i_0] = (!(arr_10 [i_2] [14]));
                        var_18 = (((var_10 ? (arr_5 [i_2]) : (max((arr_0 [4]), var_4)))));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_19 -= (min(var_0, ((var_3 ? (arr_9 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 1]) : (arr_9 [i_0] [i_0 - 3] [i_0 - 1] [i_0])))));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_20 = (min(var_20, var_0));
                            arr_18 [i_5] [i_0] [i_2] [i_0] [4] = ((var_10 ? var_0 : (arr_9 [i_0 - 3] [i_0] [i_0] [i_0])));
                        }
                        var_21 = (min(var_0, (min(var_9, (arr_0 [i_0 + 1])))));
                    }
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    var_22 = (arr_2 [i_0] [10]);
                    arr_21 [i_0] = (((arr_17 [i_0] [i_0] [i_0 + 2] [i_0 - 3] [i_0 - 1]) ? var_7 : (arr_5 [i_0 - 1])));
                    var_23 += var_9;
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_24 = (max(var_24, ((min((min((arr_9 [i_0 - 3] [i_1 + 1] [i_6] [i_7 + 2]), (arr_26 [i_0] [i_1] [i_6] [i_7 + 1] [i_7]))), var_11)))));
                                var_25 = -var_4;
                            }
                        }
                    }
                }
                for (int i_9 = 1; i_9 < 22;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            {
                                arr_36 [i_11] [i_0] [i_9] [i_9] [i_1 - 1] [i_0] [i_0] = (max(var_11, (min(var_2, (arr_35 [i_0] [i_1] [i_9] [i_10])))));
                                arr_37 [i_0] = ((var_10 ? (arr_10 [i_9 - 1] [i_0]) : var_5));
                            }
                        }
                    }
                    var_26 = min((arr_22 [i_9] [i_0] [i_1 - 2] [i_1 + 1] [i_1] [i_0]), var_10);
                }
                /* vectorizable */
                for (int i_12 = 3; i_12 < 22;i_12 += 1)
                {
                    var_27 = ((var_10 ? var_4 : (arr_25 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_1 - 1])));
                    var_28 = (!var_2);
                    var_29 = var_11;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 3; i_13 < 16;i_13 += 1)
    {
        for (int i_14 = 1; i_14 < 13;i_14 += 1)
        {
            {
                var_30 = (max(((min(var_10, var_10))), (~1)));
                arr_47 [i_13] [i_13] [i_14] = (min((((((64766 ? 1 : 1))) ? (max(var_4, (arr_28 [i_13] [i_13]))) : var_2)), (((8 ? 128 : -1)))));
                var_31 = (arr_38 [7]);
            }
        }
    }
    var_32 = (min(-20, 1));
    #pragma endscop
}
