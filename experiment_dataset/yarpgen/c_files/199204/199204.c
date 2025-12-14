/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= ((-(~var_2)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [9] [i_0] = 1303783218;
        arr_3 [i_0] [i_0] = (!275709872922010822);
    }
    #pragma endscop
}
