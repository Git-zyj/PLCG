/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    var_18 = var_10;
                    var_19 = var_1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 = var_6;
                                arr_13 [i_1] [i_4] = 8680654698262153927;
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_21 = (min(var_21, var_11));
                                var_22 = 16127082668328590062;
                            }
                        }
                    }
                    arr_21 [i_1] [i_1] [i_0] [i_1] = 64108;
                    var_23 = (min(var_23, (arr_5 [i_0] [3] [i_5])));
                }
                for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                {
                    arr_24 [i_0] [i_1] [i_0] = (((var_14 | 32766) * 1));
                    var_24 *= var_10;

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                    {
                        arr_28 [i_1] = var_4;
                        arr_29 [i_0] [i_0] [i_1] [i_0] [i_0] = 4294967295;
                        arr_30 [i_0] [i_1] [i_8] [i_1] [i_9] = (arr_15 [i_1]);
                    }
                    for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                    {
                        var_25 = var_0;
                        var_26 = var_5;
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        arr_36 [i_0] [i_1] [i_8] [i_11] [i_11] = var_8;
                        var_27 *= ((32766 >> (var_1 - 13141220465168675800)));
                        arr_37 [i_11] [i_11] [i_1] [i_1 - 1] [i_0] = var_4;
                    }
                }
                var_28 = (max(var_28, 32766));

                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    var_29 = (min(var_29, (arr_4 [i_0] [i_1] [i_12])));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        for (int i_14 = 3; i_14 < 13;i_14 += 1)
                        {
                            {
                                var_30 *= ((~(arr_33 [i_0] [i_1] [i_12] [10] [i_14])));
                                var_31 = var_5;
                            }
                        }
                    }
                    var_32 = var_5;
                }
                for (int i_15 = 0; i_15 < 15;i_15 += 1)
                {
                    var_33 = 8191;
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 15;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 15;i_17 += 1)
                        {
                            {
                                var_34 -= ((var_10 & ((-(arr_15 [i_0])))));
                                var_35 = var_15;
                                var_36 -= 4301548861661473972;
                                var_37 = var_4;
                            }
                        }
                    }
                    var_38 = (min(var_38, (arr_40 [i_0] [i_1 - 2] [i_15])));
                }
                /* vectorizable */
                for (int i_18 = 0; i_18 < 15;i_18 += 1)
                {
                    var_39 = (min(var_39, ((((((arr_35 [i_0] [i_0] [i_0] [i_18]) | var_7)) | (1 >= var_10))))));
                    arr_56 [i_1] [i_1] [i_1] = 1;
                    var_40 *= 3564195800;
                }
            }
        }
    }
    var_41 = (!var_13);
    var_42 = (max(var_42, -var_9));
    #pragma endscop
}
