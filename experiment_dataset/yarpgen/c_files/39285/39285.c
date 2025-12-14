/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((-54 - (max(var_9, 65472)))) << (((max((max(2279459495, 247)), ((((-9223372036854775807 - 1) || 768))))) - 2279459471))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 = (max(var_12, ((-(max((((var_8 ? 65526 : 2015507775))), (arr_0 [0] [0])))))));
        var_13 = ((max(-1, (3 - 9223372036854775807))) ^ (-9223372036854775807 - 1));
        var_14 = ((~((17 ? 3 : 2239880592))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_15 = (max(var_15, (((-5 ? 0 : 2279459495)))));
        var_16 = ((~(((arr_3 [i_1]) >> (var_2 + 7210959846574668814)))));
        var_17 = ((1 ? (255 & var_8) : ((((arr_3 [i_1]) == 32750)))));
    }
    var_18 = ((((0 | 1) + (!1649452556))));
    var_19 &= ((var_3 == (0 | 1)));
    #pragma endscop
}
