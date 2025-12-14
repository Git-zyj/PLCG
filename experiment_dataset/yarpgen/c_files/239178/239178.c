/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_17 *= ((var_3 && ((!(arr_0 [i_0 - 1] [8])))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, (((((((arr_2 [i_1] [2] [i_2]) & (arr_0 [i_0] [i_1])))) ? var_1 : (-6 % 122))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, (((arr_5 [i_0] [i_3 - 1] [i_1]) ? (arr_5 [i_3] [i_3 - 2] [i_3]) : (arr_5 [i_2] [i_3 - 1] [i_1])))));
                                var_20 ^= ((var_12 != (arr_6 [i_0 + 1] [i_1 + 1])));
                                var_21 = -var_10;
                                var_22 = (((((arr_10 [2] [i_0] [i_2] [9]) << var_11)) != (((var_0 || (arr_0 [i_1] [i_3 - 1]))))));
                                var_23 = (arr_12 [i_0] [i_0] [i_2] [i_3]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 -= ((((((-38832842 && 1902) ? var_5 : ((1 ? 1 : 9223372036854775807))))) ? ((((!(var_7 || -23289))))) : (min((15 && var_1), var_12))));
    var_25 = var_3;
    var_26 = ((var_14 * ((var_3 ? (var_12 & var_8) : (!var_12)))));
    #pragma endscop
}
