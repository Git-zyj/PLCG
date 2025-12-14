/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((((((var_6 ? var_3 : var_15))) ? -var_14 : var_7)), var_10));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 *= (max(-45, 8));
        var_19 = ((-(max((((arr_2 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0]))), (arr_2 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    arr_14 [i_2] [i_1] [i_1] [17] = (min(28, (((-(arr_7 [i_3]))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_20 = (!-9223372036854775787);
                                arr_20 [i_1] [i_1] [i_1] [i_4] [i_1] = ((((((arr_3 [i_1 + 1]) ? (arr_3 [i_1 - 1]) : (arr_3 [i_1 - 1])))) ? ((((((arr_17 [i_3] [i_4] [i_5]) ? (arr_9 [i_1]) : (arr_2 [i_1])))) ? (((arr_1 [1]) ? (arr_0 [i_3] [i_1]) : (arr_1 [i_2]))) : ((((!(arr_8 [i_3] [i_2] [i_1 - 1]))))))) : ((((!((min((arr_13 [1] [i_3] [i_5]), (arr_19 [i_1 - 1] [i_1 + 1] [i_2] [i_1 - 1] [i_1 - 1] [i_5]))))))))));
                            }
                        }
                    }
                }
            }
        }
        var_21 += (((-((~(arr_0 [i_1] [i_1]))))));
        var_22 = (min(var_22, (((max((arr_6 [0] [0]), (min((arr_6 [i_1] [1]), (arr_19 [i_1] [i_1] [i_1] [2] [i_1] [2])))))))));
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        arr_23 [i_6] [i_6] = ((~(max((((arr_7 [i_6]) ? (arr_3 [i_6]) : (arr_2 [i_6]))), (((!(arr_11 [i_6] [i_6] [i_6]))))))));
        arr_24 [i_6] = ((-(((((~(arr_10 [i_6] [i_6])))) ? (max((arr_16 [i_6] [i_6] [i_6] [i_6] [i_6]), (arr_7 [i_6]))) : ((max((arr_16 [i_6] [i_6] [4] [i_6] [i_6]), (arr_18 [i_6]))))))));
    }
    var_23 = (min(31, (~-3481641117019349831)));
    var_24 = (~var_1);
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 7;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 10;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 8;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        {
                            var_25 = ((((min((arr_13 [i_8] [i_8 + 1] [i_8 + 1]), (min(5, (arr_17 [i_7] [i_8 - 1] [i_8 - 1])))))) ? (((!((max((arr_0 [i_7 + 4] [i_7 + 4]), (arr_10 [i_8] [i_7]))))))) : (arr_8 [i_7] [i_8] [i_9 + 2])));
                            arr_34 [i_7 + 1] [i_9] [4] = (min((((((-(arr_32 [i_7] [i_8] [i_9 + 3] [i_9 + 3])))) ? (min(24, 3533506511)) : (arr_21 [i_7 + 2] [i_9]))), (((+(((arr_1 [i_7 + 2]) ? (arr_7 [2]) : (arr_15 [i_9] [i_9] [i_9 + 1] [i_10] [i_10] [i_7 - 1]))))))));
                        }
                    }
                }
                var_26 = (min(12554521110673995060, -67));
                arr_35 [i_7 + 1] [i_8] = (arr_30 [i_7] [i_7] [i_8] [i_8]);
                arr_36 [i_8 - 1] = ((~(max(-3481641117019349821, 0))));
                arr_37 [i_7] [i_7] = (~-1);
            }
        }
    }
    #pragma endscop
}
