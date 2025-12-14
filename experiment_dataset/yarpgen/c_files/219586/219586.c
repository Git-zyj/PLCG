/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((min((arr_2 [i_0] [i_0]), (((arr_3 [i_1] [i_0] [i_0]) ? (15 + 0) : (min(var_10, 18446744073709551600)))))))));
                var_16 += ((((max((18446744073709551609 == 16), (arr_2 [11] [i_1])))) ? (((var_7 ? var_10 : (arr_1 [i_1])))) : 0));
                var_17 = (max((((var_14 ? (arr_1 [i_0]) : var_3))), ((var_13 ? (((var_1 ? (arr_1 [5]) : (arr_1 [i_0])))) : (max(var_9, (arr_3 [i_0] [i_1] [1])))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, ((max((64 & 1), -18446744073709551600)))));
                                var_19 = (max(var_19, ((((min(((max(var_2, var_10))), ((36 ? 0 : -4747819854117446277)))) <= ((max((arr_3 [i_4] [i_2] [i_0]), (((arr_5 [i_4] [i_1] [i_1] [i_0]) >> (-118 + 133)))))))))));
                                var_20 -= (min((7 || 25), (arr_10 [i_4] [i_0])));
                                var_21 = ((((min((arr_4 [i_1]), (arr_1 [i_0])))) ? ((max(108, (-2147483647 - 1)))) : (((arr_2 [i_0] [i_1]) ? -1386343478593310022 : var_14))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_7;
    #pragma endscop
}
