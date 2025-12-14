/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (max(var_9, (!20)));
    var_11 = (min(var_11, var_7));
    var_12 *= ((-(((((var_5 ? var_3 : var_7))) | 14714783161704797396))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((-(var_0 % 8807301459560186953)));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_13 += 33104;
            var_14 = (((arr_1 [i_0 + 1]) != (((-(arr_0 [i_0]))))));

            for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
            {
                arr_9 [i_1] [i_1] |= -2006775089404914035;

                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_15 = (min(var_15, (~70368744177663)));
                    var_16 = (min(var_16, (((~(arr_11 [12] [i_1] [i_3] [i_3]))))));
                    var_17 -= (((~(arr_5 [5] [i_1]))));
                    var_18 = ((arr_10 [12] [i_0 - 1] [i_2] [5] [i_3]) * (!var_3));
                }
            }
            for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
            {
                var_19 = ((!(arr_10 [i_4] [i_4] [i_0] [i_1] [8])));
                var_20 = 245;
                var_21 = (~-var_5);
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 12;i_5 += 1) /* same iter space */
    {
        var_22 = (var_3 != 11074574444082535664);

        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            var_23 = (min(var_23, (arr_18 [5] [i_6])));
            var_24 = ((((var_8 ? var_9 : -8807301459560186953)) == 12789798907251937436));
            arr_20 [i_6] [i_6] [12] &= (arr_5 [i_5 + 1] [i_5 - 1]);

            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                var_25 = 18446744073709551596;
                var_26 = ((var_2 < (arr_14 [i_5])));
                var_27 = ((!(arr_10 [i_5] [i_6] [i_7] [i_7] [i_6])));

                for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                {
                    var_28 = (arr_22 [i_5] [i_6] [i_7 + 1] [2]);
                    var_29 = (arr_0 [i_5]);
                    var_30 = (((arr_19 [i_5] [i_7 - 1] [i_7]) ? (arr_19 [9] [i_7 - 1] [10]) : (arr_11 [8] [i_7 + 3] [i_7 + 3] [i_8])));
                }
                for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                {
                    var_31 = 9223372036854775807;
                    var_32 = (((((arr_15 [i_6] [i_5]) % (arr_11 [i_5] [i_5] [i_9] [i_5]))) > (((~(arr_17 [i_9] [2]))))));
                }
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    var_33 = (48 / (arr_6 [i_5] [i_6]));
                    var_34 = ((var_9 ? (arr_7 [i_5 + 1] [i_5 + 1] [i_6] [2]) : -17082882782430244912));
                }
            }
        }
    }
    #pragma endscop
}
