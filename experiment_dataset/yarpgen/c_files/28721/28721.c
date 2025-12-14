/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((((((var_4 ? 1960968835 : var_0))) / ((13725454538539707716 ? var_0 : var_5)))), 1065156517));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_15 += ((28068 ? ((((!((min(var_12, -28068))))))) : 11259084857342601743));
                                arr_15 [i_1] [i_3] [9] [9] [i_1] = (((var_13 - var_5) ? ((15146989163133270215 * (arr_5 [i_1] [i_3 + 1]))) : (((min((arr_5 [16] [i_2]), var_10))))));
                                var_16 = ((28062 ? (((arr_9 [i_3 - 2] [19] [i_2] [i_0 - 2] [i_4] [i_4 + 3]) ? (arr_9 [i_3 + 1] [i_1] [i_4] [i_0 + 2] [i_4] [i_4 - 1]) : (arr_9 [i_3 - 2] [9] [i_3 - 2] [i_0 - 2] [i_1] [i_4 + 3]))) : ((-(arr_9 [i_3 + 1] [i_1] [i_0] [i_0 - 2] [i_4 + 3] [i_4 - 1])))));
                                arr_16 [i_1] [i_4 - 1] [i_1] [i_3] [i_4] = (((max((arr_0 [i_4 + 3] [i_4 + 3]), 28062)) != (1151811516 == 0)));
                            }
                        }
                    }
                }

                for (int i_5 = 3; i_5 < 20;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_17 = (min(var_17, ((min((min((~9057721579222177416), var_9)), (-1 % 1564173798))))));
                                arr_25 [1] [i_1] [i_6] [i_1] [i_1] [9] = ((!((max((arr_0 [i_0 + 3] [i_5 + 2]), var_7)))));
                                var_18 = ((+((32765 ? (-2147483647 - 1) : (arr_18 [i_0 - 1] [i_1] [i_0 - 1])))));
                            }
                        }
                    }
                    var_19 = (((((+((((arr_23 [i_0 + 1] [i_1] [i_1]) && var_9)))))) <= (18446744073709551614 || 120)));
                    arr_26 [i_1] [i_1] = (((((var_6 ? (var_8 < 9057721579222177409) : ((var_4 ? 2147483647 : var_11))))) ? ((((((-(arr_21 [i_1] [i_1] [i_5])))) ? var_13 : (((arr_5 [i_0] [6]) ? var_9 : var_9))))) : (((arr_14 [i_1] [i_0] [i_5 - 3] [i_5] [17] [i_1]) ? (min((arr_24 [4] [i_1] [i_5]), (arr_21 [14] [i_1] [i_5]))) : (arr_21 [i_0 + 3] [i_1] [7])))));
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_20 = ((((max((arr_14 [i_8 - 2] [i_8 - 2] [i_8] [i_8 - 2] [i_8] [i_1]), (arr_14 [i_8 + 1] [i_8] [i_8] [i_8 - 2] [i_8 - 3] [i_1])))) + ((max((arr_14 [i_8 - 2] [i_8] [18] [i_8 - 3] [9] [i_1]), (arr_14 [i_8 - 3] [9] [i_8 + 2] [21] [i_8 - 2] [i_1]))))));
                                arr_31 [i_0] [i_1] [i_0] [i_0] [i_0] [i_8] = (((((4 ? var_3 : -32766))) ? var_3 : ((((arr_28 [19] [i_1] [i_5] [i_8 - 1]) ? (((arr_21 [i_0] [i_1] [i_0 - 2]) ? var_0 : var_13)) : (arr_9 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                                var_21 = var_13;
                                var_22 = arr_9 [8] [i_1] [12] [4] [i_9 - 1] [i_5];
                            }
                        }
                    }
                    arr_32 [i_1] [16] [i_5] = var_13;
                }
            }
        }
    }
    var_23 -= var_7;
    #pragma endscop
}
