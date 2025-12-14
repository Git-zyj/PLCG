/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_20 = (arr_1 [i_0] [i_0]);
        var_21 = (max(var_21, (((~((0 ? 9168619242695409194 : 1)))))));
    }
    var_22 = (((~(~var_12))));
    #pragma endscop
}
