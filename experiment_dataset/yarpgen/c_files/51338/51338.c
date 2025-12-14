/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (min(((var_10 ? var_0 : var_6)), (min(((min(124, 20510))), (var_6 * var_7)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = (((min((((6864 && (arr_1 [i_2 - 1])))), (arr_5 [i_0 + 1] [i_0 + 1]))) << (((((((~(arr_0 [i_0])))) ? 58671 : var_5)) - 58644))));
                    var_16 = (min(var_16, ((((15 ? (arr_6 [i_0 - 1] [9] [i_2]) : var_2))))));
                }
            }
        }
    }
    var_17 = (min(var_17, 9042919692312787352));
    #pragma endscop
}
