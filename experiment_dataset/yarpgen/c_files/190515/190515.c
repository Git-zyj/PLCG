/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = (~-20585);
        arr_5 [i_0] = ((!((!((!(arr_0 [i_0])))))));
        var_10 = (max(var_10, (!-20585)));
    }
    var_11 = (min(var_11, (!-var_1)));
    var_12 -= ((((!(!var_7)))));
    var_13 ^= -59;
    var_14 = 20556;
    #pragma endscop
}
