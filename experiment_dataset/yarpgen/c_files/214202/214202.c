/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 18446744073709551615;
    var_14 = var_12;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = (min(var_15, (((((max(((var_3 ? 33123 : var_2)), (arr_0 [i_0] [8])))) ? var_11 : -var_7)))));
        var_16 |= (max(((max((arr_1 [i_0]), (arr_1 [i_0])))), ((1957207463 ? 7748867915693016180 : 2337759832))));
        arr_2 [i_0] = ((~((((~(arr_1 [i_0]))) & (~var_3)))));
    }
    var_17 = (!var_3);
    #pragma endscop
}
