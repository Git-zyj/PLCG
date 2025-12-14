/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_8 [18] [i_1] = (~60387);
                    arr_9 [i_2] = ((max(var_2, var_2)) >> ((((var_0 ^ (var_6 ^ var_1))) - 4819228155569386871)));
                    arr_10 [i_2] = (((min(var_3, var_3))) ? ((var_4 ? var_8 : var_2)) : (var_2 & var_8));
                    arr_11 [1] [i_1] [1] = ((var_3 ? (-var_3 + var_9) : ((var_8 ? var_9 : var_3))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_3] [i_2] [i_4] [16] [i_1] [i_0] = -var_1;
                                arr_17 [12] [12] [i_2] [i_4] [i_4] = (~(var_8 % var_9));
                                arr_18 [1] [i_4] [i_4] [i_4] [9] = var_7;
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    arr_22 [5] [i_1] [i_5] = (var_3 ? var_1 : (((var_7 == var_7) ? (~var_9) : var_4)));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                arr_29 [i_0] [i_1] [i_5] [i_0] [i_5] = (~var_0);
                                arr_30 [i_0] [i_0] [17] [i_1] [i_0] [i_5] [i_7] = ((!(var_8 - var_2)));
                            }
                        }
                    }
                    arr_31 [i_0] [i_1] [i_5] = ((var_9 == var_5) ? var_0 : (((!12450500965953239967) ? ((var_6 ? var_4 : var_7)) : var_8)));
                    arr_32 [i_0] [i_5] = var_9;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 17;i_9 += 1)
                        {
                            {
                                arr_39 [i_5] [i_1] [i_5] [i_8] [10] = var_4;
                                arr_40 [8] [8] [8] [i_5] = ((var_4 ? (~var_5) : ((var_2 ? var_7 : var_2))));
                                arr_41 [13] [i_1] [i_5] [i_5] [i_8] [12] [12] = ((var_6 > var_6) ? ((var_6 ? var_0 : (~var_6))) : ((-((var_2 ? var_2 : var_7)))));
                                arr_42 [i_0] [i_5] [9] [9] [i_0] [i_0] = ((var_9 ? var_8 : var_7));
                            }
                        }
                    }
                }
                arr_43 [10] [i_1] [9] = ((!(60406 <= 1152921504606846975)));
            }
        }
    }
    var_10 = var_9;
    var_11 = var_8;
    var_12 = (min((~5996243107756311648), (((var_8 > (!var_5))))));
    #pragma endscop
}
