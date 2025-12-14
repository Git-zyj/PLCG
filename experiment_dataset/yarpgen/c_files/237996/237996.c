/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = var_8;
        arr_4 [i_0] = ((~(max((~var_12), (((arr_1 [i_0] [i_0]) ? 5427 : (arr_0 [i_0] [i_0])))))));
    }
    var_18 = ((var_16 ? var_0 : var_14));
    #pragma endscop
}
