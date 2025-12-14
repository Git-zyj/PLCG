/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_10 = (!124);
        arr_2 [i_0] [i_0] = -8716237688253366212;

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    {
                        var_11 = (((arr_9 [i_3 + 1] [i_0] [i_0] [i_3 + 1]) ? (arr_11 [i_3 - 1] [i_1] [i_0] [i_1] [i_0 + 2] [i_1]) : (var_8 != 1)));

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_12 = (((((var_8 ? var_3 : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (arr_16 [i_0 + 1] [i_1] [i_0] [i_3] [i_4]) : (arr_9 [i_0 + 1] [i_0] [i_0] [i_0])));
                            var_13 = (arr_8 [i_0] [i_1] [i_0] [i_3 + 3]);
                            var_14 = (arr_4 [i_3 + 3]);
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            arr_25 [i_0] [i_1] [i_5] [i_6] [i_0] = ((-(arr_18 [i_7] [i_0] [i_5])));
                            var_15 = (((arr_18 [i_0 - 1] [i_0] [i_0 - 1]) ? var_5 : (arr_18 [i_0 + 1] [i_0] [i_0 + 1])));
                            var_16 = var_4;
                        }
                    }
                }
            }
            var_17 = ((~(var_4 < var_7)));
        }
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            var_18 = (arr_9 [i_0] [i_0] [i_0] [i_8]);
            var_19 = ((var_6 ? -var_2 : (arr_19 [i_0])));
            var_20 += (arr_27 [i_0 + 1] [i_0]);
        }
        var_21 = (arr_1 [i_0]);
    }

    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        arr_32 [i_9] = (arr_31 [i_9]);
        var_22 = ((+(max((arr_28 [i_9] [i_9]), 3677090374))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                {
                    var_23 = (max(var_23, (((((((!(arr_31 [i_10]))) ? var_1 : (arr_35 [i_10] [i_11]))) - var_8)))));
                    var_24 &= ((((((arr_37 [i_9] [i_10]) + var_7))) ? (((arr_37 [i_9] [i_10]) ? (arr_37 [i_11] [i_9]) : (arr_37 [i_10] [i_10]))) : -var_5));
                    var_25 = (arr_33 [i_10]);
                    var_26 = (arr_33 [i_9]);
                }
            }
        }
        arr_38 [i_9] [i_9] = ((((max(var_4, var_1))) << (((min((min((arr_37 [i_9] [i_9]), var_4)), (arr_29 [i_9]))) - 85))));
    }
    var_27 = var_3;
    #pragma endscop
}
