/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((-var_8 >= var_7) * (max((max(8982039317074480478, var_0)), ((max(var_5, var_2)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [15] = (max((min(9464704756635071137, (max(0, 1)))), (min(18446744073709551615, 511))));
        arr_3 [i_0] = (((((arr_1 [i_0]) & 0)) & (arr_1 [i_0])));
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        var_20 = (((((arr_6 [i_1] [0]) <= ((((arr_4 [i_1]) << (((arr_6 [i_1] [i_1]) - 12283976122713473953))))))) ? (min((((arr_5 [i_1] [i_1]) ^ (arr_1 [i_1]))), (((arr_5 [i_1] [i_1]) % (arr_1 [i_1 - 2]))))) : ((min((((!(arr_4 [i_1])))), (arr_0 [i_1 + 1]))))));
        arr_7 [i_1] = (arr_5 [i_1] [i_1]);
        arr_8 [i_1] = (arr_4 [i_1]);
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_21 ^= (((max(((min((arr_0 [i_2]), (arr_9 [i_3])))), (((arr_12 [i_2]) | (arr_10 [i_2]))))) & ((~(arr_11 [i_2] [i_3])))));
            var_22 = (((((((arr_13 [i_2] [i_3]) / (arr_13 [i_2] [i_3]))) % (max((arr_0 [i_2]), (arr_13 [i_3] [i_2]))))) << (((!((((arr_11 [i_2] [i_3]) ? (arr_0 [i_2]) : (arr_10 [i_2])))))))));
            var_23 *= ((((~(min((arr_11 [i_3] [i_2]), (arr_0 [i_2]))))) | (((((((arr_0 [i_2]) ? (arr_0 [i_3]) : (arr_12 [i_2]))) < (min((arr_11 [i_2] [i_2]), (arr_1 [i_2])))))))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                var_24 = (((((-(arr_0 [i_5])))) ? (((((arr_18 [i_4]) == (arr_1 [i_4]))))) : ((0 ? 8982039317074480479 : 1))));
                var_25 *= ((((((arr_9 [i_2]) && (arr_1 [i_5])))) != ((((arr_14 [i_2]) && (arr_10 [i_4]))))));
                arr_20 [i_5] [2] [i_2] [2] = ((19462 ? 9151314442816847872 : 0));
                arr_21 [i_5] [i_5] [1] [1] = ((0 ? -1 : 18446744073709551615));
                arr_22 [11] [i_4] [i_4] = (arr_10 [11]);
            }
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                arr_25 [i_2] [i_4] [i_6] [i_6] = ((-(((arr_17 [i_4] [i_4] [i_2] [i_4]) ? (arr_13 [i_2] [1]) : (arr_11 [i_6] [i_6])))));
                var_26 = ((1 << (47650 - 47630)));
                arr_26 [i_2] = (arr_24 [i_2] [i_4] [9] [i_6]);
            }
            arr_27 [i_2] = (((arr_23 [i_2] [i_4] [i_4] [i_4]) || ((((arr_23 [i_4] [2] [2] [i_2]) ? (arr_0 [i_4]) : (arr_14 [i_2]))))));
            var_27 -= (((((arr_19 [i_2] [i_4] [i_4] [i_2]) + (arr_15 [i_2] [i_4] [13]))) - (((((arr_14 [i_2]) == (arr_13 [i_2] [i_4])))))));
        }
        var_28 += ((!(((((arr_18 [i_2]) || (arr_9 [i_2]))) && ((min((arr_18 [9]), (arr_1 [i_2]))))))));
    }
    #pragma endscop
}
