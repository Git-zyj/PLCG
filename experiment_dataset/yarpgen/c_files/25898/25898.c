/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = var_6;

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_6 [i_1] [9] [i_0] = 13;
            var_16 = -2641476886976873391;
            var_17 = ((((((1 ? -3 : -1)) + 2147483647)) >> (15805267186732678211 - 15805267186732678186)));
        }
        var_18 = (arr_0 [i_0] [14]);
    }
    var_19 = ((!((((var_1 ^ var_13) ? (~var_9) : var_13)))));
    #pragma endscop
}
