/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    arr_11 [i_0] [i_1] [i_2] [i_1] = var_8;

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_20 = (i_0 % 2 == 0) ? ((max((((((var_5 >> (((arr_10 [i_0]) - 588589050))))) == var_7)), ((((1 ? 0 : (arr_8 [i_0] [i_0]))) >= (~var_1)))))) : ((max((((((var_5 >> (((((arr_10 [i_0]) - 588589050)) - 1230888808))))) == var_7)), ((((1 ? 0 : (arr_8 [i_0] [i_0]))) >= (~var_1))))));
                        var_21 ^= arr_4 [i_3] [i_1];
                        arr_14 [i_0] [i_0] [i_2] [i_3] = (max((((((arr_1 [i_0]) & var_9)) ^ (~128))), (min(var_9, (((arr_8 [i_0 - 3] [i_0]) ? var_6 : (arr_10 [i_0])))))));
                    }
                }
                for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                {
                    arr_18 [i_0] = (max((var_6 - var_12), (arr_10 [i_0])));
                    var_22 ^= ((((var_3 ? 8963421341993681427 : (max(var_6, (arr_12 [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_1] [i_4]))))) * var_17));
                    var_23 = ((!((min((var_14 && var_12), (arr_0 [i_0]))))));
                }
                var_24 = ((var_2 ^ (~var_9)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            {

                /* vectorizable */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        var_25 = var_3;
                        var_26 *= ((var_2 ? var_2 : var_11));
                    }
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        var_27 *= (((arr_29 [i_5] [i_7] [i_7] [i_7] [i_7] [i_7]) ? (arr_30 [i_6] [i_6]) : var_15));
                        arr_31 [i_9] [i_7] [i_6] [i_9] [i_7] [i_6] = var_19;
                    }
                    var_28 = var_12;
                    arr_32 [i_5] [i_6] = 18446744073709551615;
                }
                /* vectorizable */
                for (int i_10 = 1; i_10 < 23;i_10 += 1) /* same iter space */
                {
                    var_29 = ((18446744073709551615 / (((arr_24 [i_5]) ? var_16 : 128))));
                    var_30 = (min(var_30, var_16));
                }
                for (int i_11 = 1; i_11 < 23;i_11 += 1) /* same iter space */
                {
                    var_31 *= -109;
                    arr_38 [i_5] [i_11] [i_11 + 1] = (max((((!(arr_35 [i_6] [i_11] [i_11 - 1] [i_11])))), (((arr_29 [i_5] [i_5] [i_5] [i_11] [i_5] [i_5]) * 1630699766))));
                    var_32 = (var_4 / var_7);
                }
                arr_39 [i_6] [i_6] = (~8);
                var_33 += 1;
                var_34 = 1023;
            }
        }
    }
    #pragma endscop
}
