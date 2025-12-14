/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_11 = (min(var_11, ((max((arr_2 [i_0 - 1] [i_0]), (arr_1 [i_0]))))));
        var_12 = var_6;
        var_13 *= (max((arr_1 [i_0 - 1]), (arr_0 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                        {
                            var_14 += (arr_12 [i_0] [1] [i_0] [i_0] [i_0 - 2]);
                            var_15 = (arr_3 [i_0]);
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            var_16 = var_5;
                            var_17 ^= var_8;
                        }
                        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            var_18 -= (min((arr_10 [9] [i_1 + 2] [9] [i_3]), (arr_5 [i_0])));
                            arr_18 [i_0] [i_0] [i_0] [i_6] = (arr_7 [i_0 + 1] [i_1] [i_3]);
                            var_19 += (arr_2 [3] [i_2]);
                            arr_19 [i_2] [i_2] [i_0] [i_2 - 1] [4] = var_2;
                        }

                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            arr_23 [i_0] [i_1] [i_0] [10] [0] [i_7] [i_3] = (arr_8 [9]);
                            arr_24 [i_7] [i_0] [i_7] [i_7] = var_3;
                        }
                        arr_25 [i_0] [i_1] [i_2] [i_0] [i_3] = (min(var_2, 1));
                        arr_26 [i_0] [i_0 - 3] [i_0 - 2] = (min((arr_5 [i_0 - 1]), (arr_14 [5] [4] [i_2] [i_3] [4] [i_0])));
                    }
                }
            }
        }
    }
    for (int i_8 = 3; i_8 < 18;i_8 += 1)
    {
        var_20 = var_9;
        arr_29 [i_8 - 3] = (min((max((arr_28 [5] [15]), (max(1, (arr_28 [i_8 - 2] [i_8]))))), (min((arr_28 [i_8] [1]), ((min((arr_27 [i_8]), 4273903719)))))));
    }
    var_21 = var_4;
    var_22 = var_3;
    #pragma endscop
}
