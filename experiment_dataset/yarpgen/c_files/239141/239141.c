/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((((~((7421464348023319529 ? var_3 : 0)))) % (-2147483647 - 1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_13 = (((((var_1 * (arr_4 [i_0] [10] [i_2 + 1] [i_3])))) ? (((~((((arr_4 [i_0] [i_0] [1] [i_0]) >= var_10)))))) : ((9223372036854775807 ? (((-9223372036854775787 ? var_8 : var_6))) : (((arr_7 [i_3] [i_3 - 1]) ? var_1 : 18446744073709551613))))));
                            var_14 = ((var_8 - var_9) + (arr_7 [i_0] [1]));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 8;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_15 -= var_6;
                                arr_17 [i_6] [i_5] [i_4 - 1] [i_1 + 1] [i_1 + 4] [i_0] [i_0] = var_6;
                                var_16 += ((min((arr_3 [i_1 + 1] [i_4 - 2]), (arr_3 [i_1 + 1] [i_4 - 2]))));
                            }
                        }
                    }
                }
                arr_18 [i_1 + 3] [i_0] = (((-2147483647 - 1) ? (max((arr_7 [i_1 - 1] [i_1]), -9223372036854775803)) : var_8));
            }
        }
    }
    var_17 &= (min((!var_8), ((var_1 == (min(15, var_10))))));
    var_18 |= (var_3 + var_3);
    #pragma endscop
}
