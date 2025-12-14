/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, (((!(((63 >> (((arr_5 [i_0 + 2] [20] [i_1] [i_0 + 2]) - 29743))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [3] [i_2] = ((var_3 ^ 3137432153) ? ((((!(arr_0 [i_0 + 1] [i_1 - 1]))))) : (arr_0 [i_0 - 4] [i_1 + 1]));
                                var_21 = ((((var_6 ? (arr_8 [i_0 - 3] [i_0 - 2] [i_0 - 4] [i_2] [i_0 - 4]) : (8448957021118792517 + 6835244481860417090))) ^ 311578516663484889));
                                var_22 = (max((max(-220, (arr_12 [i_3] [i_3] [i_4] [i_1 - 1] [i_0 + 1]))), (arr_13 [i_0] [i_1] [i_2] [6] [i_2])));
                                arr_15 [i_2] [i_3] [i_2] [i_1 + 1] [i_2] = ((!((max((arr_13 [i_3] [i_4] [i_2] [i_1] [i_2]), 130124543297282911)))));
                                var_23 &= (!7168);
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 ^= ((var_8 ? 24833 : (var_15 + var_4)));
    #pragma endscop
}
