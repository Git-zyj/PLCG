/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (((((-(var_12 < var_7)))) ? ((((!var_10) | var_12))) : (arr_1 [i_0 - 2] [1])));

        for (int i_1 = 4; i_1 < 19;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    {
                        var_16 = var_9;
                        var_17 = var_6;

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_18 &= arr_9 [i_0];
                            var_19 = (((((arr_6 [i_1] [i_1 - 2] [i_1 - 3] [i_1]) ? (((!(arr_0 [7])))) : (arr_11 [i_0] [i_0] [i_2])))) ^ (arr_9 [i_0]));
                            var_20 = (((((var_10 / (((arr_10 [i_2]) ? var_7 : var_0))))) ? ((((!(var_15 - var_2))))) : ((var_9 ^ (arr_6 [i_3 - 3] [i_3 - 3] [i_2] [i_2])))));
                            var_21 = (min(var_21, var_7));
                        }
                    }
                }
            }
            var_22 *= (((max(var_4, (arr_8 [i_1 - 2] [i_1 - 3] [i_1] [i_1 - 2] [13] [i_1]))) <= ((max(var_6, (arr_10 [i_0 + 4]))))));
            var_23 = (min(var_23, var_13));
            var_24 = ((!(((((arr_5 [i_0] [i_0] [i_0] [i_0]) | (arr_0 [i_1 - 4]))) < (((min(var_14, var_14))))))));
        }
        for (int i_5 = 4; i_5 < 19;i_5 += 1) /* same iter space */
        {
            var_25 = (max(var_25, ((((max((~var_2), var_12)) == var_15)))));
            var_26 = (arr_4 [i_0]);
        }
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        arr_17 [i_6] [i_6] = (((arr_3 [i_6]) ? var_10 : ((((arr_12 [i_6]) && (arr_14 [10] [i_6]))))));
        arr_18 [i_6] = (max(var_5, ((min((arr_13 [i_6] [i_6]), (arr_13 [i_6] [i_6]))))));

        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            arr_22 [i_6] [i_6] [i_7] = (~((((arr_0 [i_6]) >= -1271469880))));

            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                var_27 = var_13;
                var_28 *= (min((((arr_13 [i_7] [i_8]) ? (arr_13 [i_6] [i_8]) : var_10)), ((max((arr_13 [i_6] [i_6]), var_11)))));
                arr_25 [i_6] [i_6] [i_6] = ((var_9 ? (min(((~(arr_4 [i_6]))), var_8)) : var_10));
                var_29 *= (((min((arr_9 [11]), 2423121686)) + (arr_14 [i_6] [i_6])));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 14;i_10 += 1)
                    {
                        {
                            var_30 = ((~((var_2 - (arr_26 [i_7] [i_6] [i_10 + 1] [i_9] [i_7] [i_7])))));
                            arr_31 [i_8] |= (((((var_3 - var_12) ? (arr_4 [i_9 - 1]) : var_6))) ? var_6 : ((max(((((arr_20 [i_6] [i_7]) < (arr_13 [i_7] [6])))), var_1))));
                        }
                    }
                }
            }
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                arr_35 [i_6] [i_6] [i_6] [i_6] = (arr_23 [i_6]);
                var_31 -= (arr_13 [i_6] [i_7]);
            }
        }
        for (int i_12 = 2; i_12 < 15;i_12 += 1)
        {
            var_32 = var_5;
            var_33 = (min(var_33, (((var_14 ? var_0 : -var_1)))));
            var_34 = ((+(((arr_37 [i_6] [i_12 - 1]) - var_3))));
        }
    }
    var_35 = var_6;
    #pragma endscop
}
