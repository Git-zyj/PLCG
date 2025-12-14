/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    var_11 ^= arr_1 [i_1];

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        arr_9 [i_3] [i_2] = (arr_2 [i_0] [i_1] [i_3]);

                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            var_12 = arr_11 [i_0] [i_1] [i_2] [i_3] [i_4 - 2];
                            var_13 = (((arr_5 [i_3 + 3] [i_3 + 4]) ? (arr_5 [i_3 + 4] [i_3 + 3]) : (arr_7 [i_3 + 1] [i_3 - 2] [i_3 - 1] [i_3 - 2])));
                            arr_14 [i_0] [i_0] [i_4] [i_0] [i_0] |= (arr_8 [i_1] [i_1] [i_1]);
                        }
                    }
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_14 ^= ((((-(arr_1 [i_5])))));
                        var_15 = ((~(arr_1 [i_0])));
                        var_16 ^= (((arr_8 [i_5] [i_1] [i_5]) ^ (var_5 >= 225)));
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                {

                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        arr_21 [i_0] [9] [i_6] [i_7] = (-(!233));

                        for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                        {
                            var_17 = -3254220018;
                            arr_25 [i_6] [i_0] [i_0] [13] [i_6] [i_6] [i_8] = (((arr_24 [i_6] [i_7 - 1] [1] [i_7 + 1] [i_8] [i_8] [i_8]) % 29));
                            var_18 ^= ((21 >> ((((18014398509481983 ? (arr_4 [15]) : 18014398509481983)) - 1739778206))));
                            arr_26 [i_0] [i_1] [i_6] [i_6] [i_6] [i_0] = (2603518755 ? 18428729675200069623 : 18014398509481983);
                            var_19 = ((!(~2235649193981807758)));
                        }
                        for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                        {
                            var_20 = (min(var_20, (((-1 * (arr_17 [i_7 + 1] [i_7 + 1] [6] [i_1]))))));
                            var_21 = (arr_3 [i_0]);
                            var_22 = ((0 ? (arr_0 [i_6] [i_9]) : (arr_2 [i_0] [i_1] [i_6])));
                        }
                        for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                        {
                            var_23 -= (~18428729675200069633);
                            var_24 = (arr_8 [i_6] [i_7 + 1] [i_6]);
                            var_25 = ((~((~(arr_22 [i_0] [i_0] [i_0] [i_7 + 1] [i_0] [i_10])))));
                            var_26 = (((1 ? 212 : 18014398509482001)));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 14;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            {
                                var_27 = (((((~(arr_27 [i_0] [i_0] [i_6] [i_6] [i_12])))) & (var_2 & 31)));
                                var_28 -= ((1 ? (arr_30 [12] [i_1] [i_6] [i_1] [i_0]) : ((~(arr_37 [i_12] [i_12] [i_11] [i_6] [i_1] [i_0])))));
                                arr_38 [i_6] = 77;
                                var_29 *= ((((!(arr_1 [i_0]))) ? 6 : (arr_36 [i_11] [i_11 - 2] [i_11] [i_11 + 1] [i_11 + 1])));
                                arr_39 [i_0] [i_0] [i_6] [5] [i_6] = ((597155189 ^ (((-(arr_11 [i_12] [i_0] [i_0] [i_1] [i_0]))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_13 = 3; i_13 < 12;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 14;i_15 += 1)
                        {
                            {
                                var_30 |= -65535;
                                var_31 = (min(var_31, 227));
                            }
                        }
                    }
                }
                var_32 |= (arr_49 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 12;i_16 += 1)
    {
        for (int i_17 = 2; i_17 < 9;i_17 += 1)
        {
            {
                arr_57 [i_17 - 2] = 118;
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 12;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 12;i_19 += 1)
                    {
                        {
                            arr_63 [i_16] = (((-93 ? ((((!(arr_19 [i_16] [9] [i_18] [i_17] [7] [i_16]))))) : (~1771603299))));
                            arr_64 [i_16] [i_17] [i_17] [i_19] = (-(((var_1 ? 16211094879727743858 : 16211094879727743879))));
                            var_33 = (arr_16 [i_19] [i_18] [i_16]);
                            arr_65 [9] [i_16] [i_16] [i_16] [i_18] [i_16] = ((!(arr_5 [i_17] [i_17 - 1])));
                        }
                    }
                }
                var_34 -= -93;
            }
        }
    }
    var_35 = var_6;
    #pragma endscop
}
