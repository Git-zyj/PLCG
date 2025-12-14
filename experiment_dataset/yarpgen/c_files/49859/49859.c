/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((~(~65531))))));
    var_18 = (max(var_18, (((((min((~var_4), var_8))) ? var_5 : (max(var_11, -var_16)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_19 = (!(arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1]));

            for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
            {
                arr_8 [i_0] [i_0] [i_0] = (((-(arr_2 [i_2]))));

                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_20 = ((((1 >> (240 - 209))) >> (((((arr_7 [i_0] [i_2]) - (arr_2 [i_3]))) - 7508628489527787207))));
                    var_21 += (arr_6 [i_2] [i_0] [i_0]);
                }
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    var_22 = ((9 && (~1)));
                    arr_15 [i_4] [0] = (~(((arr_10 [i_0] [i_0] [i_4] [i_1 + 2] [4]) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_1 [i_2]))));
                    var_23 = (+(((arr_4 [i_0]) << (var_3 + 14685))));
                    arr_16 [15] [15] [i_4] [i_4 + 2] [i_4] [10] = (((arr_0 [i_1] [i_1]) || var_9));
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_24 = (arr_10 [i_0] [i_0] [i_5] [i_2] [i_5]);
                    var_25 *= (((arr_10 [i_0] [i_0] [i_5] [6] [i_0]) >= var_10));
                }
                var_26 = ((!((((arr_13 [1] [i_2] [i_1 + 1] [12]) % (arr_13 [i_0] [i_0] [7] [i_0]))))));

                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_27 |= 17;

                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        arr_24 [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_1] = ((((((arr_5 [i_1] [14] [i_7]) > 1))) << (65528 - 65509)));
                        arr_25 [i_0] [i_0] [i_2] [i_0] = var_6;
                        arr_26 [i_7] [i_7] = (((~-1911377435250161822) ^ (647123323006032026 > var_10)));
                    }
                    for (int i_8 = 3; i_8 < 18;i_8 += 1)
                    {
                        var_28 = (((arr_19 [i_2] [i_8] [i_8 - 1] [i_8 - 2] [i_8 - 1] [18]) < (((!(arr_1 [i_6]))))));
                        var_29 = ((arr_10 [i_1 - 1] [i_1 + 1] [i_6] [i_8 - 1] [8]) != (arr_10 [i_1 - 1] [i_1 + 1] [i_6] [i_8 - 1] [i_8 - 2]));
                    }
                }
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    var_30 -= (var_3 <= var_0);
                    arr_32 [i_0] [i_0] [4] [4] = ((!(arr_31 [i_1 + 2] [i_1] [i_2] [i_2])));
                }
            }
            for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
            {
                var_31 -= (!2614691073770214764);
                var_32 = (((arr_12 [i_1 + 1] [i_1] [i_1 + 1] [i_10] [5] [i_10]) << ((((~(arr_0 [i_10] [i_1]))) - 1874957537))));
                arr_35 [i_0] [i_0] = (arr_28 [7] [i_1]);
                var_33 = (((arr_4 [i_1 + 2]) % (arr_3 [i_1 + 1])));
                var_34 |= (arr_19 [i_0] [i_0] [10] [i_1] [i_1] [i_10]);
            }
        }
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            arr_38 [i_0] [i_0] = (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])));

            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                arr_42 [i_0] [i_11] [i_0] [i_12] |= ((!(arr_20 [i_0] [i_0] [i_0] [18])));
                var_35 = ((!(((arr_13 [i_0] [i_0] [i_11] [i_12]) <= var_10))));
            }
            var_36 = ((((!(arr_10 [i_0] [i_0] [i_11] [i_0] [i_11]))) ? (arr_37 [i_0] [i_11]) : (((!(-127 - 1))))));
            var_37 = (arr_14 [16] [i_11] [i_11] [i_11]);
        }
        var_38 = ((var_13 || (((-(arr_41 [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (int i_13 = 2; i_13 < 20;i_13 += 1)
    {
        arr_45 [i_13] [i_13] = ((((((arr_44 [i_13 - 1]) + 2147483647)) >> (((arr_43 [i_13 - 1] [i_13 - 2]) - 85)))));
        var_39 *= (max((((arr_44 [i_13 + 1]) ? ((1 ? var_4 : (arr_43 [i_13] [i_13]))) : (max(1, (-2147483647 - 1))))), ((min((var_10 || var_8), var_1)))));
        arr_46 [i_13] = ((!((min(var_15, 17799620750703519586)))));
    }
    var_40 = var_4;
    #pragma endscop
}
