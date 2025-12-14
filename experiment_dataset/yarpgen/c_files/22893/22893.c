/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = (min(((min((arr_2 [i_0]), (var_9 && 80)))), (((arr_1 [i_0] [i_0]) >> (17381 - 17376)))));

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            var_17 = -14;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    {
                        var_18 = (max(-76, 127));

                        for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                        {
                            arr_13 [i_0] [i_1 + 2] [i_2] [i_2] [i_2] [i_4] [i_2] = var_4;
                            arr_14 [i_2] = 51789;
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_2] [i_0] = var_6;
                            var_19 = (min(var_12, ((var_16 ? (arr_15 [i_5] [i_3 + 1] [i_2] [i_1 + 3] [i_0]) : (arr_15 [i_0] [i_1 + 3] [i_2] [i_5] [i_0])))));
                        }
                    }
                }
            }
            arr_19 [i_1] [i_0] [i_0] = ((0 ? 5 : -97));
        }
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            var_20 = ((var_0 ? var_9 : ((17 ? (-127 - 1) : 76))));
            arr_24 [i_6] [i_6] [i_6] = var_2;
        }
        var_21 ^= (min((var_10 != var_1), (max((max((arr_7 [i_0] [i_0]), -14)), (arr_6 [i_0])))));
        arr_25 [i_0] [i_0] = 55146;
        arr_26 [i_0] = var_7;
    }
    var_22 = var_14;
    var_23 = var_2;
    #pragma endscop
}
