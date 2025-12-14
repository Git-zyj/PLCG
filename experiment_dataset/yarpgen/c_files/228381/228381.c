/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = -30228;
        arr_5 [i_0] = ((1054347456008238856 + (arr_0 [i_0] [i_0])));
    }
    var_17 = 0;
    var_18 = var_10;
    var_19 = (max((((65535 + 1) ? var_5 : var_0)), 22264));
    var_20 *= (var_12 && var_12);
    #pragma endscop
}
