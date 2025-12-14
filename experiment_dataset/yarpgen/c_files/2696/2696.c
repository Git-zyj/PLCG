/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (-1432 > -29745);
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [9] = ((4294967281 ? (arr_0 [i_0]) : (arr_7 [i_0] [i_1 - 2] [i_3 + 1])));
                        arr_12 [i_0] [i_0] [i_2] [i_3] = ((1 ? 1 : 1));
                    }
                }
            }
            var_13 = 1;
        }
        arr_13 [i_0] = (((((1 ? 1 : (arr_6 [i_0] [i_0] [i_0])))) ? (arr_2 [i_0]) : var_8));
        arr_14 [i_0] = (((1 + (arr_3 [i_0] [0] [i_0]))));
    }
    var_14 -= ((((((((1 ? 1 : 1))) ? var_3 : var_3))) ? var_6 : var_6));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 15;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_15 &= ((1 ? (arr_25 [i_4] [6] [i_6] [i_7] [i_8] [i_8]) : (1 % 1)));
                            arr_29 [i_5 - 1] [i_4] = (0 == 1);
                        }
                        arr_30 [i_4] [i_5] = (min((((arr_3 [i_5 + 1] [i_5 + 1] [i_6 - 1]) ? (arr_26 [i_5 + 1] [i_5 + 1] [i_4] [i_6 + 1]) : 1)), ((max((arr_1 [i_5 + 1] [i_6]), (arr_1 [i_5 - 1] [18]))))));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 0;i_9 += 1)
                    {
                        arr_35 [i_4] [i_4] [i_6] [10] = (((arr_33 [i_4] [i_4] [i_4] [6] [i_9 + 1]) ? (arr_28 [i_4] [i_5] [i_5 + 1] [i_5 + 1] [i_4]) : (arr_33 [i_4] [i_4] [11] [i_9] [i_9 + 1])));
                        var_16 -= 1;
                        arr_36 [i_4] [i_4] = 1;

                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            var_17 = (min(var_17, var_8));
                            var_18 = (((arr_21 [i_4] [i_5 + 1] [i_6 + 1] [i_9 + 1]) ? (arr_21 [i_4] [i_5 - 1] [i_6 + 1] [i_9 + 1]) : (arr_21 [i_4] [i_5 - 1] [i_6 - 1] [i_9 + 1])));
                            var_19 ^= (arr_31 [i_4] [i_6 - 1] [i_6] [i_10]);
                        }
                        for (int i_11 = 1; i_11 < 15;i_11 += 1)
                        {
                            var_20 -= ((1 ? (arr_1 [i_5 + 1] [1]) : 1));
                            var_21 *= (!1);
                            arr_42 [i_4] = 1;
                        }
                        for (int i_12 = 2; i_12 < 15;i_12 += 1) /* same iter space */
                        {
                            arr_45 [i_6] [i_5] [i_6 + 1] [i_4] [i_6] = (!1);
                            var_22 = (min(var_22, (((-(arr_25 [i_4] [i_5] [i_6] [i_5] [0] [i_12 - 1]))))));
                            arr_46 [i_4] = (((arr_27 [i_5] [i_4]) ? (1 && 1) : 1));
                            arr_47 [i_4] [i_4] [i_9] [5] [i_5] [i_4] [i_4] = 1;
                            arr_48 [i_4] [i_5] [i_6] [i_9] [i_12 - 2] = (((1 == 1) < ((1 ? 1 : (arr_34 [i_4] [i_5] [1] [i_9])))));
                        }
                        for (int i_13 = 2; i_13 < 15;i_13 += 1) /* same iter space */
                        {
                            arr_53 [i_4] [i_5] [i_6] [14] [i_13] &= (((arr_18 [12] [i_6 + 1]) && (arr_18 [10] [i_6 - 1])));
                            arr_54 [i_4] [i_4] [i_4] [i_4] [i_4] = 1;
                            var_23 = (min(var_23, (1 < 1)));
                        }
                    }
                    arr_55 [12] [i_5] [i_4] [12] |= (max((((1 >> 1) ? (1 > 1) : (arr_44 [i_4] [i_4] [i_5] [i_6 - 1] [2] [i_6 - 1]))), ((min((arr_43 [i_4] [i_4] [i_4] [i_4] [9]), (max(1, var_4)))))));
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 15;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 16;i_15 += 1)
                        {
                            {
                                arr_61 [i_15] [i_14] [i_4] [i_5] [i_4] = ((var_4 * (arr_8 [i_5 - 1] [i_14 - 2] [i_6 - 1])));
                                var_24 &= ((((1 - 1) ? ((1 ? (arr_24 [i_4] [10]) : (arr_6 [i_4] [i_4] [i_4]))) : 1)));
                                arr_62 [i_4] [i_4] [i_6] [2] [i_15] = (~1);
                                var_25 &= (((((var_11 >> 1) - (min((arr_24 [i_14] [2]), var_11)))) != (((((!(arr_31 [1] [i_6] [i_14] [i_15]))) ? ((min((arr_52 [i_4] [0] [i_4] [i_6 + 1] [i_14 - 1] [0] [i_14 - 1]), var_4))) : (((!(arr_7 [i_4] [i_5] [6])))))))));
                            }
                        }
                    }
                    arr_63 [i_4] [i_4] [i_5] [i_4] = (((arr_28 [i_4] [i_4] [i_5 + 1] [i_6 - 1] [i_5 + 1]) * (((arr_3 [i_4] [i_5] [i_6 - 1]) ? (arr_28 [i_4] [i_4] [i_5] [i_6 - 1] [11]) : (arr_28 [i_4] [i_4] [0] [1] [6])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_16 = 2; i_16 < 9;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 12;i_17 += 1)
        {
            {
                arr_69 [2] [i_17] = (((((var_11 != 1) - ((max((arr_7 [i_16 - 2] [i_16 - 2] [i_16 - 1]), 1))))) <= (1 > 1)));
                arr_70 [i_16] [i_16] = ((((1 ? ((1 ? var_1 : (arr_19 [i_16] [i_17]))) : 1)) > 1));
            }
        }
    }
    #pragma endscop
}
