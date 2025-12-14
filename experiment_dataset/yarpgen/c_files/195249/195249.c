/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] = var_11;
            var_13 -= ((((-(0 * var_0))) * ((~(arr_1 [i_1])))));
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_9 [i_0] [i_2] = (max((((arr_4 [i_2]) | (arr_4 [i_2]))), (((!(arr_5 [i_0] [i_0] [i_2]))))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_14 -= (max(-var_7, var_10));
                            var_15 |= (((((((!(arr_2 [i_3])))) > var_4)) ? (((((((-(arr_7 [i_2])))) || (~var_12))))) : (((~var_7) ? (min(1, var_11)) : (((min(203, var_12))))))));
                            var_16 = 1;
                            var_17 = ((((min(var_5, (((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_11 : (arr_5 [i_2] [i_2] [i_2])))))) ? 0 : ((var_6 ? (5 | var_11) : (arr_15 [i_0] [i_0] [i_4])))));
                        }
                    }
                }
            }

            /* vectorizable */
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                var_18 = -var_4;
                var_19 = ((112 ? -1 : (((56 >= (arr_11 [i_0]))))));
            }
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                var_20 = (arr_14 [i_0] [i_2] [i_2] [i_2] [i_2] [i_7]);
                var_21 = (max(var_21, 50797));
            }
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                arr_27 [i_8] = ((-1896463504731735358 && ((max((arr_18 [i_8] [i_8]), var_11)))));
                arr_28 [16] |= (min((!var_2), ((-((var_0 ? var_7 : var_6))))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        {
                            arr_37 [i_0] [6] [i_0] [i_0] |= ((+((((((arr_19 [i_0] [i_2] [i_8] [4]) >> (var_1 - 52574)))) ? 40531 : ((var_1 ? -107 : var_4))))));
                            arr_38 [i_0] [i_8] [i_0] [i_9] [i_10] = (((((!(arr_22 [i_0] [i_2] [i_8])))) << (!1)));
                        }
                    }
                }
                arr_39 [i_8] [i_8] [i_8] = (min(((max(var_9, (arr_4 [i_2])))), (((((arr_0 [i_0]) || (arr_23 [i_0] [i_0]))) ? (arr_13 [i_8] [i_8] [i_2] [i_0]) : (~var_11)))));
            }
            for (int i_11 = 2; i_11 < 20;i_11 += 1)
            {
                arr_44 [i_0] [i_0] [0] &= ((~(min(((max(var_4, var_10))), ((var_8 ? (arr_7 [i_0]) : var_7))))));
                var_22 += (((((-120 ? 441521917 : (~var_8)))) ? (((!((((arr_12 [i_0]) / var_10)))))) : (arr_22 [i_0] [i_0] [i_0])));
            }
            var_23 -= (min((((!((min(var_4, var_7)))))), (((((var_4 ? (arr_17 [i_0]) : (arr_2 [i_2])))) ? var_3 : (arr_42 [i_2] [i_0] [i_0])))));
        }
        var_24 = (max(var_24, ((((((((min(120, -120))) ? ((min(1, var_7))) : var_3))) ? (arr_33 [1] [i_0] [i_0] [i_0] [1]) : (((min(var_5, (arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
        var_25 = (min(var_25, ((((max(((var_2 << (arr_31 [i_0] [i_0] [i_0] [16] [i_0]))), ((min((arr_11 [i_0]), var_0))))) >> (((arr_36 [i_0] [i_0] [1] [i_0]) >> (((arr_43 [6] [6] [i_0]) - 57)))))))));
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
    {
        var_26 = (((max(1, 1)) > (((min(var_9, 1)) ? ((~(arr_30 [i_12]))) : (!var_10)))));
        arr_47 [i_12] = (max((min((((arr_34 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]) ? var_8 : (arr_43 [i_12] [i_12] [i_12]))), ((max(1, (arr_18 [i_12] [i_12])))))), (((max(var_4, var_11)) & (((~(arr_34 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]))))))));
        arr_48 [1] |= (arr_33 [i_12] [i_12] [i_12] [i_12] [2]);
        arr_49 [i_12] [i_12] = (max(((((max(var_9, (arr_5 [i_12] [i_12] [i_12])))) ? (min(1, 4640802157025963073)) : (((max(var_9, (arr_4 [i_12]))))))), ((min((max(1424848639, (arr_18 [i_12] [i_12]))), 15932)))));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
    {
        arr_52 [2] [i_13] &= var_11;
        arr_53 [i_13] [i_13] = (((var_5 | var_10) * var_9));
        arr_54 [12] &= (((arr_1 [i_13]) / (arr_19 [i_13] [i_13] [i_13] [1])));
        arr_55 [6] |= ((var_7 ? var_1 : (arr_36 [i_13] [i_13] [14] [i_13])));
    }
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        arr_58 [i_14] |= (((arr_14 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]) ? ((min((arr_35 [i_14] [i_14] [i_14] [i_14] [14]), var_0))) : (((1 && (arr_35 [i_14] [i_14] [i_14] [i_14] [1]))))));
        arr_59 [i_14] = (min(((var_12 ? var_1 : (arr_50 [i_14]))), ((((arr_57 [i_14]) >= (arr_57 [i_14]))))));

        for (int i_15 = 2; i_15 < 15;i_15 += 1) /* same iter space */
        {
            var_27 = (min(var_27, ((((((var_8 <= (arr_26 [i_15] [i_15] [i_15] [i_15])))) ? var_1 : (min((~var_12), (~-85))))))));
            var_28 &= (((arr_21 [i_14] [i_15 + 3] [i_15 + 3] [i_14]) ? ((max((arr_21 [i_14] [i_15 + 3] [i_14] [i_15]), (arr_21 [i_14] [i_15 - 1] [i_14] [i_15])))) : (((arr_21 [i_14] [i_15 + 2] [i_15] [i_15]) ? (arr_21 [i_14] [i_15 - 2] [i_14] [i_15]) : var_2))));
        }
        for (int i_16 = 2; i_16 < 15;i_16 += 1) /* same iter space */
        {
            var_29 += (min(((-((0 ? var_7 : 6298)))), (((((arr_26 [i_16] [i_16] [i_16] [i_16]) ? 84 : (arr_31 [i_14] [i_14] [i_14] [i_16] [i_14])))))));
            arr_66 [i_16 - 1] [i_14] = ((~(arr_51 [i_14] [i_16])));
        }
        for (int i_17 = 2; i_17 < 15;i_17 += 1) /* same iter space */
        {
            arr_69 [i_14] [i_17] = ((((((~(((arr_5 [i_14] [i_14] [i_14]) ? var_1 : (arr_5 [i_14] [i_17] [i_17]))))) + 2147483647)) << ((((((59238 ? (arr_11 [i_17 + 2]) : (arr_12 [i_17 + 2]))) + 102)) - 2))));
            var_30 = (max(var_30, ((!(((((min(1, (arr_63 [i_14] [i_14] [i_14])))) ? (arr_4 [i_17]) : var_0)))))));
        }
    }
    var_31 |= ((((((var_5 ? var_7 : 1)) - (-15 <= 46912))) + (((var_4 != ((min(var_3, var_2))))))));
    #pragma endscop
}
