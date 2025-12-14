/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_4 & (((var_11 ? 4095 : var_6))));
    var_14 = (max(var_14, (1707254493 ^ var_7)));
    var_15 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = 8049005929557430892;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_17 = (max(((~(arr_0 [i_2 - 2]))), ((((arr_1 [i_0]) ? (arr_1 [i_2 + 2]) : -2080299358)))));

                            for (int i_4 = 0; i_4 < 16;i_4 += 1)
                            {
                                var_18 &= var_6;
                                arr_12 [i_0] [i_1] [i_1] [i_3] [i_4] = (((arr_4 [i_0]) ^ (((arr_2 [i_0] [i_1] [i_2 + 1]) ? (arr_7 [i_1]) : (max(var_5, var_9))))));
                                var_19 = ((min(439148809, (arr_5 [i_2 - 2] [i_2 + 1] [i_2 + 1]))));
                                arr_13 [i_4] [12] [i_2] [i_1] [i_0] [i_0] = (max((((((((arr_1 [i_0]) ? var_7 : (arr_8 [i_3])))) ? (max(var_4, var_2)) : (arr_5 [i_2 - 2] [i_2 - 2] [i_2 + 2])))), ((min((arr_10 [i_4] [i_4] [i_3] [i_0] [i_0] [i_0]), var_0)))));
                            }
                            for (int i_5 = 0; i_5 < 16;i_5 += 1)
                            {
                                var_20 = ((~(arr_11 [i_2] [i_2 - 2] [i_2] [i_2 + 2] [i_2])));
                                var_21 = (35184372088832 / 35184372088832);
                                var_22 *= (max((((arr_2 [i_0] [i_1] [10]) ^ (max(-8271685587970069640, -8049005929557430911)))), (((arr_9 [i_0] [i_1] [i_2 + 1] [i_3] [i_5] [i_0] [i_2 - 2]) ? (min((arr_0 [i_3]), var_10)) : (arr_11 [i_2 + 2] [i_2] [i_2 - 1] [i_2 - 1] [9])))));
                                var_23 = arr_2 [i_3] [i_3] [i_1];
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_6 = 1; i_6 < 6;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 3; i_7 < 8;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    {
                        arr_28 [i_6] [i_6] [i_6] [i_6 + 4] = var_4;
                        arr_29 [i_8] [i_8] [i_6] [i_9] = -var_5;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 7;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            {
                                arr_41 [i_6] = (((min((((arr_3 [i_12]) ? (arr_18 [i_6]) : (arr_31 [i_6]))), ((min(var_7, (arr_30 [i_6]))))))) ? ((min(8935141660703064064, var_5))) : ((min((min(var_8, 2080299357)), 38236))));
                                var_24 = (((min((min(2080299357, 2147483645)), (arr_27 [i_6 + 2] [i_6 - 1] [i_6] [i_10 + 3])))) ? ((((((min(var_6, (arr_9 [i_6] [i_6] [i_6] [i_12] [i_12] [i_6] [0])))) && (arr_2 [i_11] [i_12] [i_13]))))) : -1707254520);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 9;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 9;i_15 += 1)
                        {
                            {
                                var_25 = (((arr_26 [i_11] [i_15] [i_15 + 1] [i_15] [i_6] [i_15 + 1]) && (arr_42 [i_6 + 3] [i_10] [i_11] [i_6])));
                                var_26 -= ((-(arr_21 [i_11])));
                            }
                        }
                    }
                    var_27 += var_8;
                }
            }
        }

        /* vectorizable */
        for (int i_16 = 0; i_16 < 10;i_16 += 1)
        {
            arr_52 [i_6] [i_6] = (((((arr_16 [8] [i_16]) & 123)) << (((arr_48 [i_6] [i_16]) - 25815))));
            var_28 = (((((var_1 / (arr_26 [i_16] [i_16] [i_16] [i_16] [i_6] [i_16])))) ? var_6 : var_9));
            var_29 = 439148821;
            var_30 = (arr_22 [i_6] [i_6]);
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 10;i_17 += 1)
        {

            for (int i_18 = 0; i_18 < 10;i_18 += 1)
            {
                arr_57 [i_6] [i_17] [i_6] = (arr_10 [i_6] [i_6] [i_6 - 1] [1] [i_18] [i_18]);
                var_31 = (((arr_47 [i_6]) ? (arr_47 [i_6]) : (arr_26 [i_6] [i_6] [i_17] [i_6] [i_6] [i_18])));
                var_32 = (arr_9 [i_6] [i_6] [i_6 - 1] [i_18] [i_18] [i_18] [i_18]);
                var_33 = (max(var_33, ((((-(arr_8 [i_17]))) / (arr_36 [i_18] [i_18] [i_18] [i_18] [i_6 + 1] [i_6 + 1])))));
            }
            var_34 = var_8;
        }
        for (int i_19 = 1; i_19 < 8;i_19 += 1)
        {
            var_35 = ((-var_8 ? (arr_11 [i_6] [i_19 + 2] [i_19 + 2] [i_19] [i_19 + 1]) : ((((min((arr_46 [i_6] [i_6] [i_6] [3] [i_6] [i_6]), (arr_25 [i_6] [i_6] [i_6] [i_19] [i_19 + 2])))) ? (arr_56 [i_19 + 2] [i_6] [i_6] [i_6 - 1]) : (((arr_22 [i_6] [i_6]) ? (arr_11 [4] [i_19 + 1] [i_19 + 2] [i_19 + 2] [4]) : var_4))))));
            arr_60 [i_6] = ((arr_38 [i_6]) % (((((65535 ? -439148812 : (arr_43 [i_19 + 1] [i_6] [i_6] [i_6])))) ? ((var_5 ? var_1 : (arr_15 [8] [8]))) : ((((arr_1 [i_19]) ? (arr_1 [i_6]) : (-2147483647 - 1)))))));
        }
        var_36 = (max((min(((min(var_7, (arr_48 [i_6 + 3] [i_6 + 3])))), (max((arr_14 [i_6]), (arr_21 [i_6]))))), (((arr_54 [i_6 + 1]) ? ((1751847202 ? -8049005929557430911 : 4286599473294310176)) : var_7))));
    }
    #pragma endscop
}
