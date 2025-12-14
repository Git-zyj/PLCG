/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_0] = (max(32413, -103));
                var_12 = ((32434 ? 16727849903910017254 : (5743 == 1988810837803317931)));
                var_13 = (((((((var_2 ? (arr_4 [i_0]) : (arr_1 [2] [i_0])))) ? (max(var_4, 12805720471970146632)) : 12805720471970146621)) >> (arr_2 [i_0] [i_1])));
            }
        }
    }
    var_14 = var_9;
    var_15 += ((((((102 ? var_5 : var_3))) ? var_5 : var_9)) & var_0);
    #pragma endscop
}
