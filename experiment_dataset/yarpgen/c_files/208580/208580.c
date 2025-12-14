/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_12 = ((((((0 ? 0 : 1))) * ((28 ? 9079256848778919936 : 1)))) / (((36002 ? 1992624350 : -569060887))));
        var_13 = 28;
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        var_14 = ((1 ? 4735 : 8));
        arr_8 [i_1] = (arr_5 [i_1]);
        var_15 = (~(min((~1), var_8)));
    }
    var_16 &= min((29529 / var_4), var_4);
    var_17 -= ((var_10 ? ((250 ? var_5 : var_10)) : var_4));
    #pragma endscop
}
