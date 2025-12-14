/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-((((var_5 ? var_4 : var_0))))));
    var_16 += min((!var_6), var_4);
    var_17 = ((401918620 ? 5 : var_2));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 += (arr_0 [i_0] [i_0]);
        arr_2 [i_0] = (-((1 ? ((max((arr_1 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) : (arr_1 [10] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_19 = (arr_4 [7] [i_1]);

        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {
            var_20 = (~35184367894528);
            arr_8 [11] [i_1] [i_1] = ((((((max(-11149, (arr_6 [i_2] [i_1]))))) <= (((arr_3 [i_1] [20]) ? (arr_7 [i_1]) : (arr_5 [i_1] [i_1]))))));
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
        {
            arr_12 [i_1] [i_3] [i_3] = (((((21706 >> (((arr_10 [i_1] [i_3] [20]) - 6879))))) && ((max((min(8, 48460)), -960040190)))));
            arr_13 [i_1] = 183;
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (!var_8);
                        arr_20 [i_1] [i_1] = max((min(1, -30667)), (min((arr_18 [i_4] [i_4 + 2] [i_4] [i_4 + 2] [3] [i_4 + 1]), (arr_17 [i_1] [i_3] [i_1] [i_4 + 2]))));
                    }
                }
            }
            var_21 = -960040212;
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 2; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        arr_29 [i_6] [i_9] [9] [i_6] [i_6] [i_6] = (!48460);
                        var_22 = (((((arr_1 [i_6] [i_6]) & (arr_11 [i_6] [i_6] [i_6]))) != (arr_21 [i_6])));
                    }
                }
            }
        }
        var_23 = -11171;
        arr_30 [i_6] = (i_6 % 2 == zero) ? ((((((arr_15 [i_6] [i_6] [i_6]) && var_7))) << ((((142751680 ? (arr_24 [i_6]) : (arr_14 [i_6] [i_6] [i_6] [12]))) - 150587875758262280)))) : ((((((arr_15 [i_6] [i_6] [i_6]) && var_7))) << ((((((142751680 ? (arr_24 [i_6]) : (arr_14 [i_6] [i_6] [i_6] [12]))) - 150587875758262280)) + 2761650370186893104))));
        arr_31 [i_6] = ((((arr_6 [i_6] [i_6]) <= (arr_26 [i_6] [10]))));
    }
    for (int i_10 = 1; i_10 < 13;i_10 += 1)
    {
        arr_35 [1] = (max((arr_16 [i_10] [i_10 + 1]), (((((arr_9 [i_10 - 1]) + 2147483647)) >> (((arr_9 [i_10 - 1]) + 18005))))));
        var_24 = 960040190;
        var_25 = (max(var_25, ((((((var_8 >> (((arr_10 [i_10 + 1] [i_10 - 1] [i_10]) - 6882))))) ? ((max((arr_10 [i_10] [i_10] [i_10]), (arr_10 [6] [11] [20])))) : (((arr_10 [i_10 - 1] [i_10] [i_10]) ? (arr_10 [5] [i_10] [i_10]) : (arr_10 [i_10] [i_10] [11]))))))));
        arr_36 [11] [11] = (arr_15 [i_10] [1] [1]);
        arr_37 [i_10] [i_10] = (((arr_0 [i_10] [i_10]) ? (min((((!(arr_6 [i_10] [i_10])))), var_1)) : ((max((arr_33 [i_10] [i_10]), -var_9)))));
    }
    #pragma endscop
}
