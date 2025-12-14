/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (max((((arr_2 [i_0] [i_0]) & 16)), ((var_15 << (268435440 - 268435422)))));
        var_20 ^= (((arr_2 [i_0] [i_0]) & (((arr_2 [1] [i_0]) - (arr_2 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_21 = ((((((var_1 ? (arr_1 [i_1] [11]) : (arr_2 [8] [i_1]))))) ? (max((arr_5 [i_1]), 45114)) : ((((arr_5 [0]) ? 49152 : (arr_5 [i_1]))))));
        var_22 = ((((~(max(var_3, 19280)))) != var_14));
        arr_6 [i_1] = (arr_0 [i_1]);
        arr_7 [i_1] = ((((((arr_4 [i_1]) ? (arr_4 [i_1]) : -19))) <= (max((arr_4 [i_1]), var_3))));
    }
    var_23 = var_0;
    var_24 = ((((((((var_19 ? var_6 : var_4))) ? ((min(var_8, var_18))) : (var_18 ^ 18446744073709551615)))) ? ((~(max(var_3, 4294967295)))) : (((~(4563250550924629527 ^ -7948889185348473894))))));
    #pragma endscop
}
