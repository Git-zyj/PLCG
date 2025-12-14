/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        var_18 = (arr_0 [i_0]);

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            arr_14 [6] [1] [i_1] [i_1] [0] [i_0] |= (((arr_11 [i_1] [i_2 + 2] [i_2 + 2] [i_3 + 3]) ? (arr_12 [9] [i_2 + 3] [9] [i_3 + 1] [4]) : var_13));
                            var_19 += (!(((var_15 ? var_5 : (arr_6 [2] [11])))));
                        }
                        for (int i_5 = 2; i_5 < 9;i_5 += 1)
                        {
                            var_20 = (max(var_20, (arr_12 [i_0 - 2] [8] [2] [8] [8])));
                            var_21 = (max(var_21, (arr_17 [i_0 - 1] [i_0 - 1] [7] [11] [i_3] [i_5 - 2])));
                            var_22 = (arr_11 [i_3] [i_3] [i_3 - 1] [i_3 + 3]);
                        }
                        for (int i_6 = 2; i_6 < 10;i_6 += 1)
                        {
                            var_23 = var_4;
                            var_24 += (1 >= 1);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_25 = ((var_3 ? var_2 : (arr_3 [i_0 - 2])));
                                arr_26 [i_7] = (((((var_11 ? var_14 : var_10))) ? var_16 : var_12));
                                var_26 |= var_6;
                            }
                        }
                    }
                }
            }
        }
        arr_27 [i_0 - 1] [i_0 + 1] = ((-(arr_21 [6] [6] [2] [6] [i_0 + 1] [i_0])));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    {
                        var_27 = ((~(arr_4 [i_0 - 2] [i_10 + 2] [i_10 - 3])));
                        var_28 = (arr_12 [i_10] [i_10 + 1] [i_10] [i_10 + 1] [i_10 - 3]);
                        arr_35 [i_0 - 1] [8] [8] [i_9] [9] [8] = (((var_15 + (arr_12 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 2]))));
                    }
                }
            }
        }
        var_29 &= (arr_2 [3] [i_0]);
        var_30 = (arr_16 [i_0 + 1] [2] [i_0 + 1]);
    }
    for (int i_12 = 0; i_12 < 15;i_12 += 1)
    {
        var_31 = (arr_38 [1] [i_12]);
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 11;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 1;i_14 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        for (int i_16 = 2; i_16 < 12;i_16 += 1)
                        {
                            {
                                var_32 = (arr_42 [i_12] [i_15] [i_14] [i_12]);
                                arr_52 [2] &= (((arr_41 [0] [0] [0]) ? ((((min(1, (arr_39 [12] [12] [1])))) ? var_10 : ((min((arr_44 [1] [10] [9] [1]), (arr_40 [6] [i_16] [i_16 - 1])))))) : ((((var_5 ? (arr_38 [10] [8]) : var_1))))));
                                var_33 = (min(var_33, (((((((arr_46 [i_13 + 2] [i_14 - 1] [i_16 + 2] [i_16 - 2]) ? var_16 : (arr_40 [i_13 + 3] [i_16 + 1] [i_14 - 1])))) ? (~var_4) : ((((max(var_15, var_5))) ? (arr_38 [6] [4]) : (arr_39 [i_12] [6] [6]))))))));
                                var_34 = (min(var_34, (((((max((arr_37 [0]), (arr_41 [6] [10] [i_16 + 2])))) ? var_14 : (arr_49 [1] [1] [8] [8] [1]))))));
                            }
                        }
                    }
                    var_35 = (max(var_35, (+-1)));
                }
            }
        }
    }
    var_36 = (max(var_36, var_16));
    /* LoopNest 3 */
    for (int i_17 = 0; i_17 < 22;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 22;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 22;i_19 += 1)
            {
                {
                    var_37 += ((var_12 ? (min((max(var_14, (arr_57 [i_17] [14] [4] [i_18]))), ((min((arr_56 [i_17] [i_17]), var_5))))) : ((((arr_54 [i_17]) ? (arr_54 [i_19]) : (arr_54 [11]))))));
                    /* LoopNest 2 */
                    for (int i_20 = 1; i_20 < 21;i_20 += 1)
                    {
                        for (int i_21 = 3; i_21 < 21;i_21 += 1)
                        {
                            {
                                var_38 ^= ((-((var_1 ? var_4 : (!var_5)))));
                                var_39 = (min(var_39, (((((((var_1 ? var_1 : (arr_61 [7] [0] [0] [7] [7]))))) <= 536838144)))));
                                var_40 = ((((((((1 ? 1 : 93))) ? (arr_60 [6] [6] [6] [6]) : ((var_2 ? var_5 : 9223372036854775807))))) ? (((((var_5 ? var_11 : (arr_57 [i_18] [2] [5] [4])))))) : var_8));
                                arr_63 [13] [7] [2] |= ((!((min((((arr_53 [15] [14]) ? (arr_56 [i_17] [i_17]) : (arr_54 [i_18]))), (max(var_16, (arr_55 [16]))))))));
                            }
                        }
                    }
                    var_41 ^= var_0;
                }
            }
        }
    }
    #pragma endscop
}
