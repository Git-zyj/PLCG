/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = (min(-9204642125876497349, 8541911976181814523));
    var_12 = ((var_0 ? ((var_1 ? (((-9223372036854775807 - 1) ? -3793 : 0)) : var_0)) : var_5));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 *= (max(22863, var_5));
        var_14 = var_0;
        arr_3 [i_0] [i_0] = 15;
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        arr_7 [18] &= (var_8 > 1030034164);
        arr_8 [i_1] = ((var_8 << (!1)));
        var_15 = var_7;
    }
    #pragma endscop
}
