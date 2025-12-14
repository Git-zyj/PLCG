/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            var_14 = (arr_4 [i_0 + 2] [i_1]);
            var_15 = (arr_4 [i_0] [i_1]);
        }
        arr_8 [i_0 - 1] [i_0 - 1] = (arr_4 [i_0 - 3] [i_0 + 1]);
    }
    var_16 = var_5;
    #pragma endscop
}
