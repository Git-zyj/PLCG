/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (--664861208);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            arr_15 [i_1] = var_7;
                            var_20 = var_13;
                            var_21 *= ((var_8 ? (arr_9 [16] [16] [16] [i_3] [i_4] [i_0]) : (arr_11 [i_1] [i_1] [i_2] [i_3])));
                            var_22 = (max(var_22, ((((arr_9 [i_2] [i_1] [i_2] [1] [i_4] [i_0]) ? (arr_9 [i_0] [i_0] [i_0] [i_2] [i_2] [i_4]) : var_17)))));
                        }
                        var_23 = ((!(arr_6 [i_0] [i_0] [i_0] [i_0])));
                        var_24 = (((1 ? 1 : 89)));
                        arr_16 [i_1] = -5643433372348266030;
                    }

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        arr_19 [i_1] = arr_0 [i_1];
                        var_25 = ((((arr_10 [i_5] [i_1] [i_0]) ? (arr_9 [i_0] [i_1] [i_1] [i_2] [i_1] [i_5]) : (arr_1 [i_0] [i_0]))));
                    }
                    var_26 = ((!(((~(arr_11 [i_2] [i_1] [i_2] [12]))))));
                    var_27 *= (((((arr_2 [i_2]) ? (arr_2 [i_0]) : (arr_4 [i_0]))) != (((arr_4 [i_0]) << (((arr_8 [i_0] [i_1] [i_2] [i_2]) - 34))))));
                    var_28 = 664861208;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                {
                    arr_25 [i_0] [i_6 + 1] [i_6] = ((((arr_5 [i_0] [i_6] [15]) > 3)));
                    var_29 = ((((max(((((arr_5 [1] [i_6] [i_7]) == (arr_7 [13] [i_0] [i_6] [i_0])))), (min((arr_6 [i_0] [i_7] [i_7] [i_7]), var_3))))) <= 1783398245880141789));
                }
            }
        }

        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            var_30 = ((((arr_2 [i_0]) != (arr_2 [i_8]))));
            var_31 = (arr_21 [15] [i_8]);
        }
        for (int i_9 = 0; i_9 < 0;i_9 += 1)
        {
            var_32 = (min(var_32, (max((((arr_12 [i_0] [i_9 + 1] [i_0] [i_0] [i_9 + 1] [i_9] [i_9 + 1]) <= (arr_12 [i_0] [i_9 + 1] [i_9] [i_0] [i_0] [i_9] [0]))), (((arr_12 [i_0] [i_9 + 1] [i_0] [16] [i_0] [0] [1]) && (arr_12 [i_0] [i_9 + 1] [i_9 + 1] [i_9] [i_9] [i_9 + 1] [i_9])))))));
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 17;i_11 += 1)
                {
                    {

                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            var_33 = ((((arr_31 [i_9 + 1] [i_10 - 1] [i_11 + 2]) <= -181158169883165129)));
                            arr_37 [i_9] = var_8;
                            var_34 = ((-89 ? ((var_11 ? (arr_12 [i_9] [i_9] [i_10] [i_11] [i_12] [i_10] [i_10]) : (arr_18 [i_0] [i_9] [i_0] [18]))) : (arr_34 [i_12] [i_9] [i_9] [i_0])));
                        }
                        var_35 = (max(var_35, var_16));
                    }
                }
            }
            arr_38 [i_9] [i_0] [i_0] = (arr_4 [i_9]);
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 19;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 17;i_14 += 1)
                {
                    {
                        var_36 = (arr_30 [15] [i_9 + 1] [i_14]);
                        arr_44 [i_9] = (arr_31 [i_0] [17] [i_13]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 19;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 19;i_16 += 1)
            {
                {
                    arr_49 [i_15] [i_15] [i_15] [2] = ((-(arr_12 [i_15] [i_0] [i_0] [i_15] [i_0] [2] [i_16])));
                    var_37 *= (arr_33 [i_0] [i_15] [i_0] [i_16] [i_0]);
                    var_38 *= -127;
                }
            }
        }
    }
    for (int i_17 = 0; i_17 < 21;i_17 += 1)
    {

        /* vectorizable */
        for (int i_18 = 4; i_18 < 19;i_18 += 1)
        {
            var_39 = (arr_55 [i_17] [i_18 + 2] [i_18 + 2]);
            arr_56 [i_17] = -2147483630;
        }
        arr_57 [i_17] [i_17] = (((arr_51 [i_17]) < (((arr_51 [i_17]) ? 1783398245880141789 : (arr_51 [i_17])))));

        for (int i_19 = 3; i_19 < 20;i_19 += 1)
        {
            arr_60 [i_17] [i_17] = (~(arr_55 [i_17] [i_17] [1]));
            var_40 *= (((5643433372348266029 ? 3 : 88)));
        }
        arr_61 [i_17] [i_17] = (arr_59 [i_17] [i_17]);
    }
    for (int i_20 = 0; i_20 < 13;i_20 += 1)
    {
        arr_64 [i_20] [0] = -664861204;
        var_41 = (min(var_41, -89));
    }
    var_42 = (!127);

    /* vectorizable */
    for (int i_21 = 0; i_21 < 15;i_21 += 1)
    {
        var_43 = -1783398245880141790;
        var_44 = (arr_6 [i_21] [i_21] [i_21] [i_21]);
        arr_68 [i_21] = (arr_54 [12] [i_21] [12]);

        for (int i_22 = 1; i_22 < 13;i_22 += 1)
        {
            var_45 = (arr_5 [i_21] [16] [i_22]);
            var_46 = -5643433372348266038;
        }
    }
    /* vectorizable */
    for (int i_23 = 0; i_23 < 1;i_23 += 1)
    {
        var_47 = arr_58 [i_23];
        var_48 = (arr_58 [i_23]);
        var_49 *= (arr_59 [i_23] [i_23]);
        var_50 = (((arr_59 [i_23] [i_23]) ? var_11 : 26));
        var_51 = (arr_50 [10]);
    }
    #pragma endscop
}
