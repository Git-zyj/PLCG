/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min(((min(3844, (arr_0 [i_0 - 1] [i_0 - 1])))), ((((var_11 ? 170 : var_9)) * (arr_0 [i_0 + 3] [i_0 - 1])))));
        var_15 = arr_0 [i_0 + 3] [i_0];
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            arr_9 [i_1] [i_2 - 2] [i_2 + 3] = ((0 || ((-1 && (arr_6 [i_1])))));

            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                var_16 *= var_4;
                arr_12 [i_1] [i_3] [i_3] = (((arr_7 [i_1] [i_2] [i_3]) ? ((85 ? (arr_10 [i_1] [i_2] [i_3 + 1]) : (arr_8 [i_1] [i_2] [i_3]))) : (((arr_8 [i_1] [i_2] [i_3]) * 70))));
            }
            for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
            {

                for (int i_5 = 3; i_5 < 20;i_5 += 1)
                {
                    arr_19 [i_1] [i_5] [i_1] [i_1] = (((arr_17 [i_1] [i_1] [i_1 - 1] [i_1 + 1]) ? (arr_17 [i_1] [i_1] [i_1] [i_1 + 1]) : 197));

                    for (int i_6 = 4; i_6 < 18;i_6 += 1)
                    {
                        var_17 = (max(var_17, ((((arr_16 [i_2 + 2] [i_5 + 1]) << (((arr_11 [i_2 + 2] [i_5 - 2] [i_6 + 1] [i_1 - 1]) - 998967587)))))));
                        arr_22 [i_6] [i_5] [i_4] [i_5] [i_1] = (((arr_5 [i_6 - 1] [i_5 + 1]) ^ (arr_5 [i_6 - 2] [i_5 + 1])));
                        var_18 = ((var_2 ? var_10 : -22546));
                    }
                    var_19 = (max(var_19, (((~(arr_17 [i_2 + 3] [i_2 - 1] [i_2] [i_2 - 1]))))));

                    for (int i_7 = 4; i_7 < 18;i_7 += 1)
                    {
                        var_20 = (max(var_20, 3741441658));
                        var_21 = var_7;
                    }
                    for (int i_8 = 3; i_8 < 19;i_8 += 1) /* same iter space */
                    {
                        var_22 = (max(var_22, (((arr_23 [i_5 - 2] [i_2 + 1] [i_1 + 1]) ? (((var_0 < (arr_27 [i_1 + 1] [i_2] [i_4] [i_4] [i_4] [i_5] [i_8 + 2])))) : (arr_20 [i_8 - 1] [i_8] [i_8] [i_8] [i_8 + 1] [i_8])))));
                        var_23 = (max(var_23, 85));
                        var_24 *= (((arr_23 [i_1] [i_2 - 1] [i_4]) ? (arr_18 [i_1 - 1] [i_4]) : 4983639132122203754));
                    }
                    for (int i_9 = 3; i_9 < 19;i_9 += 1) /* same iter space */
                    {
                        arr_31 [i_5] [i_2] [i_2] [i_2] [i_2] = arr_4 [i_1];
                        arr_32 [i_9] [i_4] [i_4] [i_4] [i_1] |= (((arr_8 [i_1 + 1] [i_1 - 1] [i_1]) ? (arr_11 [i_1] [i_2 + 3] [i_4] [i_5 + 1]) : (!201)));
                    }
                    var_25 ^= var_1;
                }
                var_26 += ((var_1 ? ((((arr_13 [i_1] [i_1] [i_1]) >= 211))) : ((var_1 ? 205 : (arr_6 [i_1])))));
            }
            for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
            {
                arr_37 [i_2] [i_1] = var_5;
                var_27 *= var_2;
            }
            for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
            {
                var_28 = (((arr_18 [i_1 - 1] [i_1 + 1]) ? (arr_18 [i_1 - 1] [i_2 + 1]) : 609));
                arr_40 [i_1] = (~var_12);
            }
        }
        /* vectorizable */
        for (int i_12 = 4; i_12 < 20;i_12 += 1)
        {
            var_29 -= ((arr_20 [i_12 - 2] [i_12] [i_1] [i_1 + 1] [i_1 - 1] [i_1]) << (((arr_20 [i_1] [i_12] [i_1] [i_1 + 1] [i_12] [i_12 - 1]) - 5014)));
            arr_43 [i_1] |= ((201 ? (arr_6 [i_12 - 4]) : var_13));
            arr_44 [i_1 + 1] = ((5 ? ((0 ? var_10 : var_11)) : (arr_3 [i_1 - 1])));
            var_30 |= arr_14 [i_1 - 1] [i_12 + 1] [i_12];
        }
        var_31 = (((arr_39 [i_1 - 1] [i_1 - 1]) ? -23 : (arr_25 [i_1 + 1] [i_1 + 1])));
    }
    for (int i_13 = 1; i_13 < 20;i_13 += 1) /* same iter space */
    {
        var_32 = ((((((arr_28 [i_13 + 1] [i_13] [i_13 - 1] [i_13] [i_13]) < (arr_33 [i_13 - 1] [i_13] [i_13 + 1] [i_13 + 1])))) << 0));
        arr_48 [i_13] = (+(((arr_24 [i_13] [i_13 + 1] [i_13] [i_13] [i_13] [i_13] [i_13]) ? ((961725192 ? var_8 : 98)) : var_10)));
        arr_49 [i_13] = ((((((arr_8 [i_13 + 1] [i_13] [i_13 + 1]) >= 2450333607))) & ((((0 | var_6) == ((((arr_4 [i_13]) ? 147 : 60))))))));
        var_33 = (min(var_33, (((~(arr_36 [i_13] [i_13 - 1] [i_13]))))));
    }
    #pragma endscop
}
