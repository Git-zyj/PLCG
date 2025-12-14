/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 = ((!var_5) ? (((!var_7) ? (var_1 | var_5) : (!var_5))) : var_8);
                                arr_11 [i_4] [i_1] [i_1] [i_1] = ((~((var_4 ? var_11 : var_9))));
                                arr_12 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_4] [i_3] [i_3] [i_3 + 1] |= ((((min((!var_13), ((var_8 ? var_3 : var_11))))) ? (((!(!var_0)))) : var_11));
                                var_17 = (((!(!var_10))) ? (((!(((var_4 ? var_5 : var_0)))))) : (((!(var_9 | var_8)))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            var_18 ^= ((!(!var_7)));
                            var_19 = (((((var_7 ? var_3 : var_11))) ^ ((var_9 ? var_10 : var_3))));
                            var_20 = (!var_5);
                            arr_20 [i_0] [i_1] [i_1] [i_2] [i_5] [i_5] [i_6] = (var_14 >= var_6);
                            var_21 = ((var_9 ? var_2 : var_2));
                        }
                        var_22 = (((((var_3 ? var_7 : var_7))) ? (~var_8) : var_7));
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {

                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 10;i_8 += 1) /* same iter space */
                        {
                            var_23 = ((var_9 ? var_8 : var_4));
                            var_24 = var_11;
                            var_25 = (max(var_25, var_0));
                            var_26 = (!var_13);
                        }
                        for (int i_9 = 1; i_9 < 10;i_9 += 1) /* same iter space */
                        {
                            var_27 -= ((!(((max(var_1, var_5))))));
                            var_28 = (max(var_28, (((~var_4) > (((var_6 ? var_9 : var_4)))))));
                            var_29 ^= (((((!(!var_13)))) ^ ((var_3 ? ((var_0 ? var_5 : var_1)) : -var_6))));
                            arr_29 [i_1] [i_1] [i_1] [i_9] = (min(((var_2 ? var_10 : var_13)), var_13));
                        }
                        var_30 = var_7;
                    }

                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        arr_32 [i_1] = ((((!(~var_3))) ? var_10 : var_5));
                        arr_33 [i_0] [i_1] [i_2] [i_10] = ((((-(max(var_8, var_10)))) & (((~(~var_8))))));
                    }
                }
            }
        }
    }
    var_31 = var_11;
    #pragma endscop
}
