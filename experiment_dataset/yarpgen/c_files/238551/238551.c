/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_0, (min((((107 << (25256 - 25247)))), (min(var_1, 128))))));
    var_19 = (((((var_0 ? 0 : var_12)) ? var_14 : var_6)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = 0;
        var_21 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_22 ^= (((((-(arr_3 [i_1] [10])))) || ((((arr_2 [i_1] [i_1]) ? ((40280 ? (arr_2 [8] [8]) : (arr_1 [i_1]))) : (((-(arr_2 [i_1] [0])))))))));
        arr_5 [i_1] [i_1] = ((+(min((((arr_0 [i_1] [1]) | (arr_3 [i_1] [i_1]))), ((min(0, 65535)))))));
        var_23 = ((((((((253 ? 25254 : -32751))) ? ((((!(arr_3 [i_1] [i_1]))))) : (min(16777, 13902242685142201097))))) ? -2510965870230779415 : ((((((arr_3 [i_1] [i_1]) ? (arr_4 [i_1]) : (arr_2 [19] [i_1])))) ? (((-10276 ? 0 : 1))) : (min(32704, (arr_0 [i_1] [i_1])))))));
    }
    #pragma endscop
}
