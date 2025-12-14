/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~var_2);

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (~var_7);
        arr_5 [i_0] = ((((var_8 - (arr_2 [i_0]))) & ((var_6 ? var_4 : var_1))));
        var_11 = (min((arr_0 [i_0]), 0));
        var_12 += (max(-3, (min(15428492504122851677, (((var_0 && (arr_2 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_13 = (((arr_1 [i_1] [i_1]) ? -1992039699 : ((-(arr_1 [i_1] [i_1])))));
        var_14 = (min(var_14, (((((!(arr_2 [i_1]))) ? (((~(-32767 - 1)))) : 33554431)))));
    }
    #pragma endscop
}
