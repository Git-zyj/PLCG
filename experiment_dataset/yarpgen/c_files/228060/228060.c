/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = var_11;
                var_19 = ((((arr_2 [i_1]) ? 1 : 65522)));
                var_20 = (min(var_20, var_4));
                var_21 = ((((((((-112 ? (arr_3 [i_0] [i_0]) : (arr_0 [i_0])))) ? 28006 : (arr_3 [i_0] [i_0])))) * (min(var_9, var_8))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {
                    {

                        for (int i_6 = 4; i_6 < 19;i_6 += 1)
                        {
                            arr_21 [1] [i_3] [i_4] [i_5 - 1] [i_6] = var_17;
                            var_22 = (arr_10 [i_6] [i_6] [i_6 + 1]);
                        }
                        for (int i_7 = 3; i_7 < 16;i_7 += 1)
                        {
                            var_23 = var_2;
                            var_24 = (-7129244953017420797 != (arr_23 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 + 1]));
                            var_25 = (arr_11 [i_4] [i_4 - 1] [i_4 + 1]);
                            var_26 = (41060 ? 113 : (arr_22 [i_7] [i_7 + 2] [i_7 - 1] [i_7] [i_7 - 3]));
                        }
                        for (int i_8 = 4; i_8 < 17;i_8 += 1)
                        {
                            var_27 = (((~var_15) ? var_17 : var_6));
                            var_28 = var_2;
                        }
                        for (int i_9 = 2; i_9 < 19;i_9 += 1)
                        {
                            arr_29 [i_2] [i_9] = (((arr_15 [i_2 - 2] [i_5 - 1]) + (arr_15 [i_2 + 1] [i_5 + 1])));
                            var_29 = var_12;
                        }

                        for (int i_10 = 1; i_10 < 17;i_10 += 1)
                        {
                            var_30 = (max(var_30, (arr_14 [i_3])));
                            var_31 += (((arr_18 [i_2 + 1] [i_3] [i_4 + 1] [i_5] [1] [i_3]) ? (arr_18 [i_2] [i_3] [i_4 - 1] [i_5] [i_5] [i_10]) : var_9));
                            arr_33 [i_2] [i_2] [i_10] [i_2] [15] [i_2] [i_2] = (arr_13 [i_3] [i_4 - 1] [i_5] [i_5]);
                            arr_34 [i_10] [i_3] [i_4 - 1] [i_3] [i_10] = (((arr_10 [i_5] [i_3] [i_3]) != (arr_27 [1] [i_3] [1] [i_4 + 1] [i_10])));
                        }
                        var_32 = ((48 << (((arr_16 [i_4 - 1]) + 4220))));
                    }
                }
            }

            for (int i_11 = 1; i_11 < 19;i_11 += 1)
            {
                var_33 = (arr_25 [i_2 + 4] [i_11] [i_2 + 4] [11] [i_11 - 1]);
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 18;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 0;i_13 += 1)
                    {
                        {
                            var_34 = var_2;
                            var_35 = (arr_11 [i_11 + 1] [i_12 - 1] [i_13 + 1]);
                        }
                    }
                }
                var_36 = (((arr_30 [i_3]) ? (((var_12 != (arr_24 [i_2] [i_3] [i_3] [i_3] [i_11] [i_3])))) : 0));
            }
            for (int i_14 = 1; i_14 < 1;i_14 += 1)
            {
                arr_47 [i_2] = ((!(arr_18 [i_14 - 1] [i_14] [i_3] [i_2 - 2] [i_2] [i_2])));
                arr_48 [i_2] [10] [i_14] [i_2] = ((1 - (((arr_13 [i_2] [i_2] [i_2] [i_2]) ? var_12 : var_11))));
                arr_49 [i_14 - 1] [i_14 - 1] [i_14 - 1] = var_2;
            }
        }
        for (int i_15 = 0; i_15 < 20;i_15 += 1)
        {
            var_37 = ((!(arr_37 [i_2] [i_2 - 1] [i_2 + 4])));
            var_38 = ((-(arr_13 [8] [i_15] [i_15] [17])));
        }
        arr_53 [i_2 - 2] = (((arr_50 [i_2 - 3] [i_2]) ? (arr_50 [i_2 + 4] [i_2 + 1]) : var_7));
        var_39 = (((arr_52 [8] [4]) ? (((arr_26 [i_2 - 2] [i_2 - 2] [i_2 + 2] [i_2] [i_2]) << (1 - 1))) : (((arr_32 [i_2] [10] [10] [10] [i_2 + 4]) ? 2092621444524156636 : var_9))));
    }
    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        var_40 = (~var_1);
        var_41 = ((min((arr_30 [i_16]), (arr_35 [i_16] [4] [4]))));
    }
    #pragma endscop
}
