/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = (min(var_12, var_4));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_13 ^= (~var_0);
            arr_5 [i_1] = var_10;
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_9 [i_0] [i_2] [i_2] = ((~(!var_2)));
            arr_10 [i_0] [i_0] [i_0] = var_10;
            arr_11 [i_0] [i_2] = -var_0;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_14 = var_5;
            var_15 -= -var_4;

            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                arr_16 [i_3] [9] [9] = var_8;
                var_16 = (max(var_16, -var_9));
            }
        }
    }
    var_17 ^= var_2;
    var_18 ^= var_4;
    #pragma endscop
}
