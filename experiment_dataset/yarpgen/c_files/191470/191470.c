/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 795854370;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_13 = var_4;
        arr_4 [i_0] = (var_7 >= 1518669050);
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        arr_7 [i_1] = var_0;
        var_14 = min((min((arr_5 [i_1 + 1]), var_0)), -1774084978);
    }
    var_15 += ((var_2 + 2147483647) >> (((((min(-994481074, var_11)) >> (((var_7 * var_9) - 69278240857251522)))) - 235686579804788)));
    var_16 = var_4;
    #pragma endscop
}
