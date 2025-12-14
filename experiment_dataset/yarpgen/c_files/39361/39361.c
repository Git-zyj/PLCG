/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_16 = ((((!(arr_2 [i_0] [i_0]))) ? (min(15166, (((arr_8 [i_0]) ? var_9 : 9173792301333264511)))) : ((((arr_4 [i_2 - 2] [i_2 - 2] [i_2 - 2]) ? (((arr_0 [i_0]) ? var_9 : var_11)) : -41312)))));
                        var_17 = (max(var_17, (((15166 ? ((~(arr_10 [i_2 + 1]))) : ((-(arr_10 [i_2 - 1]))))))));
                        var_18 -= (max((arr_5 [i_2 - 1] [i_1] [i_2 - 1]), (arr_9 [i_1] [i_2 - 2] [i_1] [i_1] [i_2] [i_1])));
                        var_19 = (min(var_19, (((var_10 ? ((((((-(arr_4 [i_0] [i_1] [i_2])))) ? ((var_9 - (arr_10 [i_2]))) : (~1)))) : (arr_2 [i_0] [i_0]))))));
                        arr_11 [i_0] [i_0] [i_2] [i_2] [i_2 - 2] [i_2 - 2] = (min((((arr_0 [i_2 + 1]) ? (arr_0 [i_2 - 2]) : (arr_0 [i_2 + 1]))), var_5));
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] = ((var_7 ? (((min(var_2, var_0)))) : ((((min((arr_10 [i_0]), var_0))) ? (var_13 & 15184) : (arr_0 [i_0])))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_20 -= (~(arr_15 [i_5]));
            var_21 = (max(var_21, (((!(arr_17 [i_5]))))));

            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                arr_21 [i_4] = (!var_4);
                arr_22 [i_4] [i_4] = var_14;
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        {
                            arr_30 [i_4] [i_4] [i_4] [i_4] [17] = ((arr_24 [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1]) ? (arr_24 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]) : (arr_24 [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1]));
                            var_22 = var_10;
                        }
                    }
                }
                arr_31 [i_4] [i_5] [12] |= ((~(arr_18 [1] [i_5] [i_6])));
            }
            arr_32 [i_4] [i_4] = 15167;
        }
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            arr_37 [i_4] = ((((((arr_36 [i_4]) ? 17710 : 0))) ? var_7 : (arr_17 [i_4])));
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        var_23 ^= (var_14 - var_10);
                        arr_44 [i_4] [i_4] = (((arr_40 [i_10 + 1] [i_10 + 1] [i_10 + 2]) ? (arr_40 [i_10 + 1] [i_10 - 1] [i_10 - 1]) : var_12));
                    }
                }
            }
            arr_45 [i_4] = (arr_38 [i_4] [18] [i_9] [i_9]);
            var_24 = (((arr_26 [i_4] [i_4]) | (((arr_13 [i_4] [i_4]) ^ var_10))));
        }
        arr_46 [i_4] = ((arr_14 [i_4] [i_4]) ? (arr_18 [i_4] [i_4] [i_4]) : (((arr_26 [i_4] [i_4]) ? (arr_17 [i_4]) : 32767)));
        var_25 -= (arr_39 [i_4] [i_4] [5] [i_4]);
        var_26 += (((((~(arr_26 [i_4] [0])))) ? (arr_20 [i_4] [i_4] [i_4]) : (arr_29 [i_4] [i_4] [i_4] [i_4] [i_4])));
    }
    #pragma endscop
}
