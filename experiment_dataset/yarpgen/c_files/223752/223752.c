/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((max((var_10 ^ var_3), ((-669009518 ? -1768366241 : var_11))))) ? var_4 : (((((min(var_2, var_9))) ? (~var_10) : var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = (max(var_13, ((((669009517 ? (arr_5 [i_0] [i_0] [i_1]) : (arr_5 [i_0] [i_1] [i_1])))))));
                arr_6 [i_1] [i_1] = min((~var_7), (~669009517));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_14 = (~(~9873));
                                arr_14 [i_1] [i_1] [i_2] [i_2] [i_2] = (min((((-(min(var_7, var_5))))), -var_11));
                                arr_15 [i_1] [i_1] [i_1] = (min(13251504211979451362, 4598156630025224642));
                                var_15 = (max((max(-var_10, -1)), var_3));
                            }
                        }
                    }
                }

                for (int i_5 = 1; i_5 < 22;i_5 += 1)
                {
                    var_16 = ((arr_18 [i_5 + 1] [i_5 + 1]) ? ((7 ? 26174 : (arr_18 [i_5 - 1] [i_1]))) : ((-(arr_18 [i_5 + 1] [i_0]))));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_7 - 1] [i_7] = (((max((max(0, 15971138046320344068)), (arr_9 [i_0] [i_5] [i_6 - 3]))) | ((max(var_9, 5505)))));
                                var_17 = -28579;
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        var_18 = ((var_3 >= ((var_6 ? (arr_11 [i_1] [i_8] [i_1] [i_8] [i_1]) : (((arr_1 [i_8]) - -1997848142))))));

                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            arr_29 [i_9] [i_1] [i_1] = (i_1 % 2 == zero) ? (((15971138046320344064 << (((arr_11 [i_9] [i_0] [i_1] [i_0] [i_0]) - 219))))) : (((15971138046320344064 << (((((((arr_11 [i_9] [i_0] [i_1] [i_0] [i_0]) - 219)) + 105)) - 23)))));
                            arr_30 [i_9] [i_9] [i_9] [i_9] [i_9] [i_1] [i_9] = 15971138046320344064;
                            var_19 = 10335230928857864640;
                        }
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            var_20 = -61;
                            arr_35 [i_1] = (arr_21 [i_0] [i_0] [i_1] [i_0]);
                        }
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        var_21 = var_0;
                        var_22 += (((arr_33 [10] [i_1] [i_5 + 1] [i_11]) >= ((16352 - (arr_11 [i_0] [i_0] [12] [i_5 + 1] [i_11])))));
                        var_23 += (arr_1 [i_1]);
                    }
                    for (int i_12 = 1; i_12 < 20;i_12 += 1)
                    {
                        var_24 = (min(var_24, ((max(((max(606092504, (min((arr_31 [i_12] [2] [i_12] [i_12 + 3] [i_12]), var_1))))), (min((min(-1, (arr_13 [i_12] [i_12 + 3] [i_5 - 1] [i_1] [i_0]))), (arr_38 [i_5] [i_5 - 1] [i_5 - 1] [i_12 + 1]))))))));
                        var_25 = (min(var_25, 15971138046320344068));
                        arr_41 [i_0] [i_12] [i_5 - 1] [i_1] = 482579990617122828;
                        arr_42 [i_1] = (min(((((arr_34 [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_4 : (arr_32 [i_0] [i_1] [i_12 + 3])))), (max(-5, (((14778 >= (arr_5 [i_0] [i_1] [i_5 - 1]))))))));
                    }
                    for (int i_13 = 2; i_13 < 22;i_13 += 1)
                    {
                        var_26 = (max(var_26, var_3));
                        var_27 = (arr_17 [i_1] [i_1] [i_13 - 1]);
                        arr_46 [i_5] [i_5] [i_0] [i_1] = (min((((-1 >= (min(var_9, 16904350686277746273))))), (min((50758 / 166), (254 / var_9)))));
                    }
                    var_28 = (((13412237079107898824 ? var_8 : (arr_22 [i_0] [i_0] [i_0] [i_5] [i_0] [i_5] [i_5 - 1]))));
                }
            }
        }
    }
    #pragma endscop
}
