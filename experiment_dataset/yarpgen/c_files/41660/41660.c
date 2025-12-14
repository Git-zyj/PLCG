/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((min((((min(var_9, 1683750024767842603)) ^ (var_11 + var_15))), ((var_8 | (17317308137472 | 207))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] [i_0] = ((1683750024767842605 ^ var_4) && (6916 > 1683750024767842605));
                arr_5 [i_0 - 1] [i_1] [i_0] = (arr_0 [i_0]);
                var_17 |= (max((((arr_3 [i_0 + 1]) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 + 1]))), -127));
                arr_6 [i_0] = 212;
            }
        }
    }
    #pragma endscop
}
