/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((var_1 * var_12) ? (((var_11 ? var_9 : var_10))) : (6558696889252969956 * var_12)))) ? -71 : var_1));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_15 = (max(var_15, (arr_3 [6] [i_0 - 3] [i_1 + 1])));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 14;i_4 += 1)
                            {
                                arr_15 [i_0] [11] [i_1] [i_1] [i_3] [i_3] [i_4] = (arr_9 [7] [i_2] [i_3 - 1] [i_4]);
                                var_16 *= ((-(arr_14 [i_1 + 1] [i_4] [i_4] [i_4] [i_4])));
                                var_17 = arr_2 [i_0] [i_1];
                                var_18 = 8123;
                            }
                            arr_16 [i_1] [i_1] [i_2] [i_3] [i_0] [i_3 - 1] = ((((arr_9 [i_1 + 2] [i_1] [i_1] [i_1]) ? (arr_5 [i_0 + 1] [i_1] [i_1 - 1] [i_1]) : var_11)));
                        }
                    }
                }
                var_19 = (max(var_19, ((((((-var_0 ? var_1 : (var_0 << var_12)))) ? (arr_5 [i_0 + 2] [i_0 + 1] [i_0] [4]) : (((arr_7 [i_1 - 1] [i_1 + 3] [i_1]) ? (arr_7 [i_1 - 2] [i_1 + 1] [i_1]) : 803620897123592132)))))));
                var_20 = var_10;
                arr_17 [i_0] [i_1] [i_0] = (arr_6 [i_0] [i_0] [8]);
                var_21 ^= (arr_3 [8] [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
