/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((32746 ^ var_2) >= (~1)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_15 = (max(var_15, var_3));
        arr_3 [i_0] [19] = 32731;
        var_16 = (((arr_0 [0]) && var_1));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        arr_8 [i_1] [8] = (max((~-1), ((((var_11 >> (134209536 - 134209505))) >> (((((arr_0 [i_1 + 1]) + var_6)) + 56574))))));
        var_17 = (min(var_17, var_0));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_18 ^= var_2;
        var_19 = (arr_11 [i_2]);
    }
    #pragma endscop
}
