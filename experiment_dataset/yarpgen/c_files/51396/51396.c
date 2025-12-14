/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((71 != (((-980137510 || -5) ? -var_15 : ((var_17 ? var_7 : var_18))))));
    var_20 = 985696072;
    var_21 = (((-(max(2, var_6)))));
    var_22 *= (min((~var_10), var_6));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0 + 3] |= (((var_18 ? (arr_1 [i_0 + 2] [i_0 - 1]) : (min(var_11, var_0)))) >> (2248113102 - 2248113069));
        arr_4 [i_0] &= ((((max((16236 < -96), (min(0, -18))))) ? (arr_2 [i_0]) : ((((min(var_6, (arr_1 [i_0] [i_0])))) ? var_9 : (var_16 <= 6816)))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_23 = 18;
        var_24 = (((((var_14 - (arr_5 [i_1])))) ? 117 : var_10));
    }
    #pragma endscop
}
