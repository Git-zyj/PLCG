/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 ^= (-(arr_0 [i_0]));
        var_14 ^= (arr_0 [i_0]);
        arr_2 [i_0] = var_4;
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_15 = 1186579549;
        arr_5 [i_1] = (((((-(min(73, -2134167541))))) ? ((((var_7 | var_9) >= (!var_8)))) : var_12));
        arr_6 [i_1] = ((var_11 == ((((-(arr_3 [i_1])))))));
    }
    var_16 = var_6;
    var_17 = var_3;
    var_18 = ((var_5 ? var_2 : var_4));
    #pragma endscop
}
