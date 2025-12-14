/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = ((2124618974 <= (arr_1 [i_0])));
        arr_5 [i_0] |= (2170348315 & 132);
        arr_6 [i_0] = (((arr_1 [i_0]) && (arr_0 [i_0])));
        arr_7 [i_0] [i_0] = (((((2170348321 / (arr_3 [i_0] [8])))) ? (arr_2 [i_0] [i_0]) : var_5));
    }
    var_20 *= (min((((!(((123 ? var_14 : var_6)))))), (--255)));
    var_21 = ((var_11 ? (((var_19 * var_16) & (var_3 <= 2170348322))) : (min((~var_17), var_1))));
    #pragma endscop
}
