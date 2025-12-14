/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~-5271527440640085167);

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_21 = (max(var_21, ((-(min(((var_18 ? var_4 : (arr_0 [14]))), var_15))))));
        var_22 &= (((arr_1 [i_0 - 2] [14]) ? (((((-(arr_1 [i_0] [i_0]))) <= var_10))) : (min(1, (((arr_1 [i_0] [i_0]) ? (arr_1 [1] [1]) : (arr_1 [i_0 - 1] [i_0 - 1])))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_23 ^= (arr_1 [i_0] [i_1]);
            arr_4 [i_0] [i_1] = (-8487143057865323367 && var_17);
            var_24 = ((7193853424773522195 ? (arr_3 [i_0 - 3] [i_0 - 3] [i_0 - 3]) : var_9));

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                var_25 -= (arr_3 [1] [11] [1]);
                var_26 = var_15;
            }
            var_27 = (min(var_27, (var_18 && -6381232732630292107)));
        }
    }
    #pragma endscop
}
