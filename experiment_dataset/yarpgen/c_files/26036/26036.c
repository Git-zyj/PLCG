/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((248 ? (-127 - 1) : 125));
    var_20 = var_3;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_21 = var_5;
        var_22 = arr_0 [i_0];
        var_23 = (arr_0 [i_0 + 2]);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_24 = 187;
        var_25 = ((-((~(arr_5 [i_1])))));
        var_26 = ((-0 ? -70368677068800 : (((-(arr_3 [i_1] [i_1]))))));
        var_27 += ((var_15 != (arr_3 [i_1] [i_1])));
        var_28 = 64;
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_29 = (((~70368677068795) == -77));
        arr_8 [i_2] &= -27;
        var_30 = ((41 + ((-(arr_4 [i_2])))));
    }
    #pragma endscop
}
