/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_21 = (((arr_1 [i_0]) >> (((~15) + 46))));
        var_22 = ((11 + (arr_1 [i_0])));
        arr_2 [i_0] = ((var_16 == (arr_1 [i_0 - 1])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_23 = (((arr_3 [i_1]) >> (225 - 219)));

        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 1; i_3 < 8;i_3 += 1)
            {

                for (int i_4 = 1; i_4 < 7;i_4 += 1) /* same iter space */
                {
                    var_24 = (min(var_24, (((((!(arr_13 [i_1] [i_1] [i_1] [i_4] [i_3 + 2] [i_3 + 2]))) ? ((((arr_6 [i_1]) >= (arr_1 [i_1])))) : -48)))));
                    var_25 ^= (arr_3 [2]);
                }
                for (int i_5 = 1; i_5 < 7;i_5 += 1) /* same iter space */
                {
                    var_26 = (arr_12 [i_5]);
                    var_27 *= ((((((arr_0 [i_1]) / (arr_0 [i_3])))) || (((472562971 << (3891540652424501314 - 3891540652424501313))))));
                }
                var_28 = var_16;
                var_29 = (((((!(arr_11 [i_1] [i_2] [i_3])))) - ((-(arr_1 [i_1])))));
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_30 = ((var_5 ? (arr_11 [i_1] [i_2] [10]) : (((!(arr_10 [i_1] [i_1] [i_6] [i_2]))))));
                var_31 ^= (!66);
            }
            for (int i_7 = 2; i_7 < 8;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    arr_23 [i_1] [i_2] [i_7] [i_8] = (arr_16 [i_7 + 1] [i_7] [9] [i_7]);
                    arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (--225);
                    var_32 *= arr_11 [i_1] [i_7 + 1] [i_7 + 1];
                    var_33 = ((~((-(arr_19 [3] [6])))));
                }
                for (int i_9 = 2; i_9 < 10;i_9 += 1)
                {
                    var_34 = (!25972);

                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        arr_31 [i_1] [i_2] [i_7] [i_1] [i_10 - 1] = var_13;
                        var_35 += ((-((122 ? 134 : 134))));
                    }
                    var_36 += ((((~(arr_18 [i_9]))) & (((arr_11 [i_1] [i_1] [i_7 + 3]) / (arr_25 [i_1] [i_2] [i_7 - 2] [7])))));
                }
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    var_37 = (arr_16 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1]);
                    var_38 ^= (0 + 0);

                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        var_39 |= (((-472562963 ? 225 : 0)));
                        var_40 = (!252);
                        var_41 = var_8;
                    }
                    for (int i_13 = 3; i_13 < 10;i_13 += 1)
                    {
                        var_42 = (max(var_42, ((((arr_33 [i_1] [i_13 + 1] [i_7 - 1] [i_2] [0]) == -62)))));
                        var_43 ^= ((((var_9 == (arr_3 [i_11]))) ? ((((arr_32 [i_11] [i_11]) ^ var_12))) : ((~(arr_12 [i_11])))));
                        var_44 ^= ((!((((arr_35 [i_1] [i_2] [i_7] [i_13 - 3] [7] [i_1]) ? var_16 : var_19)))));
                        var_45 = var_1;
                    }
                }
                arr_40 [i_1] [i_1] [i_1] [i_1] = var_3;
                var_46 = (min(var_46, ((((arr_28 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) / (arr_36 [i_2] [i_7 - 1] [i_7 + 3] [i_7 + 3] [i_7] [i_7 + 1] [i_2]))))));

                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    var_47 += 2800593487;
                    arr_44 [i_1] [i_2] [i_7] [i_14] = ((!(arr_39 [4] [i_7 + 1] [i_2] [i_7] [i_7 + 2] [i_7 + 3])));
                    var_48 -= ((~(201 + var_0)));
                    var_49 = ((~(arr_11 [i_7 + 3] [i_14] [i_7 + 3])));
                }
            }
            var_50 += (((arr_37 [i_1] [i_1] [i_2] [i_2] [i_2] [i_2] [i_1]) && 0));
        }
        for (int i_15 = 0; i_15 < 11;i_15 += 1) /* same iter space */
        {
            var_51 = (min(var_51, (arr_42 [1] [i_1] [i_1] [i_1])));

            for (int i_16 = 0; i_16 < 11;i_16 += 1)
            {
                var_52 = (arr_17 [i_1] [i_1] [i_1]);
                var_53 -= (arr_45 [i_1] [i_15] [i_15]);
                var_54 = (((-5664 ? var_10 : (arr_49 [i_15] [6] [i_15]))));
                var_55 = (((arr_0 [i_16]) / (arr_27 [i_1] [i_1] [3] [i_16] [i_16])));
                arr_51 [i_1] [i_15] [i_15] [i_1] = 66;
            }
        }
        var_56 *= (-((((arr_39 [i_1] [i_1] [2] [i_1] [i_1] [i_1]) <= var_10))));
        var_57 = (((arr_4 [i_1]) ? ((3968 ? 206158430208 : (arr_26 [i_1] [i_1] [i_1] [i_1]))) : -12936));
    }
    var_58 += (min(((-(var_4 && var_1))), 18));
    var_59 = var_19;
    #pragma endscop
}
