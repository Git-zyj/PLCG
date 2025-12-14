/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [8] = (var_6 + -18);
        var_11 *= 221;
        arr_3 [i_0] [i_0] = var_1;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_12 = (max((min((min((arr_4 [i_1] [i_1]), 18446744073709551603)), (~var_9))), (min(46, 10275898720005931244))));
        arr_7 [6] = max(803918269, 488361018);
        var_13 = ((~(arr_5 [i_1])));
    }
    var_14 *= ((var_9 ? ((((min(var_10, var_7))) ? (min(-1, var_1)) : (((52145 ? 1 : var_2))))) : (max((((4015357393995485274 ? -1 : 164))), (((-9223372036854775807 - 1) - -64))))));
    #pragma endscop
}
