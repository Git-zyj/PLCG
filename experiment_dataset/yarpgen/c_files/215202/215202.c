/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= ((~((~(max(var_2, 15216477780539517311))))));
    var_15 = ((((max(var_5, 104))) ? -var_13 : (max((max(var_5, var_11)), var_9))));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_16 = (max(((min(var_11, 1))), ((max(var_8, -9926)))));
        arr_4 [i_0] = max((min((arr_2 [i_0 + 1]), (arr_3 [i_0 - 2]))), ((min((max((arr_1 [i_0 + 1] [i_0]), var_4)), (!-11180)))));
        var_17 = (min(var_17, var_11));
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        var_18 -= (arr_0 [i_1 - 2]);
        var_19 = (min((arr_1 [i_1 - 1] [i_1 - 2]), ((~(arr_3 [i_1 - 2])))));
    }
    for (int i_2 = 3; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_20 = (min((((arr_1 [i_2 + 1] [i_2 + 1]) ? 1784109288286979190 : (arr_1 [i_2 + 1] [i_2 - 3]))), ((~((~(arr_3 [i_2])))))));
        var_21 = var_6;
        var_22 = (max(((max((arr_0 [i_2 + 1]), (arr_7 [i_2 - 3])))), (arr_0 [i_2 - 3])));
        arr_10 [i_2] = (max((max(var_10, 1808453799)), (((arr_0 [i_2 - 3]) ? -3358602161298559388 : (arr_0 [i_2 + 1])))));
        var_23 = ((((-((((arr_9 [i_2]) == var_5))))) >= (max(((min((arr_0 [i_2]), -27037))), ((33900 >> (((arr_7 [i_2]) - 25135))))))));
    }
    for (int i_3 = 3; i_3 < 17;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] = (min((arr_13 [i_3 - 1]), (arr_13 [i_3 + 1])));
        arr_16 [i_3] = ((arr_9 [i_3]) << (((arr_13 [i_3 - 2]) - 24907)));
        arr_17 [i_3] = ((~(arr_13 [i_3 - 1])));
    }

    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        arr_20 [i_4] = (arr_2 [i_4]);

        for (int i_5 = 3; i_5 < 12;i_5 += 1) /* same iter space */
        {
            arr_23 [i_5 - 2] [i_5] [i_4] = ((var_3 ? (((arr_12 [i_5 - 2]) | var_6)) : (((max((min((arr_21 [i_4]), 11180)), (arr_1 [i_4] [i_4])))))));
            arr_24 [i_4] [i_5] = (arr_0 [i_5 - 3]);
            var_24 = ((((max((min(34779, (arr_7 [i_5]))), (arr_0 [i_4])))) ? var_4 : ((-((min(var_4, var_0)))))));
        }
        for (int i_6 = 3; i_6 < 12;i_6 += 1) /* same iter space */
        {
            arr_27 [i_4] [i_6] [i_4] = (max((arr_21 [i_4]), -18249));
            var_25 = (arr_11 [i_6]);
            var_26 ^= -11181;

            /* vectorizable */
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                var_27 -= (arr_22 [i_6 - 3] [i_6 - 3] [i_6 - 2]);

                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    var_28 = (min(var_28, (((-(arr_13 [i_6 + 1]))))));
                    var_29 -= -1370477676389648693;
                    var_30 = ((((((arr_14 [i_6]) - (arr_2 [i_4])))) - var_1));
                    arr_32 [i_4] [i_4] [i_4] [i_6] = (((arr_18 [i_7]) ? 135 : ((11228 ? (arr_7 [i_6]) : (arr_12 [i_6])))));
                    var_31 ^= (~var_10);
                }
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    var_32 = (max(var_32, (arr_3 [i_7])));

                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        var_33 = ((-((var_7 ? (arr_19 [i_7]) : (arr_34 [i_4] [i_6] [i_6] [i_6] [i_6])))));
                        arr_37 [i_4] [i_4] [i_6] [i_9] [i_10] = var_11;
                        var_34 = (arr_30 [i_4] [i_6 - 3] [i_6 - 3] [i_7] [i_7] [i_7]);
                    }
                }
                var_35 = ((!(arr_30 [i_6 - 2] [i_6] [i_6] [i_6] [i_6] [i_6 + 1])));
                var_36 = (((arr_11 [i_6]) ? var_8 : var_12));
                var_37 = ((!(arr_30 [i_4] [i_6] [i_7] [i_4] [i_4] [i_7])));
            }
            for (int i_11 = 4; i_11 < 10;i_11 += 1)
            {
                arr_41 [i_4] [i_6] [i_6 - 3] [i_4] = (max(-27029, (max((arr_18 [i_4]), (min(16243200350325604985, (arr_33 [i_4] [i_6] [i_6])))))));
                var_38 = ((-(min(var_13, (arr_13 [i_11 + 2])))));
                var_39 = ((((~(max(var_8, (arr_11 [i_6]))))) & (((var_13 ? (arr_29 [i_6]) : (arr_31 [i_6] [i_6]))))));
            }
        }
        /* vectorizable */
        for (int i_12 = 3; i_12 < 12;i_12 += 1) /* same iter space */
        {
            var_40 = (min(var_40, (((((-(arr_3 [i_12]))) <= var_5)))));
            var_41 ^= (((arr_11 [14]) ? (((var_11 >= (arr_6 [2])))) : (((var_10 >= (arr_19 [i_4]))))));
            var_42 = (max(var_42, (!var_13)));
            var_43 = ((arr_28 [12] [i_12 + 1] [i_4]) ? (arr_12 [i_12]) : (arr_22 [i_4] [i_12 - 3] [i_12 - 3]));
        }
        for (int i_13 = 1; i_13 < 11;i_13 += 1)
        {
            var_44 = (!-19614);
            var_45 = (((max(-1248802769, (min((arr_7 [i_13 + 1]), var_7)))) > var_4));
        }
        var_46 = ((((((arr_22 [i_4] [i_4] [i_4]) % (arr_22 [i_4] [i_4] [i_4])))) > (min(((max(var_2, var_4))), (min(var_1, -787813616))))));
        arr_47 [i_4] = ((((min(43, (arr_22 [i_4] [i_4] [i_4])))) ? (((((~(arr_13 [i_4])))) ? (arr_13 [i_4]) : (~var_10))) : 43));
    }
    for (int i_14 = 0; i_14 < 13;i_14 += 1) /* same iter space */
    {

        for (int i_15 = 3; i_15 < 9;i_15 += 1)
        {
            var_47 = (min((!var_2), (((arr_43 [i_14]) - var_10))));
            var_48 = 140241917;
            arr_52 [i_15] [i_15] [i_14] = ((-(arr_3 [i_14])));
        }
        /* vectorizable */
        for (int i_16 = 1; i_16 < 12;i_16 += 1)
        {
            arr_56 [i_14] [i_16] = (!2057987928);
            var_49 ^= (((arr_31 [0] [i_16 + 1]) >> (255 - 242)));
            var_50 ^= (((arr_53 [i_16] [i_16] [i_16 - 1]) > var_2));
        }
        var_51 = (max(((min((~var_11), (min(var_2, (arr_45 [i_14])))))), var_7));
        var_52 = (min(var_52, (arr_46 [i_14] [i_14])));
    }
    #pragma endscop
}
