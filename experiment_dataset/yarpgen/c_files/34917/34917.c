/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((max(1883333481, 13))) ? var_9 : var_8));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_11 = (max(var_11, 65523));
        var_12 *= (((((arr_1 [i_0 - 2]) ? 13 : (arr_1 [i_0 - 2]))) << (((arr_0 [i_0] [i_0]) + 40))));
    }
    #pragma endscop
}
