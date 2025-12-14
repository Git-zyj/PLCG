/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (min(var_2, (min(var_6, (!var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_11 += (!(arr_2 [i_1] [i_1 - 2]));
                    var_12 = (max(var_12, (((+(min((arr_6 [i_1 + 2] [i_0] [i_0]), (((arr_7 [i_0] [i_0]) ^ 2141056093)))))))));
                    var_13 = var_6;
                    var_14 *= (arr_8 [i_2] [i_1]);
                }

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_15 = (min(var_15, (arr_6 [i_0] [i_1] [i_3])));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_16 = var_1;

                        for (int i_5 = 3; i_5 < 13;i_5 += 1)
                        {
                            arr_19 [i_3] [i_3] [i_3] = (((127 ? var_3 : (arr_0 [i_0 + 3] [i_0 - 2]))));
                            var_17 += 1;
                            var_18 *= (((1 * var_9) | (arr_14 [i_4] [i_3] [i_1 + 2])));
                            arr_20 [i_0] [i_3] [i_0] [i_0 - 1] [i_0] = ((arr_12 [i_3] [i_4] [i_3]) ^ (arr_10 [i_5 + 2] [i_5] [i_5]));
                        }
                        arr_21 [i_3] [i_3] [i_3] [i_1] [i_0] = -var_9;
                        var_19 = (min(var_19, (arr_3 [i_1] [i_0 + 1])));

                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_20 = (arr_9 [i_0 + 4] [i_0 + 4] [i_0]);
                            arr_26 [i_6] [i_3] [i_3] [i_3] [i_0] = 2141056094;
                        }
                    }
                    var_21 = (min(var_21, ((((arr_3 [i_1 + 2] [i_1 + 2]) >= (arr_12 [i_3] [i_1] [i_0]))))));
                }
                for (int i_7 = 1; i_7 < 13;i_7 += 1)
                {
                    var_22 &= (arr_12 [i_1] [i_1] [i_0]);
                    arr_29 [i_0] = ((max((arr_16 [i_7] [i_0 + 4] [i_7 - 1] [i_7] [i_1]), 112)));
                    var_23 = (min(var_23, ((((arr_0 [i_7 - 1] [i_7 + 1]) / ((var_6 ^ (arr_0 [i_7 - 1] [i_7 - 1]))))))));

                    for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
                    {
                        arr_33 [i_0] [i_1 - 2] [i_7] [i_8 + 2] = var_7;
                        var_24 = (min(var_24, (((~((((arr_15 [i_0] [i_1] [i_1] [i_1]) >= var_0))))))));
                        arr_34 [i_0] [i_0] = (min(2362214827, 271596861));
                    }
                    for (int i_9 = 1; i_9 < 13;i_9 += 1) /* same iter space */
                    {
                        arr_37 [i_9] [i_9] [1] [i_9] = 79;
                        arr_38 [i_9] = var_6;

                        for (int i_10 = 1; i_10 < 13;i_10 += 1)
                        {
                            arr_42 [i_9] [9] [9] [i_10] [i_10] [i_9] = (min((max((arr_12 [i_1 + 3] [5] [i_9]), -101)), (((min(32736, 2141056077)) | ((((arr_10 [i_9] [i_9 + 2] [i_9 + 1]) * (arr_28 [i_0]))))))));
                            arr_43 [i_9] [i_9] = ((max((arr_14 [i_0 + 3] [i_7 + 1] [i_10 - 1]), var_8)));
                            var_25 = (max(var_25, (var_2 ^ 2153911202)));
                            var_26 = (min(var_26, (((((1 + (arr_23 [i_0] [i_1] [i_9] [i_7 - 1] [2] [i_9 - 1] [i_1]))) != (arr_10 [i_0] [i_0] [i_0]))))));
                        }
                    }
                    for (int i_11 = 1; i_11 < 13;i_11 += 1) /* same iter space */
                    {
                        var_27 = (min(var_27, (((~(min((~0), var_3)))))));
                        arr_46 [i_1] [10] = (~(((var_4 == (!-5557245000486847019)))));
                    }
                    for (int i_12 = 1; i_12 < 13;i_12 += 1) /* same iter space */
                    {
                        arr_50 [i_12] [14] [14] [i_12] = (255 >> 262128);
                        var_28 = (arr_7 [i_1] [i_1]);
                        var_29 = ((~(min(var_8, 204))));
                    }
                }
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    var_30 = (min(var_30, 419));
                    var_31 = (((1 ? ((((-12704 && (arr_31 [i_13] [i_13] [i_1 + 1] [i_1] [i_0])))) : (min(var_6, var_0))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 2; i_14 < 21;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 23;i_15 += 1)
        {
            {
                var_32 = (max(var_32, 2153911203));
                var_33 = (max(var_33, ((((arr_57 [i_15] [i_15] [i_14]) < (arr_57 [i_14] [i_14] [i_14]))))));
            }
        }
    }
    var_34 = (max((var_8 == 14005), (-1733 > var_9)));
    #pragma endscop
}
