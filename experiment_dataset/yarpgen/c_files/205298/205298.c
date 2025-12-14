/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((1704406062 ^ (arr_1 [i_0])));
        var_21 = (min(var_21, 1704406067));
        var_22 = ((((4294967295 >= (arr_0 [i_0] [i_0]))) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])));
        var_23 = var_14;
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (125 - (arr_6 [i_1] [1]));
        arr_9 [i_1] [i_1] = ((~(arr_4 [i_1])));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_24 |= (!var_8);
        var_25 = (((((15069 ? 89 : (arr_4 [i_2])))) ? (((!(arr_6 [i_2] [i_2])))) : (((!(arr_7 [i_2]))))));

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                arr_17 [i_2] [i_3] [i_4] [i_3] = ((-1704406057 && ((((arr_13 [i_4]) << (((arr_16 [i_4]) + 1011574763)))))));
                arr_18 [i_2] [i_2] [i_2] = var_14;
                arr_19 [i_2] [i_3] [i_3] = ((var_7 & (arr_12 [i_4] [i_3] [1])));
            }
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                var_26 = ((+((~(((arr_5 [i_5]) % var_11))))));

                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    var_27 = (~var_18);
                    var_28 = (max(var_28, 34874));
                }
                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    var_29 = (max((((!(arr_23 [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_7 + 1])))), (arr_25 [i_7 - 1] [i_7] [i_7 + 1] [i_7 - 1] [i_7])));
                    arr_27 [i_7 + 3] [i_5] [13] = (((((arr_26 [i_7 + 2] [i_7 + 1] [i_7]) + (arr_26 [i_7 + 1] [i_7 + 3] [i_7 + 1])))) & 6761444830240526980);
                    var_30 |= (arr_24 [i_7] [i_7 + 3] [i_7 - 1] [i_7 + 2]);
                    arr_28 [i_2] [i_3] [i_3] [i_3] = (max((((min(var_4, -5692)))), (arr_25 [i_7 + 1] [i_7 + 1] [i_7] [i_7] [i_7])));
                }
                for (int i_8 = 2; i_8 < 21;i_8 += 1)
                {
                    var_31 = ((-(((!(~var_2))))));
                    var_32 = (min(var_32, (arr_12 [i_2] [i_2] [i_2])));
                    arr_32 [i_2] [i_2] = max(140737488355327, ((min((arr_25 [i_8 - 1] [i_8] [i_8 - 2] [i_8 - 2] [i_8 - 2]), 63))));
                    arr_33 [1] [9] = ((+((1517519685246162316 ? (arr_22 [10] [i_8 - 2] [i_8 - 2] [i_3]) : ((max((arr_15 [i_5] [i_5] [i_5]), (arr_23 [19] [i_3] [i_5] [i_8 - 1]))))))));
                    var_33 += (arr_11 [i_2] [18]);
                }
            }

            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                arr_37 [i_2] [i_3] [i_9] = (((12209 & 7612) >> ((((-(arr_26 [i_9] [i_3] [i_2]))) - 12231))));
                var_34 = (min(var_34, ((min(2147483647, (((15168 && (((var_18 ? 666828195 : (arr_14 [i_3] [i_3] [i_3] [i_3]))))))))))));
            }
            /* vectorizable */
            for (int i_10 = 1; i_10 < 19;i_10 += 1) /* same iter space */
            {
                arr_40 [i_3] [i_10] [1] = (arr_20 [i_2] [i_2] [i_2]);
                var_35 = (min(var_35, (arr_15 [i_10 + 1] [i_10 + 3] [i_10 - 1])));
                arr_41 [i_2] [i_10] [i_10] [i_10 + 2] = ((-(arr_16 [i_10 - 1])));
            }
            /* vectorizable */
            for (int i_11 = 1; i_11 < 19;i_11 += 1) /* same iter space */
            {
                arr_44 [i_2] [i_2] [i_11 + 2] = (((arr_43 [i_11 - 1] [i_11 - 1]) ? 32441 : ((~(arr_36 [i_2])))));
                var_36 |= (arr_13 [11]);
            }
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
        {
            arr_47 [i_2] [i_12] = -6;
            var_37 = (min(var_37, (arr_26 [i_2] [i_2] [i_12])));
            arr_48 [i_2] |= ((!(arr_39 [i_2])));
        }
        for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
        {
            arr_52 [i_2] [i_13] [i_2] |= (((arr_26 [2] [2] [8]) ? ((min((arr_26 [i_2] [i_2] [5]), (arr_26 [i_13] [i_13] [i_2])))) : (arr_26 [i_2] [i_2] [18])));
            arr_53 [i_2] [i_13] = ((((!(((15492148854705534197 ? (arr_16 [i_2]) : (arr_5 [i_2])))))) ? (arr_7 [i_2]) : (((((arr_25 [i_13] [i_13] [i_13] [i_2] [i_13]) >= -37))))));
        }
        /* vectorizable */
        for (int i_14 = 1; i_14 < 21;i_14 += 1)
        {
            var_38 = (((arr_38 [i_2] [i_14] [i_14]) % (~var_0)));
            arr_56 [i_2] |= (arr_13 [i_14]);
            var_39 = (max(var_39, (((-((-24623 - (arr_24 [i_2] [i_14 + 1] [i_14 + 1] [i_14 + 1]))))))));
            var_40 = ((-(arr_30 [i_14 - 1] [4])));
            arr_57 [i_14] = 1211101958;
        }
        arr_58 [i_2] = var_0;
    }
    #pragma endscop
}
