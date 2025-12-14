/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_10 = ((21 ? ((-5 ? 336509186 : 2383)) : (arr_1 [i_0])));
            var_11 = ((((var_3 ? (arr_2 [i_1]) : (arr_4 [i_0]))) - (arr_1 [i_0])));
        }
        arr_6 [i_0] = (~var_8);
    }
    var_12 = (max(var_12, (((var_8 ? var_7 : var_4)))));
    #pragma endscop
}
