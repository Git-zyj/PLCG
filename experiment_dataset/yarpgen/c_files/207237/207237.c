/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 = (max(var_20, ((((var_0 ? 55749 : (arr_0 [i_0])))))));
        arr_2 [6] = (-4309799567155078915 % 1);
        var_21 = (arr_1 [7]);

        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            var_22 = (min(var_22, ((((max((arr_3 [i_0]), (arr_3 [i_0]))) % (~var_17))))));

            /* vectorizable */
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                var_23 = (max(var_23, (arr_4 [i_0] [i_2])));
                arr_8 [i_0] [i_1] [i_1 - 1] [1] = (((arr_7 [i_0] [i_1 - 3] [i_0] [i_0]) ? (arr_6 [i_1] [i_1] [i_1 - 1] [i_1 + 1]) : (arr_6 [i_1] [i_1] [i_2 + 2] [10])));
                arr_9 [4] [i_1] = (((((4309799567155078919 ? 0 : (arr_0 [4])))) ? 32738 : 4309799567155078927));
            }
            arr_10 [i_0] [i_1 - 2] [i_1] = 4095;
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            var_24 = (arr_4 [i_3] [1]);
            arr_15 [i_3] [i_0] [4] = (1 & 1172669081);
            var_25 ^= (arr_6 [i_0] [i_0] [i_3 - 1] [i_3 - 1]);
        }
    }
    var_26 = (((((10687 * var_18) ? ((var_9 ? 0 : var_9)) : (var_4 * var_14))) * (((((var_19 ? var_14 : var_5)) * -var_6)))));
    #pragma endscop
}
