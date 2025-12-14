/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0 + 1] [i_0] = ((((!(arr_6 [15] [i_1])))));
                    var_20 = (((((arr_1 [i_0 + 3]) || (arr_6 [i_0 + 3] [i_1 - 1]))) || (arr_2 [i_0 + 3])));
                }
            }
        }

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_21 = (max(var_21, 32));

            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {

                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    arr_19 [i_0] [i_3] [i_5] = 9;
                    var_22 = (max(var_22, ((max(((!((max(-754954506757136029, var_18))))), (!var_12))))));
                    var_23 = (max(var_23, ((((var_4 >= (arr_15 [i_0] [i_0] [i_0] [i_0])))))));
                    var_24 = ((-(min((arr_16 [i_0 + 3] [1] [i_5 - 1]), 191261103))));
                    arr_20 [i_0 - 1] [i_3] [i_3] [i_3] [i_0] [1] = var_3;
                }
                var_25 = (min(var_25, ((((((((var_18 ? 15655596263932030908 : var_15))) ? (arr_12 [i_3]) : ((var_13 << (var_19 - 7906555971517919112))))) < 0)))));
                var_26 = var_0;
                var_27 ^= (max(((~(arr_5 [i_0 - 1] [i_0 + 3] [i_0 + 2]))), ((max(var_6, (arr_5 [i_4] [i_3] [i_0]))))));
            }
            arr_21 [i_3] |= ((((min(21, (min(var_3, (arr_1 [9])))))) && ((max(((12916903246113089 | (arr_6 [i_0] [i_3]))), (!var_5))))));

            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                arr_26 [i_0] [i_3] [i_0] = (min(((((arr_13 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 2]) && (arr_13 [i_0] [1] [i_0] [i_0 + 3])))), (arr_13 [i_0] [i_0 + 2] [i_0] [i_0 + 2])));
                arr_27 [i_0] [i_3] [i_0] = (max((((-(arr_22 [i_0] [i_0] [i_0] [i_0])))), (((var_12 + ((var_10 ? 236 : var_0)))))));
            }
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                arr_30 [i_0] = ((0 ? (arr_24 [i_7] [13] [i_7]) : (max(1048448, ((18304 ? var_8 : var_3))))));
                var_28 = 13;
            }
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                var_29 = ((var_13 ? (max(1048449, (((arr_29 [i_0 + 1]) ? (arr_23 [i_0] [i_0] [i_3] [i_8]) : var_4)))) : 248));
                var_30 = (!268304384);
                var_31 = ((2147483647 < ((-((21 ? (arr_10 [i_0] [i_0]) : var_9))))));
            }
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_36 [9] [8] [i_0] = (max((~75), (((arr_22 [1] [i_0] [i_0] [i_0 + 1]) ? (arr_16 [i_0 - 1] [i_0 + 1] [i_0 + 2]) : (arr_16 [i_0] [i_0 + 3] [i_0 + 3])))));
            var_32 = (min(var_32, var_3));
            /* LoopNest 2 */
            for (int i_10 = 3; i_10 < 16;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    {

                        for (int i_12 = 2; i_12 < 16;i_12 += 1) /* same iter space */
                        {
                            var_33 = (min(var_33, (arr_41 [i_11] [i_0] [i_10 + 1] [i_12])));
                            var_34 = (max(var_34, (((+(max((arr_17 [i_11] [i_12 - 1] [i_12]), (65534 ^ var_17))))))));
                            var_35 = 47202;
                        }
                        for (int i_13 = 2; i_13 < 16;i_13 += 1) /* same iter space */
                        {
                            var_36 = (((arr_6 [i_13 - 1] [i_13 - 1]) ? (arr_15 [i_13 + 1] [3] [i_9] [i_9]) : ((((!(arr_29 [i_0 + 2]))) ? (arr_15 [i_0 + 1] [i_10 - 2] [i_13 - 1] [i_13 - 2]) : (((18304 ? var_9 : 8)))))));
                            var_37 *= (min(((-21 ? (arr_43 [i_13 - 2] [i_10] [i_10 - 1]) : (arr_17 [i_11] [i_10] [i_11]))), (((!(arr_17 [i_11] [i_10] [i_11]))))));
                            var_38 = ((max(-22, -var_3)));
                        }
                        var_39 = (((28 ^ ((3744 ? var_18 : var_2)))));
                        var_40 = (min(var_40, (arr_4 [i_0])));
                        var_41 = (((((0 ? ((var_1 ? (arr_34 [16]) : var_9)) : ((32505856 ? 85 : (arr_23 [i_11] [i_0] [i_0] [i_0])))))) / 4047211238));
                    }
                }
            }
        }
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            arr_50 [i_0] = ((var_8 ? 4047211238 : (arr_45 [12] [12] [i_0] [i_0] [i_0])));
            var_42 = (-22 >= 248);
        }
    }
    var_43 = var_16;
    var_44 = var_13;
    var_45 = -var_4;
    var_46 = var_0;
    #pragma endscop
}
