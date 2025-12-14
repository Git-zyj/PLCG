/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, (1 <= var_5)));
                                arr_12 [i_1] [i_3] = ((~(min((arr_1 [i_3]), -1710609141))));
                                var_21 *= var_5;
                                arr_13 [i_1] [i_3 + 1] [i_3 - 2] [i_3 - 2] = ((max(1978446596626680165, var_3)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            arr_21 [i_0] [i_1] [12] [i_5] [i_1] = -var_0;

                            for (int i_7 = 0; i_7 < 1;i_7 += 1)
                            {
                                var_22 = 1;
                                arr_24 [i_7] [i_7] [i_1] [i_7] [i_7] = (!var_2);
                            }
                            var_23 = min(((min(var_13, var_16))), (~13));
                        }
                    }
                }
                var_24 = (((-(arr_19 [i_1]))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            arr_29 [i_1] [i_1] [i_8] [15] = ((32 ? -1710609119 : 109));
                            arr_30 [i_1] [i_8] [0] [i_1] = (((!var_17) * ((var_2 ? var_6 : (~1)))));
                            var_25 *= -var_12;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                arr_38 [1] [i_1] [i_10] [i_1] [i_0] = var_16;
                                var_26 = (arr_26 [i_1] [i_1] [i_1]);
                                var_27 = var_18;
                                var_28 = (max(var_28, (((min(-1710609141, var_3))))));
                                var_29 &= var_11;
                            }
                        }
                    }
                }
            }
        }
    }
    var_30 = var_12;
    var_31 = (min(var_18, (max(var_13, ((0 ? var_3 : var_14))))));
    /* LoopNest 2 */
    for (int i_13 = 1; i_13 < 13;i_13 += 1)
    {
        for (int i_14 = 2; i_14 < 11;i_14 += 1)
        {
            {
                var_32 = ((var_11 ? (181 >= 1984986635) : ((((min(var_9, var_0))) ? var_17 : var_5))));
                var_33 = (max(var_33, ((min((~4217988493976959933), (((27 & ((min(32, var_3)))))))))));
            }
        }
    }
    #pragma endscop
}
