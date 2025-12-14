/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 &= (arr_1 [i_0] [i_0]);
        var_20 = (max(var_20, (82 & 1)));
        arr_2 [9] [i_0] = ((((((9 ? var_13 : (arr_0 [i_0]))) ? var_14 : (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 4; i_1 < 9;i_1 += 1)
    {
        var_21 = (~218);
        var_22 = (((((2783428274 ? ((var_13 ? (arr_5 [i_1]) : (arr_5 [i_1]))) : (((arr_4 [i_1] [i_1]) ? (arr_5 [i_1]) : (arr_0 [i_1])))))) ? (((((2003031969 ? -110 : 18446744073709551590))) ? 1 : 1)) : (((max((arr_1 [i_1 - 1] [i_1 - 1]), (arr_1 [i_1] [i_1 - 2])))))));
        arr_7 [i_1] = (arr_3 [i_1]);
        var_23 = ((((max((arr_1 [i_1] [i_1 - 3]), (arr_1 [i_1] [i_1 - 2])))) ? ((((arr_1 [i_1] [i_1 - 2]) ? var_13 : (arr_1 [i_1] [i_1 + 1])))) : (((arr_3 [i_1 - 3]) ? (arr_3 [i_1 + 1]) : (arr_3 [i_1 - 4])))));
    }
    var_24 -= var_15;
    var_25 = (((166 | 255) ? 1 : 3199750579));
    var_26 |= (((min(var_3, (((1 ? -32762 : (-127 - 1)))))) <= 2147483643));
    var_27 |= (~(max(var_5, var_6)));
    #pragma endscop
}
