/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((((max(var_3, var_4)) << ((((((var_8 ? -5304130925161629945 : var_10)) + 5304130925161629961)) - 15))))), ((((min(var_10, var_7))) ? (~var_8) : (~207)))));
    var_15 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_1] [17] [17] = (arr_2 [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_16 = ((((max(((max(var_6, var_6))), 5304130925161629945))) ? var_13 : -6397682119355728232));
                            var_17 -= (((arr_6 [i_3] [i_3] [i_2]) / (max(var_7, (min((arr_4 [i_0] [i_1]), var_1))))));
                        }
                    }
                }
                var_18 = (max(var_18, -var_8));
                var_19 = ((-(max(var_10, ((var_8 ? (arr_6 [i_0] [i_0] [20]) : (arr_0 [i_0])))))));
                var_20 = (arr_6 [i_0] [i_1] [i_0]);
            }
        }
    }
    #pragma endscop
}
