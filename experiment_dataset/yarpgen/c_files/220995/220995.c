/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 15;i_4 += 1)
                            {
                                var_13 = var_5;
                                var_14 += 12;
                            }
                            for (int i_5 = 4; i_5 < 13;i_5 += 1)
                            {
                                var_15 = var_5;
                                arr_16 [i_0 + 2] [i_1] [i_2] [i_3 - 1] [i_5] = (((max((arr_11 [5] [i_1] [i_1] [i_3] [0] [i_0 + 1]), ((max((arr_7 [i_0]), var_10))))) % 1));
                            }
                            for (int i_6 = 3; i_6 < 12;i_6 += 1)
                            {
                                var_16 = (min(2674696252, -8196));
                                arr_20 [5] [i_6] [0] [i_1] [5] [i_1] [9] = (max((91 > var_8), ((((max(2, var_1))) ? ((5571835553891239694 ? 2674696248 : 18446744073709551607)) : var_9))));
                            }
                            arr_21 [15] [i_1] [i_3 + 1] [14] = var_8;
                            arr_22 [i_0] &= (((((~(~23177)))) ? 26691 : (((-51 && (((var_4 ? var_2 : var_2))))))));
                            var_17 = (-((~(arr_5 [i_0 + 1] [i_1]))));
                            var_18 = (var_10 ? (var_8 == var_9) : ((-(arr_2 [i_0]))));
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    var_19 = ((((((((-(arr_2 [i_1])))) ? var_12 : -var_7))) - (((arr_11 [i_0 + 3] [13] [9] [8] [i_0 + 3] [13]) - var_10))));
                    arr_25 [2] [5] [i_7] = var_8;
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        {
                            var_20 -= (arr_7 [i_0 + 1]);
                            var_21 ^= var_6;

                            for (int i_10 = 1; i_10 < 15;i_10 += 1)
                            {
                                var_22 = (((arr_4 [i_0 - 1] [i_0 - 1]) && 684186623));
                                var_23 = (arr_10 [i_10] [7] [15] [i_8] [i_1] [i_0]);
                                arr_33 [1] [i_8] [9] [i_9] [3] = (((arr_28 [i_1] [i_8] [i_9] [i_10]) > (((~((((arr_12 [i_0 - 1] [i_1] [i_8] [i_9] [i_10]) <= var_8))))))));
                                var_24 = (min(var_24, ((((!(arr_6 [i_0 + 1] [i_10 + 1] [i_1])))))));
                                arr_34 [i_0] [i_8] [i_0 - 2] [i_0] [2] = (((((max(var_2, 2094554860))) ? var_9 : ((~(arr_10 [i_10 - 1] [3] [i_8] [i_8] [10] [i_0]))))));
                            }
                        }
                    }
                }
                var_25 = -127;

                /* vectorizable */
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    var_26 = ((((!(arr_7 [6]))) ? ((((arr_2 [i_0]) ? var_0 : var_12))) : (~var_3)));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 16;i_13 += 1)
                        {
                            {
                                var_27 &= 8190;
                                arr_43 [i_13] [i_11] [i_11] [1] [i_13] = var_11;
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = var_5;
    #pragma endscop
}
