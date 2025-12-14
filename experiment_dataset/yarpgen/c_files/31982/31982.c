/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 ^= ((((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_0 [i_0])))) ? (((((arr_2 [i_0]) >= var_5)))) : ((~(arr_2 [i_0])))));

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] [i_1] = ((min((arr_0 [i_1]), ((max((arr_3 [10]), 15338))))));
            arr_7 [i_1] [i_1] = ((~(((var_4 * 12) ? var_9 : ((min((arr_0 [i_0]), (arr_1 [i_0]))))))));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_16 = ((-(((arr_2 [i_0]) + ((min((arr_9 [i_0] [i_2]), (arr_1 [i_0]))))))));
            var_17 -= ((((-(!-3))) ^ ((min(243, 117)))));
            arr_10 [i_0] [i_2] [i_0] = (12 * -12);
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
            {
                arr_17 [i_0] [i_0] [i_0] [i_3] = (min((max(15, -11)), (8883 && var_7)));
                arr_18 [6] [i_3] [i_3] [i_0] = (max(((((!(arr_11 [6] [i_3] [i_4]))) ? (arr_5 [i_3] [i_3]) : (arr_8 [i_0] [i_3]))), (arr_5 [i_3] [i_3])));
            }
            for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
            {
                arr_21 [i_3] = ((-((-13677 ? 1 : -1))));
                var_18 += var_7;
                arr_22 [9] [i_3] [9] [i_5] = (min(((~((-822 ? 32768 : var_8)))), ((((arr_1 [i_0]) % (arr_12 [i_0] [i_3] [i_5]))))));
            }
            var_19 |= (((var_12 ? (arr_11 [i_0] [i_3] [3]) : (arr_11 [i_0] [i_3] [i_3]))));
            var_20 = ((((((arr_16 [i_0] [i_3] [i_3]) + (((arr_2 [i_3]) + var_6))))) + (min((arr_13 [0] [i_3] [8] [0]), (var_5 - var_14)))));
            var_21 = (min(var_21, (((((((!(arr_0 [i_0]))) ? (var_7 < 1) : (((((arr_16 [i_0] [10] [i_3]) + 2147483647)) << (((var_8 + 4331483579496249196) - 17)))))) << (((((((32213 ? -4531 : 0)) >= -32201))) - 1)))))));
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {
            arr_25 [i_6] = (!-1602);
            arr_26 [i_6] = ((+(((3688322130 & 1) << (((arr_0 [i_0]) - 49500))))));

            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                arr_29 [i_0] [i_0] [i_6] = ((((max((arr_14 [i_0] [i_0] [i_6] [9]), ((8192 ? 35805 : 8192))))) ? ((((max(173, (arr_9 [i_0] [i_0])))) | ((((arr_15 [i_6] [i_7]) >= 541256710774103762))))) : ((min(-1601, 252)))));
                arr_30 [i_0] [1] [i_6] [i_6] = ((+((max((arr_19 [i_0] [i_6] [i_6] [i_7]), (arr_19 [i_7] [i_6] [i_0] [i_0]))))));
                var_22 = (~-1602);
            }
            for (int i_8 = 1; i_8 < 9;i_8 += 1)
            {
                arr_34 [i_6] = ((((((0 ? (-2147483647 - 1) : 65535)))) ? ((((min(var_1, var_5))) ? ((max((arr_1 [i_0]), var_10))) : 9062256727099442452)) : (((!(var_14 & var_11))))));
                arr_35 [i_6] [i_6] [i_8 + 1] = ((((((arr_12 [i_8 - 1] [i_6] [i_8 - 1]) ? var_9 : (arr_16 [i_8 + 2] [i_6] [0])))) ? var_8 : ((((((arr_33 [i_8] [i_6] [i_6] [i_0]) && (arr_1 [i_0]))))))));
                arr_36 [9] [9] [9] [i_6] = (((((var_14 ^ (arr_27 [i_8])))) - (((((0 ? 1 : var_14)))))));
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_23 = (!var_7);
                var_24 = ((!((((arr_16 [4] [0] [i_9]) + (arr_5 [i_6] [3]))))));
                arr_39 [7] [7] [i_9] [i_6] = ((254 || (arr_2 [i_9])));
                arr_40 [i_6] [i_6] [i_6] = 108;
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                arr_43 [i_6] [i_6] [i_0] [i_6] = ((!(((-1243503363 ? 57344 : var_6)))));
                arr_44 [i_10] [i_6] [i_0] = (((arr_1 [i_0]) >= (arr_41 [i_0] [i_6] [i_10])));
            }
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        {
                            var_25 = -1;
                            arr_52 [i_0] [i_6] [i_11] [i_6] [1] [i_6] = var_0;
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 24;i_14 += 1) /* same iter space */
    {
        arr_56 [1] [i_14] = (((arr_54 [i_14] [i_14]) ? (arr_55 [i_14]) : (arr_55 [i_14])));
        var_26 ^= ((!((((arr_53 [i_14]) << (var_5 - 537025081))))));
        var_27 *= 31;
    }
    for (int i_15 = 0; i_15 < 24;i_15 += 1) /* same iter space */
    {
        arr_59 [i_15] = (((1614514438 || (-2147483647 - 1))) || (((((-9223372036854775807 - 1) && var_13)) && ((((arr_58 [i_15]) ? (arr_54 [i_15] [i_15]) : var_11))))));
        arr_60 [i_15] = (min((~8775010172391159835), (var_8 >= var_1)));
    }
    var_28 = (((var_7 < var_11) ? ((max(((var_0 ? var_11 : var_13)), (var_12 || var_13)))) : (max((var_1 + var_7), 2834574373))));

    /* vectorizable */
    for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
    {
        var_29 = (var_0 && -9223372036854775804);
        arr_65 [i_16] [i_16] = ((!(((arr_57 [i_16]) || (arr_55 [i_16])))));
        var_30 = ((~((var_8 ? var_2 : (arr_55 [i_16])))));
    }
    for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
    {
        arr_69 [i_17] = ((((((!(arr_58 [i_17]))))) ^ ((max((arr_55 [i_17]), -107)))));
        var_31 = (((var_7 ? var_7 : (arr_57 [i_17]))));
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
    {
        var_32 = (((!(-2147483647 - 1))));
        var_33 = ((!(var_5 || 249)));
        var_34 += (~var_7);
        var_35 = (arr_68 [0] [i_18]);
    }
    #pragma endscop
}
