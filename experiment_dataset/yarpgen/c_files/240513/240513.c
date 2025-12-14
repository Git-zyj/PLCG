/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;
    var_16 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = (-2147483647 - 1);
        arr_4 [i_0] = (arr_2 [i_0] [i_0]);
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        arr_8 [i_1] = (-130053423 / -1);
        var_18 = (min((arr_1 [i_1]), var_7));
    }
    var_19 = (((((var_6 ? (min(var_12, var_1)) : (!var_10)))) ? (((((-157197070 ? 3830016607 : -73))) ? var_13 : var_0)) : ((((~var_5) >= var_4)))));
    #pragma endscop
}
