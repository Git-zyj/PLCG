/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((!(var_11 ^ var_1))) ? (((~(((-8993 + 2147483647) >> (-92 + 115)))))) : ((((1 ? -4319759111561193840 : 14120131542473539233)) - var_5))));
    var_21 = (~var_2);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_22 += ((-243 > (max(var_10, ((var_4 ? var_6 : var_11))))));
                                arr_15 [i_4 + 1] [i_0] [i_2] [i_0] [i_0] = (((((((var_15 ? var_13 : var_13)) * ((min(var_6, var_13)))))) ? (((var_17 - var_7) ? ((var_0 ? var_0 : var_10)) : (((max(var_10, var_10)))))) : var_18));
                                var_23 = (((((((var_17 ? var_10 : var_13))) ? (max(var_17, var_3)) : var_15)) >> (((max(((min(var_6, var_15))), (min(var_14, var_2)))) - 2782688747))));
                                var_24 = (~var_11);
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_25 = ((var_9 ? (((min((max(var_3, var_3)), (!var_11))))) : ((~(max(var_15, var_8))))));
                    var_26 = (max(var_26, (((var_6 <= ((((max(var_7, var_8))) ? (var_7 | var_3) : ((var_6 ? var_17 : var_18)))))))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_27 *= (((!var_2) ? var_7 : (var_8 & var_13)));
                                arr_26 [i_0] [i_0] [i_0] [10] [i_0 + 2] [i_0] [i_0] &= ((var_11 ? (!var_15) : var_5));
                                var_28 = (((var_17 ? var_3 : var_1)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 11;i_10 += 1)
                        {
                            {
                                var_29 = (((((var_8 ? var_13 : var_7))) <= ((var_3 ? var_0 : var_3))));
                                var_30 = ((var_3 - ((-4357 ? -8716329676067058657 : 4356))));
                                arr_31 [i_0] [i_0] = var_15;
                            }
                        }
                    }
                    var_31 -= (~var_10);
                }
            }
        }
    }
    #pragma endscop
}
