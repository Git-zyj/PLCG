/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = (min((max((arr_0 [i_0] [i_0]), ((max(4294, -21546))))), ((((var_11 << (var_7 - 3834474382033043789)))))));
        arr_2 [i_0] = var_2;
    }
    var_13 *= var_11;
    #pragma endscop
}
