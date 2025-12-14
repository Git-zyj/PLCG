/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 = (arr_0 [i_0]);
        arr_4 [i_0] = 1960601441689408958;
        var_20 = (((~((max(-126, var_10))))));
    }
    var_21 = (min(var_4, (((min(-4983604780314078962, -24306))))));
    #pragma endscop
}
