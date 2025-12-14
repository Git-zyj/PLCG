/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += var_4;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                var_20 = ((arr_2 [i_0]) ? (((arr_0 [i_0] [i_1]) ? (arr_6 [i_0] [i_0] [i_0]) : (arr_4 [i_2]))) : (arr_3 [i_1 - 2] [i_2 + 2] [i_2 + 2]));
                var_21 = (((arr_0 [i_0] [i_0]) <= (arr_0 [i_0] [i_1])));
                var_22 = (arr_5 [i_1 + 1] [19] [i_2 - 3]);
            }
            var_23 = (min(var_23, (arr_7 [i_1])));
        }
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            var_24 = (max((min((max((arr_1 [i_0]), (arr_2 [i_0]))), (arr_9 [i_0] [i_3]))), (((((arr_10 [i_0] [i_0] [i_0]) | (arr_3 [i_3] [i_3] [i_3])))))));
            arr_11 [i_0] [17] = (arr_4 [12]);
            var_25 = (min(var_25, ((min((arr_8 [i_3 - 1]), 732195032)))));
            var_26 = (((arr_10 [i_3 - 1] [i_0] [i_3 - 1]) && (((179 << (1073741824 - 1073741813))))));
        }
        var_27 = (((arr_10 [i_0] [i_0] [i_0]) >> (arr_10 [i_0] [i_0] [i_0])));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_28 = (min(var_28, ((min((arr_12 [i_4] [i_4]), (arr_6 [i_4] [i_4] [i_4]))))));
        arr_14 [i_4] [i_4] = (max(2251791223750656, (arr_4 [i_4])));
        arr_15 [i_4] = (arr_5 [i_4] [i_4] [i_4]);
        arr_16 [i_4] = (max(20740, 35252));
    }
    for (int i_5 = 2; i_5 < 11;i_5 += 1)
    {
        var_29 = (arr_13 [i_5]);

        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            arr_23 [i_5 + 3] [i_6] = ((((((min((arr_10 [i_5] [i_5] [i_5 + 2]), (arr_4 [i_5 + 4])))) ? (arr_19 [i_5]) : (arr_13 [i_5 + 1]))) & (max(((max((arr_4 [i_5]), (arr_3 [i_6] [i_5] [i_5])))), (arr_22 [i_5 - 2])))));
            var_30 = (((arr_3 [i_5 + 4] [18] [i_5 - 1]) ? (-2147483647 - 1) : (min((min((arr_8 [i_5]), (arr_19 [i_6]))), (arr_3 [i_6] [9] [i_5 + 1])))));
            var_31 = (max(var_31, (((max((arr_19 [i_5 + 2]), (arr_6 [6] [6] [i_5])))))));
            var_32 = (min(((max((min((arr_4 [i_5 + 4]), (arr_3 [i_5] [i_5] [i_5]))), (arr_7 [i_5])))), (arr_22 [i_5 + 2])));
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 13;i_7 += 1)
        {
            arr_26 [i_5] = (arr_12 [i_5 + 1] [i_7 + 1]);
            var_33 = ((arr_20 [i_5]) ? (arr_7 [i_5]) : (arr_9 [i_5] [i_7 + 2]));
            arr_27 [i_5] [i_5] [i_7 + 1] = (((arr_25 [i_5 - 1]) != (arr_25 [i_5 - 1])));
        }
        arr_28 [i_5 - 1] = ((-1613285102053741537 ? 14125669035588646560 : (((min((arr_5 [i_5] [i_5] [i_5]), 18446744073709551615)) & 117))));
    }
    var_34 |= ((var_7 || ((((min(var_12, var_1))) || var_18))));
    #pragma endscop
}
