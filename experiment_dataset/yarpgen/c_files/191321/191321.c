/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_12 = -9223372036854775788;
        arr_2 [i_0] = (!9223372036854775766);
        var_13 = (max((min((arr_1 [i_0] [i_0]), (!var_0))), var_10));
        arr_3 [i_0] = -9223372036854775788;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_14 = (((((arr_5 [i_1] [i_1]) && var_0)) ? (!var_10) : var_3));
        var_15 = ((994924831 ? -1 : 0));
    }
    var_16 = var_9;
    var_17 = var_1;
    var_18 = var_11;
    #pragma endscop
}
