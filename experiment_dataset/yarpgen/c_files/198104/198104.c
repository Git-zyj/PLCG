/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= ((~((~(~var_6)))));
    var_16 = 32756;

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = -6793;
        var_17 = (max(var_17, -var_5));
        arr_3 [i_0] [i_0 + 1] = (((~((~(arr_0 [3] [19]))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] = (~65530);
        arr_7 [i_1] |= -16;
    }
    #pragma endscop
}
