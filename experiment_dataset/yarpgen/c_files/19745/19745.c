/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 ^= (min(((((((arr_1 [7]) >> (((arr_0 [i_0]) - 10528)))) != 8578464944457560376))), 161));
        arr_2 [i_0] = (((((((max((arr_1 [i_0]), -29040))) ? (((arr_0 [i_0]) ? (arr_1 [8]) : 43491)) : (arr_0 [1])))) ? var_0 : (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_19 ^= ((~(arr_4 [10])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    arr_11 [i_1] [20] [i_3] [19] = ((!((((arr_9 [0] [i_2] [12] [1]) ? 11684 : (((arr_8 [i_2]) ? 218 : (arr_6 [i_1] [i_1]))))))));
                    arr_12 [1] [4] [1] [i_1] = (arr_5 [i_1] [i_2]);
                    arr_13 [13] [10] [20] [1] = ((((max((arr_8 [i_1]), (((arr_3 [i_2]) + 58))))) && ((((arr_3 [i_1]) + (arr_3 [i_3]))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
    {
        var_20 ^= (((arr_8 [10]) ? (arr_9 [i_4] [i_4] [i_4] [i_4]) : (arr_9 [i_4] [i_4] [i_4] [i_4])));
        var_21 = 12072248603220601380;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
    {
        arr_18 [0] = ((((!(arr_15 [4]))) ? -21226 : (arr_14 [i_5])));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {

                        for (int i_9 = 1; i_9 < 19;i_9 += 1)
                        {
                            var_22 ^= ((arr_30 [i_9 - 1] [i_6] [i_7] [i_8] [7]) << (!10575177626716599566));
                            var_23 = ((((((arr_15 [5]) | (arr_20 [i_5] [i_6])))) ? (((((arr_10 [i_9 + 2] [i_8] [6]) == 3845570802)))) : 11342454999502034430));
                            arr_32 [i_8] [1] [i_6] [i_5] = (arr_30 [1] [i_9 - 1] [4] [11] [i_9 + 1]);
                        }
                        for (int i_10 = 1; i_10 < 17;i_10 += 1) /* same iter space */
                        {
                            arr_36 [3] [i_10] [i_7] [i_8] = ((-(arr_31 [2] [8] [i_10 - 1] [i_7] [i_6])));
                            var_24 = (max(var_24, (arr_19 [i_5] [i_10 + 1])));
                            var_25 ^= (arr_5 [i_5] [i_6]);
                            var_26 = (max(var_26, (arr_9 [i_5] [i_6] [i_10 + 4] [i_8])));
                        }
                        for (int i_11 = 1; i_11 < 17;i_11 += 1) /* same iter space */
                        {
                            var_27 = (min(var_27, (arr_3 [i_6])));
                            var_28 = (min(var_28, (((!((((arr_7 [i_5]) ? 1 : (arr_20 [i_7] [i_6])))))))));
                            arr_39 [i_11 + 3] [i_11] [1] [i_11] [i_5] = (arr_31 [17] [10] [i_11 + 2] [i_8] [1]);
                            arr_40 [i_11 - 1] [i_11] [i_8] [8] [i_11] [i_5] = arr_35 [i_11 + 1] [i_8] [i_5];
                        }
                        arr_41 [11] [14] = ((-(arr_38 [i_5] [i_8] [i_6] [i_8] [i_5])));
                        var_29 = (((59299 ? 1 : (arr_37 [12]))) < (arr_33 [i_6]));
                    }
                }
            }
        }
        arr_42 [i_5] = var_13;
        arr_43 [i_5] = (((arr_6 [i_5] [i_5]) ? (arr_6 [i_5] [i_5]) : (arr_6 [i_5] [i_5])));
    }
    var_30 ^= (max(var_8, var_5));
    var_31 = (max((((60900 - 926960989) ? (((max(-57, var_10)))) : -var_11)), ((min(var_12, (33 | var_10))))));
    #pragma endscop
}
