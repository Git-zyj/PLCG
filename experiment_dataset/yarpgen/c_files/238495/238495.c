/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((64 > 64) && var_0)) ? 107 : var_16));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_21 = ((((((arr_0 [i_0 - 1] [5]) ? (arr_0 [i_0 - 1] [2]) : (arr_0 [i_0 - 1] [1])))) && (((var_11 >> (71 - 68))))));
        arr_2 [1] = -1;
        var_22 = ((~(((!var_19) * ((~(arr_1 [1])))))));
        arr_3 [1] = ((!((1 > (arr_1 [i_0 - 1])))));
    }
    var_23 = ((1 > 1) > 127);
    var_24 = (((((((var_11 ? var_14 : var_11))) ? -53 : ((var_10 ? var_19 : var_0)))) * var_2));
    #pragma endscop
}
