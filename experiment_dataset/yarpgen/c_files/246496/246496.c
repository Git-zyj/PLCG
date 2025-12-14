/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    var_15 = (((min(var_12, var_11))) <= var_0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [15] [15] [i_0] = (((((((var_5 ? (arr_2 [i_0]) : (arr_1 [i_0])))) % (max(0, var_3)))) | (((max((arr_2 [i_2]), (arr_3 [i_0] [i_1] [i_2])))))));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_11 [i_0] [13] [1] [i_0] = 187;
                        arr_12 [i_0] [i_1] [i_2] [i_2] = (min(((65516 - (arr_6 [i_0] [i_1] [i_2] [i_3]))), (arr_6 [i_3] [i_1] [i_2] [14])));
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        arr_15 [i_1] [i_2] = (min((arr_2 [15]), (((((-(arr_5 [i_0])))) ? ((min(24, var_11))) : ((91 + (arr_9 [10] [11] [i_1] [11] [i_4])))))));
                        arr_16 [i_0] [i_2] [i_4] = ((var_1 / (arr_10 [i_0] [i_0] [i_0] [1])));

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_20 [i_0] [i_2] [i_0] [i_0] [i_0] = (((arr_10 [i_5] [i_4] [i_1] [4]) + (arr_19 [i_0] [i_2] [i_0] [i_0])));
                            arr_21 [i_0] [i_0] [i_0] = ((((min((arr_19 [i_0] [i_1] [i_4] [i_4]), var_7))) | (max((max(var_3, 18446744073709551615)), (min((arr_3 [i_0] [i_1] [i_1]), var_2))))));
                            arr_22 [i_0] [i_0] [i_1] [8] [10] [i_5] [i_5] = (min((arr_10 [i_0] [i_1] [9] [i_5]), (min((max((arr_14 [i_2] [14]), (arr_8 [i_0] [i_0] [i_5] [i_4] [i_5] [i_5]))), (arr_3 [i_0] [i_4] [i_5])))));
                            arr_23 [i_1] [i_1] = ((((!(arr_8 [i_5] [i_4] [i_2] [i_1] [i_0] [i_0]))) ? (arr_13 [i_4] [i_5]) : (arr_3 [i_0] [i_1] [i_5])));
                            arr_24 [i_0] = (min(36364, (arr_1 [i_1])));
                        }
                        arr_25 [i_0] [i_0] [10] = ((max((arr_18 [i_1] [i_1] [i_2] [i_2] [i_4]), var_0)));
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        arr_28 [i_2] [5] [9] [i_2] [i_1] [i_0] |= arr_18 [i_0] [i_1] [i_0] [i_2] [i_6];
                        arr_29 [i_0] [i_1] = (arr_2 [i_0]);
                    }
                    arr_30 [i_0] = (arr_0 [2] [i_1]);
                    arr_31 [i_0] [i_1] [11] = (max((((var_4 && ((min(577261929, var_6)))))), (min((arr_3 [i_0] [i_1] [i_2]), ((((arr_2 [i_1]) ^ (arr_26 [i_0] [i_1] [i_0] [i_2]))))))));
                }
            }
        }
    }
    #pragma endscop
}
