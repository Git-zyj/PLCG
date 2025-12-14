/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_10 = (max(var_10, var_6));
                    var_11 = (min(var_11, (arr_2 [10] [10])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_12 -= ((((arr_6 [i_0]) * (arr_6 [i_0 + 2]))));
                                var_13 = (max(var_13, (arr_6 [i_0])));
                                var_14 = var_5;
                            }
                        }
                    }
                    var_15 = (((((-65 & (arr_11 [i_2 - 1] [12] [i_0 + 1] [i_1 + 1] [i_0 + 1] [i_0 + 1])))) ? ((max(73, 87))) : -9223372036854775807));
                    var_16 = (arr_7 [i_0] [i_1] [i_2]);
                }
            }
        }
    }
    var_17 = var_4;
    var_18 = var_3;
    var_19 = var_6;
    #pragma endscop
}
