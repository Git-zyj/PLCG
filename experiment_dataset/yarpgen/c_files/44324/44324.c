/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 |= var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [21] = ((47477 <= ((-(~var_8)))));
        var_13 -= (arr_1 [i_0]);
    }
    var_14 ^= (13302 >= -13302);
    #pragma endscop
}
