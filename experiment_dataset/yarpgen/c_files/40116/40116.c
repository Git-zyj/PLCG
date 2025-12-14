/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -9579;
    var_13 -= (-32767 - 1);

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_14 = -32750;
        arr_2 [i_0] = ((!(((32765 ? 24501 : 504)))));
        arr_3 [i_0] [i_0 + 1] = (((min(29079, (arr_0 [i_0 + 1])))));
    }
    for (int i_1 = 1; i_1 < 7;i_1 += 1)
    {
        arr_6 [4] &= (max(((-2906 * (-32767 - 1))), ((max(-15558, -29142)))));
        var_15 -= (min(-16600, -17524));
        var_16 = (((-(-32767 - 1))));
        var_17 = 15539;
    }
    #pragma endscop
}
