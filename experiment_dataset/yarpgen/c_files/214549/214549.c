/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((((max(var_0, -1)))), var_1));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_11 = ((((max(var_5, (arr_0 [i_0]))) ? var_3 : (arr_2 [i_0 + 1] [i_0 - 1]))));
        arr_4 [i_0] = var_2;
    }
    #pragma endscop
}
