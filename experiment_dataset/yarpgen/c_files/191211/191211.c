/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((+(max((var_5 <= var_12), ((var_4 ? var_12 : var_11))))));
    var_18 = (min(((((((!(-9223372036854775807 - 1))))) * ((var_4 ? var_4 : var_12)))), (!var_9)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, (arr_1 [i_0] [i_2 - 1])));
                    var_20 = ((~(((!(arr_1 [i_2 + 1] [i_2 - 1]))))));
                    var_21 ^= (min((((arr_1 [i_1 - 1] [i_2 + 1]) && (arr_0 [i_0] [i_2 - 2]))), ((!(arr_5 [i_1 - 1] [i_1] [8] [i_2 - 1])))));
                }
            }
        }
        var_22 = (((~(arr_6 [i_0] [i_0] [i_0] [i_0]))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 7;i_4 += 1)
            {
                {
                    var_23 = (max(var_23, 28));
                    var_24 = ((((max((arr_11 [i_4 + 3] [i_4 + 4] [i_3]), (arr_2 [i_3])))) / ((min((arr_5 [i_4] [i_4] [i_4] [i_4 + 4]), (arr_5 [i_4] [i_4] [i_3] [i_4 - 1]))))));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_25 = ((+((((arr_6 [9] [i_5] [i_5] [i_5]) || (arr_5 [i_5] [i_5] [i_5] [i_5]))))));
        var_26 = (min((((~(arr_14 [1] [i_5])))), (arr_10 [i_5] [i_5] [i_5] [i_5])));
        var_27 = (min(var_27, ((((((((~(arr_7 [i_5]))) % (arr_15 [i_5] [i_5])))) ? ((((((arr_5 [6] [i_5] [0] [i_5]) ? (arr_2 [0]) : (arr_10 [9] [i_5] [i_5] [9])))) ? (arr_15 [10] [10]) : ((~(arr_12 [i_5]))))) : (((~(arr_6 [i_5] [i_5] [i_5] [i_5])))))))));
        var_28 = ((+((max((arr_10 [i_5] [i_5] [i_5] [i_5]), (arr_10 [i_5] [i_5] [i_5] [i_5]))))));
    }
    /* LoopNest 2 */
    for (int i_6 = 3; i_6 < 8;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 10;i_7 += 1)
        {
            {
                arr_22 [i_6] = ((((!(arr_21 [i_6 + 3] [i_7 - 1]))) ? ((((!(arr_21 [i_6 - 1] [i_7 + 2]))))) : (((arr_21 [i_6 + 4] [i_7 + 1]) ? (arr_21 [i_6 - 3] [i_7 + 1]) : (arr_21 [i_6 + 3] [i_7 + 2])))));
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 4; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            {
                                var_29 = (min(var_29, -2371514246231582760));
                                var_30 = (arr_21 [i_7 - 1] [i_8]);
                                var_31 = (arr_17 [i_6]);
                                var_32 = ((arr_27 [i_6 + 3] [i_7 + 1]) ? (max((arr_24 [10] [i_9 + 1] [i_8] [i_9]), 4294967295)) : ((max((arr_18 [8] [0]), (arr_21 [i_8] [i_7 - 1])))));
                                var_33 = (arr_29 [i_6 + 4] [i_7 + 2]);
                            }
                        }
                    }
                }
                var_34 -= ((+(max((arr_19 [i_6 + 3] [i_6 + 1]), (arr_27 [i_6 - 2] [i_6 - 2])))));
            }
        }
    }
    #pragma endscop
}
