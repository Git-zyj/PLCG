/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_11 &= ((((var_0 <= (29 < -29))) || (((arr_1 [i_1]) >= var_7))));
                arr_8 [i_0] [4] [4] = (((arr_3 [i_1]) > (!var_1)));
            }
        }
    }
    var_12 = (max(var_1, var_0));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                var_13 = (max(((-3114816324458100713 ? 23166 : 4591939877509058060)), (((~((~(arr_10 [i_2]))))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        {
                            arr_21 [i_2] [1] [i_5 - 2] = (max((arr_5 [i_2] [i_3] [i_5 - 1]), (max((((var_1 ? -118 : (arr_7 [13] [i_2])))), (max((arr_15 [i_2]), (arr_0 [i_2])))))));
                            arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] = 29;
                            var_14 = ((35769 ? -50 : 6641));
                            var_15 = (((arr_7 [i_5 + 3] [i_5 - 2]) ? var_2 : ((~(~1058287347)))));
                        }
                    }
                }
                arr_23 [i_2] = max((-2693896988203308369 || 21), -2693896988203308369);
                arr_24 [i_2] = ((!(((((var_6 ? (arr_12 [i_2]) : var_10)) + (arr_15 [i_3]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                {
                    arr_33 [i_6] [i_7] [i_6] [i_7] = ((~(((arr_25 [i_8]) & var_5))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            {
                                arr_39 [i_6] [i_10] [i_8] [5] [i_10] = ((((((max((arr_26 [5]), (arr_19 [i_6] [i_7] [i_8] [i_9] [i_10])))) * -var_5)) / 241));
                                arr_40 [i_6] [i_10] [i_6] [i_6] = var_1;
                                var_16 = (((((max((arr_20 [i_10] [i_9] [i_9] [5] [i_7] [i_6]), var_4))) | (((arr_30 [i_6]) | 39)))) < ((((max(37, (arr_32 [i_7] [10] [i_7])))) ? (140737488355327 > 1) : ((min(58893, 39))))));
                                var_17 = ((((arr_38 [i_10] [i_9] [i_8] [1] [i_6] [i_6]) >= var_10)));
                                var_18 *= (((((!(arr_0 [i_6])))) | var_9));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
