/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 = 65529;

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_15 ^= ((65523 ? (arr_2 [i_0] [i_0]) : (max(var_10, (arr_1 [i_1] [i_1])))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_16 = var_11;
                        arr_11 [i_2] [i_2] [i_2] [i_2] [i_0] = (((((-(arr_1 [i_0] [i_2])))) && (max((((arr_7 [i_2] [5] [i_2] [i_1] [i_0] [i_2]) > (arr_9 [i_2] [i_1] [i_2] [i_3]))), (6648600689241267960 >= 75)))));
                    }
                }
            }
            arr_12 [i_1] = ((!(~var_11)));
        }
        var_17 = (0 | 6648600689241267960);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                {
                    var_18 ^= (((arr_19 [i_5]) >= (arr_0 [i_5 + 1] [i_5 + 1])));
                    var_19 *= (arr_6 [i_4] [i_4] [i_4] [5]);
                    var_20 = var_10;
                }
            }
        }
        var_21 = ((!((!(arr_21 [i_4] [i_4] [i_4])))));
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_22 = (((arr_0 [i_7] [i_7]) & (((arr_22 [i_7] [i_7]) ? (max(9223372036854775807, var_0)) : -112))));
        arr_26 [1] [i_7] &= ((-((((max(32154, var_7))) ? var_8 : ((max((arr_1 [0] [i_7]), 3)))))));
        var_23 = (((~4) + (max(((8589901824 << (var_12 - 32063))), (arr_22 [i_7] [i_7])))));
        var_24 += (((((max((max((arr_25 [2]), var_0)), (var_1 > 9864))))) | (((((-(arr_8 [8] [12])))) - (max((arr_1 [i_7] [i_7]), (arr_7 [0] [i_7] [i_7] [14] [i_7] [0])))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        arr_29 [i_8] = (((arr_27 [i_8]) & (!var_11)));
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 24;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 23;i_10 += 1)
            {
                {
                    arr_37 [0] [i_9] [i_10] = (((arr_33 [i_9 + 1] [i_9 - 1] [i_9 + 1]) ? (arr_35 [i_9 + 1] [i_9 - 1] [i_9]) : (arr_31 [i_9 + 1] [i_9 - 1] [i_9])));
                    var_25 = (((arr_28 [i_9 - 1]) | var_8));
                    arr_38 [i_8] [i_9] = (((arr_35 [i_9] [18] [18]) ? -62 : (arr_33 [i_9 + 1] [i_9 - 1] [i_10 + 1])));
                }
            }
        }
        arr_39 [i_8] = (((arr_33 [i_8] [0] [i_8]) < var_9));
        var_26 += ((!(arr_34 [i_8] [i_8] [i_8])));
    }

    for (int i_11 = 1; i_11 < 18;i_11 += 1)
    {
        var_27 = ((((((arr_41 [i_11 + 1] [i_11 + 3]) ? (arr_41 [i_11 + 4] [i_11 - 1]) : var_11))) ? ((-(arr_41 [i_11 + 4] [i_11 + 2]))) : ((-(arr_41 [i_11 - 1] [i_11 + 3])))));
        arr_43 [i_11] = var_0;
    }
    #pragma endscop
}
