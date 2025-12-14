/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_14 = ((((-115 ? var_4 : 2395125140277625989)) == -616467161));
        var_15 = (!((var_0 <= (arr_0 [i_0] [i_0]))));
        var_16 += (0 < -8629155790985884285);
        var_17 -= (((arr_0 [i_0 + 2] [i_0 + 2]) <= (arr_0 [i_0 - 1] [i_0])));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_18 = (arr_1 [i_1]);
        var_19 = (((arr_3 [i_1]) >> (((1 | var_12) - 31445))));
        var_20 = ((!(arr_1 [i_1])));
        var_21 = (max(var_21, (((~(arr_2 [i_1] [i_1]))))));
    }
    var_22 = ((~((((!var_2) <= var_8)))));
    #pragma endscop
}
