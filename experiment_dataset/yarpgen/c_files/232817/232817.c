/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    var_20 *= var_2;
    var_21 &= var_16;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_22 = (((((((min(var_5, (arr_2 [i_0] [6])))) - (0 * var_6)))) && (((1521245825 ? 4934706280331113014 : var_16)))));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_23 = var_14;
                        var_24 = 1;
                        var_25 = ((1 >= ((((((131 * (arr_7 [i_0] [i_0] [16])))) || ((((arr_11 [i_0 + 3] [i_0] [19] [i_3] [i_0] [i_0]) << (var_0 - 1876068435)))))))));
                        var_26 = (i_0 % 2 == 0) ? ((((arr_7 [i_0 + 3] [i_0] [i_0 + 3]) ? (((((arr_9 [i_2 - 1] [i_2 + 3] [i_2 - 1] [i_0] [i_0 - 1] [i_0 - 1]) + 9223372036854775807)) >> (((arr_7 [i_0 + 2] [i_0] [i_0 + 2]) - 3118101128)))) : (((-(arr_7 [i_0 - 1] [i_0] [i_0 - 1]))))))) : ((((arr_7 [i_0 + 3] [i_0] [i_0 + 3]) ? (((((arr_9 [i_2 - 1] [i_2 + 3] [i_2 - 1] [i_0] [i_0 - 1] [i_0 - 1]) + 9223372036854775807)) >> (((((arr_7 [i_0 + 2] [i_0] [i_0 + 2]) - 3118101128)) - 4162134496)))) : (((-(arr_7 [i_0 - 1] [i_0] [i_0 - 1])))))));
                        var_27 = ((((max((min(var_0, var_5)), (~1)))) ? (arr_9 [i_3] [i_2] [i_0] [i_0 + 3] [i_0] [i_0 + 3]) : ((((arr_10 [i_0]) & var_1)))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_28 -= var_11;
                                var_29 = (((((((0 ? var_18 : var_14))) - (((arr_13 [i_0] [i_0] [1]) - (arr_2 [i_0] [i_0]))))) >= (min(var_16, (((var_2 && (arr_8 [i_0]))))))));
                                var_30 *= (((((var_10 & (arr_9 [i_4 + 4] [i_4 + 4] [1] [i_5 + 2] [i_0 - 1] [i_5 + 2])))) || (arr_9 [i_4 - 1] [i_1] [i_5 - 2] [i_5 + 2] [i_0 + 3] [i_5 - 2])));
                                var_31 |= (-((~(var_13 < var_7))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
