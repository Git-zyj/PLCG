/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_12;
    var_19 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 = arr_11 [i_0] [i_0] [i_4] [i_4] [i_4];
                                var_21 -= arr_1 [i_3 + 1] [i_1 + 1];
                                arr_13 [i_1] [i_3] [4] [12] [i_0] [i_1] = (arr_12 [10] [i_1 - 1] [i_1] [3] [i_1]);
                            }
                        }
                    }
                    var_22 = arr_9 [i_0] [i_0] [i_1] [i_0 + 1];
                    var_23 = ((-(arr_0 [i_1 - 1] [i_0 + 1])));
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    var_24 = var_16;
                    var_25 = ((-(((arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 4] [i_1 - 1] [i_1]) ? var_2 : var_4))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                {
                    var_26 -= (!212);

                    for (int i_7 = 3; i_7 < 15;i_7 += 1)
                    {
                        arr_21 [i_1] = arr_15 [i_1] [5];
                        arr_22 [i_7] [i_7] [i_1] = (!var_13);
                        var_27 = arr_4 [i_1] [7];
                    }
                }
                var_28 = (((((-(arr_3 [i_1 + 1])))) ? ((255 ? var_1 : (arr_9 [i_0] [i_0] [i_1] [i_0]))) : var_11));
                var_29 *= arr_15 [0] [i_1];
                arr_23 [i_0 - 2] [i_1] = (((arr_14 [i_1] [i_0] [i_1]) ? (arr_8 [i_0] [i_1] [i_1]) : (arr_3 [i_0])));
                var_30 = var_5;
            }
        }
    }
    var_31 = ((225 ? var_15 : (((((52 ? var_8 : var_4))) ? var_8 : var_2))));
    var_32 = -var_11;
    #pragma endscop
}
