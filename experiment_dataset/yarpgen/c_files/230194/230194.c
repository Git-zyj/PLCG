/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 50;
        var_14 = (max(var_14, ((((min(((3760839416993295411 ? 49855264 : 49855264)), 4245112031))) ? var_6 : (((-127 - 1) ? var_5 : (arr_0 [i_0])))))));
        arr_4 [i_0] = 0;
    }
    var_15 = ((1 ? var_7 : var_10));
    var_16 -= (var_3 ? var_13 : 1);
    #pragma endscop
}
