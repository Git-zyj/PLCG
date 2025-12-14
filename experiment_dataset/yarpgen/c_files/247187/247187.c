/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_18 = ((var_1 % (((!(0 * -1657))))));
            arr_4 [i_0] [i_1] = (max(((-224 % (max(var_17, (arr_2 [i_0] [i_0]))))), ((((arr_1 [i_0]) ? var_17 : var_9)))));
        }

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_19 = (max(var_19, (-224 * 244)));
            arr_8 [i_0] [2] [i_2] = (8864482076001428699 >= 225);
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 4; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 10;i_5 += 1)
                {
                    {
                        var_20 = ((((max((max(3339021384322087353, 4294967277)), ((max(var_5, 157)))))) ? (((arr_6 [i_0]) | ((1 ? (arr_10 [i_0] [i_0]) : (arr_2 [i_5] [i_0]))))) : (((min(-1684, (arr_7 [i_0])))))));
                        var_21 = ((((~(arr_11 [i_0]))) | (((arr_11 [i_0]) | (((1 ? var_16 : var_16)))))));
                        arr_16 [i_0] = (max(-8393470599522290705, 1));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_22 = var_0;
                        var_23 = ((((((var_13 ? var_15 : var_15)))) ? (max((((12 >> (((arr_18 [i_0] [i_0] [i_6] [i_3]) - 17674159827682316125))))), (max(var_8, 4974692875851242424)))) : ((max(3163193552, (arr_10 [i_0] [i_0]))))));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 0;i_8 += 1)
    {
        arr_26 [i_8 + 1] = ((1 / (max(-15, (arr_2 [i_8] [i_8 + 1])))));
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 9;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                {
                    var_24 |= -var_7;
                    var_25 = (((var_6 ? ((min(var_6, (arr_28 [i_9]))) : (max(4467570830351532032, (arr_22 [0] [i_9] [i_9] [i_10])))))));
                }
            }
        }
        arr_34 [i_8] [i_8] = (((((1984 / var_7) && ((max(24, 18446744073709551590))))) ? (max((!18446744073709551611), (min(var_6, (arr_31 [i_8 + 1] [i_8 + 1]))))) : (((arr_7 [0]) ? (arr_7 [0]) : var_6))));
    }
    for (int i_11 = 1; i_11 < 14;i_11 += 1)
    {

        for (int i_12 = 1; i_12 < 14;i_12 += 1) /* same iter space */
        {

            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                var_26 = var_1;
                arr_44 [i_11] [i_12] = ((-(max((1 % -3339021384322087353), 1))));
                var_27 = (max(var_27, var_5));
            }
            var_28 = (max(var_28, ((!(((arr_37 [i_12 - 1] [i_12]) >= (arr_37 [i_12 + 1] [i_12 + 1])))))));
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 15;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 15;i_16 += 1)
                    {
                        {
                            arr_53 [i_11] [i_11 - 1] [i_12] [9] [i_11] = ((+(((arr_46 [i_11 - 1]) % var_5))));
                            arr_54 [i_15] [i_12] [i_14] [i_15] [i_12] = (min((arr_41 [i_12] [i_11 + 1] [i_12]), (arr_41 [i_12] [i_11 - 1] [i_12])));
                        }
                    }
                }
            }
        }
        for (int i_17 = 1; i_17 < 14;i_17 += 1) /* same iter space */
        {
            var_29 = (min(var_29, (arr_36 [i_17])));
            var_30 = (min(var_30, (((-(max((!var_9), (((arr_57 [4]) & 224)))))))));
        }
        /* vectorizable */
        for (int i_18 = 1; i_18 < 14;i_18 += 1) /* same iter space */
        {
            var_31 = (arr_61 [i_18] [1] [i_11 + 1]);
            var_32 = (min(var_32, (((var_2 ? (arr_45 [14] [i_18]) : (arr_39 [0]))))));
        }
        var_33 = ((((max(6, 1))) ? var_5 : var_9));
    }
    var_34 = (max(1023, (var_2 & -var_3)));
    var_35 -= var_7;
    /* LoopNest 3 */
    for (int i_19 = 0; i_19 < 15;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 1;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 1;i_21 += 1)
            {
                {
                    arr_70 [i_19] [i_19] [i_19] [i_19] = (((((((min(var_5, var_14))) ? (arr_46 [i_20]) : (max(9, 15818754066576509936))))) ? 11 : (((!(arr_63 [i_19]))))));

                    /* vectorizable */
                    for (int i_22 = 1; i_22 < 12;i_22 += 1)
                    {
                        var_36 = (~9223372036854775807);
                        var_37 = ((-var_11 | (((arr_51 [i_19] [i_19] [i_21] [i_19] [i_19]) ? var_7 : var_5))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
