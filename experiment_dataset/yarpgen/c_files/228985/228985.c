/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] = (min(var_5, (max((max(var_9, var_5)), var_6))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] = var_8;
                            arr_14 [i_1] [i_3] = max(var_9, var_3);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_21 [i_0] = (max((min(var_0, 1)), (max(var_9, (arr_19 [i_0] [i_1] [i_0] [i_5] [8] [i_1])))));

                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                arr_24 [i_0 - 4] [i_6] [i_4 + 1] [i_6] [i_6] = ((126 ? ((max(1, (min((arr_16 [i_6] [i_4 + 1] [2] [2]), var_1))))) : (((((((arr_7 [i_1] [i_1] [i_1] [i_6]) ? var_10 : var_1))) || var_8)))));
                                var_12 = (min((min(var_1, var_10)), var_8));
                            }
                            for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
                            {
                                var_13 = var_9;
                                var_14 = (max(126, -30716));
                                arr_28 [i_0] [i_1 + 2] = (((((min(var_9, var_10))) ? (arr_12 [i_0 - 3] [i_1 - 1] [i_7 - 1] [i_4 - 1]) : (((arr_10 [i_0] [i_7] [i_0] [i_5]) | var_10)))) >= (((((var_2 ? var_9 : var_3))) ? ((max(1, 1))) : ((-126 ? var_5 : var_8)))));
                            }
                            for (int i_8 = 1; i_8 < 11;i_8 += 1) /* same iter space */
                            {
                                var_15 = (max(var_9, var_9));
                                arr_31 [i_5] [i_8] [i_8] [i_0] = ((var_2 ? ((max((max(var_6, var_7)), (max((arr_22 [i_4 - 1] [i_4 - 1] [i_4]), var_2))))) : (min((((var_3 ? var_1 : 65535))), (max(var_3, var_0))))));
                                var_16 = (max(((((min(var_9, var_9))) ? var_9 : ((max(var_0, var_9))))), (((((arr_30 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_5] [i_8] [i_8] [i_1]) + 2147483647)) >> 11))));
                                arr_32 [i_0] [i_8] [i_1] [5] [i_0] [i_0] [i_8] = (((((max(var_10, var_5)))) ? (max(((((arr_0 [i_1]) ? var_5 : var_8))), (max(var_1, var_4)))) : ((max(var_7, 37)))));
                            }
                            arr_33 [i_0] [i_0] [i_0] [i_0] = ((var_4 ? var_10 : 18446744073709551602));
                        }
                    }
                }
                arr_34 [i_0] [i_0] [i_1] = (((((((max(1194814409, var_6))) ? var_1 : ((23805 ? var_5 : var_2))))) ? (((var_5 ? (max(var_5, var_7)) : (((min(var_1, var_0))))))) : (max(var_9, (max((arr_29 [i_0]), var_3))))));
                var_17 = var_3;
            }
        }
    }
    var_18 = min(((max(var_9, ((var_9 ? var_8 : var_9))))), (min((((58241 ? 1 : 3217453609923944659))), (max(var_3, var_0)))));
    #pragma endscop
}
