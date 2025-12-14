/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [13] [i_1] [13] [i_3] [i_3] [i_4 + 3] = (((arr_1 [i_4] [i_2]) >= (max((arr_6 [i_4] [i_4 + 2] [i_4] [i_4 + 2]), 1))));
                                arr_17 [i_0] [i_1] [i_2] [i_2] [i_1] [1] = ((1 % ((~((8388576 ? 211 : (arr_8 [i_0] [i_2] [i_0])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_22 [i_1] = ((-(((!(arr_19 [i_0] [i_2] [i_6]))))));
                                arr_23 [i_1] [i_5] [15] [i_1] [i_1] = (max(((((var_4 ? 1 : 1499657038437460698)) - (arr_8 [i_0] [i_1] [i_5]))), ((((arr_1 [i_0] [i_2]) + (65 - var_9))))));
                                var_13 ^= (((arr_4 [i_5] [i_5]) ? (((((arr_0 [5]) ? 243 : 26)))) : (((((~(arr_10 [i_2])))) ? 64 : 1499657038437460698))));
                                var_14 -= ((~(~17)));
                            }
                        }
                    }
                    arr_24 [14] &= (arr_13 [i_0] [i_1] [1] [8] [i_0]);
                    var_15 = (((((((var_10 ^ (arr_1 [i_1] [i_1]))) ^ (arr_15 [i_0] [i_0] [i_1] [i_1] [i_1])))) ? (((((arr_2 [i_1] [i_0]) < (arr_2 [i_2] [i_1]))))) : (min(-var_3, 0))));
                }
            }
        }
    }
    #pragma endscop
}
