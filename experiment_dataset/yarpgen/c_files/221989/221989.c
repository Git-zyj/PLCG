/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~var_4);
    var_12 = (~4172604029);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = (max(var_13, (((!((((-66 && var_0) ? (arr_1 [i_0]) : (!3671526239)))))))));
        var_14 = (min(var_14, (!993464590)));
    }
    #pragma endscop
}
