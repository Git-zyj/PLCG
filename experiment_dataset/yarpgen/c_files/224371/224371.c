/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((595285415 && (((-(arr_1 [i_0] [i_0]))))));
        var_20 -= var_14;
    }
    #pragma endscop
}
