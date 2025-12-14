/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_13 *= ((176 + (min(var_5, 70368743129088))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_14 = (i_0 % 2 == 0) ? (((((((((arr_5 [i_0] [i_2] [i_0]) ? -20 : 3652178580))) | (((arr_5 [i_1 + 1] [i_2] [i_0]) ? 0 : var_9)))) % ((((((arr_2 [i_0] [i_0]) + 2147483647)) >> ((((0 ? (arr_1 [i_1] [3]) : (arr_0 [i_0]))) - 113)))))))) : (((((((((arr_5 [i_0] [i_2] [i_0]) ? -20 : 3652178580))) | (((arr_5 [i_1 + 1] [i_2] [i_0]) ? 0 : var_9)))) * ((((((((arr_2 [i_0] [i_0]) - 2147483647)) + 2147483647)) >> ((((((0 ? (arr_1 [i_1] [3]) : (arr_0 [i_0]))) - 113)) + 118))))))));
                            arr_12 [i_0] = 2846;
                            var_15 = (((((~(arr_1 [i_3 - 1] [i_3 - 1])))) > (arr_5 [i_3 - 1] [i_1 + 1] [i_0])));
                        }
                    }
                }
                var_16 = (max(var_16, (((!((((var_3 && var_9) | -2861))))))));
            }
        }
    }

    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_17 &= (arr_15 [16]);
            var_18 = (((((var_8 ? var_7 : 0))) % (((arr_13 [0]) ? var_6 : 0))));
            arr_18 [i_5] [i_5] [15] = var_6;
        }
        arr_19 [i_4] |= (arr_16 [7] [i_4]);
    }
    for (int i_6 = 2; i_6 < 6;i_6 += 1)
    {
        var_19 = (max(var_19, (((+(((arr_5 [i_6] [i_6 + 1] [i_6]) % var_9)))))));
        var_20 = (((10 ? (var_7 + var_6) : var_6)));
    }
    var_21 = (((((-var_1 >> (-2846 + 34)))) + var_2));
    #pragma endscop
}
