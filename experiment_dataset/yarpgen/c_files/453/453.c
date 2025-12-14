/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_18 = (min((((4294967281 >= (max(15, 65535))))), (max(((((arr_2 [i_3] [i_0]) && 14))), ((27 ? var_9 : -11663))))));
                            var_19 -= (((var_13 << var_13) >> (((arr_6 [i_0] [i_0] [i_0] [i_0]) + 8435369789142101103))));
                        }
                    }
                }
                var_20 *= (max(((((max((arr_5 [i_1] [i_0] [i_0] [i_1]), var_8)) < (((var_12 ? var_17 : var_17)))))), (((!11036) ? (arr_1 [i_0] [2]) : -var_8))));
                arr_10 [i_0] = (((var_17 < 0) >= (max(var_12, 0))));
                var_21 = (((((39332 >> (((arr_8 [i_0] [i_0] [i_1 - 3] [i_1 - 2]) - 9534435113067844336))))) && (arr_7 [i_0])));
                var_22 -= (((var_0 - 1048320) + -var_4));
            }
        }
    }
    var_23 = (11447 | (((((var_3 ? 1 : var_15))) * (var_0 & var_2))));
    #pragma endscop
}
