/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    var_16 = (((var_8 ? (arr_0 [i_0 + 2] [i_0 + 2]) : (arr_4 [i_0]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 = ((((((arr_1 [i_0 + 1]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? ((((((arr_7 [i_3] [i_2] [i_1]) ? (arr_9 [i_4 + 1]) : var_4)) <= (((arr_3 [i_3]) ? var_2 : (arr_9 [i_0])))))) : var_1));
                                var_18 += ((254 ? var_9 : -263906441));
                                arr_13 [i_0 + 2] [i_4] [i_2] [i_3] [3] = (((arr_8 [i_0 + 3] [i_1] [i_2 + 1] [i_3]) ? ((((var_2 || (arr_4 [i_0]))))) : (arr_3 [i_0 + 3])));
                                var_19 = (arr_9 [i_2]);
                            }
                        }
                    }
                }
                for (int i_5 = 4; i_5 < 18;i_5 += 1)
                {
                    var_20 ^= ((((((((var_3 ? (arr_15 [i_0]) : (arr_15 [i_0 + 4])))) ? ((var_0 ? var_1 : (arr_8 [7] [i_0] [i_1] [i_5]))) : (arr_8 [i_0] [i_1] [i_1] [i_1])))) ? (arr_4 [i_0 + 2]) : (((arr_0 [i_0 - 2] [i_0 - 1]) ? (((var_13 << (((arr_2 [i_0] [15]) - 9303088814923750085))))) : ((var_6 ^ (arr_3 [i_1])))))));
                    var_21 = ((var_1 << (((arr_9 [i_0 + 3]) - 12))));
                    arr_17 [i_0 + 4] [i_5] [i_5] = (((arr_11 [i_5]) - (((((((var_9 ? var_13 : (arr_1 [i_0])))) == (arr_8 [i_0] [i_1] [i_5] [i_5])))))));
                    var_22 = (arr_11 [i_5]);
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_23 = (((((var_6 ? ((var_8 ? (arr_6 [i_6]) : var_6)) : (((arr_3 [i_1]) ? (arr_4 [i_0]) : (arr_0 [i_0 + 4] [i_6])))))) ? ((((arr_18 [i_0 + 1] [i_0 + 2] [i_0 + 3]) && (arr_8 [i_0 + 4] [i_0 + 1] [i_0 - 2] [i_0 + 3])))) : ((((arr_9 [i_1]) == (arr_9 [i_1]))))));
                    arr_20 [i_0] &= ((var_11 ? (((arr_10 [4] [i_1] [i_6] [i_6] [i_6] [i_0]) ? (((var_8 ? (arr_15 [i_1]) : (arr_6 [i_1])))) : var_7)) : ((((arr_18 [6] [1] [i_0]) ? ((var_15 ? (arr_3 [i_0 + 2]) : var_6)) : var_7)))));
                    var_24 = (var_12 ? ((var_14 ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 - 1]))) : var_11);
                    var_25 = (max(var_25, (arr_10 [i_0] [9] [i_0 + 4] [i_0 - 1] [i_0] [i_0 + 2])));
                }
                var_26 = (((arr_0 [i_1] [i_0 - 1]) % ((((arr_11 [i_0]) && -263906449)))));
                var_27 = ((((arr_18 [i_0 - 2] [i_0 + 1] [i_0 + 4]) % (arr_2 [i_0 + 2] [i_0 - 2]))));
            }
        }
    }
    var_28 = (((((var_0 ? ((var_2 ? var_2 : var_2)) : var_10))) % ((var_15 ? var_4 : ((0 ? 288230376147517440 : -984226106))))));
    #pragma endscop
}
