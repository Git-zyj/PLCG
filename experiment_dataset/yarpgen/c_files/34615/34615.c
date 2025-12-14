/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = var_11;
        var_20 = (arr_2 [i_0]);
        var_21 = (min(var_21, ((((min(var_16, ((var_16 ? var_5 : var_18)))) == (~2376))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_5 [20] = ((~(arr_3 [i_1])));
        arr_6 [i_1] = 11946;
    }
    var_22 = var_16;
    #pragma endscop
}
