/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((1 ? (((1 % 1) ? (min(1, 0)) : var_7)) : var_2));
    var_21 = var_3;
    var_22 = (((-var_15 * 0) ? var_18 : ((((min(var_5, 0)))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_23 = (max(var_23, (arr_1 [i_0 - 4])));
                var_24 = (max(var_24, ((min(((max(-31529, 0))), (((arr_2 [i_0 - 2] [i_1]) >> ((((-2100675932354334791 ? var_16 : -26)) - 2765613828)))))))));
            }
        }
    }
    #pragma endscop
}
