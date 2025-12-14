/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] = ((-3538660188642325812 ? var_0 : (arr_0 [i_0])));
        arr_4 [i_0] = (min((max((arr_0 [i_0 + 2]), var_4)), ((max((min(var_4, 0)), (((arr_1 [i_0]) && (arr_0 [i_0]))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    {
                        var_13 -= var_6;
                        var_14 = (((((min((arr_11 [i_0] [i_0] [1] [i_1] [i_0]), var_3)))) * ((((min(var_8, (arr_6 [i_1] [i_1])))) ? (((0 ^ (arr_5 [i_3] [i_1])))) : (1 % -6874617355654405774)))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_15 = (1 + 244);
        arr_16 [i_4] = (min(((var_3 % ((min(var_6, 181))))), ((((arr_12 [i_4]) || 132)))));
        var_16 -= (max((arr_13 [i_4] [i_4]), -9223372036854775799));
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {

        for (int i_6 = 3; i_6 < 15;i_6 += 1)
        {
            var_17 -= ((var_3 ? (((max(((max(0, var_5))), 11)))) : var_9));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        arr_27 [i_5] [i_6] [6] [i_8] = (max((~var_4), ((max(var_12, ((((arr_24 [i_5] [i_6] [1] [i_7] [i_6]) == (arr_18 [i_7])))))))));
                        var_18 *= (max(var_10, (((~var_9) ? (((max(var_2, var_8)))) : (max(2305843009146585088, (arr_25 [i_5] [i_6] [14] [i_8])))))));
                        var_19 += var_11;
                        var_20 = (max(var_20, ((((arr_26 [i_5] [i_6] [i_7] [i_7]) / (max((arr_26 [i_5] [i_5] [1] [i_8]), (arr_26 [4] [1] [i_7] [i_8]))))))));
                    }
                }
            }
            var_21 &= (!var_3);
            arr_28 [i_6 + 2] [0] = (min(((min((arr_22 [i_5] [i_6 - 3] [1]), (min(var_10, 1))))), ((((max(var_7, (arr_22 [i_5] [i_6 - 2] [i_6])))) ? (((((arr_20 [i_5] [i_5]) == (arr_12 [i_6]))))) : (arr_26 [i_5] [i_6] [i_6 - 3] [1])))));
            var_22 = (max(var_22, ((!(((+((227 ? (arr_15 [i_5] [i_6]) : 1)))))))));
        }
        var_23 = (min((((((arr_21 [i_5] [i_5] [1]) ? 1 : (arr_23 [i_5] [i_5] [i_5]))) + (((arr_22 [i_5] [i_5] [i_5]) + var_6)))), ((-(arr_21 [i_5] [i_5] [i_5])))));
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 15;i_10 += 1)
        {
            {

                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_24 += ((((((min(var_6, (arr_14 [i_11] [i_13])))) >= var_12)) || ((min((arr_30 [i_12]), (arr_21 [i_9] [i_10] [i_11]))))));
                                arr_42 [i_9] [i_11] = (((((arr_21 [i_13 - 1] [i_13 - 1] [i_13 - 1]) ? var_4 : (arr_19 [i_10 + 1] [i_10] [i_10 + 1]))) << ((max((arr_37 [i_9] [i_10] [i_12]), (((arr_21 [i_9] [i_10] [6]) && 1)))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        var_25 = (max(var_25, (arr_19 [i_9] [i_9] [i_14])));
                        var_26 = (max(var_26, (((arr_44 [i_14] [i_10 + 1] [i_10 + 1] [i_14]) < (arr_44 [i_14] [i_10 - 1] [i_10 + 1] [i_14])))));
                        var_27 = (1 < (arr_24 [i_9] [i_10] [i_11] [i_10 - 1] [i_9]));
                        arr_47 [i_9] [i_10] [i_9] = ((var_5 ? (((arr_39 [i_9] [i_10 + 1] [i_11] [i_14]) >> var_4)) : var_3));
                        var_28 = 1;
                    }
                    for (int i_15 = 2; i_15 < 14;i_15 += 1)
                    {
                        arr_52 [i_9] [i_10] = (((arr_29 [i_9] [i_15]) ? ((((arr_29 [i_9] [1]) != 1))) : (((var_9 <= (arr_29 [i_9] [1]))))));
                        var_29 = (min(var_29, var_5));
                    }
                }
                /* LoopNest 3 */
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        for (int i_18 = 1; i_18 < 15;i_18 += 1)
                        {
                            {
                                var_30 *= (arr_21 [i_9] [i_9] [i_9]);
                                var_31 += -111;
                                var_32 -= (!(max(1, var_8)));
                            }
                        }
                    }
                }
                arr_62 [i_9] = (arr_15 [i_9] [i_9]);
                arr_63 [i_9] [i_9] = var_8;
            }
        }
    }
    #pragma endscop
}
