/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(-8717, 0));

    for (int i_0 = 2; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_14 *= (min(((~((max(var_8, (arr_0 [i_0])))))), ((min(var_0, -11155)))));
        var_15 = ((-((((-8696 ? -8675 : -24636)) - (((arr_1 [i_0]) ? var_11 : (arr_0 [i_0])))))));
        var_16 = (~8665);
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_17 += (max((min((((arr_3 [i_1] [i_1]) ? (arr_3 [i_1 + 1] [13]) : -8743)), ((((arr_4 [i_1]) ? -109 : var_7))))), ((var_3 ^ (((-(arr_2 [7] [7]))))))));
        var_18 = ((((((~(arr_0 [i_1]))))) ? var_9 : (arr_0 [i_1 - 1])));
        arr_7 [i_1] = (arr_3 [0] [i_1]);
    }
    #pragma endscop
}
