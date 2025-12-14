/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] |= ((-(max((((4088452240 ? 0 : (arr_0 [i_0] [i_0])))), (max(4610560118520545280, var_6))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_11 = ((((!(((32767 ? var_3 : var_6))))) ? ((min(var_9, var_6))) : (max((arr_3 [i_0] [i_0]), 3208346358))));
                                arr_13 [i_2] = (i_2 % 2 == zero) ? (((+(((arr_11 [i_4 + 3] [i_2] [i_4] [i_4] [i_4 - 2]) >> (((arr_11 [i_4 - 1] [i_2] [i_2] [i_4] [i_4 + 1]) - 31803))))))) : (((+(((((arr_11 [i_4 + 3] [i_2] [i_4] [i_4] [i_4 - 2]) + 2147483647)) >> (((((arr_11 [i_4 - 1] [i_2] [i_2] [i_4] [i_4 + 1]) - 31803)) + 44623)))))));
                                var_12 = var_4;
                                var_13 &= (((((-(arr_6 [i_2 - 1] [i_0] [i_2 - 2] [i_2 - 3])))) ? (arr_12 [i_0]) : var_4));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 |= (((var_10 ? ((var_4 ? var_10 : var_7)) : var_6)));
    var_15 = var_8;
    #pragma endscop
}
