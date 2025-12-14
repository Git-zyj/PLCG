/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_14 = 47393;
                                arr_16 [i_3] [i_1] [i_2] [i_1] [i_0 - 1] [i_3] &= (((arr_11 [i_4] [i_3] [i_2] [i_2] [4] [i_0 + 1]) + (((arr_14 [i_0] [i_3] [i_3]) ? ((var_5 / (arr_0 [i_2]))) : ((max(var_12, var_9)))))));
                                var_15 = (((((arr_6 [i_3 + 2]) >> (((arr_10 [i_0 - 1] [i_1] [i_3 + 1] [i_3]) - 50802)))) != (min((((arr_12 [i_1]) * (arr_13 [i_0] [i_0] [i_0 - 2]))), ((((arr_11 [i_0] [i_0] [i_0 - 2] [i_0] [i_0] [9]) != var_2)))))));
                            }
                        }
                    }
                    var_16 = ((30010 ? (((32768 != 65534) ? ((58759 ? (arr_0 [i_1]) : 32767)) : ((max((arr_9 [i_2] [i_2] [i_1]), 65534))))) : (((11802 && (((48205 >> (65534 - 65524)))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            {
                var_17 = arr_11 [i_5] [i_5] [i_5] [i_5] [i_6] [i_6];
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            arr_26 [i_5] [i_6] [9] [i_6] = (i_6 % 2 == zero) ? (((((max((((var_13 < (arr_11 [i_5] [i_6] [i_5] [i_7] [i_7] [i_8])))), (arr_11 [i_8] [i_8] [i_7] [i_5] [i_7] [i_7 - 1])))) << (((min((arr_19 [i_5] [i_6]), ((var_4 ? var_11 : (arr_7 [i_5] [i_6] [i_7 + 1] [2]))))) - 47744))))) : (((((max((((var_13 < (arr_11 [i_5] [i_6] [i_5] [i_7] [i_7] [i_8])))), (arr_11 [i_8] [i_8] [i_7] [i_5] [i_7] [i_7 - 1])))) << (((((min((arr_19 [i_5] [i_6]), ((var_4 ? var_11 : (arr_7 [i_5] [i_6] [i_7 + 1] [2]))))) - 47744)) + 8042)))));
                            arr_27 [i_8] [i_6] [i_5] [i_5] &= ((((max((arr_15 [i_7 - 2] [i_6] [i_8] [i_7] [i_5]), var_11))) ? (((7889 != ((max(28726, 2047)))))) : ((((min((arr_22 [i_5] [i_6] [i_7] [i_8]), var_1))) ? ((59438 ? 47669 : 42412)) : (((arr_4 [4] [i_5] [i_8]) ? 32772 : (arr_11 [i_6] [i_6] [13] [i_8] [i_8] [i_8])))))));
                            var_18 = (max(var_18, (((((((arr_19 [i_5] [i_8]) >> ((32769 ? 10 : (arr_12 [i_5])))))) ? 64518 : 65526)))));
                            arr_28 [i_5] [i_5] [i_6] [i_6] [i_7] [i_8] = (min(((((min(54492, (arr_10 [i_5] [9] [i_7] [i_8])))) + ((min(var_6, (arr_7 [i_5] [i_6] [i_7 + 1] [i_8])))))), (min((((arr_19 [i_5] [i_6]) ? (arr_0 [i_5]) : 44224)), ((min(17876, 2)))))));
                            arr_29 [i_6] [i_6] = (max(((((18143 ? 807 : (arr_0 [10]))) | (arr_23 [i_7] [i_7 - 1] [i_7 - 1]))), (var_13 | var_13)));
                        }
                    }
                }
                arr_30 [i_6] [i_5] = max((arr_2 [i_5]), (min((arr_15 [i_5] [i_6] [i_5] [i_5] [i_5]), (arr_15 [i_6] [i_6] [i_6] [i_6] [i_6]))));
            }
        }
    }
    var_19 = var_0;
    #pragma endscop
}
