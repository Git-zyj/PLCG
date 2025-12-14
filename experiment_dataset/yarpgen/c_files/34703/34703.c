/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= var_6;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_11 = ((~((54 ^ (((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : var_0))))));
        var_12 = (((((~(-9223372036854775807 - 1)))) ? (!9223372036854775807) : ((var_2 ? (arr_3 [i_0] [i_0]) : -var_0))));
    }
    var_13 = (65529 | var_5);

    /* vectorizable */
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_14 = var_6;
            var_15 = (((arr_7 [i_1 + 1] [i_1 - 2]) ? var_5 : 0));
            var_16 *= (((arr_4 [i_1 + 1]) ? (arr_4 [i_1 - 1]) : var_1));
        }
        var_17 = ((9 ? var_7 : (arr_7 [i_1 + 1] [i_1 - 2])));
    }
    #pragma endscop
}
