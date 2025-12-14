/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_17 *= 8;
                arr_5 [i_0] [i_0] [i_1] = var_0;
                arr_6 [14] [i_1 - 1] |= (arr_3 [16] [i_1 + 4]);
                arr_7 [i_1] = 7;
            }
        }
    }
    var_18 = var_6;
    var_19 -= (((((~((var_11 ? var_12 : var_10))))) ? (max((((var_13 ? var_5 : var_14))), ((var_12 ? var_15 : var_11)))) : var_14));
    var_20 = var_3;
    #pragma endscop
}
