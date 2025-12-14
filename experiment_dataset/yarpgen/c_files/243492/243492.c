/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = var_14;
        var_16 = (min(var_16, 65535));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_17 = var_12;
        var_18 = (min(var_18, (arr_4 [i_1])));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_10 [2] [2] &= (arr_9 [i_2]);
        arr_11 [i_2] [i_2] = 18446744073709551593;
        var_19 = (max(var_19, var_1));
        var_20 |= (~((((-(arr_8 [8]))))));
    }
    var_21 = var_10;
    #pragma endscop
}
