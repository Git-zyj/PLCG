/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_0] [i_0 - 2] = (arr_3 [i_1 - 2] [i_1 + 1] [i_1 + 1]);
            arr_6 [11] [i_0] [i_1] = var_6;
            arr_7 [i_0] [i_0] = (~var_12);
            arr_8 [i_0 - 1] [i_0] = var_10;
        }
        arr_9 [i_0] [1] = -32768;
    }
    var_16 = var_1;
    #pragma endscop
}
