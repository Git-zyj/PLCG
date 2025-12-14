/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-(((min(var_5, var_5)) << (var_14 + 2022911802)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_16 -= -1039;
                            var_17 = (((!(~var_11))));
                        }
                    }
                }
                var_18 = var_10;

                /* vectorizable */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    var_19 = (-(arr_5 [i_0]));
                    arr_15 [i_0] [9] [9] = ((arr_11 [i_0]) ? (arr_13 [i_0 - 1] [i_0 - 1] [i_1] [i_4]) : (arr_7 [i_1 - 1]));
                }
            }
        }
    }
    var_20 |= ((-(((((min(var_11, -1)) + 9223372036854775807)) << (((0 + 17512) - 17512))))));
    var_21 = ((max((var_7 + 11760738979870595221), -1)));
    #pragma endscop
}
