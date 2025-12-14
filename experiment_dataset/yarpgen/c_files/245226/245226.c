/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 -= (((((-6107 + (min(74, 1044841698))))) ? (arr_0 [i_0] [i_0]) : 1));
        arr_4 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
        var_17 = var_3;
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_18 = (arr_6 [i_1]);
        var_19 = (((arr_6 [i_1]) - ((var_1 ? (arr_5 [i_1] [i_1 + 1]) : (arr_5 [i_1] [i_1 + 1])))));
        var_20 *= ((15816 ? 4947 : 116));
        var_21 = ((((((((2147483647 ? 11846 : 138))) ? 134 : (-9223372036854775807 - 1)))) ? (((((((-32747 + 2147483647) << 0))) ? 24128 : 998773878589125745))) : (max(9223372036854775807, 0))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_22 = ((110 < (arr_7 [i_2] [i_2])));
        var_23 = var_3;
        arr_11 [i_2] = ((1335041337092268924 ? 4947 : 53799));
        arr_12 [i_2] = ((94 ? -10 : (arr_7 [i_2] [i_2])));
    }
    var_24 = (max(var_24, (((~(((((4947 ? var_6 : var_3)) < 11736))))))));
    #pragma endscop
}
