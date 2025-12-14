/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((-(arr_0 [i_0 + 1])));
        arr_3 [i_0] = 1;

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_6 [i_1] = -var_14;
            var_20 = (max(var_20, ((((arr_5 [i_0]) ? (arr_5 [i_0]) : var_16)))));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_10 [i_2] = ((~(arr_7 [i_0 - 1] [i_2])));
            var_21 = ((-(arr_9 [i_2] [i_0 - 4] [i_2])));
            var_22 = var_16;
        }
    }
    for (int i_3 = 2; i_3 < 24;i_3 += 1)
    {
        arr_13 [i_3] = ((((((~((1 >> (7987 - 7978))))) + 2147483647)) >> (((((3502 ? var_10 : 63688))) ? 7280613199330463609 : (arr_11 [i_3 - 1])))));
        arr_14 [7] |= ((~(((!(((arr_12 [i_3 - 2]) > -7642454714479198414)))))));
        var_23 += (((((-var_0 <= (arr_11 [i_3 - 2])))) * (((var_16 == (arr_12 [i_3 - 1]))))));
        arr_15 [3] = (((((var_12 ? (arr_12 [i_3 - 1]) : var_5))) ? 109 : ((var_2 ? var_16 : (arr_12 [i_3 - 2])))));

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_24 = (!109);
            var_25 &= ((50 ? 24573 : -115518111300406495));
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_26 = (min(var_26, ((max(((var_0 / ((min(55549, 1))))), ((38425 ? 0 : 1)))))));
            arr_20 [i_3 - 1] [i_5] [3] = ((((((((var_15 % (arr_19 [i_5] [12])))) ? ((-(arr_16 [i_3] [i_5]))) : (arr_12 [i_3 - 2])))) ? (((max(78, var_5)))) : (arr_18 [i_3 - 2] [i_3 + 1])));

            for (int i_6 = 4; i_6 < 22;i_6 += 1)
            {
                arr_24 [i_3] [i_5] [i_5] = (24564 == 6849602998331712438);

                /* vectorizable */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    var_27 = ((((var_19 ? var_17 : (arr_16 [11] [11]))) ^ (((((arr_22 [i_3] [i_5] [i_6] [i_7]) < 57674))))));

                    for (int i_8 = 3; i_8 < 23;i_8 += 1)
                    {
                        var_28 = -38422;
                        var_29 = (((arr_16 [15] [i_3 - 2]) ? (arr_16 [i_3 - 2] [i_3 - 2]) : -2250059134991138861));
                        var_30 *= ((arr_17 [i_3 + 1]) > (var_14 / -6849602998331712410));
                        var_31 = (min(var_31, (arr_12 [i_3 + 1])));
                    }
                }
            }
        }
        for (int i_9 = 3; i_9 < 21;i_9 += 1)
        {
            arr_33 [i_9] [i_9] = (~(min((max(371317966, 99)), var_7)));
            var_32 = (max(((min((arr_30 [i_3 + 1] [i_3 + 1]), var_10))), -var_4));
            var_33 -= ((-(((arr_31 [i_3 - 1] [i_3]) ? -7 : 38447))));
            var_34 = ((((55277 | (arr_31 [i_9 + 2] [i_3 - 1]))) * (((!(arr_30 [i_9 - 2] [i_9 - 3]))))));
            arr_34 [19] [i_9] = ((+(((arr_26 [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_9] [i_9 + 1]) ^ (arr_26 [23] [i_3 - 1] [i_9 + 1] [i_9 + 4] [i_9] [i_9])))));
        }
    }
    for (int i_10 = 1; i_10 < 13;i_10 += 1)
    {
        var_35 = var_12;
        var_36 = (((max(((var_19 ? var_5 : var_4)), -51385))) && var_7);
        var_37 = (max(var_37, (((((((arr_5 [6]) | (arr_1 [i_10 + 1])))) ? ((((min(var_18, 18213945052969707605))) ? ((((arr_29 [i_10] [22] [i_10] [24]) != var_13))) : ((min((arr_12 [i_10]), var_14))))) : (~var_18))))));
    }
    var_38 = (max(var_38, (((var_0 ? ((((min(var_12, -1822117277048882471)) <= var_3))) : (((((var_8 ? var_9 : var_14))) ? (((var_19 + 2147483647) >> (1487 - 1480))) : ((min(var_2, 57001))))))))));
    var_39 = (var_14 != var_5);
    var_40 = (((((var_15 ? var_4 : (min(var_7, var_17))))) ? var_9 : (min((var_7 / 5293504314908449003), ((min(250049210, 20059)))))));
    #pragma endscop
}
