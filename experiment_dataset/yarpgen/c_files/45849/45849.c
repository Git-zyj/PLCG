/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_21 = (arr_2 [i_0]);

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] [i_2] = (var_19 + (arr_2 [i_1 + 3]));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_22 = (max(((min(var_18, (arr_17 [i_2] [i_3])))), (min(3829130265975526010, 42))));
                                arr_18 [i_4] [i_3] [i_3] [i_2] [i_1] [i_3] [i_0] = (((arr_12 [i_4] [i_3] [i_3 + 1] [i_3]) ? (arr_0 [i_1 + 2] [i_1 + 2]) : (!var_6)));
                                arr_19 [i_0] [i_1] [i_3] = (arr_13 [i_1 - 1] [i_1 - 1] [i_3] [i_1] [i_3] [i_3 + 3]);
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = ((((min((arr_11 [i_1 - 1]), ((3962963936 ? var_1 : -22))))) / (min(var_12, var_9))));
                            }
                        }
                    }
                    var_23 |= ((254 != (max((max(801674276, var_18)), (((5462653717014457361 ? 138 : 126)))))));
                }
                for (int i_5 = 4; i_5 < 17;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        arr_28 [i_0] [i_1] [i_5] [i_6] = var_11;

                        for (int i_7 = 2; i_7 < 17;i_7 += 1)
                        {
                            arr_33 [i_0] [i_1] = (max(var_6, ((max((arr_26 [i_0] [i_1] [i_7 + 3] [i_7] [i_1 + 1]), (arr_26 [i_0] [i_1] [i_7 + 3] [i_6] [i_1 + 2]))))));
                            var_24 = (max(var_24, ((min(-22, -22)))));
                            arr_34 [i_0] [i_0] [i_1] [i_5] [i_5] [i_6] [i_7] = var_9;
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_25 = (min(((max((arr_17 [i_1] [i_0]), (arr_17 [i_0] [i_0])))), (((arr_17 [i_1] [i_0]) << (((arr_17 [i_1] [i_0]) - 228))))));
                            arr_37 [i_0] [i_5] [i_5] [i_6] [i_8] &= (arr_31 [i_8] [i_6] [i_0]);
                        }
                    }
                    for (int i_9 = 1; i_9 < 18;i_9 += 1)
                    {
                        var_26 = (max(var_26, 21));
                        arr_41 [i_9] [i_5] [i_1] [i_0] = 1383656246910833779;
                        arr_42 [i_9] [i_1] [i_5] [i_9] [i_5] [i_0] = ((((max(((max((arr_25 [i_0] [i_0] [i_1] [i_1] [i_5] [i_9]), var_6))), (max(17717075304260209290, var_10))))) ? var_10 : var_13));
                        var_27 += (min((arr_35 [i_5 + 3] [i_5] [i_5] [i_5] [i_5 - 1]), (arr_15 [i_5 - 3] [i_5] [i_5] [i_5] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_10 = 2; i_10 < 17;i_10 += 1)
                    {
                        var_28 = (min(var_28, ((((arr_27 [i_5 + 3] [i_5 - 1] [i_1 + 2] [i_1 + 3] [i_1 - 1]) ^ var_2)))));
                        arr_45 [i_0] [i_0] [i_1] [i_5] [i_10] = ((~(arr_8 [i_10 - 2] [i_5 - 4] [i_1 + 3])));
                    }
                    var_29 = var_5;
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    var_30 = (min(var_30, var_3));
                    var_31 = ((var_2 ? (arr_15 [i_0] [i_1 + 3] [i_1 + 1] [i_11] [i_11]) : (arr_15 [i_0] [i_1 + 3] [i_1 + 1] [i_11] [i_11])));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 19;i_13 += 1)
                        {
                            {
                                var_32 = (min(var_32, (((var_17 ? (arr_32 [i_13] [i_13] [i_13 - 1] [i_1 + 2]) : (arr_50 [i_13 - 3] [i_13] [i_13] [i_13] [i_13 - 3] [i_1 + 3]))))));
                                var_33 = (((arr_30 [i_0] [i_1 - 1] [i_11] [i_12] [i_13]) ? -27 : (arr_30 [i_12] [i_12] [i_11] [i_0] [i_13])));
                                arr_53 [i_13] = (arr_48 [i_0] [i_1] [i_12] [i_13]);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    var_34 = (max(var_34, 127));
                    arr_56 [i_0] [i_14] &= ((-(arr_48 [i_0] [i_0] [i_14] [i_1 + 3])));
                    /* LoopNest 2 */
                    for (int i_15 = 3; i_15 < 19;i_15 += 1)
                    {
                        for (int i_16 = 2; i_16 < 19;i_16 += 1)
                        {
                            {
                                var_35 = ((3897432706207383274 ? 238 : 729668769449342326));
                                var_36 = (arr_4 [i_16] [i_14]);
                                arr_63 [i_15] [i_1] = (((arr_49 [i_0] [i_1] [i_15] [i_16]) ^ (arr_55 [i_0] [i_0])));
                                var_37 = (max(var_37, (27 % var_13)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
