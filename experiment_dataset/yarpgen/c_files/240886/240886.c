/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((!(((15457535357610451890 ? var_8 : var_3))))) ? 14701 : var_10);
    var_18 = (!var_1);
    var_19 = var_4;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_20 = (((arr_1 [i_0 + 3]) ? (arr_0 [i_0] [i_0 - 1]) : (arr_0 [i_0 - 1] [i_0 + 3])));
        var_21 &= (!15457535357610451890);
    }
    #pragma endscop
}
