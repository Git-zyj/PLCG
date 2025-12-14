/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((~(37571 & var_4))));
    var_12 = (max(-72, var_4));
    var_13 = (min(var_8, var_6));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = (((~-3) ? ((-791268712 ? var_10 : var_5)) : 206));
        arr_5 [i_0] = ((var_0 % ((var_9 ? (arr_2 [i_0]) : (arr_2 [i_0])))));
        var_14 = var_0;
    }
    for (int i_1 = 4; i_1 < 22;i_1 += 1)
    {
        var_15 = var_3;
        var_16 *= ((((((((-3 ? -4884819249238272067 : 1))) ? ((var_3 ? (arr_7 [i_1]) : 9223372036854775807)) : var_2))) ? 1 : (~11)));
        var_17 = var_3;
    }
    #pragma endscop
}
