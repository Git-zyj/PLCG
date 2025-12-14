/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-((var_6 ? (~-975172152) : (!var_4)))));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (~(arr_0 [i_0 - 1]));
        var_16 = (max(var_16, (((((((min((arr_0 [i_0]), (arr_2 [i_0]))) ? (min(134217712, (arr_0 [i_0]))) : ((var_7 ? (arr_1 [i_0]) : var_3))))) ? var_4 : (arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] = ((-(((arr_4 [i_1]) & 1))));

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_17 -= (((((11 ? (arr_5 [i_1]) : (arr_5 [i_2])))) ? ((~(arr_5 [i_1]))) : ((((max(134217683, -8192))) ? -0 : ((min((arr_2 [1]), (arr_0 [17]))))))));
            arr_9 [i_1] [3] = ((-var_6 ? (arr_8 [0] [1]) : (arr_4 [2])));
            var_18 += (-((-(arr_7 [i_1] [1] [i_2]))));
        }
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = (min(((~((((arr_12 [i_3]) || var_3))))), ((min(247, 14)))));
        arr_15 [i_3] [8] = (min((max(var_5, ((237 ? (arr_0 [i_3]) : (arr_0 [i_3]))))), ((+((max((arr_12 [i_3]), (arr_0 [i_3]))))))));
        arr_16 [i_3] = -48;

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_19 *= (min((((-(arr_11 [i_3] [22])))), (((arr_17 [i_3]) ? ((196608 ? (arr_0 [i_3]) : -510992433121889842)) : (arr_2 [i_3])))));
            var_20 = (((arr_12 [i_3]) ? (((arr_0 [i_4]) ? (arr_0 [i_3]) : (arr_0 [i_3]))) : (min((arr_12 [i_3]), ((8200 ? var_1 : (arr_12 [i_3])))))));
        }
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            var_21 *= (arr_18 [i_5 + 1] [5] [1]);
            arr_23 [i_3] [i_3] [i_3] = (min((((arr_18 [i_5 + 1] [i_5 + 1] [i_5 + 1]) ? (arr_18 [i_5 + 1] [i_5 + 1] [i_5 + 1]) : (arr_18 [i_5 + 1] [i_5 + 1] [i_5 + 1]))), (arr_13 [i_3] [i_3])));
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 21;i_6 += 1) /* same iter space */
        {
            arr_28 [i_3] = arr_26 [i_6 + 2] [i_6 - 1];
            arr_29 [i_3] [i_3] = ((arr_13 [i_3] [i_3]) < 196608);
            arr_30 [i_6] [i_3] [i_3] = arr_17 [i_6 - 1];
            var_22 = (arr_27 [i_3] [i_6 + 1] [1]);
        }
        for (int i_7 = 1; i_7 < 21;i_7 += 1) /* same iter space */
        {
            arr_33 [i_3] = (((min(-var_10, ((-1 ? (arr_32 [15]) : (arr_32 [i_3])))))) != (134217707 + 11911838000288142482));

            /* vectorizable */
            for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
            {
                arr_37 [i_3] = (((arr_35 [i_8] [i_8 - 1] [i_7 + 2]) ? (arr_36 [i_3] [i_3] [i_8 - 1] [i_8]) : (arr_2 [i_8 - 1])));

                for (int i_9 = 1; i_9 < 20;i_9 += 1)
                {
                    var_23 = (arr_17 [i_8 - 1]);

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_44 [i_3] [15] [i_9 + 3] [8] = 1;
                        arr_45 [i_3] [9] [i_8] [i_7] [i_3] = ((~(arr_13 [i_3] [i_7 - 1])));
                        var_24 = ((!(arr_24 [i_7 + 1] [i_7] [i_3])));
                    }
                    arr_46 [i_3] [i_7] [i_7] [i_3] = ((~(arr_27 [i_3] [i_7 - 1] [i_3])));

                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        arr_50 [i_3] = (arr_17 [i_7 - 1]);
                        arr_51 [2] [0] [i_7] [i_8] [10] [i_9 + 1] [i_3] = (((arr_34 [0] [10] [i_7 + 1] [i_3]) + (arr_10 [i_7 + 1])));
                        arr_52 [i_3] [8] [1] [0] [i_3] = (((arr_38 [i_3] [i_9 + 2]) / (arr_38 [i_3] [i_9 + 1])));
                    }
                    for (int i_12 = 2; i_12 < 21;i_12 += 1)
                    {
                        var_25 += (67 || var_2);
                        arr_56 [2] [22] [i_8] [i_9 - 1] [20] |= ((var_8 ? (arr_17 [i_12 + 1]) : ((-(arr_2 [17])))));
                    }
                }
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    arr_60 [i_3] = ((+(((arr_34 [i_3] [i_7] [i_8] [i_3]) ? 4525127797780955043 : 62486))));
                    var_26 = (((~1) ? (((1489441672 ? var_0 : 6201))) : (arr_22 [i_3] [i_13])));
                    arr_61 [i_3] [16] [i_8] [i_13] [i_13] = var_12;
                    arr_62 [i_3] = (arr_47 [i_7] [i_7] [i_8] [i_3] [i_8]);
                }
            }
            for (int i_14 = 1; i_14 < 1;i_14 += 1) /* same iter space */
            {
                var_27 = -4;
                var_28 *= ((-((~(arr_64 [18])))));
            }
            /* vectorizable */
            for (int i_15 = 2; i_15 < 22;i_15 += 1)
            {
                arr_67 [i_3] [21] [i_3] [i_15 - 1] = (((arr_26 [i_7] [i_7 + 2]) ? (arr_55 [i_7] [i_7 + 2] [i_3] [i_7 + 2] [i_7 + 1] [i_7]) : (arr_26 [i_7] [i_7 + 2])));

                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    arr_71 [i_15] [i_16] [21] [i_16] [i_3] = var_8;
                    var_29 += (((arr_63 [i_7 - 1] [i_7 - 1]) ? (arr_63 [i_7 + 1] [i_7 + 2]) : (arr_63 [i_7 - 1] [i_7 + 2])));
                }
                var_30 += (((arr_35 [i_7 - 1] [i_15 - 2] [i_7]) ? (arr_54 [i_7 + 1] [i_15 + 1] [8] [i_7]) : (arr_35 [i_7 + 2] [i_15 - 2] [i_3])));
            }
        }
    }
    var_31 ^= -var_0;
    var_32 = -var_3;
    var_33 = (max(var_13, ((~(min(var_7, var_14))))));
    #pragma endscop
}
