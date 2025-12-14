/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_0] [i_2] = (arr_5 [i_1]);

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_21 -= (((-(!0))));

                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            var_22 = (arr_13 [i_0] [i_1] [i_1] [i_3] [i_1]);
                            var_23 = (arr_5 [7]);
                            var_24 = var_13;
                            var_25 -= (arr_5 [i_1]);
                            arr_16 [i_1] [11] [i_2] [i_3] [i_4] = min(161, (arr_4 [i_0]));
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_26 = (4176104698151782733 - var_17);
                            arr_19 [7] [i_0] [i_1] [16] [i_1] [i_3] [i_5] = -115;
                        }
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            var_27 = (arr_4 [i_1]);
                            var_28 = ((!(arr_5 [i_0])));
                            arr_22 [i_1] [i_2] [i_1] = (arr_20 [i_0] [i_1] [20] [i_2 - 1] [i_6 + 1] [i_6 + 1] [i_2]);
                        }
                    }
                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        var_29 = ((~(((var_3 == (arr_24 [i_0] [i_0] [i_0] [i_1] [10] [i_0]))))));
                        var_30 = var_10;

                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 20;i_8 += 1) /* same iter space */
                        {
                            var_31 |= var_3;
                            arr_29 [i_0] [i_0] [10] [i_2] [i_1] [i_0] [i_0] |= (-8 / 3192868541537043349);
                            var_32 = var_13;
                            var_33 = var_7;
                            arr_30 [i_1] [i_7] [i_2] [i_1] [i_1] = (((var_12 != var_9) ? (arr_26 [i_0] [i_1] [i_0] [i_0]) : var_0));
                        }
                        for (int i_9 = 2; i_9 < 20;i_9 += 1) /* same iter space */
                        {
                            var_34 = (((((((((arr_32 [i_0] [3] [i_2] [i_1] [i_9 - 1]) || (arr_9 [i_7] [i_7] [i_2 - 1] [i_0] [i_0])))) / ((min((arr_3 [i_0]), var_4)))))) || ((max(var_2, 3164686483)))));
                            arr_33 [i_0] [i_0] |= var_2;
                        }
                    }
                    for (int i_10 = 3; i_10 < 21;i_10 += 1)
                    {
                        arr_36 [i_0] [i_2] |= (arr_18 [i_0] [i_0] [1] [i_0]);
                        var_35 -= (((-1768534891 + 2147483647) << ((((((114 | (arr_28 [i_0] [i_0] [i_2] [i_10] [i_1] [i_10 - 2] [i_2 - 1]))) + 291679503)) - 4))));
                    }
                    var_36 |= min(-214, var_12);
                    arr_37 [i_0] [i_2] [i_1] = (8 / ((-8 ? var_13 : var_5)));
                    arr_38 [13] [i_2] [i_1] = ((((min(17179869183, var_16))) ? (max(var_5, var_1)) : (arr_4 [i_1])));
                }
            }
        }
    }
    var_37 = (min(((((min(var_14, var_10)) == -var_14))), var_0));
    #pragma endscop
}
