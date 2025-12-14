/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_10 = (max(var_1, (!-218)));
                arr_6 [i_0] = (((max(((18446744073709551615 ? var_7 : 5392398116770670371)), (arr_4 [i_1 - 3] [i_1] [i_1]))) | (arr_4 [i_0] [i_0] [i_1])));
                var_11 &= (((min((((arr_5 [i_1] [i_0]) - 18446744073709551615)), 25520)) / (max(1, var_0))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_12 = -12943;
                var_13 *= (arr_8 [i_2]);
                var_14 += (min(18446744073709551615, ((min(((~(arr_11 [i_2] [i_2]))), ((((arr_8 [i_3]) || var_0))))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            arr_18 [i_5] [i_3] [i_4] [6] [i_4] = var_3;
                            arr_19 [i_2] [i_3] [i_3] [i_4] [i_3] = ((~(((min(7, var_1)) & (min(-8, -7))))));
                            var_15 = (min(var_15, 18446744073709551615));
                        }
                    }
                }
                var_16 = (min(2200808352209079493, 40712));
            }
        }
    }
    var_17 &= (((max(((var_5 ? var_0 : var_7)), 52)) < (!var_8)));
    #pragma endscop
}
