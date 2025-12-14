/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_19 = (max(var_19, 29978));
        arr_2 [i_0] = (((arr_1 [i_0]) | (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_20 = (max(((((max((arr_5 [i_1]), (arr_5 [0])))) ? (((arr_3 [i_1]) ? (arr_1 [i_1]) : (arr_3 [3]))) : ((-(arr_5 [i_1]))))), (arr_5 [i_1])));

        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 23;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_1] [i_2] [i_2] [i_2] [14] [12] [i_2] = (((!(((arr_15 [1] [i_2] [1] [i_4 - 2] [i_5]) >= (arr_14 [7] [7]))))));
                            var_21 = (min(var_21, ((max((58 && -4565023473526040706), 58)))));
                            var_22 |= (arr_1 [i_1]);
                            var_23 = 58;
                            arr_17 [i_1] [i_2] [i_1] [3] [i_2] = (max((((arr_0 [i_4 - 2]) ? (arr_0 [i_4 - 1]) : (arr_0 [i_4 - 1]))), ((max((arr_0 [i_4 - 1]), (arr_0 [i_4 - 1]))))));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_24 = (max((arr_18 [i_1] [i_1] [i_1] [19] [i_1]), (min(((max((arr_1 [i_3]), (arr_14 [i_1] [12])))), (arr_8 [i_1] [i_2])))));
                            var_25 = ((((-(arr_0 [i_4 - 1]))) / ((-(arr_0 [i_4 + 1])))));
                            var_26 ^= max((max((arr_10 [0] [i_2] [7]), (((!(arr_0 [i_4])))))), ((max((arr_13 [i_6] [i_4] [i_3] [0] [i_1] [i_1]), (arr_1 [i_1])))));
                            arr_20 [i_1] = (((~(arr_1 [1]))));
                            arr_21 [i_1] [4] [i_1] [7] [i_3] [i_4] [i_6] = min((((arr_5 [i_4 - 1]) ? (arr_7 [i_4] [i_4 + 1] [i_4]) : (arr_11 [i_4 - 1]))), (arr_15 [1] [i_1] [i_3] [19] [i_1]));
                        }
                        var_27 = (max(var_27, ((((-(((arr_0 [3]) ? (arr_18 [14] [i_3] [i_2] [1] [1]) : (arr_10 [i_2] [i_2] [i_4 - 2])))))))));
                        var_28 = (min(var_28, ((((arr_14 [i_4 - 1] [i_2]) ? (arr_14 [2] [i_3]) : ((-(arr_14 [1] [i_2]))))))));
                        var_29 = (-8865106877660780071 >= 105);
                    }
                }
            }
            arr_22 [i_1] [i_1] = (arr_5 [i_2]);
            arr_23 [i_1] = (min((min((arr_10 [i_2] [i_1] [i_1]), (arr_10 [i_2] [i_2] [i_2]))), (min((min((arr_8 [i_2] [i_2]), (arr_1 [i_1]))), ((((arr_1 [i_2]) || (arr_14 [19] [1]))))))));
        }
        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
        {
            arr_26 [i_1] [i_1] [i_1] = (arr_25 [i_1]);
            var_30 = arr_1 [0];
            var_31 = (max((arr_15 [4] [i_1] [14] [i_7] [i_7]), (((arr_13 [3] [21] [i_7] [i_7] [i_7] [17]) & (arr_25 [i_1])))));
            var_32 = (max(var_32, ((((((arr_6 [i_7]) & (((((arr_19 [16] [i_1]) || (arr_15 [i_7] [i_7] [i_1] [i_1] [i_1])))))))) ? (arr_8 [i_1] [i_7]) : (max(((((arr_18 [i_1] [22] [i_7] [8] [i_7]) > (arr_14 [i_1] [i_7])))), (((arr_19 [20] [i_1]) ? (arr_10 [i_1] [17] [0]) : (arr_12 [5] [i_7] [8] [i_7] [i_7] [i_7])))))))));
            var_33 = (max(var_33, (arr_1 [i_1])));
        }
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            var_34 |= 16384;
            arr_30 [i_1] [i_1] [i_1] = (min((arr_15 [i_8] [i_8] [i_8] [1] [i_1]), (min((arr_15 [i_1] [i_1] [i_1] [17] [i_8]), (max((arr_5 [16]), (arr_28 [i_1])))))));
            arr_31 [i_1] [i_8] [i_1] = (max((arr_29 [i_8] [15]), (max((arr_9 [i_1]), (arr_9 [i_1])))));
        }
        for (int i_9 = 3; i_9 < 23;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                arr_38 [i_1] [2] [6] [4] = ((((-(arr_11 [i_9 - 2]))) == (((arr_11 [i_9 - 2]) ? (arr_11 [i_9 - 1]) : (arr_11 [i_9 - 1])))));
                var_35 = (min(var_35, ((((arr_18 [1] [i_10] [i_10] [i_10] [11]) | ((max(3951170694, (arr_25 [i_9 - 1])))))))));
            }
            arr_39 [i_1] [i_1] [i_9] = (max((arr_8 [23] [i_9 - 3]), (max((arr_37 [i_9 - 2] [i_1]), (arr_4 [i_1])))));
            arr_40 [22] [i_1] [19] = (arr_10 [i_9 - 1] [i_9] [i_9 - 2]);
            var_36 = (arr_25 [i_9]);
        }
    }
    var_37 = max(var_9, -66);
    #pragma endscop
}
