/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((2147483630 ? var_1 : 17592186011648))) ? (max(378412190686631505, 2876791265)) : var_1)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 = (arr_2 [i_0]);
        var_13 += ((((var_0 ? (arr_1 [i_0] [i_0]) : 1)) >> (arr_1 [i_0] [i_0])));
        var_14 |= var_8;
    }
    var_15 = 18446744073709551605;
    var_16 = (var_2 % 1184149874);
    #pragma endscop
}
