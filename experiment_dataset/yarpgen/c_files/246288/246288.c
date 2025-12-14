/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [1] [i_2] [i_1] = ((!(var_3 & 458752)));
                            arr_12 [10] [i_1] [i_2] [i_2] [i_3] = ((var_7 ? ((-(arr_8 [i_0] [i_1] [i_0] [i_0] [i_0]))) : (((~(arr_3 [i_0]))))));
                            arr_13 [i_1] [i_1 + 1] [12] [10] [i_3] = ((9 ? 8452714884878267679 : 211));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 14;i_4 += 1)
                            {
                                var_14 = var_3;
                                var_15 = (var_2 / var_8);
                            }
                        }
                    }
                }
                arr_16 [i_1] = var_13;
                arr_17 [i_1] = 8452714884878267679;
            }
        }
    }
    var_16 = ((((var_7 + (8452714884878267679 - 174))) - 247));

    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_17 = (((((~(arr_18 [i_5] [i_5])))) ? ((-2772774612157107476 ? var_1 : (arr_18 [i_5] [i_5]))) : var_12));
        var_18 = (max(var_18, 8452714884878267679));
        arr_20 [i_5] = (((arr_18 [i_5] [i_5]) ? var_13 : var_2));
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    {
                        arr_32 [i_6] [i_9] [i_8] [i_9] = ((((max(((((arr_30 [i_6] [i_6] [6] [i_9] [i_6]) ^ 1708431467))), ((44 ? (arr_14 [i_6] [i_8] [i_8] [i_7] [i_7] [i_6] [i_6]) : (arr_31 [2] [i_7] [i_8] [2] [i_9] [i_9])))))) ^ (((((var_0 ? 209 : 4938))) ? (!var_10) : ((458782 ? 1321414200 : 18446744073709551607))))));
                        var_19 = (arr_23 [i_6] [i_7]);
                        var_20 = var_0;
                        arr_33 [i_8] = (((((+((max((arr_1 [i_6] [i_6]), -97)))))) ? var_2 : (((arr_19 [i_8]) ? -112 : var_12))));
                    }
                }
            }
        }
        var_21 = 61533;
        arr_34 [i_6] [i_6] = (((arr_5 [i_6] [i_6] [i_6]) ? (max((arr_5 [i_6] [2] [2]), (arr_5 [i_6] [i_6] [i_6]))) : ((max(var_2, 150)))));
    }
    var_22 = -var_4;
    #pragma endscop
}
