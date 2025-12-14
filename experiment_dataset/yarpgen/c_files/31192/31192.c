/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!((((var_5 ? var_4 : 0))))));
    var_13 = var_6;
    var_14 = (max(1, 0));
    var_15 = ((((var_0 ? var_7 : var_0))) ^ ((((((var_8 >> (-1 + 2)))) ? ((var_2 ? var_0 : var_3)) : (var_8 << 7)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = (((18446744073709551605 ? 65535 : 0)));
        arr_2 [i_0] = (((arr_1 [i_0]) ? 1 : ((7 ? 18446744073709551603 : (((max(var_6, (arr_0 [i_0])))))))));
    }
    #pragma endscop
}
