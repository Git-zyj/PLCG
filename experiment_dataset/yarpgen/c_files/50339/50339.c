/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_17 = var_0;
        var_18 = ((!(arr_0 [i_0 - 1])));
    }
    var_19 = 4294967270;
    var_20 = var_1;

    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_21 = (((((~((var_0 ? (-127 - 1) : var_13))))) ? 1073741816 : (arr_4 [i_1] [i_1 - 1])));
        var_22 = (max((((4294967284 ? -77 : 1))), (min(1, 4294967285))));
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_23 *= ((~(((arr_3 [4]) ? 3221225475 : (arr_6 [i_2])))));
        var_24 = ((((((-(arr_0 [i_2]))) + 2147483647)) >> (min(var_10, 1))));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_25 = (4294967290 ? 4363686772736 : 1073741832);
        var_26 = 70;
    }
    #pragma endscop
}
