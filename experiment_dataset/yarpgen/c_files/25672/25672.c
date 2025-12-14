/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((1 ? (arr_1 [i_0]) : 86));
        var_18 ^= ((((min(var_11, (5961 == 45964)))) ? var_15 : 1));
        var_19 = (max(var_19, (arr_0 [i_0])));
        var_20 = (((995041895 > 1255956347) >= (((-122 | -9) - var_10))));
    }
    #pragma endscop
}
