/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_17 = (~((~(min((arr_0 [i_0]), var_2)))));

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_18 += var_15;
            var_19 = ((((((arr_4 [i_0 + 1]) * 9223372036854775783))) && (0 + 19)));
        }
        var_20 = ((((max(((var_4 ? (arr_0 [i_0]) : 53445)), (var_11 && -32758)))) ? (((min((arr_3 [i_0] [i_0] [8]), (arr_4 [i_0]))))) : ((((1336405375 ? 17367303980722754146 : var_3)) * 9205357638345293824))));
    }

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_21 = (max(var_21, var_14));
        var_22 = 9223372036854775806;
    }
    var_23 = (((((1379353826 ? 53445 : 984648774))) ? var_1 : (min((max(-1, 22)), 0))));
    #pragma endscop
}
