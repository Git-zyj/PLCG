/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((((~((var_0 ? 50646 : var_4)))) & (var_8 && var_4)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_14 = 18067;
        var_15 = (arr_0 [i_0]);
        var_16 = (((arr_0 [i_0]) ^ (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_17 = (arr_0 [i_1]);
        arr_4 [i_1] [i_1] = (arr_0 [i_1]);
        arr_5 [i_1] [i_1] = 1;
    }
    var_18 = (min((((max(1, 1)) ? var_2 : var_11)), (~var_3)));
    #pragma endscop
}
