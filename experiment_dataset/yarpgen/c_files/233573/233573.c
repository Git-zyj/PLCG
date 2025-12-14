/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_1] [i_3] [7] [i_4] |= min((((arr_7 [i_1] [i_3] [i_4]) ? (arr_7 [i_0] [i_1] [i_1]) : 0)), 18446744073709551615);
                                var_19 = (min(((var_2 ? var_3 : ((var_15 ? var_18 : var_12)))), (((-32216 ? (arr_14 [0] [i_4]) : (arr_14 [11] [i_1]))))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] [9] [i_2] = var_16;
                    var_20 = (max(var_20, ((min((min((var_4 % var_18), var_11)), ((17320873325108425656 ? 0 : (-9223372036854775807 - 1))))))));
                    arr_18 [i_0] [i_0] = 556348062998453281;
                }
            }
        }
    }
    var_21 = (min(-54, 32215));
    var_22 = (((((0 & var_12) ? var_15 : var_9)) & var_0));
    #pragma endscop
}
