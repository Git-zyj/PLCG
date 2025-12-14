/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_4 [5] &= ((!(((274750878 ? -274750878 : -274750879)))));
        arr_5 [i_0] = ((60851801 && ((((arr_3 [i_0]) % var_1)))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_15 = (min(var_15, (((157 ? var_10 : ((~(!274750896))))))));
        var_16 = (~22);
    }
    var_17 = var_1;
    #pragma endscop
}
