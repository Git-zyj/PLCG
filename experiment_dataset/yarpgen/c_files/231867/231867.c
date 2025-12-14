/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0 + 3] &= max((arr_1 [i_0 - 1]), (((!(arr_0 [i_0 + 3])))));
        arr_5 [i_0] = ((((max(var_7, var_6))) ? -3824430914752445783 : (((((arr_1 [i_0 + 1]) + 9223372036854775807)) << (var_8 - 1901678706)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_10 [i_1] = var_11;
        var_14 |= (arr_9 [3] [i_1]);
        arr_11 [i_1] = var_10;
    }
    var_15 = var_6;
    var_16 = (((((0 ? var_1 : var_13)) != (~13))));
    #pragma endscop
}
