/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = 18446744073709551615;
        arr_4 [i_0] |= (min((((arr_2 [i_0]) ? (max(1, (arr_3 [i_0]))) : ((var_2 ? -19402 : (arr_3 [i_0]))))), var_10));
        arr_5 [i_0] = (min((min(var_16, (arr_0 [i_0]))), ((((arr_3 [i_0]) == var_10)))));
        arr_6 [i_0] = ((((min((var_17 | 4), 1152921504573292544))) ? (arr_2 [i_0]) : (((arr_1 [i_0]) ? (min(181, var_13)) : var_14))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_10 [9] [i_1] = var_2;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    arr_15 [i_3] [i_1] [i_1] [i_1] = (((((-6299708597622918142 ? -6299708597622918142 : 4294967295))) ? ((((max(var_10, var_13))) ? 667764210 : (min(-1177037006590489961, 6299708597622918133)))) : var_13));
                    arr_16 [i_1] = (((133 ? 75 : (arr_8 [i_1]))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_19 = (min((arr_3 [13]), (min((arr_8 [i_4]), (arr_3 [i_4])))));
                    arr_22 [i_4] [i_5] = (min((arr_12 [i_4] [i_5]), ((min(var_6, (arr_12 [i_1] [i_5]))))));
                    arr_23 [i_1] [i_1] = (max(var_10, var_11));
                    arr_24 [i_5] [i_5] [i_4] [i_1] = (arr_7 [3]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 8;i_7 += 1)
            {
                {
                    var_20 *= var_9;

                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_21 += ((((min((min((arr_20 [i_1] [2] [i_8]), (arr_13 [i_8]))), var_3))) ? var_13 : var_3));
                        var_22 = (min(-6299708597622918112, (((-(arr_21 [i_6] [i_7 + 1] [i_6] [i_7]))))));
                        arr_32 [10] [10] = var_6;
                        arr_33 [i_1] = (min(3795365419, (min(var_5, var_9))));
                    }
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            var_23 = var_1;
                            arr_39 [i_1] [7] [i_7 - 3] [i_9 - 1] [i_9 - 1] [i_10] [i_10] = 481621469;
                        }
                        var_24 = ((((arr_14 [i_9 - 1] [i_7 + 3] [i_7 + 3] [i_7 + 2]) ? ((max(var_2, 75))) : 84)));

                        for (int i_11 = 2; i_11 < 9;i_11 += 1) /* same iter space */
                        {
                            arr_42 [7] [7] [i_9] [i_11] = (min((min((arr_27 [i_9 - 1] [i_9 - 1]), (arr_27 [i_9 - 1] [i_9 - 1]))), -85));
                            var_25 = ((-(arr_21 [i_1] [i_6] [i_9 - 1] [1])));
                            var_26 = (min(331354379, ((~(arr_2 [i_7 - 3])))));
                        }
                        for (int i_12 = 2; i_12 < 9;i_12 += 1) /* same iter space */
                        {
                            var_27 = (((((((var_12 || (arr_28 [i_6] [i_9] [i_12 - 2])))) >= ((max(84, var_15))))) && ((((arr_44 [i_1] [i_7 - 1] [i_7] [i_7] [i_7]) ? (arr_44 [i_6] [i_7 - 3] [7] [i_12] [i_7 - 3]) : 19401)))));
                            var_28 = (min(((~(arr_31 [i_6] [i_7 + 1] [i_7 + 1] [i_7 - 2] [i_12 - 1] [5]))), 32767));
                        }
                        for (int i_13 = 2; i_13 < 9;i_13 += 1) /* same iter space */
                        {
                            var_29 = ((var_3 ? (min(3034554696448559400, var_2)) : var_0));
                            arr_48 [i_1] [i_6] [i_7 + 3] [i_9] [i_13] = (((arr_40 [i_13 - 1] [i_13] [i_13] [i_7 - 1] [i_6]) ? ((6299708597622918141 ? var_0 : (arr_40 [i_13 + 1] [i_7 + 3] [i_7 + 1] [i_7 + 1] [i_1]))) : (arr_40 [i_13 - 2] [7] [i_13 + 2] [i_9] [i_9])));
                        }
                        var_30 = ((var_14 ? (arr_18 [i_6] [i_1]) : (arr_30 [i_9 - 1] [i_9 - 1] [i_7 + 2])));
                    }
                }
            }
        }
    }
    var_31 = ((13 + ((min(var_16, var_8)))));
    var_32 &= var_15;
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 14;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            for (int i_16 = 4; i_16 < 13;i_16 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 14;i_18 += 1)
                        {
                            {
                                arr_64 [i_15] [i_17] [i_15] [i_15] = var_6;
                                var_33 = (min(var_33, (max((arr_52 [i_16 + 1] [i_16 - 1] [i_16 - 4]), (min(((max(var_13, (arr_61 [i_16] [i_14] [i_14])))), (min(6299708597622918133, (arr_0 [i_16])))))))));
                            }
                        }
                    }
                    arr_65 [i_14] [i_15] [i_16] [i_16 - 1] = (((((min((arr_2 [i_14]), (arr_2 [i_15]))))) == 11095642809248689864));
                    /* LoopNest 2 */
                    for (int i_19 = 3; i_19 < 12;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 14;i_20 += 1)
                        {
                            {
                                arr_70 [i_16 + 1] [i_16 + 1] = min(var_5, (min((arr_69 [i_16] [i_16] [i_16 + 1] [i_16] [i_16]), var_5)));
                                var_34 = (min(var_34, ((min((min(-871613573, (arr_0 [9]))), ((max(var_15, (min(var_4, var_11))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_35 &= 235;
    #pragma endscop
}
