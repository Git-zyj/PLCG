/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (532575944704 || 6221);
    var_18 ^= (((4611686018426339328 << var_9) ^ 31));
    var_19 = -21364;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = 32268;
        var_20 *= 18824;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1] = 255;
        var_21 = 1;
    }
    #pragma endscop
}
