/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [1] [i_0] [i_0] &= (~1);
                                var_18 &= (((((-(arr_1 [1] [1])) - (((arr_9 [i_0] [i_1] [i_3 + 1] [i_4]) ? (arr_0 [i_2]) : (arr_13 [i_0] [i_0] [i_2] [i_0] [i_4])))))));
                                var_19 = ((1 | ((((arr_11 [i_3 + 1] [i_3] [i_3] [1] [i_3 + 1]) <= (arr_13 [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1] [i_3 + 1]))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        arr_17 [i_5] [i_1] [i_1] [0] [i_0] &= ((((!(arr_4 [i_0] [i_1] [1]))) ? (((!(arr_16 [i_0] [i_1] [i_2] [i_5])))) : (1 & var_5)));
                        var_20 += (1 < var_7);
                        var_21 -= (1 != (arr_4 [i_2] [i_5 - 1] [1]));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_21 [i_1] [i_2] [i_2] [i_2] = arr_0 [i_0];
                        var_22 = (1 == (arr_8 [i_0] [i_2]));
                        var_23 = min((1 && 1), 0);

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_24 += ((-(arr_2 [i_0] [i_0])));
                            var_25 = (max(var_25, (((+(((arr_16 [i_0] [i_0] [i_6] [i_0]) * (arr_3 [i_2] [i_1] [i_2]))))))));
                            arr_24 [i_0] [i_2] [i_1] [i_6] [i_2] = ((((arr_19 [i_1] [i_1] [i_2] [i_7]) <= (arr_19 [i_1] [i_1] [i_2] [i_6]))) || ((((min((arr_6 [i_6] [i_6]), (arr_12 [i_0] [i_1] [i_2] [1] [i_7])))) < (arr_10 [i_0] [i_0] [i_0]))));
                            var_26 = (min(var_26, var_8));
                        }
                        var_27 = (max(var_27, (arr_5 [i_1])));
                    }
                    var_28 = (max(var_28, ((((arr_6 [i_0] [1]) ? (~var_8) : (1 >= 1))))));
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 0;i_8 += 1)
    {
        var_29 = (((-(arr_27 [i_8 + 1] [i_8 + 1]))) >= ((((((arr_26 [i_8]) || 1)) && (~1)))));
        var_30 += var_2;
        var_31 = (max(var_31, (((~(((arr_27 [i_8] [i_8]) ? (0 - 1) : ((1 ? 1 : 1)))))))));
        var_32 ^= var_12;
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_33 = (max(var_33, ((min((arr_5 [i_9]), (((arr_2 [i_9] [1]) + (1 + 1))))))));
        arr_30 [i_9] = (!var_8);
        var_34 += ((+((+((min((arr_15 [i_9] [i_9] [i_9] [i_9] [1] [i_9]), 0)))))));
    }
    var_35 ^= var_10;
    #pragma endscop
}
