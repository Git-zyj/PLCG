/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_17 = (min(((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [3])))), (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = ((!(arr_0 [i_0])));
            var_18 ^= ((min(1067906676, (var_0 || var_6))));
            arr_7 [i_1] [i_1] = (arr_1 [i_0] [i_1]);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        {
                            arr_16 [i_1] [i_1] = (((min((((!(arr_3 [i_3] [i_4])))), (arr_5 [i_4 - 1] [i_4 - 1] [i_4 - 1]))) > (((((arr_11 [4] [4] [i_3] [i_0] [7] [10]) ? var_0 : (arr_5 [i_0] [14] [6]))) & (((min((arr_8 [i_0] [i_4] [i_2] [i_1]), (arr_4 [i_0] [7])))))))));
                            arr_17 [i_1] [17] [17] [i_1] [i_1] = (arr_10 [i_2] [5] [17] [i_2] [i_1] [i_2]);
                            var_19 = (((((20 ? (arr_12 [12] [i_1] [i_4 - 1]) : (arr_12 [i_4] [i_1] [i_4 + 1])))) ? (max((arr_14 [i_4] [i_4] [i_1] [i_4 + 1] [i_4 + 1] [i_4] [8]), (((arr_8 [i_0] [i_1] [i_3] [i_1]) ? var_9 : var_16)))) : ((((var_8 + (arr_0 [i_1]))) + 82))));
                            arr_18 [i_1] = (i_1 % 2 == 0) ? ((max((((((((1964461840 ? var_5 : var_12)) + 2147483647)) >> (((min((arr_12 [i_1] [i_1] [i_4 + 1]), (arr_1 [i_0] [i_0]))) - 1402715350))))), (min((arr_9 [i_4 - 1] [i_4] [i_4]), (max(var_6, var_15))))))) : ((max((((((((1964461840 ? var_5 : var_12)) + 2147483647)) >> (((((min((arr_12 [i_1] [i_1] [i_4 + 1]), (arr_1 [i_0] [i_0]))) - 1402715350)) - 19372547))))), (min((arr_9 [i_4 - 1] [i_4] [i_4]), (max(var_6, var_15)))))));
                        }
                    }
                }
            }
            arr_19 [i_1] [8] = 90;
        }
        var_20 ^= (((max((max(238, (arr_12 [i_0] [i_0] [i_0]))), (var_10 <= 3227060622)))) ? (min((~var_16), ((min((arr_9 [i_0] [i_0] [i_0]), var_13))))) : ((((arr_2 [i_0]) >> (min((arr_14 [i_0] [i_0] [i_0] [8] [8] [i_0] [2]), (arr_13 [i_0])))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {
                    arr_27 [i_0] [i_5] [i_6] = (min((((!(arr_20 [i_5])))), (((arr_0 [i_5]) * 47366))));
                    arr_28 [i_5] [i_5] [11] [i_6] = ((!(((((!(arr_23 [i_0] [i_5] [i_6]))) ? var_4 : (arr_3 [i_0] [i_6]))))));

                    for (int i_7 = 2; i_7 < 16;i_7 += 1)
                    {
                        var_21 = (max(var_21, ((min((((var_8 ? (arr_23 [12] [i_5] [i_6]) : (arr_5 [i_0] [i_0] [7])))), ((((arr_15 [i_0] [i_0] [5] [i_0] [i_0] [i_0]) ? var_14 : ((min(var_9, (arr_20 [i_0]))))))))))));
                        arr_32 [i_0] [i_0] [i_5] = arr_22 [i_5];
                        var_22 = (((((arr_22 [i_5]) ? (var_11 >= var_3) : (arr_31 [i_0] [i_5] [i_6] [i_7]))) + (max((arr_8 [i_5] [i_6] [i_5] [i_5]), (((arr_26 [i_0] [i_5] [i_0]) ? var_14 : -35))))));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
    {
        arr_36 [i_8] [10] = ((!((min((var_4 ^ var_7), ((min(27973, (arr_15 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))))))));
        arr_37 [i_8] = ((var_2 ? (arr_22 [i_8]) : ((max((arr_30 [14] [i_8] [i_8] [i_8]), (arr_22 [i_8]))))));
    }
    var_23 &= var_14;
    #pragma endscop
}
