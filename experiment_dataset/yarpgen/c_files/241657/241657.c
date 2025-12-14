/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 4611686018427387904;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (((-(arr_1 [i_0 + 1]))));
        arr_3 [i_0 + 1] = (((((var_6 == 39070) ? 8192 : 26477))) & (~7284396557140746100));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] = 39070;
        var_14 *= (((((+(((arr_4 [i_1] [i_1]) ? -8192 : (arr_5 [i_1])))))) ? (min(8192, (152 == -40))) : (((1 > (arr_5 [i_1 - 1]))))));
        var_15 = ((-225627345 >= (min(-9223372036854775795, (~112)))));
        var_16 += ((-((1 ? -8169 : -8192))));
    }
    var_17 = -8183;
    var_18 = (max(var_18, var_0));
    #pragma endscop
}
