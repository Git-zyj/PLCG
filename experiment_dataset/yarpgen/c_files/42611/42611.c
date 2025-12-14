/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (((((((min((arr_0 [i_0]), (arr_1 [i_0])))) ? (var_6 / var_5) : (arr_0 [i_0])))) ? (min(((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0] [i_0])))), (var_2 & var_5))) : ((min(-var_2, ((min((arr_2 [i_0] [i_0]), (arr_1 [i_0])))))))));
        var_11 = (min(var_11, (arr_1 [18])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_12 *= var_9;
        arr_8 [10] &= (max(((min((arr_5 [6] [6]), (arr_5 [i_1] [16])))), (((arr_4 [i_1]) + var_5))));
        arr_9 [8] &= (((arr_7 [2]) ? ((var_1 ? (arr_6 [i_1]) : (arr_5 [i_1] [8]))) : ((((min(17821464452369519476, 17821464452369519476))) ? (arr_5 [i_1] [8]) : (arr_5 [i_1] [0])))));
        var_13 |= (min((((((max((arr_6 [i_1]), var_4))) ? ((max((arr_4 [i_1]), var_7))) : (arr_7 [1])))), (min((min(625279621340032162, 17821464452369519452)), (arr_7 [18])))));
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 18;i_4 += 1)
            {
                {
                    var_14 ^= (!((((arr_14 [i_2] [0] [i_4 - 3]) ? (arr_1 [12]) : (((arr_11 [10]) ? (arr_10 [i_3]) : (arr_4 [i_4])))))));
                    var_15 &= var_9;
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_16 *= (((((arr_13 [i_2 + 3] [i_6]) - (arr_10 [i_2 + 2]))) / (((arr_13 [i_6] [i_2]) - (arr_10 [i_5])))));
                                var_17 = (max(var_17, ((max((((arr_19 [i_2 + 1] [i_3] [i_6] [i_5] [i_3 - 2] [i_4 - 3]) ? (max((arr_17 [i_2] [i_2] [i_2]), var_1)) : (arr_18 [i_3] [i_3] [i_6]))), (((arr_13 [i_2 - 1] [i_2 + 4]) ? (arr_13 [i_2 - 1] [i_2 + 3]) : (arr_2 [i_2 + 2] [i_6]))))))));
                            }
                        }
                    }
                    var_18 = (((arr_1 [i_2]) >> (((arr_17 [i_2] [i_2] [i_2]) - 52277))));
                    var_19 = (max(var_19, (arr_10 [i_2])));
                }
            }
        }

        for (int i_7 = 1; i_7 < 17;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 18;i_10 += 1)
                    {
                        {
                            arr_29 [i_2] [i_2] [i_2] [i_2] [i_8] [i_9] [i_10] = ((((max((arr_27 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 - 1]), (arr_27 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 - 1])))) == ((-(arr_27 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 - 1])))));
                            var_20 -= var_5;
                        }
                    }
                }
            }
            arr_30 [16] &= (arr_4 [i_7]);
            var_21 *= (arr_19 [i_7 - 1] [i_7] [4] [i_7] [i_7] [i_7]);
        }
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            var_22 = (min(var_22, (arr_22 [i_11] [i_11])));
            var_23 = (max(var_23, (((min((var_5 & var_3), (arr_16 [i_2] [i_11] [4])))))));
        }

        for (int i_12 = 2; i_12 < 17;i_12 += 1)
        {
            arr_35 [i_2] = ((-(arr_4 [i_2])));
            var_24 ^= ((((arr_32 [i_12] [i_12] [i_12]) ? (arr_6 [i_2 + 1]) : (arr_6 [i_2 - 1]))));
        }
        for (int i_13 = 2; i_13 < 18;i_13 += 1)
        {
            var_25 = (min((max((arr_11 [i_2]), (arr_1 [i_2]))), (arr_2 [i_2] [i_2])));
            /* LoopNest 2 */
            for (int i_14 = 3; i_14 < 17;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 17;i_15 += 1)
                {
                    {
                        arr_44 [i_2] [i_13] [i_14] [i_2] = (((((-(((!(arr_26 [i_2] [i_13] [i_14] [i_15] [i_15]))))))) ? ((max((arr_10 [i_13 - 2]), (arr_26 [i_15] [i_15 + 1] [i_2 + 2] [i_2] [i_2])))) : var_6));

                        for (int i_16 = 0; i_16 < 19;i_16 += 1) /* same iter space */
                        {
                            var_26 += (((((~(arr_17 [i_2] [i_13 - 1] [i_13])))) ^ (arr_17 [i_15] [i_13 - 2] [i_14])));
                            var_27 *= (((min((var_1 + var_0), (arr_33 [i_14] [i_16]))) > (((arr_2 [i_2 + 4] [i_13]) ? (arr_39 [i_13] [i_14 + 1]) : (arr_2 [i_2 - 1] [i_13])))));
                            var_28 *= var_2;
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 19;i_17 += 1) /* same iter space */
                        {
                            arr_51 [i_2] [i_15] [i_14] [i_2] = (arr_10 [i_2]);
                            var_29 |= ((var_0 ? (arr_23 [i_14 - 1] [i_15 + 1] [i_13 + 1] [i_15]) : (arr_45 [i_13] [i_13])));
                            arr_52 [i_14] [i_15] [i_2] [i_2] = ((((!(arr_24 [i_2] [i_2]))) ? (arr_10 [i_2 + 1]) : (arr_40 [i_13 - 2] [i_14 - 2] [i_2])));
                        }
                        for (int i_18 = 0; i_18 < 19;i_18 += 1)
                        {
                            var_30 = (min((arr_11 [i_2]), (max(4294967286, 17821464452369519451))));
                            var_31 |= (((((((arr_19 [i_2] [i_13] [i_13] [i_14] [i_13] [i_18]) ? (arr_28 [i_2] [i_2] [i_2]) : var_9)))) ? ((min((arr_18 [i_18] [i_13] [i_2 + 1]), (arr_18 [i_2] [i_13 - 1] [i_13 - 1])))) : 17821464452369519451));
                            arr_55 [i_14] [i_15] [i_2] [i_15] [i_13] = ((!(arr_20 [i_2] [i_13] [i_13])));
                        }
                    }
                }
            }
        }
    }
    for (int i_19 = 2; i_19 < 8;i_19 += 1)
    {
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 11;i_20 += 1)
        {
            for (int i_21 = 1; i_21 < 7;i_21 += 1)
            {
                {
                    var_32 *= arr_22 [i_20] [i_20];
                    var_33 = (min((((-(arr_27 [i_19] [i_19] [i_19 - 1] [i_21] [i_21 - 1] [i_21])))), (max(625279621340032164, 4294967286))));
                    var_34 = var_9;
                    arr_64 [i_21] [i_21] [i_19] = (~(arr_17 [i_19] [i_19] [i_21]));
                }
            }
        }
        var_35 ^= (max(((((((arr_47 [i_19] [i_19] [i_19] [i_19]) ? (arr_59 [i_19] [i_19] [i_19]) : var_1))) ? ((max(var_2, (arr_48 [i_19] [i_19] [i_19] [i_19])))) : (max(var_3, var_5)))), var_8));
    }
    var_36 = var_9;
    #pragma endscop
}
