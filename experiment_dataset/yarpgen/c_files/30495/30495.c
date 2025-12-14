/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= ((((min(((min(0, 84))), (-1874049476 | var_8)))) + ((~((0 ? var_5 : var_2))))));
    var_16 = (var_9 + var_10);
    var_17 = ((var_1 ? ((min(((1 ? var_9 : var_9)), ((max(0, 29707)))))) : ((var_13 ? (((min(163, var_14)))) : ((var_0 ? 4294967295 : var_0))))));
    var_18 = ((var_3 < var_3) / (max((105 | var_10), (-32767 - 1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = var_12;
                arr_6 [i_1] = var_9;
                var_20 &= ((35829 ? (arr_2 [18]) : ((((((arr_0 [i_0]) ? 18446744073709551615 : var_6)) <= var_6)))));
            }
        }
    }
    #pragma endscop
}
