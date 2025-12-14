/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((~(var_17 | var_7)))) ? var_15 : var_4));
    var_21 = ((var_8 >> (((~var_14) - 117))));
    var_22 = var_11;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_23 = ((var_13 / var_15) | var_19);
        arr_3 [i_0] = ((((max(42780, 72057593769492480)))) ? (((((((~(arr_1 [i_0] [i_0])))) && (arr_2 [i_0]))))) : var_8);
        arr_4 [i_0] = (53930 - 255);
        arr_5 [i_0] = (~(arr_2 [i_0]));
        arr_6 [i_0] = 1845117786;
    }
    #pragma endscop
}
