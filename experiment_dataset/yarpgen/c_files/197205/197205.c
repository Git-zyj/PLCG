/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_1] |= (((((arr_1 [i_1]) ? var_14 : var_3)) >> ((((max(var_13, var_0))) - 30323))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_17 = (4294967295 ? 5961283369560891721 : 1908502582);
                            var_18 += max(1, 1908502582);
                            arr_13 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] = (max(((min((arr_12 [i_3 - 2] [i_3 - 3] [i_3 - 2] [i_3 + 1]), var_2))), (min(0, 917287961))));
                        }
                    }
                }
                var_19 = (min(var_19, (((!((min((arr_12 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_1 + 2]), (arr_9 [i_1] [i_0 + 2] [i_1])))))))));
                var_20 = (min(var_20, var_6));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 16;i_5 += 1)
        {
            {
                var_21 *= ((106 ? 1 : 18446744073709551610));
                var_22 ^= ((var_8 & (min((arr_16 [i_5 + 1] [i_5]), (arr_15 [1] [1])))));
            }
        }
    }
    var_23 = (min(var_23, (max(var_6, (((-(min(1, 2386464724)))))))));
    #pragma endscop
}
