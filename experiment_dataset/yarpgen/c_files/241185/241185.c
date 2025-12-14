/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_4;
    var_13 = ((((min(3467313997, (max(1, 8796091973632))))) ? (max(1, 31771)) : var_5));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = (arr_0 [i_0]);
        arr_2 [i_0] = 2;
    }

    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_15 = (max(var_15, 1));
        var_16 = (max(var_16, (((!((max(2147483641, var_3))))))));
    }
    #pragma endscop
}
