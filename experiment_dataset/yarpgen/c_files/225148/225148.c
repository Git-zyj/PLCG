/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;
    var_21 &= var_19;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_22 = (var_1 | 50765);
        var_23 = (min(var_23, (arr_2 [i_0])));
        var_24 = ((+((max((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1]))))));
    }
    var_25 = min((((-21 ? var_15 : -161))), var_10);
    #pragma endscop
}
