/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = (max(var_16, ((((max(67, var_0)))))));
        arr_4 [i_0] = (((((65535 ? -1459460553 : 21101))) ? (var_1 ^ 0) : var_1));
        var_17 ^= (max(var_0, (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = ((((min(var_11, (arr_6 [i_1] [i_1])))) || (((((var_7 ? 14316319082606325632 : 21059))) && ((max(var_0, var_5)))))));
        var_18 = (var_13 / ((((arr_6 [i_1] [i_1]) ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_1])))));
        var_19 += (-79 * (((!(arr_6 [i_1] [i_1])))));
    }
    var_20 = (var_3 * -21060);
    var_21 += ((var_12 ? var_1 : 0));
    #pragma endscop
}
