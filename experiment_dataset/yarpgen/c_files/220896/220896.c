/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_19 = ((((-398903165 % (arr_4 [i_0] [i_3] [i_2]))) & (1 % 1)));
                        var_20 &= ((((((arr_0 [i_0 + 2]) != (arr_3 [i_2])))) == (arr_7 [i_0 + 4])));
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_21 &= (arr_14 [i_4] [i_1]);
                        var_22 = arr_7 [i_2];
                        arr_15 [i_0 - 1] [i_1] [i_1] [i_4] = (arr_7 [i_0]);
                        var_23 *= (((((max((arr_5 [3] [3] [i_2]), (arr_2 [i_0 + 3] [i_1])))) & (arr_7 [i_0]))) * ((((arr_12 [i_4] [19] [i_4] [i_4] [i_4] [i_4]) >= ((((arr_6 [i_4] [i_2] [i_1]) || (arr_13 [i_0] [i_1] [i_2] [i_4]))))))));
                        var_24 = (max((max((arr_13 [i_4] [i_2] [i_1] [i_0]), (max((arr_13 [i_0] [i_1] [i_2] [i_2]), (arr_9 [i_4] [i_2] [i_1] [i_0]))))), (arr_3 [i_2])));
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_25 ^= (((arr_12 [i_5] [i_5] [i_5] [i_2] [i_0] [i_0]) % (((((arr_8 [i_0] [i_5] [0] [23]) << (((arr_6 [i_0] [i_0 - 1] [i_0]) - 177)))) >> ((((arr_12 [i_5] [i_5] [i_1] [i_2] [i_1] [i_0]) && (arr_2 [i_0] [i_0]))))))));
                        var_26 = (max(var_26, (arr_6 [i_5] [i_1] [i_0])));
                    }
                    var_27 ^= (arr_17 [i_1] [i_1] [i_2] [i_0] [i_2] [i_1]);
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_28 = (arr_7 [i_2]);
                                var_29 += arr_22 [i_7] [i_6] [i_2] [i_1] [i_0];
                                var_30 = (max(var_30, ((((arr_6 [i_0] [i_1] [i_0]) < (max(((((arr_14 [i_1] [i_1]) <= (arr_2 [i_0] [i_1])))), (min((arr_12 [i_7 - 1] [i_6] [i_1] [i_2] [i_1] [1]), (arr_19 [i_0] [9] [i_2]))))))))));
                            }
                        }
                    }
                    var_31 |= (max((arr_20 [10] [10] [i_2]), ((((((arr_1 [i_0]) / (arr_23 [i_0 + 1]))) == (((arr_18 [i_2] [i_2] [i_1] [i_0 + 1]) | (arr_22 [i_0] [i_0] [2] [i_2] [i_0]))))))));
                }
            }
        }
    }
    var_32 += (((((((max(var_8, var_11))) <= (var_2 < var_7))))) >= ((((max(var_4, var_14))) | var_1)));
    #pragma endscop
}
