/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-3678176 / var_6) * (((-1307148703 | 1440495941) ? 273070352 : (min(var_3, var_2)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = arr_1 [i_0];
        var_16 = (((min(-4, 30510289))) - (arr_0 [i_0]));
        arr_3 [i_0] = min(2147483618, (((var_0 == 1681516133) ? 3678196 : (!1947025574))));
    }
    #pragma endscop
}
