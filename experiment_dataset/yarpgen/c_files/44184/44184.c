/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    var_15 = ((var_0 ? (var_7 * var_7) : var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_16 -= (var_11 ? (((((((4385374692041851835 ? 63 : var_4))) && 50)))) : (max(var_9, ((min(86, 21821))))));
                            arr_11 [i_0] [i_0] [i_2] [i_3 - 2] = var_12;
                            var_17 = (arr_8 [i_0] [i_0] [i_0]);
                            var_18 *= var_13;
                            arr_12 [i_0] [i_0] = ((~((-(arr_9 [i_3 - 2] [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_3])))));
                        }
                    }
                }
                var_19 = (((((((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? 21821 : var_8)))) ? (max(((((arr_4 [i_0]) && 9223372036854775807))), ((var_6 ? 227 : var_4)))) : 6));
                var_20 = ((max((min(268435455, var_8), (((var_1 ? var_10 : (arr_5 [i_0]))))))));
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_21 = (max(var_21, -3750491558428059237));
        var_22 = ((117 ? -268435476 : 2080374784));
        var_23 = (arr_0 [i_4] [i_4]);
    }
    var_24 = ((130 + (14061369381667699782 || var_8)));
    #pragma endscop
}
