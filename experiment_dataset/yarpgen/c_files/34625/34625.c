/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0 + 1] = (((((arr_3 [i_1] [i_1 + 1] [i_1 - 1]) ? ((((arr_3 [i_0] [i_0 - 1] [i_0]) ^ 99))) : ((3752831222571745529 ? (arr_0 [i_0]) : var_6)))) ^ ((((((arr_3 [i_1] [i_1] [i_0]) ? 63 : 1177170597)) & (arr_2 [i_0] [i_1 + 1]))))));

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_18 ^= ((!((!(((15272895993865869262 + (arr_7 [i_2] [i_2] [i_2] [i_0]))))))));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_11 [i_1] [i_1] [i_0 + 1] = 1093517175;
                        var_19 = (((((-9022118407307314138 ? 1447144841 : 859848365))) ? 8063157336075457328 : 73));
                        var_20 = (max(var_20, var_15));
                    }
                }
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    var_21 ^= (((arr_14 [i_4] [i_0] [i_0]) ? (arr_10 [i_1 + 1] [i_1 + 1] [i_0 - 1] [i_0 - 1]) : (((((~1582206737) != var_1))))));

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        arr_18 [i_5] [i_4] [i_0] [i_0] = (41979 > -12124);

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            arr_22 [16] |= (((arr_17 [i_0 - 1] [i_0 - 1] [i_0] [i_0]) ? -1018508395 : var_16));
                            arr_23 [i_5] [i_5] [i_6] [i_5] [i_5] = -3857074611132107041;
                            arr_24 [i_6] [i_6] = ((-((((((arr_1 [i_0 - 1]) - (arr_10 [i_6] [i_5] [i_1] [i_0])))) ? (arr_1 [i_0 + 1]) : ((1 ? 4294967295 : var_11))))));
                        }

                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_7] = (((90 ? 8 : var_5)));
                            arr_28 [i_7] [i_5] [i_4] [i_1] [i_0] = (max((arr_20 [i_0] [i_1] [10]), (((!(arr_13 [i_0 - 1]))))));
                            arr_29 [i_0] [i_1 - 1] [i_4] [i_1] = ((385216134 ? 2236277643 : 0));
                        }

                        for (int i_8 = 2; i_8 < 22;i_8 += 1)
                        {
                            var_22 = ((var_7 >= (((arr_10 [i_4] [i_8 - 1] [i_8] [i_8 - 1]) ? (arr_17 [i_0] [i_0] [i_4] [i_4]) : (((arr_31 [i_4]) * var_2))))));
                            var_23 &= arr_15 [i_1 + 1];
                        }
                    }
                    for (int i_9 = 0; i_9 < 0;i_9 += 1)
                    {
                        arr_34 [i_4] = (arr_14 [i_0] [i_0] [i_0]);
                        var_24 = (((var_1 ? -1559425816 : ((8667089057426986211 + (arr_20 [i_1 - 1] [i_1 - 1] [0]))))));
                        var_25 = (((((arr_2 [i_0 - 1] [i_1 - 1]) >= (arr_2 [i_0 - 1] [i_1 - 1]))) ? (arr_2 [i_0 - 1] [i_1 - 1]) : (arr_2 [i_0 + 1] [i_1 - 1])));
                        var_26 = (min(var_26, var_11));
                    }
                }
                arr_35 [i_0 - 1] [i_1] |= (((arr_8 [i_1 - 1] [i_0 + 1]) * (((((arr_2 [i_1 + 1] [i_0 - 1]) && (arr_2 [i_1 + 1] [i_0 - 1])))))));
            }
        }
    }
    #pragma endscop
}
