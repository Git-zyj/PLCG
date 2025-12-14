/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 |= (((((-((min((arr_1 [i_0]), 160)))))) ? -752321972341051168 : (min(752321972341051168, 3178787864004574229))));
        var_13 = ((!(!var_4)));
        var_14 = (arr_1 [12]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_15 = var_7;
        var_16 = (((arr_3 [i_1]) ? ((var_4 ? 10782715247422349874 : -118299990)) : 8));
    }
    var_17 = var_0;
    var_18 = ((((min((max(var_0, var_6)), (var_9 < var_9)))) ? ((max(((min(var_10, 0))), var_9))) : var_6));
    var_19 = -22;
    var_20 = 49495;
    #pragma endscop
}
