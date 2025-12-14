/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (((!((max(1, -3731501837636771343))))) ? 503316480 : 6208169681327568210);
        arr_4 [i_0] [1] = (min(-3791650836, (max(503316490, 1))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_19 = 6208169681327568211;
        arr_7 [i_1] [i_1] = (503316480 < -1);
        arr_8 [i_1] [i_1] = (((((2380414349 << (var_1 / var_1)))) != var_7));
    }
    var_20 |= ((var_16 ? var_3 : (((min(var_12, 1)) - (1 + var_14)))));
    var_21 = 2185842692;
    var_22 = (max(((max(899494205, (3791650816 && 503316474)))), var_12));
    #pragma endscop
}
