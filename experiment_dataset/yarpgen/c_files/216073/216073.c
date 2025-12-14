/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_3, (((var_7 ? var_6 : 0)))));
    var_20 = ((1 << (!1044094566)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = (max((((((0 ? 248 : var_15))) ? ((var_15 ? 0 : var_15)) : 1)), 0));
                var_22 = (((((1 / (arr_2 [i_0 - 2] [i_0])))) ? var_12 : ((-((127 ? (arr_0 [1]) : (arr_1 [i_0 - 3] [i_1])))))));
                var_23 &= ((var_5 << (((arr_2 [i_0] [i_1]) + 1913951624))));
            }
        }
    }
    var_24 = ((((1 >= (var_1 | 23436))) ? (((max(127, var_8)))) : var_10));
    var_25 = var_7;
    #pragma endscop
}
