/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((((24576 || (((24586 ? 4568277025738104278 : -4568277025738104279)))))), var_2));
    var_15 = (max(24515, -4568277025738104300));
    var_16 = (min(var_16, (((var_6 ? ((var_6 ? var_0 : var_8)) : (max((~var_13), var_8)))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = 7104162638587661730;
        var_17 = ((!(arr_0 [i_0] [i_0])));
        arr_3 [i_0] = var_11;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_18 = (~3764210823989733220);
        arr_6 [i_1] = -var_0;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        var_19 += var_3;
        var_20 = (min(var_20, (((-(arr_8 [i_2 + 2]))))));
        arr_9 [i_2] = (!3051);
        arr_10 [i_2] = (arr_7 [i_2 - 1]);
    }
    #pragma endscop
}
