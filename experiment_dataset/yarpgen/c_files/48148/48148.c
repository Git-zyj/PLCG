/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_2 [4] = ((-32764 ? (arr_1 [i_0 - 3]) : -472178268));
        arr_3 [i_0] = arr_1 [i_0 - 2];
        arr_4 [i_0 - 1] = (((arr_0 [i_0 - 2]) >= (arr_0 [i_0 + 1])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_11 [i_1] = (arr_7 [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] = ((((var_9 && (arr_15 [i_1] [i_3] [i_2] [i_1] [i_1])))) + (!var_6));
                                arr_17 [i_1 + 3] [i_3] [i_1] [i_1 + 3] [i_0] = (--472178268);
                                arr_18 [i_0] [i_0] [i_4] [i_0] [i_0] = (((var_10 ? var_9 : 3641729459186646598)));
                            }
                        }
                    }
                    arr_19 [i_0] [i_1] [i_1] = 65531;
                }
            }
        }
    }
    for (int i_5 = 4; i_5 < 9;i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] = (max(((min((arr_0 [i_5]), ((9223372036854775789 ? (arr_0 [i_5]) : (arr_1 [i_5])))))), var_15));
        arr_23 [i_5] = ((((((arr_15 [i_5] [i_5] [i_5] [i_5] [i_5]) ? (arr_15 [i_5 - 3] [i_5] [i_5] [i_5] [i_5]) : (arr_14 [i_5 - 4] [i_5] [i_5 + 2] [i_5] [i_5 - 4])))) ? (arr_21 [i_5] [i_5]) : (((arr_21 [i_5] [i_5]) ? var_19 : var_3))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_26 [i_6] = ((((max((arr_25 [i_6] [i_6]), var_8))) ? (arr_24 [i_6] [i_6]) : -1508775973));
        arr_27 [i_6] = -6886936436469344684;
    }

    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        arr_31 [i_7] = (((arr_30 [i_7]) ? 60738 : (((6886936436469344672 ? (var_15 ^ var_13) : ((max(var_1, -32761))))))));
        arr_32 [i_7] [i_7] = ((((max(281474976710656, (arr_30 [i_7])))) && ((max((arr_24 [i_7] [i_7]), ((var_16 ? 17320 : 65531)))))));

        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            arr_37 [i_7] [i_8] [i_8] = -1345742432;
            arr_38 [i_8] [10] [i_7] = (arr_25 [i_8] [i_7]);
        }
    }
    var_21 = (((!var_0) && 0));
    #pragma endscop
}
