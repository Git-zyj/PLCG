/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_13 & var_0) ? (((~(max(var_8, var_5))))) : ((~(~var_2)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((((((max(var_0, var_10))) ? var_1 : var_13)) << ((((~((var_10 ? (arr_1 [i_0] [i_0]) : var_5)))) + 46135))));
        arr_3 [i_0] = ((((min((arr_1 [i_0] [i_0]), var_4))) ? (((arr_1 [i_0] [i_0]) ? var_4 : var_14)) : (min(var_7, var_9))));
        var_19 = ((!((((arr_1 [i_0] [i_0]) / (arr_1 [i_0] [i_0]))))));
        arr_4 [i_0] = (((var_5 <= var_11) ? (arr_0 [i_0]) : (!var_16)));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_20 &= (((var_3 >= (arr_5 [i_1]))));
        var_21 = var_10;
        var_22 = (~var_17);

        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_23 = ((((arr_7 [i_1]) * (((arr_8 [i_1] [i_2] [i_1]) ? (arr_1 [5] [i_2]) : var_6)))));
            var_24 += (((arr_6 [i_1] [i_2]) ? (((arr_5 [i_1]) ? (arr_8 [i_1] [i_1] [i_2]) : (arr_5 [i_1]))) : (arr_5 [i_1])));
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {
            var_25 -= ((((((arr_5 [i_1]) / var_8))) | var_3));

            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                var_26 *= (max((((arr_10 [i_1] [i_1]) ? (min(var_17, var_4)) : var_10)), (arr_11 [i_1] [i_1])));
                var_27 *= ((-((max(var_0, (arr_8 [i_1] [i_3] [i_4]))))));
            }
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
        {
            arr_17 [i_1] = (arr_9 [i_1]);
            var_28 = ((~(!var_9)));
        }
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
    {
        arr_20 [i_6] = (((((((var_0 ? var_13 : (arr_15 [i_6]))) + (max(var_15, var_7))))) ? (arr_5 [i_6]) : ((var_16 - (arr_18 [i_6])))));

        for (int i_7 = 1; i_7 < 12;i_7 += 1)
        {
            arr_23 [i_7] [i_6] [i_7] = ((!((!(!var_1)))));
            var_29 += (((((((((arr_5 [i_7]) ? var_0 : var_3))) ? var_3 : ((max(var_9, (arr_9 [i_6]))))))) ? var_9 : (max(var_10, (arr_0 [i_6])))));
            arr_24 [i_6] [i_7] [i_6] = ((((max((arr_22 [i_7 + 1]), ((var_10 ? (arr_13 [i_7]) : var_2))))) ? (!var_8) : (((!(var_14 % var_1))))));
            var_30 *= (((arr_16 [i_7 - 1]) - (((~(arr_10 [i_6] [i_7 - 1]))))));

            for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
            {
                var_31 = ((((min((arr_12 [i_6] [i_7] [i_7]), -var_10))) / ((var_8 & (arr_7 [i_7 + 1])))));
                var_32 = (arr_22 [i_7 + 1]);
            }
            for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
            {
                var_33 -= ((-var_6 & (((~(((arr_28 [i_6] [i_6] [i_7] [i_9]) + var_4)))))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 10;i_11 += 1)
                    {
                        {
                            var_34 |= (max(var_6, (max((((-(arr_19 [i_9] [i_10])))), ((var_8 ? (arr_26 [i_6] [i_10] [i_6] [i_6]) : var_14))))));
                            var_35 |= (~((min((arr_33 [i_7 - 1] [i_10] [i_9] [i_11 - 2]), (arr_11 [i_10] [i_7 - 1])))));
                            var_36 = var_16;
                        }
                    }
                }
            }
            for (int i_12 = 4; i_12 < 11;i_12 += 1)
            {
                var_37 = ((~(max((~var_5), (~var_9)))));
                var_38 = (((((min((arr_21 [i_12] [i_7] [i_12]), (arr_21 [i_12] [i_7] [i_7]))))) >= var_9));
                arr_39 [i_6] [i_7] [i_7] [i_7] = ((-(((~var_2) ? var_13 : var_11))));
                var_39 = (arr_18 [i_6]);
            }
            for (int i_13 = 1; i_13 < 9;i_13 += 1)
            {
                var_40 *= (((((arr_35 [i_6] [i_7 + 1] [i_13 + 2] [i_13] [10]) ? (arr_35 [i_6] [i_7 + 1] [i_13 + 4] [5] [i_6]) : (arr_35 [1] [i_7 + 1] [i_13 + 3] [i_13 + 4] [i_6]))) >> (((arr_35 [i_6] [i_7 - 1] [i_13 + 3] [i_6] [i_13]) - 155))));
                var_41 = (min(((((((var_7 ? var_16 : var_5))) != var_14))), ((var_8 % (min((arr_15 [i_6]), (arr_30 [i_13] [i_13 + 3] [i_13] [i_13])))))));
                arr_42 [i_6] [i_7] [i_6] = ((((var_6 ? (~var_17) : (arr_10 [i_6] [i_6]))) >= ((((var_5 == (((var_12 ? (arr_31 [i_6] [i_7] [i_6]) : var_1)))))))));
            }
        }
        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            var_42 = ((((min((arr_26 [i_6] [i_6] [i_6] [i_14]), (max((arr_28 [i_6] [i_6] [i_6] [i_14]), (arr_31 [i_6] [i_6] [i_6])))))) ? ((((((min(var_17, var_6))) || var_13)))) : ((min(var_11, (arr_38 [i_6] [i_6] [i_6]))))));
            var_43 = (((arr_32 [i_6] [i_6] [i_14]) ? (!var_4) : (((((arr_29 [i_14] [i_14] [i_14]) - var_0))))));
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            var_44 += (+((var_17 ? (arr_43 [i_6] [i_15] [i_15]) : var_1)));
            var_45 &= ((var_13 ? (arr_12 [i_6] [i_6] [i_6]) : (arr_1 [i_6] [i_15])));
        }
        var_46 = (max((arr_1 [i_6] [i_6]), (((((arr_37 [i_6] [i_6] [i_6] [i_6]) ^ (arr_43 [i_6] [i_6] [i_6]))) / var_16))));
        var_47 *= ((((((arr_33 [i_6] [i_6] [i_6] [i_6]) ? ((var_13 ? var_2 : var_15)) : (arr_35 [i_6] [i_6] [i_6] [i_6] [i_6])))) ? (max(var_11, ((min((arr_8 [i_6] [i_6] [i_6]), var_5))))) : (arr_18 [i_6])));
        var_48 -= var_4;
    }
    #pragma endscop
}
