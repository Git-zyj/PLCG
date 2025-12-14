/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0 + 1] [i_0] = (min((min(((8 ? 27608 : 65535)), (~573))), ((((((0 ? 1 : -574)) + 2147483647)) >> (651920109926294304 - 3457622802)))));
        arr_4 [i_0 - 1] = ((((min(var_10, var_4))) ? (((arr_2 [i_0 + 1] [i_0 - 4]) ? (arr_2 [i_0] [i_0 + 1]) : 12497105075288720298)) : ((((arr_2 [8] [i_0 - 2]) ? var_5 : 1)))));
        arr_5 [11] = (arr_2 [i_0] [i_0 - 4]);
        var_14 = (min((arr_0 [i_0 - 3] [i_0 + 1]), ((min(((min(9, 34599))), ((574 ? var_11 : 236)))))));
        arr_6 [i_0] = 3869614457;
    }
    var_15 ^= ((-(min((((var_11 ? 2124391140 : 1))), (var_7 & var_6)))));
    var_16 = (min(225, var_7));
    #pragma endscop
}
