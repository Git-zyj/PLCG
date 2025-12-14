/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = (max(var_0, var_14));
                var_21 = (max(((((((arr_4 [i_1] [i_1]) ? (arr_2 [i_0]) : (arr_3 [i_1] [i_0 + 1] [i_0]))) == ((-8 ? var_16 : (arr_0 [7] [i_1])))))), -20518));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_3] [i_1] = var_15;
                                arr_13 [i_0] [i_1] [i_2] [1] [i_1] [i_3] = (((arr_8 [i_1] [1] [1] [i_2] [19] [i_1]) ? ((4294967295 * (arr_11 [i_0 + 4] [i_0 + 4] [i_0 + 1] [i_0 + 3] [i_1]))) : ((((!((min((arr_5 [i_0] [i_1] [i_0]), 2234)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 &= var_6;
    var_23 = (min(((-9223372036854775807 ? var_2 : (max(63301, var_4)))), ((max(((26 ? -3216421204371524897 : var_10)), var_13)))));
    var_24 = ((var_5 ? (-14 | var_16) : var_16));
    #pragma endscop
}
