/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (arr_0 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = (((828611230 / 153456565) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = (806520046 != (~107));

                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_0] = (105 - (arr_4 [i_0]));
                        var_18 = (arr_4 [i_0]);
                        var_19 = (((~-108) ? -108 : (arr_10 [i_2 - 1] [i_2 + 1] [i_0] [i_2 - 2] [i_3 - 2])));
                        arr_12 [i_0] [i_1] [i_2] [i_0] [2] [i_0] = (~10);

                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            arr_15 [i_0] [i_4 + 1] [i_3] [i_2] [i_0] [i_0] [i_0] = (arr_10 [i_4] [i_3] [i_0] [i_1] [4]);
                            var_20 = (min(var_20, ((((((-82 + 2147483647) >> 14)) & (arr_10 [i_0] [i_1] [i_2] [i_1] [i_3 - 1]))))));
                        }
                        for (int i_5 = 2; i_5 < 18;i_5 += 1)
                        {
                            arr_20 [i_0] [i_0] = (((arr_19 [i_1] [i_0] [i_1] [i_1] [i_1]) ? ((((arr_3 [i_0] [i_3]) / 3414635170))) : 21));
                            arr_21 [i_0] [i_0] [i_0] = 0;
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_21 &= 1553002760;
                            arr_25 [i_0] [i_6] [i_2] [i_3] [i_6] = (((arr_24 [i_0] [i_1] [i_2] [i_0] [i_6]) != 18446744073709551606));
                        }
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_22 = (~109);
                        var_23 = (max(var_23, -82));
                        arr_29 [i_0] [i_1] [i_1] [i_2] [i_2] = (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                }
            }
        }

        for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
        {
            arr_33 [i_0] [i_0] [i_0] = (~(arr_10 [i_0] [i_0] [i_0] [i_8] [i_8]));
            var_24 ^= (arr_4 [i_8]);
        }
        for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
        {
            var_25 ^= (~0);
            var_26 = (((arr_5 [i_0] [i_0]) ? 1 : (((arr_35 [i_0]) ? (arr_8 [i_0] [i_9]) : (arr_0 [i_9] [i_0])))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 4; i_11 < 18;i_11 += 1)
                {
                    {
                        arr_41 [i_0] [i_9] [i_9] [i_0] [i_9] [i_11] = (arr_39 [12] [i_11 - 4] [16] [i_11]);
                        arr_42 [i_0] = (((arr_23 [i_11 - 2] [i_11] [i_11 + 1] [i_11 - 1] [i_11] [i_11] [i_11 + 1]) ^ (arr_23 [i_11 - 4] [i_11 - 3] [i_11] [i_11 - 1] [i_11 - 2] [i_11] [i_10])));
                        var_27 = 17066;
                        arr_43 [i_9] [i_11 - 4] [i_9] [i_9] &= (((arr_10 [i_0] [i_9] [i_9] [i_10] [i_11 - 3]) > (arr_10 [i_0] [i_11 - 4] [i_9] [i_0] [i_11])));
                    }
                }
            }
        }
        for (int i_12 = 2; i_12 < 18;i_12 += 1)
        {
            arr_48 [i_0] [i_0] [i_0] = arr_8 [i_0] [i_12];
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 18;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    {
                        arr_55 [i_0] [i_0] [i_13 + 1] [i_0] [i_0] = (arr_3 [i_12] [i_14]);
                        arr_56 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_30 [i_0] [i_0] [i_0]);
                        var_28 = (((arr_14 [i_12 + 1] [i_0]) ? (arr_14 [i_12 - 1] [i_0]) : (arr_17 [i_14] [i_12] [i_0] [i_13 - 1] [i_0])));
                        var_29 = (((1093309857 <= 18446744073709551574) - (-32767 - 1)));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 19;i_16 += 1)
                {
                    {
                        var_30 += (((arr_39 [i_12 - 2] [i_12] [i_12 + 1] [i_12 - 1]) || (((31452 / (arr_49 [i_0] [0] [i_15] [i_16]))))));
                        var_31 = (arr_14 [i_0] [i_0]);
                        var_32 = ((((((arr_37 [i_0] [i_12] [i_15] [i_12]) ? (arr_54 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_60 [i_0] [i_16] [15] [i_15])))) ? 1099511627775 : (~0)));
                    }
                }
            }
            var_33 |= arr_9 [i_0] [i_0] [4] [i_12 - 2] [i_0];
        }
    }
    var_34 += (!36638);
    #pragma endscop
}
