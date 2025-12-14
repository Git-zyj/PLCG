/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        arr_13 [i_1] [i_1] [i_2] [i_1] = var_3;
                        arr_14 [i_1] [21] [i_1] [i_1] = (((-(arr_9 [i_1] [i_1]))));
                        var_20 = ((min(var_2, 7287)));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_18 [i_4] [i_4] [i_4] [i_1] [i_4] [i_4] = var_14;
                            var_21 &= (((arr_10 [i_0 - 2] [i_0 - 2] [i_4]) ? var_13 : var_5));
                            arr_19 [i_0 - 3] [i_1] [8] [i_0] [i_4] = ((var_0 >= (arr_3 [i_1] [i_1])));
                            var_22 *= (arr_3 [i_2] [i_2]);
                        }
                        arr_20 [i_1] [i_1] [i_1] [i_3 + 1] = (min(4294967295, 91));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        arr_23 [i_0] [i_1] [i_2] = 8;
                        arr_24 [i_1] = ((!(arr_21 [i_1 + 1] [i_1] [i_1 - 3] [i_1 + 1] [6] [i_1 - 3])));
                        arr_25 [i_1] [i_1] [i_2] [i_5] = 8;
                        arr_26 [i_5] [i_1] [i_1] [i_0] = var_7;
                        var_23 = -0;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                        {
                            arr_33 [i_1] [i_1] [i_0] [i_1] [i_1] = var_1;
                            arr_34 [i_0 + 1] [i_1] [i_1] [i_6] [i_6] [i_7] = -84;
                            arr_35 [i_1 - 2] [i_2] [i_1] [i_7] = (255 >> 1);
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                        {
                            arr_38 [i_1] [i_2] = var_9;
                            arr_39 [i_8] [i_1] [i_2] [i_1] [i_0] = (arr_12 [i_0 - 4] [i_2] [i_6]);
                        }
                        for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                        {
                            var_24 *= -4294967296;
                            arr_44 [i_0] [i_1] [6] [i_0] [i_0] [i_0 + 1] [i_0] = ((var_7 % (arr_21 [i_0] [i_0 - 1] [i_9] [i_9] [i_9] [i_9])));
                        }
                        arr_45 [i_1] = 4294967296;
                        var_25 = (i_1 % 2 == 0) ? ((((arr_28 [i_0 + 1] [i_1] [i_0 - 2] [i_1 + 1]) << (((arr_31 [i_1] [i_0 - 2] [i_0 - 4] [i_1 - 3]) + 1428761898))))) : ((((arr_28 [i_0 + 1] [i_1] [i_0 - 2] [i_1 + 1]) << (((((arr_31 [i_1] [i_0 - 2] [i_0 - 4] [i_1 - 3]) + 1428761898)) - 1312630407)))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                    {
                        arr_48 [i_2] [i_1] [i_1] [i_10] = (arr_16 [i_0] [i_0] [i_0 - 3] [i_0] [i_1] [i_1] [i_1 - 1]);
                        var_26 = ((63 >> (4725565997061523196 - 4725565997061523195)));
                        arr_49 [i_1] [i_1] [i_2] [20] [2] = (arr_4 [i_0 - 4] [i_1]);
                    }
                    var_27 = var_5;
                    var_28 -= var_5;
                }
            }
        }
    }
    #pragma endscop
}
