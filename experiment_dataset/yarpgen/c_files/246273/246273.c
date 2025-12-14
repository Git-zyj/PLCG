/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -1;
        var_15 ^= (arr_1 [i_0 - 2]);
        arr_3 [i_0] [i_0] = var_7;
        var_16 ^= var_8;
    }
    for (int i_1 = 4; i_1 < 8;i_1 += 1)
    {
        var_17 ^= (35858 + 1);
        var_18 += ((max(31, 6)));
        var_19 = (arr_7 [i_1 - 1] [i_1 + 2]);
    }
    var_20 += -9667;
    var_21 = (max(var_21, var_8));
    #pragma endscop
}
