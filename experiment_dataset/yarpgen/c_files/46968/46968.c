/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;
    var_18 = var_6;
    var_19 = var_16;
    var_20 = var_7;

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_21 = 13974;
        var_22 = 3544777483955118301;
        var_23 = (min(var_23, 43456));
    }
    #pragma endscop
}
