/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((10145416653975458108 ? 15 : 8301327419734093498));
    var_15 = (max(var_15, ((max(((-(16 * var_13))), (((((min(var_11, 18446744073709551605))) ? var_0 : var_12))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_17 [4] [i_0] [i_2] [1] [i_4 + 2] = ((8301327419734093496 ? (-9223372036854775807 - 1) : -19857));
                                arr_18 [i_0] [12] [i_2] [i_3] [i_4 + 2] = (((3406959229266421720 ? ((29 ? -19600 : (arr_3 [i_0])) : (max(71, var_4))))));
                                var_16 = (max((min(-247306842, (3582359142 * -2007708959))), (17336 / 1)));
                                var_17 = (((-87 ^ 1) ^ (arr_15 [i_3 - 1] [i_0] [i_3 - 2] [i_3 - 3] [i_0] [i_3 - 1])));
                                var_18 = arr_3 [i_0];
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [i_1] [i_1] [i_1] [i_6] = -1715319251852864480;
                                var_19 = (min(var_19, (((63923 ? ((((~1) ^ 942540222))) : 35184372088831)))));
                            }
                        }
                    }

                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        arr_26 [i_7] [i_0] [i_0] [i_0] [i_1] [i_0] = (((arr_19 [12] [12] [i_1] [i_1]) <= var_13));
                        arr_27 [18] [i_0] [i_0] = var_3;
                    }
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        var_20 = (((((var_6 ? (var_12 != var_7) : (arr_4 [i_0] [i_0])))) & var_10));
                        arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((max((arr_29 [i_0] [15] [i_8 - 1] [10]), 2007708959))) ? (((arr_29 [i_0] [i_8 - 1] [7] [i_8 - 1]) ? var_9 : (arr_29 [i_0] [1] [i_8] [i_0]))) : ((((arr_5 [i_0] [i_8 - 1]) ? (arr_29 [i_0] [i_8] [i_8] [i_8]) : (arr_5 [i_0] [i_8 - 1]))))));
                        var_21 = (~(~48));
                    }
                    for (int i_9 = 1; i_9 < 17;i_9 += 1)
                    {
                        arr_35 [i_0] [i_0] [i_1] [2] [i_9] &= var_6;
                        var_22 = (((arr_34 [6] [6] [16]) - (~var_1)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
