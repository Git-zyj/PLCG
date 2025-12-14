/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((max(((2779566479 ? 92533074 : (max(var_11, var_18)))), ((max(532217321, 36526))))))));
    var_20 |= ((max(0, var_11)));
    var_21 = (~44);

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((9192 ? 91 : 750583358)) * ((((((var_7 ? (arr_2 [0]) : var_11))) ? (arr_2 [i_0]) : ((91 ? 9 : -92))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_22 |= (arr_6 [i_2] [i_2] [i_2 - 1]);
                    arr_8 [i_1] [i_0] = (((max(((-1915207146 ? var_12 : var_16)), (arr_2 [i_2]))) & (((max((arr_6 [i_1] [i_1] [i_2 - 1]), (arr_7 [i_2])))))));
                }
            }
        }

        for (int i_3 = 4; i_3 < 15;i_3 += 1) /* same iter space */
        {
            arr_12 [i_0] [i_3 - 3] = ((var_17 ? ((-(((arr_7 [i_0]) ? (arr_1 [i_3]) : 31216)))) : (~var_18)));
            var_23 = (max(var_23, ((max((var_14 <= var_18), (min((~var_3), (arr_0 [i_0] [i_3]))))))));
        }
        for (int i_4 = 4; i_4 < 15;i_4 += 1) /* same iter space */
        {
            arr_15 [i_0] [i_0] [1] = (((arr_10 [i_4] [i_4]) ? (arr_6 [i_4] [i_4 + 1] [i_4 + 1]) : ((max(var_12, (arr_14 [i_0] [i_0]))))));
            var_24 *= (((arr_10 [i_0] [i_4 - 1]) > (((var_12 <= var_15) ? var_10 : (((arr_7 [i_0]) ? (arr_9 [i_0]) : var_11))))));
            var_25 = (max(var_25, (((15610 ? -4 : 65)))));
            var_26 = ((((max((arr_0 [i_4 - 2] [i_4 - 4]), var_18))) & (((arr_10 [i_4 - 2] [i_4 - 4]) ? (arr_10 [i_4 + 1] [i_4 + 1]) : (arr_10 [i_4 - 2] [i_4 + 1])))));
        }
        var_27 = (min(var_27, (arr_2 [i_0])));
    }
    for (int i_5 = 2; i_5 < 11;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] = (((((2779566479 ? -92 : 27475))) ? (~var_15) : (arr_9 [i_5])));
        arr_21 [i_5] = (34320 ? -92 : 86);
        var_28 |= ((((((((arr_18 [i_5 - 2] [i_5 - 2]) ? var_1 : (arr_13 [i_5])))) && ((max(var_4, (arr_7 [i_5])))))) ? var_10 : (~515)));
        var_29 = (((64 ? ((-1915207146 ? 26369 : 3217828851)) : (arr_16 [i_5 - 1]))));
    }
    for (int i_6 = 2; i_6 < 11;i_6 += 1) /* same iter space */
    {
        var_30 |= (((((-(max((arr_5 [i_6]), 39))))) ? (arr_6 [1] [i_6] [i_6]) : (((arr_25 [i_6]) ? 1 : 11988))));

        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
        {

            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                var_31 = 1;
                arr_34 [i_6 + 1] [i_6] = ((((max(((-(arr_18 [i_8] [i_6]))), (max((arr_11 [i_6] [i_7] [i_8]), (arr_25 [5])))))) ? (((var_12 <= ((max((arr_0 [i_7] [i_8]), (arr_17 [i_6]))))))) : ((~((var_9 ? var_4 : (arr_29 [i_6] [i_6] [5])))))));
                var_32 = ((~((-(((arr_19 [i_6]) ? var_17 : (arr_9 [i_6 - 1])))))));
            }
            /* vectorizable */
            for (int i_9 = 1; i_9 < 8;i_9 += 1)
            {

                for (int i_10 = 3; i_10 < 11;i_10 += 1)
                {
                    var_33 = (max(var_33, ((-(arr_32 [i_6 - 1])))));
                    var_34 = ((-((0 ? 1066605447 : (arr_31 [i_6] [i_7] [i_6])))));
                    arr_41 [i_6] [i_7] [i_9] [i_10] = (arr_19 [i_6 - 1]);
                    var_35 = (min(var_35, ((~(arr_38 [i_9 + 2] [1] [i_9 + 1] [1])))));
                }
                arr_42 [i_6 - 1] = (arr_14 [i_7] [i_9]);
                arr_43 [i_7] [i_7] [i_9] = (((-6 > 17426) << (((~15610) + 15629))));
            }
            var_36 = ((1594886379 ? (arr_16 [i_6 - 1]) : ((-(((arr_37 [1] [2] [i_6] [i_6]) ? var_15 : (arr_14 [i_6 - 2] [i_7])))))));
            var_37 = min((max(92533074, 1594886378)), 1515400816);
            arr_44 [i_6] [i_7] = ((+((var_1 ? (arr_0 [i_6 - 2] [i_6 - 2]) : var_13))));
        }
        for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
        {
            var_38 -= (((((min((arr_40 [i_6] [i_6]), 1472)))) ? var_10 : (-526 < -5)));
            arr_47 [i_11] = min(((6202529825499903688 ? (var_0 >= var_17) : (arr_1 [i_6 + 1]))), ((((((arr_36 [i_11] [i_11] [i_11] [i_11]) ? var_12 : (arr_2 [i_11])))) ? (((arr_32 [i_6]) / 1927118628)) : (((-252565221 + 2147483647) >> (((arr_26 [11] [i_11]) - 1994576968)))))));
        }
        for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
        {
            arr_52 [i_6] [i_12] = var_11;
            arr_53 [i_12] [i_12] [i_12] = var_13;
        }
    }
    var_39 = var_15;
    #pragma endscop
}
