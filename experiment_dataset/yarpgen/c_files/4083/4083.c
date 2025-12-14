/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_18;
    var_21 = (min((var_2 < var_7), var_5));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_22 = (max((arr_0 [i_0]), (arr_0 [i_0])));
        var_23 |= ((((((((!(arr_1 [i_0])))) << (((min((arr_3 [i_0] [i_0]), (arr_3 [0] [i_0]))) + 4198512392956641511))))) ? ((max((arr_1 [i_0]), 1))) : ((var_16 ? (arr_1 [i_0]) : (arr_3 [5] [i_0])))));

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_24 += var_3;
            var_25 = ((((((-26050 ? (arr_1 [i_1]) : (arr_4 [i_0] [i_1] [3])))) ? ((max(26050, (arr_0 [i_1])))) : (26040 / var_9))));
            arr_6 [i_0] = ((((max((arr_3 [i_0] [i_1 + 2]), (arr_3 [i_0] [i_0])))) ? ((((((arr_5 [i_0] [i_1]) ? 34960 : 37)) / ((-26033 ? 26050 : 48))))) : ((~(-1197430703 / var_9)))));
        }
        arr_7 [i_0] = -26050;
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_26 += (((min((arr_9 [14]), (arr_8 [i_2]))) & (((arr_9 [6]) - (((arr_8 [i_2]) ? (arr_8 [i_2]) : -26021))))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_27 = (arr_9 [i_2]);
            arr_12 [i_2] [i_3] = ((((((arr_9 [i_2]) / var_13))) || var_7));
            var_28 = (min(var_28, (!201)));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_16 [i_2] = (min((((!((min(3829790321498100565, 26050)))))), (max((arr_8 [i_2]), (arr_8 [i_2])))));

            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                arr_19 [i_2] [i_5] [i_2] [i_4] = (((arr_15 [i_2]) ? (((arr_15 [i_2]) ? -26051 : (arr_15 [i_4]))) : (min(var_7, 505549610))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_29 = (min(var_29, (((((min((arr_9 [i_6]), (arr_9 [i_6])))) < ((((arr_21 [i_2] [i_4] [i_5] [i_7]) <= (arr_20 [i_5] [i_7 + 1] [i_7 + 1] [i_7])))))))));
                            var_30 = (arr_23 [i_7 - 1] [i_7 + 2] [i_7 - 1] [i_7 + 2] [i_7 - 1] [i_6]);
                        }
                    }
                }
                var_31 = (max(var_31, (((!((((min(var_1, (arr_20 [1] [i_4] [i_5] [i_5]))) ^ ((((arr_18 [12] [i_4] [2] [i_4]) & 1073741824)))))))))));
                var_32 = ((-((((!(arr_22 [i_2] [i_4]))) ? (arr_14 [i_2] [i_4] [i_2]) : (min(219, -3237190401982159024))))));
                arr_26 [i_2] [i_4] [i_5] = ((((arr_25 [i_2] [i_4] [i_4] [i_2] [i_4] [10] [i_5]) ? (arr_21 [i_5] [i_5] [i_4] [1]) : (min((arr_8 [i_2]), 260096)))));
            }
            var_33 = ((min((arr_11 [i_4]), (var_4 + 218))));
        }
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 15;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 2; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    {
                        arr_40 [i_11] [4] [i_8] [i_8] [4] = (arr_37 [i_8 - 1] [i_8 + 1] [i_8 + 1]);
                        var_34 = (((((285890842 ? 1 : (arr_37 [i_11] [i_10] [i_9 - 1])))) ? ((-(arr_39 [i_8] [10]))) : ((((var_5 < (arr_29 [i_9 + 1] [i_10])))))));

                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            arr_43 [i_8] [i_9] [i_10] [1] [i_12] = (arr_34 [i_8 - 1] [i_8] [i_8 + 1]);
                            arr_44 [i_12] [i_8] [i_10] [i_8] [i_8] = 1;
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 16;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 15;i_14 += 1)
            {
                {
                    arr_50 [i_13] [i_13] [i_14] = 1;
                    var_35 = (max(var_35, (arr_27 [i_13 - 1] [i_14])));
                    var_36 = (arr_33 [i_14 - 1] [i_13 - 1] [i_8]);
                }
            }
        }
        var_37 = (arr_45 [i_8 + 1] [i_8 + 1]);
        var_38 = (arr_39 [i_8 - 1] [i_8]);
    }
    for (int i_15 = 1; i_15 < 15;i_15 += 1)
    {
        var_39 = ((-26061 && (min((arr_52 [i_15 + 1] [i_15 + 1]), (arr_52 [i_15 + 2] [i_15 + 1])))));
        var_40 = (max(var_40, (max((((arr_34 [i_15] [i_15] [i_15 + 1]) ? (((((arr_33 [i_15] [i_15] [i_15]) >= 11299460514526931536)))) : (arr_42 [i_15 + 1] [i_15 + 1] [i_15 - 1] [i_15 + 2]))), (~-var_4)))));
        var_41 = ((!((((arr_37 [i_15 + 1] [4] [i_15 + 2]) ? (arr_35 [i_15 - 1] [i_15] [i_15 + 1] [i_15 + 1]) : (arr_37 [i_15] [i_15 + 1] [i_15 - 1]))))));
    }
    var_42 = (min(((((min(1, var_10)) | var_4))), var_1));
    #pragma endscop
}
