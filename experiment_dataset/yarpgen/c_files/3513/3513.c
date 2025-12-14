/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_20 = (arr_2 [i_0] [i_1]);
            var_21 |= ((var_15 ^ (var_4 | var_16)));
        }
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        var_22 = ((((var_3 ? (((arr_8 [i_0]) ? 127 : (arr_12 [i_0] [i_0] [i_3] [i_4]))) : var_1)) & ((((0 & var_19) ? (((min((arr_11 [i_0] [i_3] [i_2] [i_0]), var_16)))) : (min(-127, var_2)))))));
                        var_23 = ((~((((arr_3 [i_2] [i_3] [i_4]) & var_12)))));
                    }
                }
            }
        }
    }
    var_24 = ((((((((9223372036854775807 ? var_6 : 4768841120317708498))) ? ((min(var_5, 31197))) : 3199))) || ((max((((var_17 ? 42462 : 127))), ((2047 ? var_16 : 3932160)))))));
    var_25 = (((!1436514951) ? (3451 / 9223372036854775807) : (-2147483647 - 1)));
    var_26 = (min(var_26, var_9));
    #pragma endscop
}
