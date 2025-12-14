/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_7));
    var_21 = var_16;
    var_22 = ((1 << (((((((1 ? var_15 : var_9))) ? (-5597034572181349435 / 175) : var_4)) + 31983054698179164))));

    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        var_23 = (max(var_23, ((max((max(1, (((var_13 + 2147483647) << (var_15 - 147))))), -11)))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0 + 1] [i_0] = (((arr_1 [i_0]) >= var_0));
                    var_24 *= ((min(var_3, var_18)));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] = 3961283614;
                        arr_11 [i_0] [i_0] [i_3] = (((max((var_2 - var_7), var_4))) ? (arr_4 [i_3]) : 1029360517);
                    }
                }
            }
        }
    }
    #pragma endscop
}
