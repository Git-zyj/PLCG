/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_20 -= var_16;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 16;i_3 += 1)
                {
                    {
                        var_21 = (((min((arr_6 [i_2]), var_6))));
                        arr_9 [i_3] [i_3] [13] [i_3] = var_19;
                        arr_10 [i_0] [i_1 + 1] [i_0] [i_3] = ((((min(4294967276, (((1 * (arr_1 [i_1]))))))) ? (((min(var_9, var_2)))) : var_0));
                        arr_11 [5] [i_1] [5] = -22;
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_22 -= (((arr_12 [i_4]) > var_14));
            arr_14 [i_4] = ((var_9 ? (((((arr_4 [i_0] [i_4]) && 4294967295)))) : 1475147043));
        }
        var_23 = (arr_8 [i_0 - 1] [2] [2] [2]);
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            {
                var_24 = -6;

                /* vectorizable */
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {
                    var_25 ^= var_12;
                    var_26 = (arr_21 [i_5] [i_6] [i_5]);
                }
            }
        }
    }
    #pragma endscop
}
