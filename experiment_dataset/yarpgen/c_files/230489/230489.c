/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (65535 && var_10);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (65535 / 65535);
        var_19 = (((arr_0 [i_0]) <= (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_20 = var_2;
            var_21 = var_12;
            arr_10 [i_1] [i_2] [i_2] = (65535 || var_2);
            arr_11 [i_1] [i_1] = ((~-1) ? (((8040 > (arr_5 [i_1])))) : var_14);

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_22 = (arr_4 [i_3] [i_2]);
                arr_14 [i_2] = ((((755602222 != (arr_3 [i_2] [i_1])))));
                arr_15 [i_3] [i_2] [i_3] = (~(arr_9 [i_1] [i_1] [i_3]));
                arr_16 [i_1] [i_1] [i_3] [i_1] = (((arr_5 [i_1]) && 1));
                arr_17 [i_3] [i_3] [i_3] [i_3] = -8040;
            }
        }
        var_23 = (max(((8040 ? 8040 : -87)), (((arr_9 [i_1] [i_1] [i_1]) / (arr_9 [i_1] [i_1] [i_1])))));
    }
    var_24 = 1;
    var_25 = 605463378;
    #pragma endscop
}
