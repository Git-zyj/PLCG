/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (((~(((!(arr_3 [i_0] [i_1] [i_1])))))))));
                    arr_6 [i_0] [i_1] [i_1] [i_0] = (((arr_2 [i_0] [i_1] [i_2]) ? (((min((arr_4 [i_0] [i_0] [9] [i_0]), var_6)) * (((((arr_4 [i_0] [i_0] [i_0] [i_0]) == (arr_1 [i_0]))))))) : (((-((min((arr_4 [i_2] [i_2] [i_1] [i_0]), (arr_5 [i_0])))))))));
                }
            }
        }
    }
    var_17 = var_4;
    var_18 = var_7;
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            {

                /* vectorizable */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    arr_15 [i_5] [i_5] [i_4] = arr_7 [i_4 - 1] [i_5];
                    var_19 -= ((arr_10 [i_3 + 1]) / (arr_10 [i_3 + 1]));
                    arr_16 [i_4] = 5681;
                    arr_17 [i_3] [i_4 - 1] [i_5] [i_4] = (((arr_7 [i_4 - 1] [i_3 + 1]) ? (arr_7 [i_4 - 1] [i_3 + 1]) : (arr_7 [i_4 - 1] [i_3 - 1])));
                }
                for (int i_6 = 2; i_6 < 14;i_6 += 1) /* same iter space */
                {
                    arr_22 [i_3 + 1] [i_4] = max(((((arr_9 [i_3 - 1]) < (arr_9 [i_3 - 1])))), (max((arr_9 [i_3 + 1]), (arr_9 [i_3 + 1]))));
                    arr_23 [i_4] [i_4] [i_4] = ((((((var_11 > (max((arr_13 [i_3] [i_4] [i_3 + 1] [12]), (arr_21 [i_3] [i_3] [i_6 - 1] [i_4]))))))) | (min((min((arr_18 [i_3 + 1] [i_6 + 1] [13]), (arr_18 [i_3 - 1] [i_4 - 1] [i_3 - 1]))), (arr_9 [i_6])))));

                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        arr_26 [i_7] [i_4] [i_4] [i_3] = (max((max((arr_24 [i_3] [i_4] [0] [i_4 - 1] [i_7 - 1] [i_6 - 2]), var_3)), (((+(((arr_10 [i_3]) ? (arr_18 [i_3 - 1] [i_6 - 2] [i_7]) : (arr_20 [i_4]))))))));
                        arr_27 [i_3 + 1] [i_3 + 1] [i_4] [i_7 + 1] = ((((((max((arr_21 [i_3 + 1] [i_4 - 1] [i_6 - 2] [i_4]), (arr_24 [i_3] [i_3] [i_4 - 1] [i_6 - 2] [i_7] [i_4 - 1]))) | (!0)))) ? (arr_8 [i_6 - 1]) : (max((((arr_11 [i_3]) ? var_12 : (arr_11 [i_3]))), (arr_8 [i_3 + 1])))));
                        arr_28 [i_4] [i_4] = (((arr_18 [5] [i_3 - 1] [5]) == ((((arr_21 [i_4] [i_3 - 1] [i_3 - 1] [i_4]) && var_3)))));
                        arr_29 [i_3] [i_4] [i_4] [i_4] = (min((((((arr_25 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_6] [i_6] [i_7 + 2]) & (arr_11 [i_3]))))), (min((arr_13 [i_3 - 1] [i_4 - 1] [i_3 - 1] [i_6 - 2]), ((var_10 / (arr_12 [i_3] [i_4] [i_6] [i_7])))))));
                    }
                    var_20 = (arr_25 [i_3 + 1] [i_4] [14] [i_4 - 1] [i_6] [i_6]);
                }
                for (int i_8 = 2; i_8 < 14;i_8 += 1) /* same iter space */
                {
                    arr_33 [i_3 - 1] [i_4] = (arr_11 [i_3]);
                    arr_34 [i_4] [i_4] [i_4] [i_4] = (-31935 ? (arr_31 [i_3] [i_3 - 1] [i_4 - 1] [i_8 - 2]) : (((var_0 == var_0) ? (min(var_8, var_2)) : (arr_14 [i_8] [i_4 - 1]))));
                    arr_35 [i_3] [i_4] [i_3] [i_8] = (arr_19 [i_4] [i_8 - 1] [i_3 - 1] [i_4 - 1]);
                }
                var_21 *= (((max((max((arr_21 [10] [10] [10] [14]), (arr_31 [i_3] [i_4] [i_4 - 1] [i_4 - 1]))), (((!(arr_14 [i_3] [i_3])))))) >= (arr_21 [i_3] [i_3] [i_4] [1])));
            }
        }
    }
    #pragma endscop
}
