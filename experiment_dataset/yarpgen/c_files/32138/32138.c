/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((max(var_5, (((var_6 / (-2147483647 - 1)))))) + var_7));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = (min(var_14, (arr_0 [1])));

        for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
        {
            var_15 = (arr_3 [i_0] [3]);
            var_16 = (~(arr_4 [i_1] [i_1] [i_1]));
            var_17 = -245;
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 20;i_5 += 1)
                    {
                        {
                            arr_19 [i_2] [i_4] [i_5] = -1017862332312946290;
                            arr_20 [i_2] [i_0] [i_2] [i_0] [1] [i_4] [6] = ((arr_17 [i_2] [i_5 - 4] [i_5] [i_2] [i_5] [17]) ? var_5 : (arr_17 [i_5] [i_5 - 2] [i_5] [9] [i_5] [i_5]));
                        }
                    }
                }
                arr_21 [i_0] [i_2] [i_0] = ((683689085 & (arr_15 [i_2] [i_3])));
                arr_22 [i_0] [i_2] = (arr_9 [i_0] [i_2] [i_3]);
                var_18 = (((((~(arr_7 [15] [15])))) / (arr_4 [i_0] [i_2] [i_2])));
            }
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        {
                            arr_31 [i_2] [i_2] [i_2] [2] [i_2] = (arr_30 [i_0] [i_2] [15] [i_7] [1]);
                            arr_32 [i_8] [i_2] [i_2] = (arr_15 [i_6] [i_6]);
                        }
                    }
                }
                arr_33 [19] [i_2] [i_2] = (((arr_4 [i_0] [i_0] [i_0]) >= (arr_12 [i_0])));
                var_19 *= var_9;
                arr_34 [i_2] [i_6] [18] [i_2] = (arr_1 [i_0]);
            }
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                var_20 = (max(var_20, (((4294967286 * (arr_37 [i_9] [i_2] [i_0] [i_0]))))));
                var_21 = ((~(arr_12 [i_0])));
            }
            for (int i_10 = 1; i_10 < 20;i_10 += 1)
            {
                var_22 = (min(var_22, var_0));
                var_23 *= 32767;
            }
            arr_40 [i_0] [i_2] [i_2] = (arr_26 [i_0] [i_2] [i_2]);
            var_24 ^= ((~(arr_8 [i_0] [i_2] [i_2])));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 4; i_12 < 17;i_12 += 1)
                {
                    {
                        var_25 = 1;
                        arr_47 [i_0] [i_2] [i_2] = (var_6 & 10953166546058475580);
                        arr_48 [i_2] [i_2] = var_11;
                    }
                }
            }
            arr_49 [i_2] [13] = ((~(arr_46 [1] [i_2] [i_2] [i_0])));
        }
        for (int i_13 = 2; i_13 < 18;i_13 += 1) /* same iter space */
        {
            var_26 = (max(var_26, (arr_43 [i_0] [i_0] [i_13])));
            var_27 = (max(var_27, ((((arr_25 [i_0]) * var_8)))));
            /* LoopNest 2 */
            for (int i_14 = 1; i_14 < 19;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 20;i_15 += 1)
                {
                    {
                        arr_57 [i_13] [i_13] = (((((arr_30 [i_0] [11] [i_0] [i_0] [i_0]) ^ 32767)) << ((((52266 ? var_9 : 18616)) - 11798149153694170659))));
                        arr_58 [i_13] [i_13] = 108;
                    }
                }
            }

            for (int i_16 = 1; i_16 < 20;i_16 += 1)
            {
                var_28 = (min(var_28, var_5));
                var_29 -= 504;
            }
        }
        for (int i_17 = 2; i_17 < 18;i_17 += 1) /* same iter space */
        {
            arr_64 [i_0] [i_17] = (((~(arr_53 [18] [20] [2] [i_0]))));
            var_30 -= 16;
            arr_65 [12] [i_17] [i_17] = ((-(arr_6 [i_0] [i_17] [i_17 - 2])));
        }
    }
    var_31 = (~var_12);
    var_32 -= (max(var_0, var_6));
    #pragma endscop
}
