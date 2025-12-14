/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((var_8 ? var_2 : (var_0 & var_4))), var_8));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = ((-(((var_4 * var_8) | var_4))));
        var_12 = (max(var_12, (((((var_2 + 2147483647) >> (var_0 + 3018477142199466116)))))));
    }
    #pragma endscop
}
