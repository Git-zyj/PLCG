/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (((~14624100165247268469) ? (((~1) * (!6386674749946044424))) : var_2));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_11 = ((+((((((arr_0 [i_0 - 2] [i_0 - 2]) ? 4294967295 : var_9))) ? (var_6 >= 7493) : (((arr_1 [i_0]) >> (124 - 107)))))));
        var_12 -= ((((((((arr_0 [i_0 - 2] [i_0 + 1]) * (arr_0 [0] [0]))) / -68))) ? ((((((arr_1 [i_0 - 1]) / var_8))) ? ((19206 ^ (arr_1 [5]))) : (~-32654))) : (((((~(arr_1 [i_0]))) >= (~var_2))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_13 = ((((((!-21) ? (((!(arr_3 [i_1] [i_1])))) : ((((arr_3 [3] [i_1]) || var_9)))))) ? ((((var_6 >= 68) == (74 - var_2)))) : (69 ^ -64)));
        arr_4 [i_1] = (((((var_8 ? (((arr_3 [23] [23]) ? var_3 : -1639)) : (((var_6 >= (arr_2 [i_1] [i_1]))))))) ? ((((9223372036854775807 < 68) ? (~0) : (((arr_3 [i_1] [i_1]) >> (49 - 24)))))) : (((var_0 | var_9) ? 3114328625 : (((-9223372036854775807 - 1) ? 4294967284 : 1809))))));
        var_14 &= (((((((~(arr_2 [12] [6]))) % ((-(arr_2 [8] [i_1])))))) ? ((~(!14321))) : (((!(((15530 ? 4071834558 : var_8))))))));
        var_15 = ((~((((~1783815892721591823) > (var_3 + 16662928180987959792))))));
    }
    #pragma endscop
}
