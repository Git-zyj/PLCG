/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_10 = ((~(18446744073709551615 - 1)));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_11 = (((var_7 ? var_1 : var_1)));
                        var_12 = (arr_10 [i_0] [i_0] [i_2 - 1] [i_1]);
                        var_13 = (((((var_7 + (arr_5 [i_0] [18])))) ? (arr_2 [i_0] [i_2 + 2] [i_2]) : (var_9 - var_3)));
                    }
                    arr_11 [2] [i_1] [16] [i_1] = (!1);
                    arr_12 [i_0] [i_0] [i_0] [13] = ((max(1, 33898)));
                }
            }
        }
    }
    var_14 = ((((var_1 ? var_7 : var_6))) + ((-((var_6 ? var_2 : var_1)))));
    #pragma endscop
}
