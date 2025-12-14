/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = 2917281265;
                    var_16 = (arr_6 [i_0] [i_0] [i_2]);

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_17 *= (1520391332 + -1);

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            arr_14 [i_4] [i_4] [i_2] [i_0] [i_4] [i_0] = (arr_13 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]);
                            var_18 |= 9223372036854775795;
                            arr_15 [i_4] [i_4] = (arr_4 [i_1]);
                            arr_16 [i_0] [i_3] [i_4] [i_1] [i_0] = var_11;
                            var_19 = 6443038;
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            var_20 -= ((((0 & (arr_3 [i_1 + 1] [i_1 + 1] [i_2 + 2]))) == 0));
                            var_21 = 1610117946;
                            var_22 = (arr_4 [i_2]);
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_1] [i_3] = (((arr_13 [i_2] [i_3] [i_3] [i_2] [i_2] [i_3] [i_2 - 1]) > (arr_13 [i_1] [i_6] [i_1] [i_6] [i_1] [i_1] [i_2 - 1])));
                            arr_23 [i_3] [i_3] [i_2] [i_0] [i_0] = var_5;
                            var_23 = (max(var_23, (~-2051887218147143191)));
                            arr_24 [i_6] [i_1] [i_2] [i_1] [i_0] = (arr_11 [i_0] [i_0] [i_0] [i_2] [i_0] [i_3] [i_6]);
                        }
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_24 = var_3;
                            var_25 = (arr_20 [i_0] [i_1] [i_0] [i_0] [i_2 + 1] [i_1]);
                        }
                        arr_29 [i_7] [i_7] [i_7] [i_7] [i_7] |= (arr_17 [i_2 + 1] [i_1 - 1]);
                    }
                }
            }
        }
    }
    var_26 = (((var_10 & var_2) / var_5));
    var_27 = (((((!0) | 255)) != var_15));
    var_28 = 9101;

    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        arr_32 [i_9] = 252;
        var_29 = (max(var_29, 1));
        arr_33 [i_9] [i_9] = (((1 || var_6) > (4391901388877931188 * var_15)));
        var_30 = 0;
    }
    #pragma endscop
}
