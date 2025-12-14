/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, (((((max(41619, var_11))) ? (((((arr_8 [i_0] [10] [1]) >= (arr_1 [0]))))) : 13135)))));
                                var_16 -= ((min(523264, -32766)));
                                var_17 = (((arr_7 [i_1] [i_1]) ? (min(127, 32767)) : (((min((arr_9 [4] [1] [i_4 - 1] [1] [i_4 - 3]), (arr_9 [0] [0] [i_4 - 4] [0] [i_4 - 1])))))));
                                var_18 ^= (min((((arr_9 [i_3 + 1] [i_3 + 1] [i_3 + 1] [1] [i_2]) * (arr_9 [i_3 + 1] [i_4 - 3] [i_3 + 1] [4] [i_0]))), ((max((arr_9 [6] [i_4] [i_3 + 1] [i_3] [i_3]), (arr_9 [i_3] [2] [i_3 + 2] [5] [i_3]))))));
                            }
                        }
                    }
                    var_19 *= (((((arr_9 [i_2] [i_1 - 1] [5] [5] [i_0]) ? 1613601050 : (-32767 - 1))) | (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])));
                    var_20 ^= (arr_0 [i_1]);
                }
            }
        }
    }
    var_21 = var_14;
    var_22 = (((min(((var_1 ? var_9 : var_0)), ((var_8 ? var_14 : var_14)))) - (max(var_6, (var_11 * var_4)))));
    #pragma endscop
}
