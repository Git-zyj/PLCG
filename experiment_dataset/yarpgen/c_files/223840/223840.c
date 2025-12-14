/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (((!var_6) > (min(var_2, var_4))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 -= var_2;
        var_12 = (min(var_12, -0));
    }
    var_13 = 23292;
    var_14 = var_5;
    var_15 = var_7;
    #pragma endscop
}
