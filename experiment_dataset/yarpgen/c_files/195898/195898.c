/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_3] [i_3] = var_5;
                                var_10 |= (((arr_1 [i_3 - 1]) != ((((arr_1 [i_3 - 1]) - (arr_13 [i_1] [11] [i_4 + 3]))))));
                                var_11 = (min(var_11, (((((min((((arr_12 [i_3 - 1] [i_3 - 1] [12] [11] [2]) ? 4398046510592 : var_5)), (arr_1 [i_4 + 3])))) ? (((2164452423 & (((!(arr_11 [i_4 - 1] [i_3 - 1] [i_3 - 1] [i_2] [i_2] [i_0] [i_0]))))))) : (arr_12 [i_4 + 2] [i_4 + 1] [i_4 + 2] [i_4 + 3] [i_4]))))));
                                arr_15 [i_0] [i_3] [i_3] [i_3] [i_0] [i_3] [9] = ((((((((((arr_8 [i_0] [i_3] [i_3] [6] [i_4] [i_3]) ? -113 : (arr_4 [i_0] [i_1] [i_3 - 1]))) + 2147483647)) >> ((((var_8 ? var_2 : (arr_13 [i_0] [i_0] [i_0]))) + 41))))) ? (((arr_1 [i_3 - 1]) ^ (((arr_8 [i_0] [i_0] [i_3] [i_3] [i_3] [i_3]) ? 31677 : 65535)))) : (((!((((arr_12 [i_0] [i_1] [i_2] [i_3] [i_4]) ? (arr_8 [0] [i_0] [i_0] [9] [i_0] [i_0]) : var_1))))))));
                            }
                        }
                    }
                    var_12 -= ((((((1543741928 <= 22) ^ (arr_2 [i_2] [i_1] [i_0])))) ? (((((65516 ? 1 : var_5)) + (((-(arr_7 [i_2] [i_1] [1] [i_2]))))))) : (var_5 + -9223372036854775807)));
                    arr_16 [3] [3] [3] = (((((min((arr_4 [i_0] [i_1] [i_2]), 4))) ? ((0 | (arr_7 [i_0] [i_0] [i_1] [i_0]))) : (~124))) <= (arr_6 [i_0] [i_1] [i_1] [11]));
                    arr_17 [0] [i_0] [i_0] = ((((!((((arr_3 [i_2] [i_2] [i_2]) ? (arr_0 [i_0]) : 14)))))) <= (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
                }
            }
        }
    }
    var_13 = ((!(((1 ? ((var_1 ? 10022568245438627866 : 2695129902281077949)) : 1)))));
    #pragma endscop
}
