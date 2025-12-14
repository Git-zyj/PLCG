/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_11 *= (min((min((arr_0 [i_0 - 1] [i_0 + 3]), (arr_1 [i_0 - 1] [i_0 + 3]))), ((var_5 ? var_7 : 18446744073709551615))));
        var_12 = max((6374849062239270133 / var_4), ((min(-6700107697944069256, ((-4984452967277766741 + (arr_0 [i_0] [i_0])))))));
    }
    var_13 -= var_6;
    var_14 = (min(var_14, var_7));
    var_15 = var_4;
    #pragma endscop
}
