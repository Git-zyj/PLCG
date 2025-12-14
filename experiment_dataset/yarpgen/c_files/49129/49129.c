/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = (((32767 ? 23168 : (arr_2 [18] [18]))));
        var_15 = (((((-32767 - 1) >= 32757)) ? var_7 : (var_1 - var_5)));
        var_16 = (18446744073709551612 * -8);
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        arr_5 [i_1] = (((((arr_4 [i_1 + 1]) == (arr_4 [i_1 + 3]))) ? (((arr_4 [i_1 - 2]) ? (arr_4 [i_1 + 1]) : (arr_4 [i_1 - 2]))) : ((var_2 ? 32757 : (arr_4 [i_1 - 2])))));
        arr_6 [i_1] = -32759;
    }
    var_17 = var_0;
    #pragma endscop
}
