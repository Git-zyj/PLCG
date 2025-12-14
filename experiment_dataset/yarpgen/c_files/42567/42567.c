/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_12 = (((((((-2619174093685596323 + (arr_0 [1])))) ? 1 : (2147483646 == 1876485138))) | ((1 ? -2619174093685596323 : -3178920748093533059))));
        var_13 = ((~((((((arr_0 [i_0]) & var_7))) ? ((28177 | (arr_0 [3]))) : (((arr_0 [i_0]) >> (var_0 - 9472398879754625203)))))));
        var_14 = (min(var_14, (~-1)));
        arr_2 [i_0] = (arr_0 [i_0]);
    }
    var_15 = ((-(min((var_5 * -1), var_10))));
    var_16 = (min(var_5, var_0));
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            {
                var_17 *= ((((((-9 ^ var_10) % -2147483647))) < ((~((var_0 ? var_11 : 10595907278335846637))))));
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_18 = ((-(max((arr_13 [i_4 - 1] [i_2] [i_3] [i_4]), (arr_16 [i_1 - 2] [i_2] [i_2])))));
                                var_19 = (min(var_19, -1876485145));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (min(((min(var_7, (max(var_2, var_1))))), (((var_6 | var_4) ^ var_0))));
    #pragma endscop
}
