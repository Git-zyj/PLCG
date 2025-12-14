/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_15 = var_13;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 4; i_4 < 18;i_4 += 1)
                        {
                            arr_11 [i_0] [i_4] [i_2] [i_3] [i_4 + 3] [i_0] [i_1] = var_13;
                            var_16 = var_1;
                            var_17 += var_1;
                        }
                        var_18 |= var_13;
                        var_19 = (max(var_19, var_1));
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_20 &= var_2;
                        arr_16 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = var_9;
                        arr_17 [i_0] [i_1] [i_2] [13] = var_4;
                        arr_18 [i_1] [i_0] [i_5] = var_5;
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_23 [i_0] [i_1] [i_2] [4] [i_0] |= var_10;
                        var_21 = (max(var_21, var_7));

                        /* vectorizable */
                        for (int i_7 = 3; i_7 < 21;i_7 += 1)
                        {
                            var_22 = var_9;
                            var_23 = var_9;
                        }
                        for (int i_8 = 2; i_8 < 18;i_8 += 1)
                        {
                            var_24 = var_8;
                            arr_30 [i_8] [i_8] [i_8] [i_1] |= var_3;
                            arr_31 [i_8] [i_6] [i_0] [i_0] [i_1] [i_0] = var_2;
                        }
                        arr_32 [i_0] [i_1] [i_0] = var_0;

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_35 [i_6] [i_1] [i_6] [i_0] [i_9] = var_11;
                            arr_36 [i_6] [i_1] [i_2] [i_6] [i_0] = var_11;
                            arr_37 [i_0] [i_0] [i_0] [i_0] = var_6;
                            arr_38 [i_0] [i_1] [i_2] [i_0] [i_9] = var_3;
                        }
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            arr_42 [16] [i_0] [21] [i_2] [i_2] [i_10] = var_8;
                            arr_43 [i_0] = var_9;
                            var_25 = var_11;
                            var_26 &= var_2;
                        }
                    }
                }
                var_27 = (min(var_27, var_2));
            }
        }
    }
    #pragma endscop
}
