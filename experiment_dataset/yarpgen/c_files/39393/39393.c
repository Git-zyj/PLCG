/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((-((((arr_2 [i_0]) != ((1 ? var_6 : 11249651827832585130)))))));
        var_13 += (min((max(var_10, ((var_6 ? var_11 : var_2)))), 1));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = 2;
        arr_8 [i_1] = ((7197092245876966481 ? (arr_0 [i_1]) : var_10));
        var_14 = (2146435072 || 1698210377);
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                var_15 = ((2 / (var_9 | 123)));
                arr_16 [10] [10] = (!var_7);
                arr_17 [i_2] [i_2] [i_4] [i_4] = var_9;
            }

            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                arr_21 [i_5] [i_3] [i_3] [i_2] = (arr_1 [i_3]);
                arr_22 [i_2] [i_3] [i_5] [i_5] = var_7;
                arr_23 [i_2] [i_3] = (arr_13 [i_5]);
            }
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {

                for (int i_7 = 2; i_7 < 14;i_7 += 1)
                {
                    var_16 = (max(((var_4 ? 1 : 76)), -16384));
                    var_17 = (max(var_17, ((((((arr_28 [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 1] [i_7 + 1]) && (arr_28 [i_7] [i_7 + 1] [i_7] [i_7 - 1] [i_7 - 2]))) || (25 && 43267))))));
                    arr_29 [i_2] = ((((!(arr_15 [i_2] [i_3] [i_6] [i_7 + 1]))) || var_12));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_18 = ((!(arr_14 [i_2] [i_6])));
                    var_19 &= 7197092245876966481;
                }
                arr_32 [i_6] [i_6] [0] [i_2] = var_0;
                arr_33 [i_6] [i_3] [i_2] [i_2] = (((arr_2 [i_2]) ? (242 + 7197092245876966450) : (((min((arr_2 [i_2]), 21))))));
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                var_20 = -6965729100078211159;
                arr_38 [i_3] [i_2] = var_6;
            }

            for (int i_10 = 3; i_10 < 12;i_10 += 1) /* same iter space */
            {
                arr_43 [i_2] [i_2] [i_2] [i_2] = ((((0 >> (((arr_10 [i_10 + 1] [i_3]) - 510750519))))) ? ((var_0 ? (arr_10 [i_10 - 3] [i_3]) : (arr_10 [i_10 - 2] [i_3]))) : (min((arr_10 [i_10 + 1] [i_3]), 1)));

                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    arr_46 [i_2] [i_3] [5] [i_3] = ((min(var_0, (arr_35 [i_10 + 2] [i_10] [i_10 + 3]))));
                    arr_47 [i_2] [i_3] [i_10 + 1] [i_3] = ((~(arr_6 [i_3])));
                    var_21 = ((!(!122)));
                    arr_48 [i_2] [i_3] [i_10] [i_11] = (min((arr_34 [i_11] [i_11] [i_10 + 2] [9]), 1));
                }
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    arr_51 [i_2] [i_2] [i_2] [i_2] = (!22267);
                    var_22 = (min(var_22, (((var_10 ? (arr_42 [i_2] [i_2] [i_10] [13]) : (arr_6 [i_10 + 2]))))));
                }
            }
            for (int i_13 = 3; i_13 < 12;i_13 += 1) /* same iter space */
            {
                var_23 = var_9;
                var_24 &= (((((min((arr_53 [i_13] [4] [4]), 1))) ? 1 : (max(-1205653979028897444, 17592186044288)))) & ((min((2305843009213693952 / -1988713072), (((var_12 > (arr_26 [i_13 - 3] [i_13] [i_3] [i_2]))))))));
                var_25 ^= (+(((arr_40 [i_2] [i_2] [i_13 - 3]) ? (arr_40 [i_2] [0] [i_13 + 3]) : var_9)));
            }
            arr_55 [i_3] [12] = (((((arr_28 [i_2] [i_2] [i_2] [i_2] [i_3]) ? (~var_9) : ((var_4 >> (((arr_30 [0] [1] [0]) + 1179518818)))))) - 536646988));
        }
        for (int i_14 = 0; i_14 < 15;i_14 += 1)
        {
            var_26 = (var_1 < ((((arr_39 [14] [i_2] [i_2] [i_2]) * 1))));
            arr_58 [i_2] [i_14] = (((6841820282201051939 - -14053) >= (!0)));
            var_27 = ((arr_30 [i_14] [i_2] [i_14]) / (min(var_1, -17374)));
            arr_59 [i_14] [i_14] [i_14] = arr_9 [i_2] [i_2];
        }
        arr_60 [i_2] = (arr_27 [i_2] [i_2] [i_2] [i_2]);
        arr_61 [i_2] = (arr_25 [i_2] [i_2] [i_2] [i_2]);
        arr_62 [i_2] = (arr_12 [i_2] [i_2]);
    }
    var_28 *= var_7;
    #pragma endscop
}
