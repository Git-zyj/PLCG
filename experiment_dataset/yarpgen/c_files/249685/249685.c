/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_2 * var_12) ? var_12 : var_3);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [5] = 1;
                    var_14 = ((((((((arr_3 [i_0] [i_1]) && (-9223372036854775807 - 1)))) >> (2145991314 - 2145991294)))) && var_7);
                }
            }
        }
    }
    var_15 = var_7;
    #pragma endscop
}
