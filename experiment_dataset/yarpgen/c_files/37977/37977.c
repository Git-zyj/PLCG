/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((max(10703, 208))), (max((~10709), (~var_1)))));
    var_20 = ((((max(var_4, var_13))) ? var_0 : ((var_15 ? var_1 : ((min(var_5, 175)))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = -10710;
        arr_5 [i_0] = ((3 << (((arr_0 [i_0]) - 56754))));
        arr_6 [i_0] [i_0] = (-1886007096 / 186);
    }
    #pragma endscop
}
