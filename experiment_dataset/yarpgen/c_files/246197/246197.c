/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((!var_0) << (var_9 - 16381947320730498595)))) ? ((((var_5 >= var_8) > var_1))) : ((~(!var_14)))));
    var_18 = (min(var_18, (min(175, 2367014679205899244))));
    var_19 = (max(var_19, 86));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 = (((max(1, (arr_0 [i_0]))) < (arr_0 [i_0])));
        arr_3 [i_0] [i_0] = var_10;
        var_21 ^= ((max((~10568), (86 || 1))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_22 &= (((var_16 + 9223372036854775807) << (((arr_2 [10] [10]) - 2977808385))));
            var_23 = -5099016583499950773;
        }
        for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                arr_12 [i_3] [i_0] [i_0] [i_0] = (max(var_2, ((0 * ((min(2390188927, 0)))))));
                var_24 = (((min(var_3, (0 | 1))) <= (arr_6 [i_2] [17])));
                arr_13 [i_0] = (((((arr_10 [16]) + 2147483647)) >> (var_13 - 215)));
            }

            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                var_25 *= (arr_15 [i_4 - 1] [i_2 + 1] [i_0]);
                var_26 = (max(var_26, (((((min((arr_15 [i_4 - 1] [i_4] [i_4 - 1]), var_4))) ? ((~(arr_11 [i_4] [i_4] [i_4 - 1]))) : (min(0, (arr_15 [i_4] [1] [i_4 - 1]))))))));
                var_27 = (min((((-(arr_0 [i_0])))), (((((var_12 ? (arr_14 [i_0]) : (arr_5 [i_4] [i_0] [i_0])))) ? (arr_15 [i_0] [9] [i_4]) : var_10))));

                for (int i_5 = 3; i_5 < 17;i_5 += 1)
                {
                    var_28 = (min(var_28, var_3));
                    var_29 = ((!((!(arr_10 [i_0])))));
                    var_30 ^= (max((~86), 81));
                    var_31 += ((!(((max(var_4, (arr_0 [20])))))));
                }
                var_32 = ((((min((arr_19 [18]), (arr_2 [i_0] [i_0])))) ? (min((min(var_12, (arr_0 [i_0]))), 17)) : var_3));
            }
            var_33 = (min((max((arr_11 [i_0] [i_2] [i_2]), 21603)), ((min((arr_16 [i_2] [i_2] [5]), var_15)))));
        }
        for (int i_6 = 1; i_6 < 20;i_6 += 1) /* same iter space */
        {
            arr_24 [i_0] [i_6] = ((-((((min(var_6, var_3)) <= var_7)))));
            var_34 = ((37934 || ((((((arr_9 [i_0] [i_6]) / 37934))) || (11377227056901151319 & 21603)))));
        }
        for (int i_7 = 1; i_7 < 20;i_7 += 1) /* same iter space */
        {
            var_35 += ((0 ? 86 : 33));
            arr_29 [i_0] = var_1;
            var_36 -= ((min((81 / var_15), 1723)));
        }
    }
    var_37 += var_11;
    #pragma endscop
}
