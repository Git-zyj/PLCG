/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_10, ((86 >> (2130317609 - 2130317598)))));
    var_20 -= var_3;
    var_21 = var_4;
    var_22 |= var_4;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = ((var_9 ? ((16060 ? 16058 : 16058)) : ((min(var_13, (min(var_9, var_18)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = 17690092195803795375;
                    var_23 ^= (((((var_9 << ((min((arr_1 [i_0] [i_2]), (arr_1 [i_2] [i_2]))))))) ? ((60640 & (arr_6 [i_2] [i_0] [i_0] [i_0]))) : ((((4294967295 > (arr_6 [i_0] [i_0] [i_0] [i_2])))))));
                }
            }
        }

        for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
        {
            var_24 = ((~(arr_10 [i_3] [i_3 + 1] [i_3 + 1])));
            var_25 = (!var_1);

            /* vectorizable */
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                var_26 = 16058;

                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    var_27 |= ((-(~var_7)));
                    var_28 |= (arr_14 [i_4] [i_3 + 1] [i_3 + 1]);
                    arr_17 [i_0] [i_0] [i_4] [i_5] = (arr_5 [i_5]);
                }
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    var_29 = (min(var_29, (((((((arr_2 [i_4]) ? 60640 : var_16))) / var_8)))));

                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        var_30 = (((arr_9 [i_7]) - var_14));
                        arr_24 [1] [i_3 + 1] [i_4] [i_0] [i_6] [i_7] = (arr_18 [i_3 + 1] [i_3] [i_3]);
                        var_31 = (((arr_11 [i_0]) | (arr_18 [i_0] [i_3] [i_4])));
                    }
                    var_32 = (min(var_32, var_13));
                }
                var_33 = var_2;
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        {
                            var_34 = arr_18 [i_0] [i_0] [i_0];
                            var_35 = 16060;
                            var_36 = (1 && (!var_9));
                        }
                    }
                }
                var_37 ^= (((~(arr_15 [i_4]))));
            }
            for (int i_10 = 4; i_10 < 15;i_10 += 1)
            {
                var_38 = (min(var_38, (((!((min((arr_23 [12] [i_0] [0] [i_0] [i_0] [i_0] [12]), (arr_6 [i_0] [i_3 + 1] [7] [i_10])))))))));
                var_39 = (((min((arr_32 [i_10] [i_0] [i_0] [i_3 + 1]), (arr_20 [i_0] [i_3] [i_10] [i_10] [i_3]))) * 11));

                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    var_40 = 97;
                    arr_35 [i_0] [i_3] [5] [i_0] = (((((((((arr_25 [i_0] [i_3] [2] [i_11]) - 66))) ? (arr_33 [i_0] [i_0]) : ((3842588064 ? var_13 : (arr_33 [i_0] [i_0])))))) || ((((var_10 <= var_10) ? (arr_15 [i_0]) : (60 && var_2))))));
                    arr_36 [i_0] [i_0] [i_3 + 1] [i_10] [2] [i_11] = 2147483647;
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    var_41 = ((9223372036854775807 ? (arr_26 [i_3 + 1] [i_10 - 3] [i_0] [i_12]) : (arr_4 [i_0] [i_3 + 1])));
                    arr_39 [i_12] [i_0] [i_0] [i_0] = 1;
                    arr_40 [i_0] = var_9;
                    var_42 = (max(var_42, (arr_20 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_10 - 3] [i_10 - 3])));
                }
            }
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 0;i_13 += 1) /* same iter space */
        {

            for (int i_14 = 1; i_14 < 15;i_14 += 1)
            {
                arr_46 [i_0] [i_0] [8] [i_0] |= arr_2 [1];
                arr_47 [i_0] [i_13] [i_0] = (~var_0);
            }
            var_43 = (((((var_12 ? var_6 : (arr_43 [i_13 + 1])))) ? ((((arr_0 [i_0]) && var_9))) : ((-(arr_33 [i_0] [i_0])))));
        }
    }
    #pragma endscop
}
