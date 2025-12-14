/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_16 = (max((((150 ? 31282 : (18446744073709551615 == 873623564)))), (arr_0 [i_0] [i_0])));
        arr_2 [i_0] [i_0 - 2] &= ((165 ^ (((arr_0 [i_0] [i_0 + 2]) ? 12469129828897120078 : 17903858219840721641))));
        var_17 &= 12469129828897120051;
    }
    var_18 = (((3933303030 >> (((max(4870, 361664263) - 361664235))))));
    var_19 = (max(var_19, ((((((((312558172 ? 442396158098106996 : var_8))) ? ((min(105, var_11))) : (var_3 / var_11))) >= var_11)))));
    #pragma endscop
}
