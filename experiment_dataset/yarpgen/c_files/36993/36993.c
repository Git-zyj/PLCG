/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((((var_7 ? (arr_0 [10]) : 63))) ? (arr_2 [i_0 + 1]) : ((var_7 ? (arr_0 [i_0]) : (arr_1 [i_0])))))) ? (max(-1622135236171954417, 5756499406883769039)) : var_7));
        arr_4 [i_0 + 1] [i_0 - 1] = ((29409 ? (((-(arr_2 [i_0])))) : (max((max(var_5, (arr_2 [i_0]))), (!-29391)))));
    }

    /* vectorizable */
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    var_11 = (-(((arr_9 [i_1] [i_1] [i_3]) ? var_7 : var_4)));
                    var_12 = (-43 ^ var_8);
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_13 = (max(var_13, ((((arr_7 [i_5] [13] [i_1 - 1]) ? (~var_8) : ((var_9 ? -1 : -2147483638)))))));
                                var_14 = ((((((arr_15 [i_2] [i_2] [i_2] [i_5]) < (arr_11 [17] [17] [4])))) ^ (((arr_6 [i_1]) ? (arr_8 [i_2] [i_3] [14]) : var_8))));
                            }
                        }
                    }
                }
            }
        }
        arr_18 [i_1 - 1] = ((((4294967295 ? 29409 : 11)) == (arr_13 [i_1] [i_1 + 1])));
    }
    var_15 = min(1287443965, var_10);
    var_16 = (min(var_8, (((((var_10 ? var_0 : var_2))) ? ((0 ? (-32767 - 1) : var_6)) : -134))));
    var_17 = var_3;
    #pragma endscop
}
