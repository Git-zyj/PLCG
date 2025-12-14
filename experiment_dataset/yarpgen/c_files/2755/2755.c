/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;
    var_16 = (((-1 + 40367) <= var_6));
    var_17 = (((((var_13 ? (var_6 - var_4) : ((max(var_12, var_8)))))) ? (((~40367) + var_1)) : ((((var_12 == 4294967295) > var_9)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 = (min(var_3, ((var_0 ? -var_4 : (max(var_11, var_14))))));
                    var_19 = (min(((((((var_12 ? (arr_4 [i_0] [i_0] [i_0]) : var_14))) < (arr_3 [i_0] [i_0])))), ((-1 ? (arr_1 [i_0] [1]) : (min(6, 1))))));
                }
            }
        }

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_10 [i_3] [i_0] [i_0] = ((-(((arr_4 [i_0] [i_3] [i_0]) ^ var_2))));
            arr_11 [i_3] [0] [i_0] = 8284542926521109858;
            arr_12 [i_0] [i_0] = 25168;
            var_20 = ((((var_12 ? 4889 : var_0))));
            var_21 += ((~((((max(2047, var_8)) <= 25186)))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 20;i_6 += 1)
                {
                    {
                        var_22 = ((var_11 ? ((~(arr_19 [2] [i_4] [16] [16] [i_4]))) : (arr_17 [i_5] [i_6 - 1] [i_6 - 2] [i_6 - 1])));
                        arr_20 [i_6] [i_5] [i_5] [21] [21] = arr_9 [i_0] [i_0] [i_5];
                        arr_21 [i_0] [i_0] [i_0] = (arr_0 [21]);
                    }
                }
            }
            var_23 = -var_4;

            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                arr_25 [i_0] [i_7] = ((~(var_3 || var_2)));
                var_24 = (arr_7 [i_0]);

                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    arr_29 [i_4] [i_4] |= ((arr_2 [i_8] [i_4] [i_7]) ? var_2 : 10650);
                    var_25 = (arr_17 [i_0] [i_4] [i_7] [i_8]);
                }
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    var_26 = (-(arr_19 [i_0] [i_4] [i_7] [i_7] [i_9]));

                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        arr_35 [3] [i_9] [i_0] [i_4] [i_0] = (((~var_12) * -23));
                        var_27 = (1 >= var_10);
                        var_28 = -5640635824343813673;
                        var_29 = (var_9 || var_4);
                    }
                }
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    arr_39 [i_0] [i_0] [i_7] [i_11] = var_12;
                    arr_40 [7] [i_4] [i_7] [i_11] = (--14747836470592347524);
                }
                var_30 = var_0;
            }
        }
        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            var_31 = ((+((min((arr_33 [i_0] [i_0] [i_12]), (arr_33 [i_0] [i_0] [i_0]))))));
            arr_44 [i_0] [20] [7] = (arr_4 [i_12] [i_0] [i_0]);

            for (int i_13 = 3; i_13 < 21;i_13 += 1)
            {
                arr_49 [i_13] = (((arr_16 [i_13 - 1]) ? (arr_41 [16] [i_12]) : var_10));
                arr_50 [i_0] [i_13] [i_13] [9] = ((3523473846 != (arr_42 [i_0] [i_0] [1])));
                arr_51 [1] [i_13] [i_13] = ((((min(var_7, (var_14 / var_3)))) ? 0 : ((((var_5 ? 699164422 : var_14)) / var_7))));
                arr_52 [i_13] [i_12] [i_13] = (((arr_34 [i_13] [i_13 - 2] [i_13 - 2] [i_13 - 1] [i_13]) != var_8));
            }
        }
        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            arr_55 [i_14] [i_0] = (min((~var_4), ((10660 ? var_3 : var_1))));
            var_32 = (max((((~(arr_4 [i_0] [i_0] [i_14])))), (((arr_4 [i_0] [i_14] [i_0]) ? (arr_4 [20] [i_14] [13]) : var_2))));
        }
        arr_56 [18] [i_0] = var_0;
    }
    #pragma endscop
}
