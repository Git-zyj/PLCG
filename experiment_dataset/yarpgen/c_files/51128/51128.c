/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_1 [i_0]);
        arr_5 [i_0] [i_0] = (max(var_15, (min(-5218613096874189502, (min(5218613096874189501, -6027511931506179388))))));
        var_19 = (max(var_11, (arr_1 [i_0 + 3])));
    }
    var_20 = var_17;
    #pragma endscop
}
