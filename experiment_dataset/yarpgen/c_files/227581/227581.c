/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    var_16 ^= (~-531692737);
    var_17 = (((((((min(var_6, var_5)) + 9223372036854775807)) >> (((max(var_1, var_14)) + 123)))) % (((~var_12) ? 12522 : var_6))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 -= var_11;
        arr_2 [i_0] [i_0] = ((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) != (((arr_0 [i_0]) ^ (arr_0 [i_0]))));
        var_19 *= var_5;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] [11] |= (min(((~(arr_4 [i_1] [11]))), ((+(((((arr_4 [2] [2]) + 2147483647)) << (((arr_5 [i_1]) - 4513599866138284331))))))));
        var_20 -= (arr_5 [i_1]);
        var_21 = (max(var_21, ((min(var_13, ((((max(799241531, var_3))) % (arr_5 [8]))))))));
    }
    #pragma endscop
}
