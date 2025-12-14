/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_14 = ((-((var_7 * ((min(var_6, var_11)))))));
        var_15 = ((var_9 <= (!var_9)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_16 = (arr_7 [i_1] [i_2] [i_3]);
                            var_17 = (arr_9 [i_1]);
                            var_18 = (arr_13 [i_1] [i_2] [i_3] [i_4] [i_5] [i_5]);
                        }
                        for (int i_6 = 3; i_6 < 17;i_6 += 1)
                        {
                            var_19 = ((var_13 ? var_10 : (arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])));
                            var_20 = (max(var_20, (((((var_6 > (arr_7 [i_4] [i_4] [i_2]))) ? (arr_4 [i_1]) : var_2)))));
                        }
                        var_21 = (max(var_21, (((32767 == (!115))))));
                        var_22 = (arr_4 [i_2]);
                        arr_16 [i_1] [i_2] [i_1] [i_3] [i_1] = (var_4 & var_9);
                    }
                }
            }
        }
        arr_17 [i_1] = (((arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) + (arr_5 [i_1] [i_1] [i_1])));
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
    {
        var_23 -= ((var_6 ? ((4134086798 ^ ((134 ? (arr_19 [i_7]) : 121)))) : (31829 | 119)));
        arr_21 [i_7] |= 1325241979;

        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            var_24 -= ((((((((var_0 ? var_10 : var_11))) ? (var_11 * var_8) : var_6))) ? ((((((arr_8 [i_7] [i_7] [i_7]) / (arr_5 [i_7] [i_8] [i_8])))) ? var_2 : ((var_3 ? var_13 : var_4)))) : ((var_11 ? (arr_10 [i_7] [i_7] [8] [i_7]) : var_0))));
            var_25 = ((((max(551908750, var_1))) ? ((var_1 / (max(var_9, var_3)))) : (((((max(551908766, var_12))) ? 551908750 : ((160880495 ? 158 : 2047)))))));
            var_26 = (max(((var_6 ? var_10 : var_5)), (!var_7)));
        }

        for (int i_9 = 3; i_9 < 18;i_9 += 1)
        {
            var_27 = (min(var_27, var_12));
            var_28 = (arr_18 [i_7]);
        }
        var_29 = (min(((var_2 ? (arr_3 [i_7]) : (arr_3 [i_7]))), -var_6));
    }
    var_30 = (var_2 ? (((max(var_1, var_4)) + var_7)) : (~var_10));
    #pragma endscop
}
