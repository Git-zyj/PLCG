/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 = (((((-32743 ? 3023628149 : 18446744073709551615))) ? ((var_1 ? 1271339131 : 3023628144)) : 1046659752));
        var_19 += (~0);
    }
    #pragma endscop
}
