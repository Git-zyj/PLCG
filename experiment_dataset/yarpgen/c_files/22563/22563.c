/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((max((3 > var_15), (-18 % 112))) >= ((((var_10 & 26) >= var_12)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] = arr_3 [i_0];
                        var_17 = -13293;
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            var_18 = (((~55) < (~-112)));
                            var_19 = (max(0, 22));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            arr_19 [i_6] [i_6] [i_6] [i_4] [i_2] [i_1] [i_0] = 35;
                            arr_20 [i_2] [i_0] [i_2] [i_0] [i_6] [i_4] [i_1] = ((-(((arr_0 [i_0]) % 240))));
                            arr_21 [i_0] [i_1] [i_4] [i_6] = (((((-16 + 2147483647) << (36 - 36))) > 33));
                            arr_22 [i_0] [i_1] [i_0] [i_6] [i_6] [i_4] = (~-18);
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                        {
                            arr_27 [i_0] [i_1] [i_1] [i_2] [i_4] [i_7] = ((!(arr_11 [i_1 + 4] [i_1] [i_1] [i_1 + 1])));
                            arr_28 [i_7] [i_4] [i_2] [i_1] [i_0] = ((112 << (((arr_4 [i_0]) - 102))));
                            arr_29 [i_1] [i_4] = ((-(arr_15 [i_0] [i_0] [i_0] [i_0])));
                            arr_30 [i_0] [i_1] [i_2] [i_4] [i_7] = (arr_26 [i_0] [i_1] [i_1] [i_2] [i_4] [i_7]);
                        }
                        arr_31 [i_0] [i_1] [i_2] [i_0] = (max(25543, ((-(arr_1 [i_1 + 1] [i_1 - 2])))));
                        var_20 = 161;
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                    {
                        var_21 = ((!(+-5193)));
                        var_22 = max((min(32584, (arr_5 [i_0]))), -21870);
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                    {
                        arr_37 [i_0] [i_1] [i_2] [i_9] = (min(((min((arr_14 [i_0] [i_1] [i_2] [i_2] [i_9]), (arr_15 [i_0] [i_1] [i_2] [i_9])))), (arr_34 [i_1 - 1] [i_1 + 4] [i_1 - 2] [i_1 + 3])));
                        var_23 = 32612;
                        var_24 = ((+((((arr_3 [i_0]) > (-127 - 1))))));
                    }
                    var_25 = ((!(((-(arr_9 [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_26 = 63;
                                arr_43 [i_2] [i_11] = (min((((max((arr_38 [i_0] [i_1] [i_2] [i_11]), (arr_15 [i_0] [i_0] [i_0] [i_0]))))), ((-(((!(arr_11 [i_0] [i_1] [i_11] [i_11]))))))));
                                var_27 = ((!(((((arr_13 [i_10] [i_1] [i_2] [i_10] [i_11] [i_10] [i_11]) / (arr_11 [i_0] [i_0] [i_0] [i_0]))) == (arr_26 [i_0] [i_10] [i_2] [i_10] [i_11] [i_0])))));
                                arr_44 [i_1] [i_1] [i_0] [i_10] [i_11] [i_2] [i_2] = (max((min(((~(arr_17 [i_0] [i_1] [i_2] [i_10] [i_11]))), (((!(arr_33 [i_0] [i_1] [i_2] [i_10] [i_11])))))), (((arr_32 [i_11] [i_11 - 2] [i_11] [i_11 + 1] [i_1 - 1]) % (arr_32 [i_11] [i_11 - 1] [i_11] [i_11 - 2] [i_1 + 3])))));
                            }
                        }
                    }
                    arr_45 [i_0] [i_2] = (((!25) ? -14626 : (((arr_38 [i_0] [i_1] [i_1] [i_2]) << (((((arr_35 [i_1] [i_2] [i_2]) + 97)) - 4))))));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
                {
                    arr_49 [i_12] [i_1] [i_1] [i_1] = (((((arr_47 [i_0] [i_0] [i_1] [i_12]) && 16991)) ? ((-(arr_32 [i_0] [i_1] [i_12] [i_12] [i_1]))) : 25528));
                    var_28 = ((!(!0)));
                    var_29 = (((arr_2 [i_1 + 1]) ? -21869 : 74));
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {

                    for (int i_14 = 2; i_14 < 18;i_14 += 1)
                    {
                        arr_55 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_33 [i_0] [i_1] [i_13] [i_14] [i_1 + 4]);
                        var_30 = ((+((((arr_14 [i_0] [i_1] [i_13] [i_14] [i_13]) < 255)))));
                    }
                    var_31 = (((!-109) >> (((~25549) + 25555))));
                }
                arr_56 [i_0] [i_0] = -119;
            }
        }
    }
    var_32 = (max(var_3, (((var_4 >= (var_13 < 31))))));
    #pragma endscop
}
