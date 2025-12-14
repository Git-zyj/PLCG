/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (max(var_3, ((-(var_3 / var_3)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_19 = (~0);
                    arr_8 [i_0] [i_1] [i_0] = ((!(~var_2)));
                    arr_9 [i_0] [i_0] [i_0] [i_2] = (((arr_5 [i_0 + 1] [i_1 - 3] [i_2]) < (((1 ? 1 : var_3)))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, (~1)));
                                var_21 -= (((min((arr_10 [i_0] [i_1] [i_0 + 1] [i_3] [i_3 - 1] [i_1 - 2]), var_8)) / (((((arr_10 [i_4] [9] [i_0 + 1] [2] [i_3 + 2] [i_1 + 1]) + 9223372036854775807)) << (((((arr_10 [9] [i_1 + 1] [i_0 + 1] [1] [i_3 + 1] [i_1 - 2]) + 9179167178576887931)) - 35))))));
                                arr_15 [4] [i_1 - 2] [i_1 - 2] [8] &= ((+(((!(((1 >> (((arr_10 [i_0] [i_0] [i_0] [i_0] [1] [i_0]) + 9179167178576887919))))))))));
                            }
                        }
                    }
                    var_22 = ((((var_2 <= ((min(1, var_14))))) ? 1 : (min((0 % 1), var_8))));
                }
            }
        }
    }
    #pragma endscop
}
