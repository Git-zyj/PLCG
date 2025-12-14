/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((1692421159 ? 1692421159 : 65535));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_2 [i_0]);
        var_16 ^= (((((3200217986701607877 ? 3200217986701607877 : 0))) ? (arr_1 [i_0]) : (((var_7 ? (arr_1 [i_0]) : var_5)))));
        arr_4 [i_0] = ((arr_1 [i_0]) ? -1 : -253848343849702500);
        var_17 = (arr_1 [i_0]);
        var_18 = (-119 <= 6108978147155471927);
    }
    var_19 -= ((var_10 ? (max(-28, 10485403682657332954)) : var_13));
    var_20 = (-2123510062 * 0);
    var_21 = max(3564743100883391533, (max(((6108978147155471927 ? 65280 : var_1)), (((var_13 ? var_11 : var_14))))));
    #pragma endscop
}
