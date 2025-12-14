/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = var_1;
        var_12 -= 127;
        var_13 = (-111 ? 65535 : 2301339409586323456);
        var_14 -= (arr_0 [i_0]);
    }
    var_15 = var_2;
    #pragma endscop
}
