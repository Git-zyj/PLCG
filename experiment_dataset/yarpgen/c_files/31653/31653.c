/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (max(33546240, -5341729692877450349));
        arr_2 [i_0] = ((+((((arr_1 [i_0]) || (arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_5 [i_1] = ((~(max(var_0, (arr_3 [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_13 = max((max((arr_9 [i_3] [i_3]), var_2)), (((var_11 || ((min(var_4, (arr_9 [i_3] [i_1]))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_14 = (((((4265171709177345375 ? var_1 : var_8))) <= (1545530165 - var_4)));
                                arr_18 [i_5] [i_4] [i_3] [i_2] [i_1] = 68;
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        arr_23 [i_1] [i_2] [i_6] [0] = var_10;
                        var_15 = (arr_22 [i_1] [i_6] [i_3] [i_6] [0] [i_3]);
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        arr_27 [i_7] [i_2] [i_3] = 199;
                        var_16 = (arr_24 [i_1]);
                        var_17 = ((var_6 ? ((-5341729692877450331 ? 132 : var_4)) : (arr_16 [i_1] [i_2] [i_1] [i_2] [i_1])));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_31 [i_1] [i_2] [i_3] [i_8] = ((var_10 ? var_3 : (4064 ^ 0)));
                        arr_32 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = 0;
                        arr_33 [i_1] [i_1] [i_3] [i_1] [i_2] = ((var_4 ? (!154) : (((arr_6 [4] [4] [4]) ? var_1 : (arr_11 [10] [i_2] [i_2] [i_8] [i_2])))));
                    }
                }
            }
        }
    }
    var_18 = (min(0, var_3));
    #pragma endscop
}
