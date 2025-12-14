/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max(((-8407527420310421624 + ((var_1 ? var_12 : var_4)))), var_10);
    var_17 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [9] = (((arr_4 [i_0] [i_1] [i_0]) ? ((var_2 << (((arr_1 [i_0]) - 47380)))) : ((((-32767 - 1) ? 3164287436 : 93)))));
                arr_6 [i_1] [i_1] = (((-32754 ^ 5930365578686058112) == (arr_4 [i_1 - 1] [i_1] [1])));
            }
        }
    }
    #pragma endscop
}
