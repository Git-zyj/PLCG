/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_11 = (arr_0 [8] [i_0]);
        arr_3 [i_0] [i_0] &= (!(((18446744073709551615 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
        var_12 = ((!(((((max(var_5, var_6))) ? (arr_0 [i_0] [i_0]) : (max(1, (arr_0 [0] [i_0]))))))));
    }
    var_13 = (max(var_13, -83));
    var_14 = ((((!((min(var_7, 650134039))))) ? var_7 : ((max(var_10, (-61 || var_0))))));
    var_15 &= ((var_3 ? var_1 : var_4));
    var_16 = var_8;
    #pragma endscop
}
