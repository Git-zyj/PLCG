/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (arr_1 [i_0 + 2])));
                var_15 = (max((((var_4 ? var_11 : var_13))), ((~(((arr_1 [i_0 + 2]) | (arr_4 [i_0] [i_1] [i_1])))))));
                arr_5 [i_0] [i_0 - 1] [i_1] = ((((((-(arr_4 [i_1] [i_1] [i_0]))) ? var_9 : (var_1 * 1)))));
            }
        }
    }
    var_16 = ((((((var_12 != var_1) ^ var_0))) ? ((var_0 + (var_5 * var_1))) : var_3));
    var_17 = ((~(((var_1 || (1 + 3108))))));
    #pragma endscop
}
