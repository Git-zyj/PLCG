/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_5;
    var_12 = var_1;
    var_13 |= ((var_5 << (var_8 - 1107804453)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = (~3);
        var_15 = (arr_0 [i_0]);

        /* vectorizable */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            var_16 = (((arr_2 [i_1 - 2] [i_1 - 2] [i_1 - 1]) <= (arr_2 [i_1 - 1] [i_1 - 1] [i_1])));
            var_17 |= var_6;
            var_18 = ((var_5 || (arr_2 [i_0] [i_1 - 2] [i_1 - 1])));
        }
    }
    var_19 = (var_1 % var_5);
    #pragma endscop
}
