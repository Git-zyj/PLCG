/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = var_10;

                /* vectorizable */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    arr_10 [i_1] [i_1] [i_1] [i_1] = 0;

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_19 = ((((((arr_3 [i_1] [i_1] [i_1]) + var_9))) ? (arr_0 [i_0]) : (!var_11)));
                        var_20 |= var_12;
                    }
                }
                /* vectorizable */
                for (int i_4 = 4; i_4 < 12;i_4 += 1) /* same iter space */
                {
                    arr_15 [i_0] [0] [i_0] [i_4] |= ((!(arr_12 [i_1 + 3] [i_4 - 3])));
                    var_21 = var_13;
                    arr_16 [i_1] [i_1] [i_1] [i_1] = (1 || 65535);
                }
                for (int i_5 = 4; i_5 < 12;i_5 += 1) /* same iter space */
                {
                    var_22 = (min(var_22, ((max((((arr_2 [i_5 - 4] [i_1 + 3] [i_1 + 3]) / var_4)), var_9)))));
                    var_23 ^= -1;
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        arr_21 [i_6] = (((min(1, (((arr_20 [i_6] [i_6]) << (((arr_19 [i_6]) - 113)))))) >= ((max((arr_20 [i_6] [i_6]), (var_17 || 2526471793917747648))))));
        arr_22 [i_6] |= ((((max((((arr_20 [i_6] [i_6]) / var_17)), var_15))) ? ((((var_14 == (arr_20 [i_6] [i_6]))))) : 1));
    }
    var_24 = -var_0;
    #pragma endscop
}
