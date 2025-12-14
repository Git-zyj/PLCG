/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_15 = (((1 ? -4069 : 1)));
        var_16 = 608640835;
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        var_17 = (min((((arr_5 [i_1 - 1]) + 18598)), (4 <= -1800988828)));
        var_18 = ((+((-130 ? var_1 : (max((-127 - 1), (arr_3 [i_1])))))));
        var_19 = (arr_5 [i_1]);
    }
    var_20 = var_4;
    var_21 = (((((((max(4064792149875536307, 562949953421312))) ? var_2 : 10))) ? var_8 : -1800988847));
    #pragma endscop
}
