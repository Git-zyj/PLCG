/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_19 = 8387314355645358920;
            var_20 = var_9;
            arr_5 [i_0] [i_1] [i_1] = (arr_4 [i_1] [i_1] [i_0]);
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_16 [i_3] = (arr_3 [i_0] [i_0]);

                        for (int i_5 = 4; i_5 < 12;i_5 += 1)
                        {
                            var_21 *= -var_13;
                            var_22 *= 4;
                            var_23 = ((var_5 / (((arr_3 [i_0] [i_2]) ^ 834952424))));
                            arr_20 [i_3] [i_4] [i_5] = var_14;
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_24 = var_4;
                            arr_23 [i_3] = 0;
                        }
                    }
                }
            }
            var_25 = (var_4 % 8387314355645358920);
        }
        for (int i_7 = 3; i_7 < 12;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    {
                        var_26 = (max(var_26, (((834952429 ? (!3975981319) : (var_2 == 0))))));
                        var_27 = (((var_1 - 1) ? (arr_9 [i_7 - 3] [i_7 - 1] [i_7 - 1] [i_7 - 2]) : (arr_1 [i_7 + 1] [i_7 - 2])));
                    }
                }
            }
            arr_34 [i_0] [i_0] = (1 / var_11);
        }
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 11;i_11 += 1)
            {
                {
                    arr_40 [i_10] [i_10] [i_11] = (arr_29 [i_11] [i_10] [i_11 - 2]);
                    arr_41 [i_10] [i_10 + 2] = (arr_15 [4] [i_0] [i_10] [4]);
                }
            }
        }
    }
    #pragma endscop
}
