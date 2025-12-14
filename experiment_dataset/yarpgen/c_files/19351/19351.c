/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((!((((var_10 % var_13) / ((((arr_0 [i_0]) * (arr_0 [i_0])))))))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                var_16 += (arr_0 [10]);

                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    var_17 = (min(var_17, ((19728 ? 11365083962179725956 : 485358351693677680))));
                    var_18 = var_0;
                }
                arr_9 [i_0] [14] [i_0] = (arr_5 [i_0] [i_0] [9] [i_0]);
            }
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_19 = (max(var_19, ((((arr_6 [i_1] [i_1 - 1] [i_1 - 1]) ? (arr_1 [i_1 - 1] [i_1 - 2]) : (arr_11 [14] [i_1] [i_4]))))));
                    arr_17 [i_0] [i_0] [i_0] [i_1] [i_4] [i_0] = ((~((var_13 ? (arr_13 [1] [1] [1] [i_5]) : (arr_16 [i_5] [i_0] [i_0])))));
                }
                var_20 = (min(var_20, var_14));
            }
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                arr_21 [9] [i_1 - 2] [9] [i_0] = (((arr_13 [i_0] [i_1 + 1] [i_6] [i_1 - 2]) > var_2));
                arr_22 [i_1] [i_0] = ((!(arr_14 [i_1 + 1] [i_1 + 1])));
                var_21 = (max(var_21, (((((arr_16 [i_6] [i_6] [i_0]) != (arr_18 [i_0] [i_0] [i_6])))))));
                var_22 = 8388607;
                arr_23 [i_0] [i_1] [i_6] [i_0] = (((arr_3 [i_1 - 2] [i_0]) ? (arr_3 [i_1 - 1] [i_0]) : (arr_3 [i_1 - 2] [i_0])));
            }
            arr_24 [7] [i_0] [i_0] = 9152764075448369547;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    {
                        arr_31 [0] [0] [0] [i_0] |= (((arr_5 [i_1] [12] [i_1 - 1] [i_1 - 1]) <= 1));
                        arr_32 [i_0] = (((arr_11 [i_7] [i_7] [i_0]) < (arr_11 [i_0] [i_0] [i_0])));
                        var_23 = (max(var_23, var_12));
                    }
                }
            }
        }
        arr_33 [10] [i_0] &= min((min(((((arr_25 [i_0] [i_0] [2] [i_0]) && var_6))), (arr_29 [i_0] [4] [7]))), (arr_20 [10] [i_0] [i_0] [14]));
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        var_24 = (max(var_24, (((((max(var_8, (arr_36 [i_9])))) ? var_15 : ((((!(arr_36 [i_9]))))))))));

        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_25 = (arr_34 [i_9] [i_9]);
            var_26 = (((!((max(var_0, var_8))))));
        }
        arr_40 [i_9] = ((((min((arr_34 [i_9] [i_9]), (arr_34 [i_9] [i_9])))) ? (((~(arr_34 [i_9] [i_9])))) : (-1 ^ 14673575465457281051)));
    }
    var_27 = ((!(var_9 & var_5)));
    #pragma endscop
}
