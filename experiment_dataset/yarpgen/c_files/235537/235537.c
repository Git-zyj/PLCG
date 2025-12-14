/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = 2147483635;

                for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    arr_6 [i_0] [i_1] [i_2] = (!var_8);
                    var_14 = min((((-(max(-2147483637, 2147483635))))), (37 < 8036078841597904273));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 ^= (((37 / 87) >= var_0));
                                var_16 = (~75);
                                arr_12 [i_0] [i_0] [i_1] [i_2] [i_3 - 2] [i_4] = (min(var_12, ((((1 ? 2047459851 : var_3))))));
                                var_17 = var_3;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [i_1] [i_2] [i_5] = (-122 / -2147483636);

                        for (int i_6 = 2; i_6 < 8;i_6 += 1)
                        {
                            var_18 &= -108;
                            var_19 = (max(var_19, (((var_0 % (!var_3))))));
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            arr_23 [i_0] [i_1] [i_2] [i_5] [i_7] &= (var_10 != var_2);
                            arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (731634307 ^ -3);
                        }
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            var_20 = (min(var_20, ((((3 > var_5) || -var_0)))));
                            var_21 = (247 >= 3855355719598142917);
                            arr_28 [i_0] [i_1] [i_2] [i_5] [i_5] [i_0] |= ((-(!-1833711043522224569)));
                            arr_29 [i_0] [i_8] = (191 << (var_8 - 4227657045486671838));
                        }
                        var_22 = var_0;
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                    {
                        arr_34 [i_0] [i_0] [i_0] = (!var_1);
                        arr_35 [i_0] [i_1] [i_2] [i_2] = ((var_1 || (var_2 && 19083)));
                        var_23 = (max(var_23, ((((-(!1316589224)))))));
                        arr_36 [i_2] [i_1] [i_1] [i_9] [i_1] |= var_8;
                    }
                    var_24 = (min(103, var_10));
                }
                for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
                {

                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        var_25 = (min(var_25, -108983989));
                        var_26 = (((218 << 0) ? (max(-2192490953565870168, 2529)) : (((var_8 ? var_0 : var_7)))));
                    }
                    var_27 = (max(var_27, ((((-13 && -101) ? -108 : (((!(var_1 && 108)))))))));
                    var_28 += 29874;
                }
                for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
                {
                    arr_43 [i_12] = -3563332989;
                    arr_44 [i_12] [i_1] [i_0] = (((((~var_0) + 2147483647)) << (((((~var_10) + 15)) - 13))));
                }
                arr_45 [i_1] [i_0] [i_0] = 941;
            }
        }
    }
    var_29 = (!var_6);
    #pragma endscop
}
