/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= ((65535 ? 15 : var_12));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            arr_5 [i_1] = (max(var_6, (min((var_10 % 32767), (max((arr_1 [i_0]), var_4))))));

            /* vectorizable */
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                arr_10 [i_0] [4] [i_0] = 53;

                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_14 = (~18);

                    for (int i_4 = 3; i_4 < 14;i_4 += 1)
                    {
                        var_15 = (var_0 <= 203);
                        arr_18 [i_0] [i_0] [i_1] [i_2 + 2] [i_3] [i_4] = -1810571504;
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_21 [i_5] [i_3] [i_2 - 2] [i_1] [i_0] = 1;
                        var_16 *= var_12;
                        var_17 -= (((arr_6 [i_2 - 2]) && (arr_6 [i_2 + 2])));
                        var_18 ^= (((arr_8 [i_2 + 2] [i_1 + 2] [i_1 + 1]) * (arr_8 [i_2 + 3] [i_1 + 2] [i_1 + 2])));
                    }
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (((68 & 134) != 32767));
                }
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    var_19 = (var_7 ? 104 : var_5);
                    arr_26 [14] [i_6] [i_0] [i_2 + 2] [5] = var_5;
                    arr_27 [i_6] [2] = (255 || 134);
                    var_20 = ((14579620850952298821 ? (!28037) : 2114));
                }
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                arr_30 [i_0] [i_1] [i_7] [i_0] = (((arr_6 [i_7]) ? (arr_12 [i_0] [i_0] [9] [i_1] [i_7] [i_7]) : 65535));
                var_21 = ((((arr_20 [i_0] [i_7] [i_7]) * 12877568971885195836)));
                arr_31 [i_7] [i_7] = ((!(arr_2 [i_0] [i_1 - 1] [i_0])));
                var_22 = (((arr_13 [i_1 - 1] [i_1 + 3]) + (((212 ? (arr_29 [i_7] [i_0]) : -97)))));
                var_23 -= var_3;
            }
            arr_32 [i_0] [i_0] = (((var_9 * 12877568971885195827) % var_9));
            arr_33 [i_0] [i_0] [i_0] = ((-((var_2 ? (arr_8 [i_1 + 2] [i_1 + 2] [i_1 + 1]) : (arr_17 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1])))));
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    {
                        var_24 = ((+(min((arr_1 [i_0]), (~9223372036854775807)))));
                        arr_41 [i_8] |= (min(var_1, ((((arr_4 [i_0]) ? 2 : var_10)))));
                        var_25 = (!(!-79235277));
                        var_26 -= (max((var_2 | var_2), (min(((-(arr_0 [i_9]))), (17 < var_9)))));
                        arr_42 [i_0] [9] [i_8] [i_9] [2] = var_1;
                    }
                }
            }
            var_27 = (max(var_27, ((~(((!(((-(arr_8 [i_0] [i_8] [12])))))))))));
        }
        var_28 = ((61 / var_8) ^ ((4913828202819181699 ? (arr_35 [i_0] [i_0] [i_0]) : 122)));
        arr_43 [i_0] = (min((arr_34 [i_0]), (((-(arr_37 [i_0]))))));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    {
                        var_29 *= max(-805693943510489307, 13684251417587350487);
                        var_30 = (min(var_30, (var_5 + var_10)));
                    }
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 17;i_14 += 1) /* same iter space */
    {
        var_31 = ((~((~((39 ? 127 : 1))))));
        arr_53 [i_14] [16] = ((-(!125)));
    }
    #pragma endscop
}
