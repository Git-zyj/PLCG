/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_5 ? (-1740686414 & 1125899905794048) : var_3)) | (min(((var_2 ? var_9 : var_0)), var_7))));
    var_11 -= var_3;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 = (max(var_12, (((-((~(arr_2 [i_0] [1]))))))));
        var_13 ^= ((((32767 && (arr_1 [i_0] [6])))));
        arr_3 [i_0] [i_0] = (-var_3 - (((18445618173803757567 ? -486312482 : 18446744073709551615))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_14 = (max(var_14, (((-(((arr_4 [i_1]) + -var_8)))))));
        var_15 *= 18445618173803757557;
    }
    var_16 = (max(((var_3 ? var_2 : var_9)), (((max(var_5, -527261075))))));
    #pragma endscop
}
