/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 &= ((1718667010 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])));
        var_18 = (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : -1));
        var_19 = (((((1 + (arr_1 [i_0])))) ? 1 : (123 - 31)));
        var_20 &= 1039830314;
    }
    var_21 = ((((((-387741785 ? var_8 : var_1)) ? var_7 : 14788))));
    var_22 &= ((var_14 ? (~1) : var_5));
    #pragma endscop
}
