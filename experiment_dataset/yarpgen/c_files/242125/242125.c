/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    var_11 = -9;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((~(((arr_0 [i_0] [i_0]) ? (var_6 | var_6) : (((arr_2 [i_0] [i_0]) ? 1 : 1))))));
        var_12 = ((!((23 && (!1)))));
        var_13 = var_9;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        arr_15 [i_1] [i_2] = (140737484161024 | 2282525802);
                        var_14 ^= (arr_12 [i_4] [i_3] [i_3] [i_1]);
                        arr_16 [i_2] = ((var_9 ? (((arr_14 [i_4]) ? ((max((arr_14 [i_1]), var_1))) : ((var_0 ? var_5 : var_8)))) : var_8));
                        var_15 = ((~((max((arr_12 [i_2] [i_2] [i_2 - 1] [i_2 - 1]), (arr_11 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1]))))));
                        arr_17 [i_2] [i_2] [i_2] [i_2] = (((((!(arr_8 [i_2 - 1] [i_2 + 2])))) | 1));
                    }
                }
            }

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_16 = 4;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_17 = (((!(arr_21 [i_1] [i_2] [i_6] [i_7]))) ? ((max((arr_8 [i_7 + 1] [i_7 + 1]), (arr_8 [i_7 - 1] [i_7 + 2])))) : -8137);
                            var_18 = ((max(((1 ? (arr_8 [i_6] [i_1]) : var_3)), (0 && -140737484161031))));
                        }
                    }
                }
                var_19 = (!65523);
            }
            var_20 = (min(var_20, var_2));
            arr_25 [i_2] = ((-(((!(arr_4 [i_2 - 1] [i_2 + 1]))))));
        }

        /* vectorizable */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            arr_29 [i_1] = ((~(arr_8 [i_1] [i_8])));
            arr_30 [i_1] = (arr_8 [i_1] [i_1]);

            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                arr_34 [i_1] [i_8] &= (arr_19 [i_8] [i_9]);
                var_21 ^= (((arr_13 [i_1] [i_8] [i_9]) + -242));
                var_22 = (arr_26 [i_1] [i_9] [i_9]);
            }
            var_23 = (~312118394562024717);
        }

        /* vectorizable */
        for (int i_10 = 1; i_10 < 23;i_10 += 1)
        {
            arr_38 [i_10 + 1] [i_1] = (((((var_7 ? (arr_10 [i_1] [i_10] [i_1]) : (arr_21 [i_1] [i_1] [i_1] [i_10])))) ? ((-(arr_23 [i_1] [i_1] [i_10] [i_10] [i_10]))) : ((var_8 ? 1 : (arr_36 [i_1] [i_10])))));
            var_24 = (((arr_27 [i_1] [i_1] [i_10 - 1]) && var_1));
        }
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        var_25 ^= ((((max((34118 * 1), (arr_40 [4])))) || (arr_40 [4])));
        var_26 = (max(1, 1));
        arr_41 [i_11] = (arr_40 [i_11]);
        var_27 = (max(((~(2 | 7613))), (!var_9)));
    }
    var_28 = (min(var_28, (((!((max((1 | var_9), ((var_6 ? var_9 : var_2))))))))));
    #pragma endscop
}
