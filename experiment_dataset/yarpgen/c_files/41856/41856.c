/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1 + 2] [i_1] = ((((min((arr_3 [i_1]), 63))) / (((5 && (-9223372036854775807 - 1))))));
                var_12 += ((var_5 ? (min(10325768684685934319, 17136843878135192050)) : (arr_2 [i_1 + 3])));
                var_13 ^= (~63);
            }
        }
    }

    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 19;i_5 += 1)
                {
                    {
                        arr_17 [i_4] [1] [i_4] = var_11;

                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            arr_20 [i_6] [i_6] [i_4] [i_6] [22] = 9106056779488679006;
                            arr_21 [i_4] = ((((61040 | (min(61062, (arr_11 [i_5] [i_4]))))) / 1));
                            var_14 += ((var_1 ? (-127 - 1) : (arr_18 [i_4] [i_5])));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_15 ^= 115;
                            arr_25 [i_2] [i_3] [i_4] [i_4] [i_7] = 9106056779488679026;
                            var_16 = ((~(((arr_8 [i_2] [i_5]) ? var_9 : 1))));
                        }
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            var_17 = var_4;
                            arr_28 [i_2] [i_2] [i_2] [i_2] [i_4] = (((((min(var_7, (arr_12 [i_5 + 4])))) ? 140 : ((((arr_19 [i_2] [i_3] [i_4] [i_5] [i_5]) || 4474))))));
                            var_18 = (max((((arr_23 [i_4] [i_4] [i_3] [i_4]) / var_2)), (arr_23 [i_4] [i_3] [0] [i_8])));
                            arr_29 [i_2] [i_4] [6] [i_2 - 1] = 280459661;
                        }
                    }
                }
            }
        }
        arr_30 [i_2] [i_2] = 1;
        var_19 = (+(((arr_18 [i_2] [i_2]) ? ((var_5 / (arr_10 [i_2]))) : 671560029)));
        arr_31 [i_2 - 1] = (((var_2 - 2654210803) / (min(-68, (arr_19 [i_2] [i_2 - 1] [i_2 + 1] [i_2] [i_2])))));
    }
    var_20 = (9340687294220872632 * 9106056779488678983);
    var_21 = var_7;
    #pragma endscop
}
