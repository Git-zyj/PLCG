/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_20 = (max(var_20, (((((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0 + 1] [i_0 + 2]) : (arr_1 [i_0] [i_0])))) ? ((max((arr_0 [i_0 + 2]), (arr_1 [i_0 + 2] [i_0 + 2])))) : var_8)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 7;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [i_0 + 1] = (((((192 ? -93 : 93))) ? (arr_5 [i_0] [i_2] [i_2]) : (max((arr_2 [i_2 - 1] [i_2 - 1] [i_2 - 2]), var_0))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_9 [i_0] [i_2] [i_3] = (arr_7 [i_0]);
                        arr_10 [i_2] [i_2 - 1] [i_2] [i_1] [i_1] [i_2] = var_14;
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_1] [i_2 + 1] [i_2] = var_16;
                        var_21 = (arr_2 [i_2] [i_2] [i_1]);
                        var_22 = (arr_5 [i_0 + 1] [i_2] [i_0 + 1]);
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_5] = 92;
                        var_23 = (min(var_23, (((((((arr_8 [i_1] [i_1]) ? 93 : (arr_8 [i_1] [i_1])))) ? var_17 : -4751201424282320394)))));
                        var_24 ^= (var_8 ? var_1 : (((((arr_15 [i_0] [i_1] [i_0] [i_1]) ? (arr_3 [i_2]) : var_18)) / (arr_1 [i_2 - 3] [i_2 - 3]))));
                        arr_18 [i_2] [i_1] [i_1] [i_1] [i_2] [i_5] = min((93 / -32754), (arr_4 [i_2] [i_2]));
                    }
                }
            }
        }
        arr_19 [i_0] [i_0] = (arr_2 [i_0 + 2] [i_0 + 2] [i_0 + 2]);
    }
    var_25 = ((-(~var_0)));
    var_26 *= (var_0 + var_18);
    var_27 ^= var_8;
    #pragma endscop
}
