/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = var_4;
        var_13 = (max(var_13, -1835825302));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_14 = min((!var_11), ((!((min(var_7, var_9))))));
        var_15 = (((min(var_1, (~var_7))) != ((max(var_3, var_3)))));
    }
    var_16 = (min((!var_4), 35219));
    #pragma endscop
}
