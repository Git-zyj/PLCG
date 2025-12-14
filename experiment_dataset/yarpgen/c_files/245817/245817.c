/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((17473 ? ((((min(var_1, var_2))) ? 1686578407 : var_1)) : var_10));
    var_12 -= (var_2 | var_4);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            var_13 += 2;
            var_14 -= var_5;
        }
        arr_5 [7] [i_0] = -5269695123442204680;
        var_15 = (arr_0 [i_0]);
    }
    #pragma endscop
}
