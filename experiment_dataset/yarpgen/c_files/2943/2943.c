/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max(((-1343165471 ? 1 : var_2)), var_15);

    for (int i_0 = 3; i_0 < 6;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {
            var_18 = (i_0 % 2 == 0) ? (((((arr_4 [i_0 + 1] [i_0] [i_0 - 3]) + 2147483647)) >> (((arr_2 [i_0 + 4] [i_0] [i_0 + 4]) + 1742421483)))) : (((((((arr_4 [i_0 + 1] [i_0] [i_0 - 3]) - 2147483647)) + 2147483647)) >> (((arr_2 [i_0 + 4] [i_0] [i_0 + 4]) + 1742421483))));

            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_19 = (max(((var_9 ? (arr_10 [i_0 - 1] [i_2 - 2] [i_0 - 1] [i_3]) : (arr_0 [i_0]))), 1));
                    arr_12 [i_0] [i_0] [i_2] [i_2 + 1] = (max((arr_10 [i_3] [i_2] [i_2 + 1] [i_2 + 1]), -6));
                }
                var_20 = (!-1343165468);
                arr_13 [i_0] [i_0] [7] = max((max((((arr_9 [i_0] [0] [i_1] [i_0]) >> (((arr_1 [1] [i_1]) + 605589225)))), var_16)), (arr_4 [0] [i_0] [i_0]));
                var_21 = ((!((((arr_9 [i_0] [3] [i_0] [i_0]) ^ (arr_9 [8] [8] [i_2 - 2] [i_0]))))));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_22 = arr_15 [i_4] [i_0] [i_0] [i_1];
                arr_16 [i_4] [i_0] [i_0] = (arr_2 [i_0 + 4] [i_0 + 2] [i_0 + 4]);
            }
            var_23 = 1867914226;
            arr_17 [i_0] [i_0] = (max((arr_14 [i_1] [i_1] [i_1] [i_1]), ((((arr_6 [i_0 + 3] [i_0 - 3]) || var_10)))));
            var_24 = max(-1, -1);
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
        {
            arr_20 [i_0] [i_5] = ((((arr_3 [i_0 - 3]) || 1343165471)));
            var_25 = (max((182370004 - -418679558), (!182370002)));
            var_26 = (arr_19 [i_0 + 4] [i_0 + 2] [i_0]);
            var_27 = (((max(var_1, (((arr_1 [1] [1]) % 1))))) ? 4 : ((((max(var_3, (arr_11 [i_0] [i_0] [i_0] [i_5])))) ? (max(var_14, (arr_10 [i_0 + 4] [i_0 + 4] [1] [1]))) : var_12)));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 4; i_7 < 9;i_7 += 1)
            {
                var_28 = (min(var_28, -1343165484));
                var_29 = 2093056;
                var_30 = (min(var_30, var_3));
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
            {
                arr_29 [i_0] [i_0] = ((110 ? 16 : 2147483647));
                var_31 = (min(var_31, (((-(arr_1 [i_0 - 3] [i_0 + 1]))))));
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
            {

                for (int i_10 = 2; i_10 < 9;i_10 += 1)
                {
                    arr_38 [i_0] = 1870037882;
                    arr_39 [i_0] [i_6] [i_0] = 1343165449;
                    arr_40 [2] |= ((1567889122 >> (131068 - 131059)));
                    var_32 = (arr_37 [i_9] [i_10 - 1] [i_9] [i_10]);
                }
                for (int i_11 = 1; i_11 < 9;i_11 += 1)
                {
                    var_33 = (-1277237949 ? var_5 : 0);
                    var_34 = (arr_42 [i_0 + 4] [i_0 - 3] [i_0 - 3] [i_0] [i_0 + 3]);
                }
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    var_35 = var_11;
                    var_36 = var_10;
                    var_37 = arr_43 [i_0 - 2] [i_6] [i_9];
                }

                for (int i_13 = 2; i_13 < 8;i_13 += 1)
                {
                    arr_51 [i_0] [i_6] [i_6] [i_0] = ((((~(arr_0 [i_0]))) < (arr_14 [i_0 + 2] [i_6] [i_13 + 1] [i_13])));
                    var_38 = (arr_32 [i_0] [i_0] [i_9] [i_13 - 1]);
                }
            }
            arr_52 [i_0] = ((arr_21 [i_0 + 4] [i_0 + 4]) >> (((arr_21 [i_0 + 3] [7]) - 752617919)));
            arr_53 [i_0] = var_14;
            var_39 = (arr_15 [i_6] [i_0 + 3] [i_0] [9]);
        }
        for (int i_14 = 0; i_14 < 10;i_14 += 1)
        {
            var_40 = ((((arr_32 [i_14] [i_14] [i_0] [i_0 + 3]) & (arr_41 [i_0] [i_0]))));
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 10;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 10;i_16 += 1)
                {
                    for (int i_17 = 2; i_17 < 9;i_17 += 1)
                    {
                        {
                            var_41 = (((((((var_1 >> (var_13 - 1018142846)))) ? (~-769353504) : ((((arr_18 [i_16] [i_0] [i_0 + 4]) || (arr_24 [i_0] [i_14] [i_14])))))) << ((((max(var_8, (arr_49 [i_16] [i_16] [i_0] [i_16] [i_17 + 1] [i_0]))) > (1 == 940239727))))));
                            var_42 = (min(var_42, (((((((arr_34 [i_17 + 1] [i_0 - 3] [i_0] [i_0 + 3] [i_0]) / 1))) && ((((arr_47 [i_17 - 2] [i_0 + 4] [i_0 + 3]) ? var_10 : (arr_11 [i_17 - 1] [i_17 - 1] [i_0 + 4] [i_0])))))))));
                            var_43 = (arr_22 [i_16]);
                            arr_64 [i_0] [i_0] [i_0] [i_15] [4] [i_17 - 1] = (((var_8 / (arr_4 [i_17 + 1] [i_0] [i_17 + 1]))) * 0);
                        }
                    }
                }
            }
        }
        arr_65 [i_0] = (((max(var_12, (((-127 - 1) ? (arr_55 [4]) : (arr_15 [i_0] [3] [3] [i_0]))))) << (((max(-78, -182369994)) + 81))));
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 0;i_18 += 1)
    {
        var_44 = (min(var_44, var_0));
        var_45 += arr_69 [1];
        arr_70 [i_18 + 1] = ((arr_67 [i_18 + 1] [i_18]) + 0);
    }
    var_46 = max((((120 == (-182369997 % 1867146935)))), ((max(1, 66977792))));
    #pragma endscop
}
