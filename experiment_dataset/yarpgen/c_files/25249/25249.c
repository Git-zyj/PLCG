/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += var_3;
    var_14 = (((max((~var_2), 71)) ^ ((((var_12 & var_4) | var_10)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = (max(var_15, ((((((-72 ? (-127 - 1) : -71))) ? (((!(((-(-127 - 1))))))) : ((((var_9 >= var_10) && var_5))))))));
        var_16 = -71;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_17 += -23;
        var_18 = (min(var_18, var_0));
    }
    #pragma endscop
}
