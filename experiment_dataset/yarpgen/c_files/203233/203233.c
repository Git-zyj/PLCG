/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!((var_11 == (min(var_1, var_4))))));
    var_17 = (max(var_17, var_1));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 = ((((!(arr_1 [i_0]))) ? ((14342018992935732 ? (arr_1 [i_0]) : (arr_1 [i_0]))) : var_2));
        var_19 = (1 || var_7);
    }
    #pragma endscop
}
