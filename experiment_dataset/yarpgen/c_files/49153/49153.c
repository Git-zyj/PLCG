/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_2] = ((-(((arr_1 [i_0 - 2] [i_1 + 1]) ? (arr_1 [i_0 + 1] [i_1 + 1]) : (arr_1 [i_0 + 1] [i_1 + 2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_11 [i_3] [i_3] [i_2] [i_2] [i_2] = (max((max((arr_10 [i_1 + 1] [i_1] [i_0 + 1] [i_1 + 1] [i_0 + 1]), 456586783412193034)), (max((arr_7 [i_1 + 2] [i_1]), 19152))));
                                arr_12 [i_4] [i_3] [2] [i_0] [2] [i_0] = var_6;
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] [i_2] [i_0] = ((+(((arr_7 [i_0 + 1] [i_1]) * (arr_7 [i_0 - 2] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_18 |= (((min(-4730, 1826596823))) ? (var_4 * var_2) : (!0));
                                var_19 = ((!((!(-2147483647 - 1)))));
                                var_20 |= (max((2147483647 / 10831242423087173936), ((((!10831242423087173936) != (10 < var_10))))));
                                var_21 = (max(var_21, (((~var_9) % (((((var_7 ? 1218522869 : -397031579))) ? (-891976369 / var_7) : (arr_4 [i_5 - 1] [i_5] [i_1 - 1])))))));
                                var_22 ^= ((((((arr_16 [0] [i_6] [i_5 + 1] [i_2] [i_1 + 2] [i_0] [14]) - (-2147483647 - 1)))) ? (min((((var_14 ? var_2 : var_2))), var_4)) : (((-(arr_16 [i_0] [i_0 - 2] [i_1] [i_2] [i_2] [i_5] [i_6]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_8;
    #pragma endscop
}
