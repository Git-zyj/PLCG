/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((((~(~var_3)))), (((((min(var_9, var_9)))) ^ (min(-20359, 17650333986685704441))))));
    var_15 = ((1 ? ((var_5 + (11878601210119375218 ^ var_0))) : (var_0 * var_10)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_16 = (((((((20352 ? var_8 : (arr_5 [i_0] [i_2 - 2] [i_3] [i_4])))))) == (arr_9 [i_2] [i_2] [i_2 + 1] [i_4] [i_2])));
                                arr_11 [i_0] [i_0] [i_2] [i_3] [i_4] = ((((max((((arr_5 [i_1] [i_1] [12] [i_1]) / var_11)), ((~(arr_5 [i_2] [i_2] [i_2] [i_3])))))) / (((arr_7 [i_2 + 1] [i_1 + 2] [i_1] [i_1 + 1] [i_1 + 4]) ? (arr_7 [i_2 - 3] [i_1 + 1] [i_1] [i_1 + 4] [12]) : (arr_9 [i_2 + 1] [i_4] [9] [i_4] [i_1 + 2])))));
                            }
                        }
                    }
                }
                var_17 = 15508806572157582496;
                arr_12 [i_0] [i_1] = ((~-20360) ? ((var_0 ? var_13 : ((var_12 ? (arr_2 [i_0]) : 3893884995920694888)))) : (((arr_8 [i_1 - 1] [i_1] [i_1] [i_0]) | ((63166 ? 16480063044176528216 : var_10)))));
            }
        }
    }
    #pragma endscop
}
