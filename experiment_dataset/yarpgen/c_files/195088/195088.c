/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((65516 ? -3927420766142758249 : 18446744073709551615)) ? 14868536113001522794 : (var_11 ^ 3827449479357334700)))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0 - 1] = var_5;
        var_18 = ((-(arr_1 [i_0 + 1])));
        arr_5 [10] [i_0] = ((max((arr_0 [i_0]), var_9)));
    }
    for (int i_1 = 4; i_1 < 13;i_1 += 1)
    {
        var_19 = ((-var_9 ? (arr_2 [i_1 + 2] [i_1 + 3]) : ((~(arr_2 [i_1] [i_1 - 4])))));
        var_20 = -var_16;
    }
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        arr_10 [i_2] = ((((((arr_9 [i_2 + 1] [i_2]) ? 119 : var_15))) ? (((min(var_15, var_9)))) : ((((arr_9 [i_2 + 1] [i_2 - 1]) || var_15)))));
        arr_11 [i_2] = (((((137 ? (arr_8 [i_2] [i_2]) : (arr_8 [i_2] [i_2 - 1])))) ? ((((((arr_9 [i_2] [i_2]) ? (arr_8 [i_2] [i_2 + 1]) : 123))) + ((128 ? (arr_9 [i_2] [i_2]) : var_6)))) : ((max((arr_9 [i_2 + 1] [i_2]), 9223372036854775804)))));
        var_21 = 119;
        var_22 ^= 15;
    }
    var_23 = (max(var_23, var_0));
    #pragma endscop
}
