/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_4 [3] |= ((~((~(max(var_0, 66))))));
        arr_5 [i_0 - 1] [i_0 - 1] = ((((!(arr_2 [i_0] [i_0 - 1]))) ? var_8 : (min(-66, (((arr_1 [i_0]) ? 18446744073709551615 : var_5))))));
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = max(-67, (((arr_0 [i_1 - 1]) ? (arr_0 [i_1 + 4]) : (arr_0 [i_1 + 1]))));
        var_10 = (!var_8);
    }
    var_11 = (((((var_4 != var_4) - var_2)) > var_2));
    #pragma endscop
}
