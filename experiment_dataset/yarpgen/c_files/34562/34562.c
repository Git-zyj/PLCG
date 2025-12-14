/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (155525688 | 2935664430)));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_15 = var_5;
        var_16 = var_10;
        arr_3 [i_0 + 1] = (max((1359302836 * 170), ((min((var_13 * var_11), var_4)))));
    }
    #pragma endscop
}
