/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (((16320 | (var_9 - var_6))));
        var_17 = var_0;
        var_18 = (((16320 ? (arr_0 [i_0 + 1]) : var_10)));
    }
    var_19 &= ((933244263 ? 3010189568 : var_11));
    var_20 = (max(var_20, ((((var_5 * var_4) | ((max(var_0, ((var_5 << (var_0 + 408562663)))))))))));
    #pragma endscop
}
