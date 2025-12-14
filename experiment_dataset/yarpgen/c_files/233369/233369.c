/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_15 = (arr_1 [i_0 + 1]);
        var_16 = (arr_1 [i_0 - 1]);
    }
    var_17 &= (((((-var_10 ? -5613559906669791831 : (~var_0)))) || -var_4));
    var_18 -= 3901573212091493168;
    var_19 = max((((var_13 ? 4906040676101928951 : -5613559906669791840))), var_11);
    #pragma endscop
}
