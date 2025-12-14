/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!var_2);
    var_11 = ((var_7 ? (((var_9 ? var_8 : (~var_9)))) : var_6));
    var_12 = ((!(((13234 ? var_2 : (-1 / -1))))));
    var_13 = (max((min(var_1, var_3)), var_3));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_14 = (max((((arr_1 [i_0 + 1]) ? -806023674 : (arr_1 [i_0 + 1]))), 10104));
        arr_3 [i_0] = (~var_0);
    }
    #pragma endscop
}
