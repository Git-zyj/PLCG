/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 |= ((var_14 >> (((32544 & var_9) - 9975))));
                var_19 = (min(var_19, (((((var_16 ? var_1 : -18)) == (var_16 && var_9))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                var_20 = (7 != var_0);

                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    arr_10 [i_2] [i_2] = 0;
                    var_21 = (min(var_21, (((~((var_0 ? var_17 : var_16)))))));
                }
                for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_22 = (min(var_22, (((~(!-120))))));
                                var_23 *= (((((((var_9 ? var_16 : 0))) ? -var_3 : (0 ^ var_15))) | ((-var_13 ? ((var_13 ? var_8 : var_16)) : ((max(-18, var_0)))))));
                            }
                        }
                    }
                    var_24 |= 120;
                }
                for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            {
                                var_25 = (min((((((var_12 ? 103 : var_14))) ? (var_2 % var_1) : var_3)), ((((var_6 ? var_6 : var_9))))));
                                var_26 = (min((var_10 > var_0), ((var_6 ? var_7 : var_15))));
                            }
                        }
                    }
                    arr_27 [i_2] [i_3] = ((-7 ? -10 : 161));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            {
                                var_27 = (min(var_27, 0));
                                var_28 = 0;
                                var_29 = var_7;
                                var_30 = -5614563572336990619;
                            }
                        }
                    }
                    arr_32 [i_2] [i_2] [i_3] [i_8] = ((max(var_11, (-9223372036854775807 - 1))));
                }
                for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
                {
                    var_31 &= ((var_1 * ((var_1 ? 0 : var_11))));
                    var_32 |= (((~var_11) ? var_17 : ((var_6 ? ((var_6 ? var_3 : var_13)) : var_0))));
                    var_33 = 17;
                    arr_35 [i_2] = ((0 ? ((~(!17))) : ((((var_13 ? var_13 : var_10))))));
                }
            }
        }
    }
    #pragma endscop
}
