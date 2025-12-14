/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            arr_7 [i_0] [i_0] = (1 || var_15);
            var_17 = ((((var_2 << (15 - 14))) < (var_6 ^ -6136)));
        }
        arr_8 [i_0] = -6136;
    }
    var_18 = var_4;
    var_19 = var_9;
    #pragma endscop
}
