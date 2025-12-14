/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_12 -= -var_1;
                    arr_8 [i_0] [i_1 + 1] [i_0] = ((var_9 ? var_11 : var_5));
                }
                /* LoopNest 3 */
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_21 [i_0] [i_0] [i_3] [i_4] [i_5] = var_4;
                                arr_22 [i_0] [i_1] [i_0] [i_1] [16] = (min(var_1, (((((var_2 ? (arr_17 [i_0] [i_0] [i_3 - 1] [i_0] [i_5]) : var_10))) ? (var_6 / var_1) : ((var_11 ? var_7 : var_0))))));
                                arr_23 [13] [i_0] [i_3] [i_0] = -114;
                                arr_24 [i_1] [i_1] [i_0] = (min((((((9223372036854775799 ? 1 : -4)) / 1))), (max(((var_1 ? var_8 : var_6)), ((-8 ? var_5 : var_2))))));
                                var_13 -= (((arr_11 [i_1] [i_4 + 2]) ? var_1 : (var_8 + 7154231003513006443)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_14 = (max(var_14, 2450542561));
                            var_15 = (((max((!var_3), ((!(arr_9 [i_1]))))) ? (((((((arr_13 [i_0] [i_0] [i_0] [8] [i_0] [i_0]) / 1))) ? (-85 && var_7) : var_1))) : ((-var_6 >> ((((var_0 ? (arr_20 [i_0] [i_0] [i_6]) : -116)) + 10480))))));
                        }
                    }
                }
            }
        }
    }
    var_16 = ((((max(var_8, ((var_6 ? 1 : var_8))))) ? (9 * var_6) : var_7));
    var_17 -= var_5;
    #pragma endscop
}
