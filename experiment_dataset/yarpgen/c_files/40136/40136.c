/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (min((min(var_4, (-3466 & var_8))), 8));
    var_17 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = ((((arr_2 [i_0]) ? var_8 : (arr_2 [i_1]))) << (((((arr_2 [i_0]) ? (arr_3 [i_0 + 2] [i_1] [i_0 - 1]) : ((((arr_2 [i_0]) ? var_13 : (arr_2 [i_0 + 2])))))) - 548465576)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_19 = (min(((var_10 & (arr_6 [i_0] [i_0] [i_0] [i_0 - 1]))), ((((((arr_1 [i_0 + 2] [i_0]) ? 98 : 38)) + var_0)))));
                            var_20 = ((((((-2147483647 - 1) ? (min(-4, (arr_1 [i_1] [i_2]))) : var_3))) ? (max(((var_15 | (arr_0 [i_0 + 1] [i_0]))), ((min(28399, var_15))))) : var_11));
                        }
                    }
                }
            }
        }
    }
    var_21 = (max((min((((-2147483647 - 1) / -1957081125)), (4026531840 == 63390))), (((((var_11 ? var_9 : var_2))) ? var_3 : var_4))));
    var_22 = 127;
    #pragma endscop
}
