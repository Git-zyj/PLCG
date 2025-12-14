/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_10 = (((((arr_4 [i_1 + 2] [i_1 + 1] [i_1 - 1]) == (arr_4 [i_1 - 1] [i_1 - 3] [i_1 - 2]))) ? ((var_4 ? var_2 : (arr_4 [i_1 + 2] [i_1 - 3] [i_1 + 1]))) : (arr_4 [i_1 - 1] [i_1 - 2] [i_1 + 2])));
                var_11 = (max((!2), 3));
            }
        }
    }
    var_12 = var_3;
    var_13 = (min(var_13, (var_1 <= var_7)));
    #pragma endscop
}
