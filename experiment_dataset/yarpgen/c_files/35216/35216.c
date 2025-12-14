/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_6 ? 1 : ((1999821515 ? var_2 : 124))))) ? ((((min(var_5, 61757))) ? var_8 : ((var_6 ? var_3 : 4294967275)))) : ((((var_7 < (((min(var_1, var_5)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] |= ((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [10]) : (arr_0 [i_0]))) ^ (arr_1 [i_0] [i_0]));
        arr_3 [0] = arr_1 [0] [i_0];
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_11 = 3133862728;
        var_12 = max((arr_5 [10]), ((((((arr_5 [i_1]) | (arr_5 [i_1])))) ? (1863344340 * 3133862713) : (arr_4 [i_1]))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 23;i_3 += 1)
            {
                {
                    arr_10 [i_1] [9] [i_3] [i_1] = ((!(((-10636 ? 3283539553 : (((arr_8 [i_1] [7] [i_3 + 2]) ? 4294967295 : 15383405943275984667)))))));
                    var_13 *= (min((min((arr_6 [22] [i_3]), (((3063338130433566966 ? (arr_8 [i_2] [i_2] [i_2]) : 127))))), (((((((!(arr_4 [i_1]))))) < (~17053261478556335458))))));
                    var_14 = ((2761033988 ? (arr_8 [i_2] [6] [i_2]) : ((((min((arr_6 [23] [i_2]), (arr_5 [i_1])))) ? (min((arr_8 [i_2] [i_2] [i_2]), 1161104570)) : ((-(arr_6 [i_1] [i_2])))))));
                }
            }
        }

        /* vectorizable */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_15 = (arr_8 [i_1] [i_1] [i_4]);
            var_16 = ((~(arr_6 [i_1] [i_4])));

            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {

                for (int i_6 = 2; i_6 < 24;i_6 += 1)
                {
                    var_17 &= 18446744073709551615;
                    arr_18 [i_5] [i_1] [i_5] [i_6 - 1] [12] = ((-(arr_7 [i_1])));
                }
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    arr_21 [16] [16] [i_4] [8] [i_7] [i_7] &= (arr_12 [i_1]);
                    arr_22 [i_1] [i_1] = 880;
                    var_18 = (((arr_19 [i_1] [i_1] [i_1] [i_1]) || (arr_11 [9] [i_5] [i_5])));
                    arr_23 [i_1] [i_1] = (arr_20 [i_1] [i_4] [i_5] [i_7]);
                }
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    var_19 = (arr_13 [i_1] [i_1] [i_1] [i_8]);
                    var_20 = ((~(((!(arr_5 [i_1]))))));
                    arr_27 [i_1] [i_4] [10] [i_1] = (arr_9 [i_1] [i_1]);

                    for (int i_9 = 3; i_9 < 22;i_9 += 1)
                    {
                        var_21 = (arr_19 [i_5] [i_1] [i_4] [i_8]);
                        var_22 = (((arr_5 [i_4]) | (arr_5 [i_1])));
                    }
                    for (int i_10 = 3; i_10 < 22;i_10 += 1)
                    {
                        arr_34 [i_1] [i_1] [i_5] [i_8] [i_8] = (arr_24 [i_1] [18] [i_1] [18] [10]);
                        var_23 = (min(var_23, (arr_19 [i_1] [8] [i_1] [i_1])));
                    }
                }
                for (int i_11 = 3; i_11 < 23;i_11 += 1)
                {
                    arr_38 [i_1] [i_1] [i_1] [6] [6] = ((((((arr_11 [i_1] [i_1] [21]) ? (arr_13 [i_1] [i_1] [i_1] [i_11]) : (arr_36 [i_1] [i_4] [i_5] [i_11] [i_4] [2])))) ? (arr_31 [i_1] [i_4] [i_5] [1]) : ((((arr_5 [i_11]) ? 1 : (arr_15 [i_11] [13] [22] [i_4] [i_4] [7]))))));
                    var_24 |= (arr_19 [1] [24] [18] [i_11 + 1]);
                    arr_39 [i_1] [7] = arr_32 [i_1] [3] [i_5] [i_4] [i_11 - 2];
                }
                var_25 = (arr_8 [i_1] [4] [13]);
            }
            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                arr_42 [7] [i_1] [i_4] [8] = (((arr_28 [i_1] [12] [i_12]) ? (((~(arr_9 [i_1] [i_4])))) : (arr_32 [i_1] [i_1] [i_1] [i_1] [i_1])));
                var_26 = (arr_5 [22]);
                var_27 = arr_13 [i_1] [20] [i_1] [i_12];
            }
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                var_28 = ((+((6 ? (arr_9 [21] [i_1]) : (arr_40 [i_4] [i_13] [i_4] [i_1])))));
                var_29 += (((((arr_19 [i_1] [i_13] [i_13] [i_4]) * (arr_14 [i_1] [i_4] [0] [i_4])))) ? (arr_6 [i_1] [21]) : (arr_28 [i_1] [i_4] [i_13]));
                var_30 = (max(var_30, (arr_31 [i_1] [i_1] [i_4] [i_13])));
            }
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            var_31 = (min(var_31, (arr_47 [i_1] [16] [16])));
            var_32 = (min(var_32, (arr_46 [6] [i_14] [4])));
        }
    }
    #pragma endscop
}
