/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 14176269859951141578;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (+(((14176269859951141578 ^ 32762) - (34 * 14176269859951141578))));
        arr_3 [i_0] [i_0] = var_15;
    }
    var_17 = var_4;
    #pragma endscop
}
