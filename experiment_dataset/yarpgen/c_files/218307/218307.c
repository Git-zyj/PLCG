/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = ((0 ? (((arr_1 [i_0]) ? -31425 : ((20 ? 3016241558 : 9)))) : (((((4789 | 9) >= ((8438900266880842004 ? var_10 : 9))))))));
        var_13 ^= (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_8 [i_1] [16] = arr_6 [i_1];
        arr_9 [12] [19] = 1398921854;
    }
    var_14 = var_7;
    #pragma endscop
}
