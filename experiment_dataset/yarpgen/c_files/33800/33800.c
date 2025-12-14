/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((~var_7) ? ((var_5 << (((~var_11) + 69)))) : var_6));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [18] [i_0] = (((((((223 ? 65535 : (arr_0 [6] [i_0]))) | 26))) ? (((var_8 && var_7) | ((-(arr_1 [i_0 + 1] [1]))))) : (((5 * 268419072) ? (arr_0 [1] [i_0]) : (((arr_1 [i_0] [12]) ? var_10 : 9085))))));
        arr_3 [i_0] = (((39 + var_2) / (((arr_0 [i_0] [i_0]) ? (((arr_0 [i_0] [i_0]) * var_12)) : (((var_7 ? 1 : 1)))))));
        arr_4 [i_0] = (arr_0 [i_0] [i_0]);
    }
    var_14 = var_4;
    var_15 = ((1 & (19046 < 4294967294)));
    #pragma endscop
}
