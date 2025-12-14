/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_14 = ((-(min(8590717563603235463, 3287498747))));
                                var_15 = (min(var_15, (((((((~(arr_4 [i_2] [i_3] [i_4])))) ? (min(486960188, var_12)) : ((((!(arr_0 [i_3])))))))))));
                            }
                        }
                    }
                    var_16 |= 44661;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_17 -= (((((arr_7 [i_6] [i_6] [i_0 + 3] [i_0 + 3]) ? (arr_7 [i_6] [i_0 + 2] [i_0 - 1] [i_0 - 1]) : (arr_7 [i_6] [i_6] [i_0 + 3] [2]))) / ((((var_13 ? (arr_7 [i_5] [i_1] [14] [i_5]) : var_12))))));
                                var_18 = ((-((((((arr_9 [9] [9] [i_2] [i_5] [i_6]) ? (arr_14 [i_6] [i_5] [i_1] [i_1]) : var_4))) ? 3655344287 : (((max((arr_1 [i_0 + 1]), (arr_5 [i_0] [i_0] [i_2] [i_5])))))))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [i_0] = ((((((min(var_12, var_6)) - (((var_1 ? var_2 : (arr_10 [0] [i_1] [i_1] [i_1] [i_1]))))))) ? (((~(!var_8)))) : var_9));
                }
            }
        }
    }
    var_19 = (max(var_19, ((max((((var_8 ? var_4 : var_8))), ((~(max(1007468548, 1971)))))))));

    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_20 = (arr_14 [i_7] [i_7] [i_7] [i_7]);
        var_21 = ((var_13 ? (((((min(var_13, var_12))) ? var_4 : (arr_5 [i_7] [i_7] [i_7] [i_7])))) : (max(1971, 6254597105504307533))));
        var_22 = (max(var_5, (max((arr_3 [i_7] [i_7]), var_8))));
        var_23 = (((((((arr_10 [i_7] [i_7] [i_7] [i_7] [i_7]) ? var_9 : var_13)))) ? (arr_13 [i_7] [i_7] [i_7] [i_7] [i_7]) : (max((arr_16 [i_7]), (arr_1 [i_7])))));
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 13;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 13;i_10 += 1)
            {
                {
                    var_24 = ((14010341159300162751 ? ((-(arr_24 [i_8] [i_8] [i_8]))) : 30873));
                    var_25 |= (((arr_2 [i_10] [i_9]) ? (arr_3 [i_10 + 1] [i_8 - 1]) : (arr_1 [i_10 + 1])));
                    var_26 = (((arr_2 [i_8] [i_9 + 1]) ? (arr_2 [i_10] [i_9 + 1]) : (arr_2 [i_10] [i_9 + 1])));
                }
            }
        }
        var_27 = (((!(arr_24 [i_8] [i_8] [i_8 + 1]))));
        /* LoopNest 2 */
        for (int i_11 = 2; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                {
                    var_28 = (max(var_28, (((((((arr_19 [i_12]) ? (arr_23 [i_8 - 2] [i_11 + 1] [i_11 + 1]) : (arr_23 [i_8] [i_11 + 1] [i_12])))) ? (((arr_27 [i_8 - 1] [i_8 - 2]) ? (arr_26 [i_8] [i_11]) : (arr_4 [i_8] [i_8] [i_8 - 1]))) : var_3)))));

                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        var_29 = ((3 > (arr_26 [i_11] [i_11])));
                        var_30 = (max(var_30, (arr_20 [i_12] [i_12])));
                    }
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        var_31 = ((3013322023 ? var_12 : (((-(arr_20 [13] [i_12]))))));

                        for (int i_15 = 1; i_15 < 1;i_15 += 1)
                        {
                            var_32 = ((4436402914409388882 ? 14571 : 2442471653));
                            var_33 = (arr_7 [i_14] [i_14] [i_12] [i_14]);
                            var_34 -= ((-((1 ? 1 : var_13))));
                            var_35 = (~(arr_10 [i_8 - 1] [i_11] [i_11 - 2] [i_11 - 2] [i_15 - 1]));
                        }
                        var_36 = ((~(arr_31 [i_11 - 2] [i_11 + 1] [i_11 + 1] [i_11 + 3] [i_11 + 3] [i_11 + 1])));
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 14;i_17 += 1)
                        {
                            {
                                var_37 = ((var_8 ? (arr_39 [i_8 - 2] [i_11 + 2] [i_12] [i_12] [i_17]) : (arr_21 [i_8 - 1] [i_16] [11])));
                                var_38 = ((-11 ? 1 : 50));
                                var_39 = var_5;
                            }
                        }
                    }
                    var_40 -= (((~(arr_21 [i_8 - 2] [1] [7]))));
                }
            }
        }
    }
    #pragma endscop
}
