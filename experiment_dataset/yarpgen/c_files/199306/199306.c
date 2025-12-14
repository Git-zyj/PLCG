/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_2] = (max(((min((arr_6 [i_1]), (arr_8 [i_0])))), (((arr_6 [i_1]) - (arr_8 [i_0])))));
                    var_14 += min(((min(1, 1))), ((1 - (1 != 1))));
                }
            }
        }
    }

    for (int i_3 = 3; i_3 < 15;i_3 += 1) /* same iter space */
    {
        var_15 = (min((min((arr_13 [i_3 - 2] [i_3 + 1]), (arr_12 [i_3] [i_3 + 3]))), (((!(arr_13 [i_3 + 1] [i_3 + 2]))))));
        var_16 = (arr_11 [i_3]);
    }
    for (int i_4 = 3; i_4 < 15;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] [i_4] = ((max((arr_15 [i_4] [i_4 - 3]), (((arr_16 [i_4]) ? (arr_15 [i_4] [i_4 - 2]) : var_5)))));
        var_17 += var_7;
        arr_18 [i_4] [i_4] = -1056;
        arr_19 [i_4] = (max(1, 1));
    }
    for (int i_5 = 1; i_5 < 24;i_5 += 1)
    {
        var_18 = (min(var_18, (((((min(((min(0, 1))), (max(1172211791, var_10))))) ? ((((min(var_12, var_5))) ? (arr_20 [i_5 + 1]) : 0)) : ((((31744 & 1) ? (arr_21 [i_5 - 1]) : ((max((arr_21 [i_5 + 1]), (arr_21 [i_5]))))))))))));
        var_19 = (max(var_7, (arr_20 [i_5])));

        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            var_20 = (((max(3897276416, 1)) >> (((((arr_20 [i_5 + 1]) + (arr_20 [i_5 + 1]))) - 1761079776))));
            var_21 = (((1 | 1802819375104559697) && (arr_20 [i_5 - 1])));
            var_22 = (((min((arr_23 [i_5] [i_5]), (((1 ? 1 : 1))))) + (((max((((1 != (arr_20 [i_6])))), (arr_21 [i_5 + 1])))))));
        }
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            arr_26 [i_5 + 1] [i_7] = (arr_25 [i_5] [i_5]);
            arr_27 [i_5 - 1] [i_7] = (max(3144363601, (arr_20 [i_7])));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        {
                            arr_35 [i_9] = (min(((min(1, 101))), (max((arr_28 [i_5 + 1] [i_5 + 1] [i_5 + 1]), var_8))));
                            arr_36 [i_10] [i_9] [i_8] [i_7] [i_9] [i_5] = (min((((arr_20 [i_5 - 1]) ? (arr_20 [i_5 + 1]) : (arr_20 [i_5 - 1]))), (min(var_9, (arr_20 [i_5 - 1])))));
                            var_23 = max(-2, 84);
                            var_24 += ((34 ? (max(var_0, (((arr_21 [i_10]) ? var_4 : 1)))) : (((((((arr_23 [i_9] [i_10]) & (arr_32 [i_5] [i_7] [i_8] [i_8] [i_10])))) ? 1 : ((min(1, 1))))))));
                        }
                    }
                }
            }
            arr_37 [i_5] [i_5] [i_5] = (((min((arr_24 [i_5] [i_5 + 1]), var_1)) / var_8));
            var_25 = var_12;
        }
        var_26 = (max(var_26, ((((1 != 1) ? (1 < 1) : ((max(1, (arr_28 [i_5 - 1] [i_5 - 1] [i_5 - 1])))))))));
    }
    var_27 = (min(1, (min(1, 27136))));
    var_28 = (max(var_10, var_8));
    #pragma endscop
}
