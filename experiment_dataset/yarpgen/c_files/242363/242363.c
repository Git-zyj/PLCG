/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_10;
        var_15 = ((~(((var_0 || ((max(-2039599646, 534773760))))))));
        var_16 += (arr_1 [i_0]);
    }
    var_17 = var_4;
    #pragma endscop
}
