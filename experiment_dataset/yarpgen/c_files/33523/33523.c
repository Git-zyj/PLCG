/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (-32767 - 1);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] = ((-33 ^ ((((arr_0 [2] [i_0]) <= (-32767 - 1))))));
        var_21 = ((((((-32767 - 1) + 1))) && var_14));
        var_22 = (1688417246 != 245);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_5 [i_1] = (min(((((32764 << (-10880 + 10890))) + (arr_4 [i_1]))), -9709770));
        var_23 = ((!(((-(254 || 1892892411369231198))))));
    }
    var_24 = max(255, 12003);
    var_25 *= (-32767 - 1);
    #pragma endscop
}
