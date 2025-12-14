/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = var_4;
                    var_17 += ((var_9 ? (!-125) : (!3579340116946071070)));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_18 += ((((((arr_0 [i_0]) + 0))) ? (arr_10 [i_0] [i_1] [i_3] [i_3] [i_3] [i_1]) : (arr_6 [i_0] [i_0] [i_0] [i_0])));
                        var_19 += ((-3579340116946071071 ? 255 : ((18446744073709551615 ? (arr_0 [i_2]) : (arr_1 [i_0] [i_1])))));
                    }
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        var_20 = (((~9223372036854775807) ? ((var_3 ? (arr_8 [i_1] [i_2] [0]) : (arr_14 [i_0] [i_2] [i_2] [i_1] [i_0] [i_0]))) : var_1));
                        var_21 += (((arr_8 [i_4] [i_4 + 1] [i_4 + 1]) * (!248)));
                        var_22 = (~var_13);
                    }

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_19 [i_5] [i_2] [i_0] [i_0] = -var_4;
                        var_23 = (((var_6 > (arr_12 [i_5] [i_2] [i_1] [i_0]))));
                    }
                    for (int i_6 = 3; i_6 < 11;i_6 += 1)
                    {
                        arr_22 [i_6] = 18446744073709551615;
                        var_24 += -1;
                    }
                }
            }
        }
        arr_23 [i_0] = (arr_4 [i_0] [i_0]);
        arr_24 [i_0] = var_10;
        var_25 = var_0;
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_26 += -3579340116946071071;
        var_27 = ((!((((var_6 ? var_16 : var_6)) != (~1)))));
    }
    var_28 += 0;
    #pragma endscop
}
