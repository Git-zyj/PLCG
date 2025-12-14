/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_6 >= var_13);

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_16 = (var_9 < var_12);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            arr_13 [i_0] = (((20449 ^ (arr_9 [i_0 + 4] [i_1] [i_2] [i_4]))));
                            var_17 |= (((((((arr_12 [i_2] [1] [1] [i_2] [i_2] [i_2]) ^ var_8)))) - (arr_6 [i_3] [i_2] [i_3] [i_4])));
                        }
                        for (int i_5 = 3; i_5 < 14;i_5 += 1)
                        {
                            var_18 = 9;
                            arr_16 [8] [8] [i_0] [i_3] [i_3] [2] = (((arr_4 [i_0 + 2]) != -20470));
                        }
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            var_19 = (var_4 != 65);
                            var_20 = 1963;
                        }
                        arr_19 [i_0] [11] [i_2] [i_3] = 817971526;
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        arr_22 [i_7] [i_7] = (((((var_6 <= (arr_4 [i_7])))) == (7930420996621431247 != -21323)));
        arr_23 [6] = (arr_3 [i_7] [5] [i_7]);

        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            var_21 = (var_11 ^ (var_1 | -20439));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    {
                        var_22 = (min(var_22, 20446));
                        arr_30 [i_9] [i_9] [i_7] [i_8] [i_9] [i_10] = (((var_9 || (arr_29 [i_9] [i_8] [i_8] [i_10] [i_9]))));

                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            var_23 = (784975390 * var_5);
                            arr_34 [i_7] [i_8] [i_9] [i_9] [i_11] = 65;
                            var_24 = 17489856074447113660;
                        }
                    }
                }
            }

            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                var_25 *= var_0;
                var_26 = (((((arr_21 [5]) >= 784975390))));
            }
            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        {
                            arr_44 [i_15] [i_15] [i_15] = ((((arr_39 [i_7] [4] [i_13]) >= var_11)));
                            var_27 *= (((((var_10 <= (((arr_3 [i_7] [11] [i_13]) | 13550012808357863771)))))) * ((((arr_31 [i_13] [i_8] [i_13] [i_14] [i_15] [i_14] [i_8]) & 65))));
                            var_28 = (max(var_28, var_5));
                            var_29 = (min(var_29, ((((arr_1 [i_7]) ^ 16371145690898210740)))));
                            arr_45 [i_7] [i_8] [3] [1] [i_15] = var_1;
                        }
                    }
                }

                for (int i_16 = 0; i_16 < 10;i_16 += 1)
                {
                    var_30 = ((((arr_9 [i_7] [i_7] [i_7] [i_7]) <= (((arr_12 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) * (arr_46 [i_16] [i_16] [i_13] [i_8] [i_8] [8]))))));
                    arr_50 [i_7] [i_8] [i_13] [i_16] = ((((((((arr_35 [i_7] [i_8] [1]) * -21323)) << (((arr_38 [i_8] [i_13] [i_16]) - 5648896211927754263))))) == (((arr_9 [i_7] [i_8] [i_13] [i_16]) >> (((var_13 != (arr_20 [9]))))))));
                }
                /* vectorizable */
                for (int i_17 = 2; i_17 < 9;i_17 += 1) /* same iter space */
                {
                    var_31 = (max(var_31, 63));
                    var_32 = (arr_2 [i_17 + 1] [i_8] [i_17 - 2]);
                }
                /* vectorizable */
                for (int i_18 = 2; i_18 < 9;i_18 += 1) /* same iter space */
                {
                    arr_57 [i_7] [i_7] [i_7] [i_7] = (arr_48 [i_7] [i_7] [0] [i_18]);
                    arr_58 [i_7] [i_7] [i_7] [i_7] = (7930420996621431247 >= var_0);
                    arr_59 [i_7] [i_7] = 1758957512771966498;
                    arr_60 [i_7] [i_7] [i_13] = 20449;
                }
            }
            arr_61 [i_7] [9] = ((arr_24 [i_7]) + (((18446744073709551615 | 28) >> (var_11 - 17790267348481865767))));
        }
    }
    #pragma endscop
}
