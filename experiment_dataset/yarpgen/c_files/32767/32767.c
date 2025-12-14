/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_18 = (max((arr_4 [i_0] [i_1] [i_2] [i_0 - 1]), (min((arr_3 [i_0 + 1]), 153))));
                    arr_7 [13] [6] [i_1] [6] = ((114 ? ((14202 ? 121 : 171) : (arr_5 [i_1] [i_1]))));
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_19 = (((153 == 18943) < 171));
                    var_20 = (arr_0 [i_0] [5]);
                    arr_10 [2] [i_1] [i_3] = (arr_3 [i_0 - 1]);
                    var_21 = (min(((var_15 * ((0 >> (arr_3 [i_1]))))), 1));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_22 = arr_12 [i_0 - 2] [4] [6] [5] [i_3] [i_3];

                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_23 = 1488;
                            var_24 |= (arr_3 [i_4]);
                            var_25 = ((!(((~(arr_14 [i_0 + 2] [i_0 + 1] [i_0] [i_3] [i_0 + 2]))))));
                            arr_16 [i_3] [i_3] [i_3] = (min((((!(arr_13 [i_0] [15] [i_3] [i_3] [i_5])))), (arr_11 [i_0] [i_4] [i_0])));
                            var_26 = (min(var_26, ((max((min(var_8, var_4)), (arr_15 [i_0 + 1]))))));
                        }
                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            var_27 = ((~((max((((8 > (arr_0 [i_6] [i_4])))), (arr_18 [i_0] [i_0] [i_3] [i_4] [i_6]))))));
                            var_28 = (min(var_28, (((~(((arr_18 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_0 - 2]) ? ((max((arr_1 [i_0]), var_11))) : (arr_2 [i_3] [i_4]))))))));
                            arr_20 [i_0] [i_0 - 2] [7] [i_3] [i_0 - 2] = (min(38073, (max(((var_2 ? var_5 : var_9)), ((min((arr_15 [i_0]), var_16)))))));
                        }
                        var_29 += (38 != -18681);
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_30 = (min(var_30, ((((min(((max(var_5, (arr_12 [i_0 - 1] [i_1] [i_3] [i_7] [i_3] [i_0])))), ((65535 & (arr_9 [i_0] [i_0] [i_0]))))) & (arr_21 [i_0] [i_0]))))));
                        var_31 = (arr_11 [i_0 + 2] [i_1] [i_0 + 2]);
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                    {
                        arr_27 [i_0] [i_1] [i_3] [i_1] = ((((((arr_6 [i_1] [i_1] [i_8]) ? (arr_6 [i_0 + 1] [i_0 - 2] [i_0 + 2]) : var_16))) ? (((arr_6 [i_0] [15] [i_8]) << (var_12 - 1825550553))) : ((((!(arr_6 [i_0 + 2] [i_0 + 1] [i_0 + 1])))))));
                        var_32 = (((arr_17 [i_0] [i_0 + 2] [i_3] [i_8] [12] [i_8]) / ((~(arr_4 [i_0] [i_0 - 2] [i_0 + 2] [i_1])))));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                    {
                        arr_31 [i_0 + 1] [i_1] [i_0 + 1] [i_3] = (((arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [5] [i_0] [i_3]) / (arr_4 [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0])));
                        var_33 = (((arr_28 [i_0 - 2] [i_3] [i_0 - 1] [i_0 + 2]) | 121));
                    }
                }
                var_34 = (min(var_34, (~50941)));
                /* LoopNest 3 */
                for (int i_10 = 1; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            {
                                arr_40 [i_0 + 2] [i_0 + 2] [i_12] [i_11] [i_12] = (~var_1);
                                var_35 = ((min(-12, var_16)));
                                var_36 = (min((max((arr_28 [i_0] [i_12] [i_10 + 1] [i_0 + 1]), (-3235 / 12479024242219890882))), 13));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 13;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            {
                arr_45 [i_13] [i_14] [i_14] = var_13;
                var_37 = (arr_8 [i_13] [13]);
                var_38 = (((38 ? -2060390664 : -48)));
                /* LoopNest 2 */
                for (int i_15 = 1; i_15 < 10;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 13;i_16 += 1)
                    {
                        {
                            arr_50 [i_13] [i_14] [i_14] [i_15] [i_16] [i_16] = (arr_30 [i_15 + 3] [i_15 + 3] [i_15 + 2] [i_15 + 1]);
                            var_39 -= (max(((((max((arr_49 [4] [i_14] [i_14] [i_16]), (arr_42 [5])))) ? (arr_24 [i_15 + 1] [i_15 - 1]) : var_5)), (!14590)));
                            var_40 = (arr_47 [i_13] [i_14]);
                            var_41 = (max(var_41, ((((arr_11 [i_15 + 2] [i_15 + 2] [i_15 + 1]) ? ((var_4 * (arr_3 [i_16]))) : (arr_23 [i_15 - 1] [i_15 + 2] [i_15 - 1] [i_15 - 1] [i_15 - 1]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
