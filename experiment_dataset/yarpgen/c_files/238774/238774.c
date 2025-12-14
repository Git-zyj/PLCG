/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 ^= (((((((arr_2 [i_0]) + 2147483647)) << (((((arr_2 [i_0]) + 73)) - 26)))) ^ ((max((arr_2 [i_0]), (arr_2 [i_0]))))));
        var_13 = ((min(((min(var_6, 16))), (arr_1 [1] [i_0]))) >> (((arr_2 [i_0]) + 70)));
        var_14 |= (min((((arr_2 [i_0]) ? ((((arr_0 [i_0]) ? (arr_0 [17]) : (arr_2 [9])))) : 17388723140773481814)), (min(4, (arr_0 [i_0])))));
    }
    var_15 = ((var_0 < (((8400 == 18446744073709551611) ? var_7 : ((var_5 ? 26 : var_11))))));
    var_16 += (((((((min(79, 85))) ? 65535 : (32767 | 3530398784)))) ? var_10 : ((((max(1017555479, var_6))) ? (var_1 < 1) : (24576 % var_0)))));
    var_17 = (max((8523 || var_0), var_3));
    #pragma endscop
}
