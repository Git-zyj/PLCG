/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 20;i_4 += 1)
                            {
                                var_17 = (((3882455793 + 2147483647) << ((((((min((arr_5 [i_2 - 1] [i_2 - 1] [i_3 + 2]), var_7))) + 26556)) - 13))));
                                var_18 -= var_5;
                            }

                            for (int i_5 = 0; i_5 < 24;i_5 += 1)
                            {
                                var_19 *= ((var_16 <= (3772707108 & -5720419407225177312)));
                                var_20 = var_1;
                                var_21 = (~2873574433687417689);
                            }
                            for (int i_6 = 3; i_6 < 23;i_6 += 1) /* same iter space */
                            {
                                arr_18 [i_0] [i_1 + 2] [i_1 + 2] [i_2] [i_6] = arr_10 [i_3 + 1] [i_1] [i_2 - 1] [i_1];
                                var_22 = (max(var_22, (((-1 + ((var_4 ? (~14684) : ((var_15 ? 12070133541272922708 : var_16)))))))));
                            }
                            for (int i_7 = 3; i_7 < 23;i_7 += 1) /* same iter space */
                            {
                                arr_21 [i_2] [i_3] [i_2] [i_0] [i_0] [i_2] = ((max((arr_9 [i_0] [i_3]), var_14)));
                                arr_22 [i_2] = (((min((arr_0 [i_1 + 1] [i_2 - 1]), (arr_0 [i_1 - 3] [i_2 - 1]))) ? (((min((arr_6 [i_0 + 1]), 13269)))) : ((3912629315 ? var_9 : (arr_10 [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0 + 1])))));
                                arr_23 [i_2] [i_2] = ((~((max(var_4, var_11)))));
                            }
                            for (int i_8 = 0; i_8 < 24;i_8 += 1)
                            {
                                arr_26 [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 2] [i_2] = (((-(arr_16 [i_0] [i_1 - 1] [i_1 - 1] [i_3 + 1] [i_0 - 2]))));
                                var_23 |= var_13;
                            }
                        }
                    }
                }
                var_24 = (arr_1 [i_0]);
                var_25 = (((var_15 < var_4) + (((arr_8 [i_0] [i_0] [i_0 + 1] [i_1]) ? (arr_8 [i_0] [i_0] [i_0 - 2] [i_1]) : (arr_14 [i_0] [i_0] [i_0 - 1])))));
            }
        }
    }
    var_26 = 30950;
    #pragma endscop
}
