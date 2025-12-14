/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [10] = 179;
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((!(arr_5 [i_0])));
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    var_20 += ((!(((((((arr_2 [3]) ? (arr_6 [i_0] [i_0] [8]) : (arr_3 [i_0])))) ? (arr_12 [i_0] [i_1] [10]) : ((((arr_7 [6] [i_1] [i_3]) || (arr_3 [3])))))))));
                    var_21 = (((arr_2 [i_0]) ? ((~(((arr_5 [i_0]) ? (arr_3 [i_1]) : (arr_1 [i_0]))))) : (((arr_11 [i_0]) ? (arr_7 [i_0] [i_1] [4]) : (arr_7 [i_0] [i_0] [i_0])))));
                    var_22 = ((+(((arr_11 [i_0]) ? (arr_3 [i_0]) : (arr_2 [i_0])))));
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_23 += 77;
                            arr_21 [i_5] [12] [i_4] [i_1] [i_5] &= (arr_5 [i_5]);
                            arr_22 [i_0] [i_0] [i_4] [9] [i_6] = ((~(arr_2 [i_0])));
                            arr_23 [i_0] = arr_18 [i_0] [9] [i_5];
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_24 = ((-((-(arr_15 [i_0] [i_1] [i_4])))));
                            var_25 = ((+((118 ? (arr_11 [i_0]) : 137))));
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_26 = (((arr_3 [i_1]) ? (((arr_28 [i_0]) ? (arr_25 [i_0]) : 3072)) : (arr_10 [i_0] [i_5] [i_8])));
                            var_27 = 56891;
                            var_28 = (arr_4 [i_4] [i_5]);
                        }
                        arr_29 [i_0] [i_0] = (((arr_28 [i_0]) ? (arr_28 [i_1]) : (arr_26 [i_1] [i_5])));
                    }

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_29 = ((!(arr_10 [i_0] [i_1] [i_4])));
                        arr_32 [0] [i_1] [i_1] &= (arr_16 [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                    {
                        var_30 = (arr_14 [i_0] [i_1] [i_0]);
                        var_31 = arr_27 [i_0] [i_0] [i_4] [i_10];
                        var_32 = (min((arr_3 [i_0]), ((((((arr_33 [i_0] [i_10]) ? (arr_15 [i_0] [10] [i_10]) : (arr_3 [0])))) ? (((!(arr_14 [i_0] [7] [i_0])))) : (!137)))));
                        arr_36 [i_0] [i_1] [i_4] [i_10] [4] [i_1] = (max((((arr_7 [i_10] [i_10] [i_10]) ? (arr_7 [i_0] [i_1] [i_1]) : (arr_7 [i_0] [i_4] [i_10]))), (((arr_7 [i_0] [i_1] [i_0]) ? (arr_7 [5] [i_1] [i_1]) : (arr_7 [i_10] [i_1] [i_4])))));
                    }
                    for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
                    {
                        var_33 = (((~182) <= (arr_30 [i_0] [i_1] [i_4] [i_11])));
                        var_34 = ((~((~((min((arr_24 [i_0] [i_1] [4] [i_11] [i_4]), (arr_31 [i_0] [i_0] [i_0] [i_0]))))))));
                        var_35 = (max(var_35, ((((((((arr_30 [10] [3] [i_4] [10]) ? (arr_2 [i_0]) : (arr_20 [i_0] [i_0] [i_1] [i_1] [i_11] [i_11]))) < (arr_1 [i_11]))) ? (((arr_27 [i_0] [i_0] [i_0] [i_0]) % (arr_3 [i_0]))) : (arr_25 [i_11]))))));
                    }
                    for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
                    {
                        arr_41 [i_0] [i_1] [i_1] [i_0] [i_4] [i_12] = ((((((((-(arr_16 [i_0] [i_0] [2] [i_0])))) ? (arr_39 [i_0]) : 76))) ? ((-(arr_35 [i_0] [i_1] [i_12]))) : ((-((-(arr_2 [i_0])))))));
                        var_36 = (((arr_2 [i_1]) ? (((((arr_10 [i_0] [i_1] [i_4]) == (arr_20 [i_0] [i_1] [i_1] [4] [i_0] [i_0]))) ? ((-(arr_0 [6]))) : ((178 ? 153 : (arr_6 [i_1] [i_4] [i_0]))))) : ((max((arr_17 [i_0] [i_1] [i_4] [i_12] [i_0] [i_1]), (arr_17 [i_0] [8] [i_1] [i_4] [i_12] [i_12]))))));
                        var_37 -= (((arr_31 [i_0] [i_1] [i_12] [i_0]) ? (((arr_40 [i_0] [i_12] [8] [i_4] [i_12]) ? (arr_31 [i_0] [i_1] [i_12] [i_12]) : (arr_31 [i_0] [i_1] [i_12] [i_12]))) : (((arr_31 [4] [i_1] [i_12] [i_12]) ? (arr_40 [i_0] [i_12] [i_1] [i_4] [i_12]) : (arr_40 [i_12] [i_12] [i_12] [i_12] [i_12])))));
                    }
                }
                var_38 ^= (arr_3 [i_0]);
            }
        }
    }
    var_39 = (~var_3);
    #pragma endscop
}
