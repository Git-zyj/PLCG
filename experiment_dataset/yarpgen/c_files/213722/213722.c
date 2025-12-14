/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_8, ((((((!(arr_6 [i_4 - 2] [i_1] [i_2 + 1] [i_3]))))) * (max(var_7, var_8))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_3] = ((~(arr_3 [i_0])));
                                arr_16 [1] [i_1] [1] [6] [i_1] [i_1] = (((~(arr_5 [i_4] [i_4 - 1] [i_4 - 1]))));
                                var_16 = 1543323549;
                                var_17 = var_2;
                            }
                        }
                    }
                }
                arr_17 [i_1] [18] [17] = (((min((arr_2 [i_0 + 1] [i_0]), (arr_9 [i_0] [i_0 - 3] [i_0] [i_0 - 3] [i_1]))) == ((min(127, -127)))));

                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    var_18 = ((~(arr_13 [19] [6] [i_5])));

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        arr_22 [i_0] [i_1] [i_6] [i_5] |= ((var_10 > var_3) == (arr_13 [i_0 - 1] [i_1] [i_5]));
                        var_19 = (max(((((arr_6 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0]) == var_13))), ((1 ? 127 : 44941))));
                    }
                    var_20 *= (arr_11 [i_0 - 1] [i_1] [i_1] [14] [i_0 - 1]);

                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        arr_25 [i_0] |= min(127, ((max((arr_8 [i_0 - 4] [i_0 - 3]), var_13))));
                        var_21 = (max(var_21, ((((min(((var_9 << (653700474 - 653700474))), ((var_1 ? (arr_18 [i_7] [i_5] [i_0 - 3] [i_0 - 3]) : 1)))) < ((((arr_1 [i_5]) == (arr_20 [8] [i_0] [i_1] [i_5] [i_5] [i_7])))))))));
                        var_22 += ((((min(44941, 21))) ? (((var_8 == (min(var_9, var_2))))) : ((((var_3 ? -91 : 65512)) * (var_3 == 255)))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 24;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            {
                var_23 = (~65522);
                arr_30 [i_8] [i_8] [i_9] = 2961468619;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 17;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            {
                var_24 = (-((-(arr_24 [i_10 - 1] [i_10] [i_10 + 2] [i_10]))));
                var_25 = ((~(((!(~var_6))))));
            }
        }
    }
    #pragma endscop
}
