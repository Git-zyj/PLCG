/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= 1;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_14 = (max(((max(var_7, 6963))), -58));
        var_15 |= ((max(0, 1)));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_16 = 26031;
        var_17 *= ((16400 ? ((-(max(var_10, (arr_5 [i_1]))))) : (~1)));
        var_18 = (((((-(-1085011705 + var_1)))) ? var_8 : (((((arr_5 [i_1]) ? 1 : 1))))));
        var_19 = ((!(((var_9 ? (arr_5 [i_1]) : (arr_5 [i_1]))))));
    }
    var_20 &= 45250;
    var_21 = (max(var_21, var_0));
    #pragma endscop
}
