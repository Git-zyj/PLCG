/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += 498064771;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] |= 255;
        arr_3 [i_0] = ((3801276847594873056 ? (arr_1 [i_0]) : var_0));
        var_11 &= ((+(((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        var_12 = (min(var_12, (arr_0 [i_0])));
    }
    #pragma endscop
}
