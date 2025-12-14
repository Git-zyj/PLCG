/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_17 = (min(var_17, var_6));
                        var_18 ^= var_15;

                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            var_19 = (max(var_19, var_6));
                            arr_12 [i_0] [i_4 - 1] [18] [i_1] [i_4] = ((((max(-var_10, (arr_10 [i_0] [i_3] [i_2] [i_1] [i_0])))) ? ((var_7 ? (min(var_12, (arr_8 [i_4 - 1] [0] [i_2] [8] [i_1] [20]))) : var_5)) : ((max((max((arr_4 [i_1]), 0)), (((var_0 ? var_7 : (arr_11 [1] [i_2] [i_3] [i_1] [i_3])))))))));
                        }
                        for (int i_5 = 4; i_5 < 18;i_5 += 1)
                        {
                            arr_17 [i_1] = (((((((((arr_7 [i_1] [i_0] [i_1] [i_1]) ? var_10 : 103))) ? (min((arr_4 [i_1]), 74)) : var_6))) & (((((var_7 - (arr_0 [i_0])))) ? (((arr_14 [i_5] [i_3] [i_2] [i_2] [i_1] [i_0]) ^ (arr_1 [i_1] [i_1]))) : (((min((arr_7 [i_1] [i_3] [i_1] [i_1]), var_6))))))));
                            arr_18 [i_1] [i_1 - 2] [i_1] = (((((((min(var_1, 1))) ? 1 : ((min(var_10, var_6)))))) ? ((-(arr_16 [i_1 - 3] [13] [i_1] [i_1 - 3] [i_1 - 1] [16]))) : (((arr_6 [i_5] [i_1 + 1]) ? ((~(arr_13 [i_5 - 4] [i_3] [i_2] [i_1] [10] [3] [4]))) : 104))));
                            arr_19 [i_5] [i_1] [i_2] [i_1] [i_0] = (i_1 % 2 == zero) ? ((((max(((17 << (((arr_15 [i_0] [i_1] [i_2] [i_3] [i_5 + 2]) - 152)))), ((~(arr_16 [i_5] [i_3] [i_1 - 2] [i_2] [i_1 - 2] [9]))))) >> (((max(((var_15 ? var_11 : var_6)), (var_10 + var_0))) - 17151))))) : ((((max(((17 << (((((arr_15 [i_0] [i_1] [i_2] [i_3] [i_5 + 2]) - 152)) + 76)))), ((~(arr_16 [i_5] [i_3] [i_1 - 2] [i_2] [i_1 - 2] [9]))))) >> (((max(((var_15 ? var_11 : var_6)), (var_10 + var_0))) - 17151)))));
                            arr_20 [i_0] [i_1] [i_1] [i_3] [0] = (max((((((var_7 << (((arr_1 [i_1] [i_5]) - 4172969425128070513)))) * (((var_1 || (arr_4 [i_1]))))))), (arr_8 [i_1] [i_1] [9] [i_3] [i_2] [i_3])));
                        }
                    }
                }
            }
        }
    }
    var_20 = var_1;
    #pragma endscop
}
