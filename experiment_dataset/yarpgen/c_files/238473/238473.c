/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!var_1) >= ((var_8 ? 127 : ((var_12 >> (142 - 129))))));
    var_21 = (min(((min(((var_17 ? var_17 : var_17)), var_19))), (max(14401777475644109677, 111))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_22 = (max(var_22, (!var_4)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_3] [i_2] [i_3] [i_4 - 1] = var_9;
                                var_23 = ((82 ? -110 : 0));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
                {
                    var_24 = ((((0 ? ((~(arr_0 [i_0]))) : (((arr_2 [i_1]) ^ (arr_5 [9] [i_0 + 2]))))) - 69));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_22 [1] [i_1] [i_5] [1] [i_5] = 144;
                                arr_23 [i_7] [i_7] [i_5] [i_5] [i_1] [i_0] = (4044966598065441939 % 3631502237666052165);
                                arr_24 [i_5] [i_1] [4] [i_6] [i_6] [i_6] [i_5] = arr_11 [i_0] [i_0];
                            }
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 0;i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_25 = (((((-(((!(arr_3 [i_0]))))))) || var_7));
                                var_26 = (((((min((var_3 <= 255), 0)))) / (((arr_6 [i_10] [14] [i_8 + 1] [i_9]) + var_11))));
                                arr_32 [5] [10] [i_8 + 1] [i_9] [5] [i_9] [i_8 + 1] = (min(var_4, ((((((0 != (arr_4 [i_8])))) == ((4044966598065441939 ? (arr_0 [i_8]) : 1)))))));
                                var_27 *= ((min(0, (max(var_11, 243)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            {
                                var_28 = -0;
                                var_29 = ((~((min(12, var_2)))));
                                arr_39 [i_12] [i_11] [i_8] [i_1] [i_0] [i_0 + 2] = (~1);
                                var_30 += (min((arr_7 [i_0] [i_1] [i_11] [i_11]), var_13));
                                arr_40 [i_0] [i_1] [i_8 + 1] [i_0] [i_11] [1] = ((~(arr_30 [i_0 + 1] [i_1] [i_1] [i_8 + 1] [i_0 + 1] [i_12] [i_0 + 2])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        for (int i_14 = 4; i_14 < 14;i_14 += 1)
                        {
                            {
                                var_31 = (~var_9);
                                arr_48 [i_0] [i_1] [3] [13] [i_13] [i_14] [i_14] = (arr_37 [i_13] [i_13] [i_8] [i_13] [i_14] [i_1] [i_0]);
                                arr_49 [i_0] [2] [i_14] = (min(0, 2147557533406894571));
                                arr_50 [i_0 - 1] [1] [i_13] [5] [i_14] [i_13] |= (arr_21 [i_0] [i_0] [i_1] [i_8] [i_13] [i_14] [14]);
                            }
                        }
                    }
                }
                arr_51 [i_0 + 2] = var_2;
                var_32 = 12563146871836510842;
            }
        }
    }
    #pragma endscop
}
