/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, (~var_6)));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_12 = (max(var_9, var_1));
                            arr_13 [i_0] [11] [i_2] [i_3] [i_4] = (arr_11 [i_3] [i_0]);
                        }
                        var_13 = (min(var_13, (arr_9 [i_2] [i_3])));
                        arr_14 [i_0] [i_1] [i_2] [i_3] &= (((((((arr_6 [i_0]) << (((arr_9 [i_0] [i_0]) - 339428597)))) << (((arr_9 [i_0] [i_1]) - 339428594)))) >> ((((((arr_11 [13] [i_3]) < (arr_9 [12] [12]))) && var_8)))));
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_14 |= (max((2147483647 < 1), (((min((arr_6 [i_1]), (arr_12 [i_2]))) - (arr_11 [0] [i_5])))));
                        var_15 |= (((arr_11 [i_0] [i_0]) ? ((min((arr_1 [i_0] [i_0]), (~-28560)))) : (arr_12 [i_1])));
                    }

                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_16 = (min(var_16, var_10));
                        arr_21 [i_6] [i_6] [i_2] [16] [i_6] = (min(((min(((~(arr_3 [i_0]))), (((~(arr_12 [12]))))))), ((~((~(arr_2 [i_6] [i_2] [i_1])))))));
                        var_17 ^= ((~((min((((arr_2 [i_0] [i_0] [i_0]) || var_6)), (arr_17 [i_0] [i_2] [i_0] [i_0]))))));
                        arr_22 [i_1] = ((arr_17 [i_2] [0] [i_2] [i_6]) >= ((((((arr_16 [i_0]) ? (arr_12 [i_0]) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (min(var_2, (arr_8 [i_2]))) : ((((arr_3 [i_0]) ? (arr_18 [i_2]) : (arr_0 [i_0])))))));
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        arr_25 [i_7] [i_2] [i_1] [i_0] = ((((18446744071562067991 ? 225790821 : 2147483625)) - (arr_4 [i_1])));
                        var_18 += (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_19 ^= (arr_19 [i_1] [6] [i_1] [i_1]);
                    }
                    var_20 = var_8;
                    var_21 = ((((~(arr_5 [i_0] [i_2]))) % (((((arr_10 [i_1] [i_1] [i_2] [i_0] [i_2]) | (arr_16 [i_2])))))));
                }
            }
        }
    }
    var_22 = ((var_2 && (-951963322 == var_6)));
    #pragma endscop
}
