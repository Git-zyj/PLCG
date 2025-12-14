/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, 16));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            arr_14 [i_0] [0] [i_2] [2] [i_0] = (arr_0 [i_1 - 1] [i_1]);
                            var_19 = (((arr_9 [i_0] [i_2 - 4] [i_3] [i_4] [i_4 - 1]) ? 1 : 120));
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_20 += (arr_11 [i_5] [i_3] [i_2] [i_2] [i_1] [i_0] [i_5]);
                            var_21 ^= (~var_7);
                        }

                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_22 = 1;
                            arr_21 [i_0] [i_3] [i_2] [i_1 - 4] [4] [i_0] = (((~255) % var_0));
                            var_23 -= ((var_14 ? (arr_11 [i_6] [i_0] [i_3 + 1] [0] [i_6] [i_1 - 4] [2]) : 522240));
                        }
                        for (int i_7 = 4; i_7 < 14;i_7 += 1)
                        {
                            var_24 = (max(var_24, 2271120335));
                            var_25 -= (arr_19 [i_0] [i_1] [i_3] [i_7]);
                            var_26 = ((-(((arr_17 [i_0] [i_0] [i_2] [i_3] [i_7]) * 1))));
                        }
                        for (int i_8 = 1; i_8 < 14;i_8 += 1) /* same iter space */
                        {
                            arr_26 [5] [i_3 - 1] [i_3] [i_0] [5] [i_3] [i_3] = -var_7;
                            var_27 = 1161;
                        }
                        for (int i_9 = 1; i_9 < 14;i_9 += 1) /* same iter space */
                        {
                            var_28 += (arr_20 [1] [i_1] [i_1]);
                            var_29 = (min(var_29, (0 / -30)));
                        }
                    }
                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        arr_33 [i_0] [i_2] [i_1] [i_10 - 1] [i_0] &= ((125 ? (arr_10 [i_0] [i_0] [i_1] [i_10 + 1]) : 9223372036854775807));
                        var_30 = (max(var_30, ((((arr_31 [i_1 - 1] [i_1 - 3] [i_1 - 3] [i_2] [i_2] [12]) / (arr_13 [2] [i_1] [i_2 - 2] [i_2] [12] [i_1] [i_0]))))));
                        var_31 = ((1 / (arr_32 [i_0] [i_0])));
                        arr_34 [i_10] [i_0] [i_10] [i_10] [0] = var_1;
                    }
                    var_32 = (max(var_32, (((!(var_2 != var_4))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 13;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 14;i_13 += 1)
                {
                    {
                        var_33 = ((-(((!(arr_38 [i_0] [i_11] [i_12] [i_11]))))));
                        arr_43 [i_0] [i_12 + 2] [i_0] = 2652194743;
                        var_34 = (~-522240);
                    }
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 11;i_14 += 1)
    {
        arr_46 [i_14] [i_14] = (~-1339336505);

        for (int i_15 = 0; i_15 < 11;i_15 += 1)
        {
            var_35 = ((((3459918192 & (arr_41 [i_14] [i_14] [i_15] [i_15] [i_14]))) <= (((~(!-9223372036854775807))))));
            var_36 = (((arr_35 [12] [i_15] [1]) * (((min(var_6, (!41882)))))));
        }
    }
    for (int i_16 = 0; i_16 < 17;i_16 += 1)
    {
        arr_52 [i_16] = 2023846960;
        arr_53 [i_16] |= (max(3408184370105954152, ((~(arr_49 [i_16] [i_16])))));
        arr_54 [i_16] = (arr_50 [i_16] [i_16]);
    }
    #pragma endscop
}
