/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_15 |= ((1 == ((((((arr_1 [2] [2]) ? -1968244486097230865 : 1))) ? (arr_0 [i_1 - 1] [i_1 + 1]) : ((1 ? (arr_0 [i_0] [i_1]) : 1))))));
                arr_5 [i_0] [i_1] [i_0] &= (((1 ? (arr_4 [i_1 - 1]) : (arr_4 [i_1 - 1]))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_3 - 2] [i_4] [i_4] |= (arr_9 [i_2 - 1]);
                                var_16 = (min((max((arr_13 [i_3] [i_3] [i_3] [i_3 + 3] [i_3 + 3]), (arr_14 [i_4] [i_4] [i_4] [i_4] [i_3 + 3]))), (arr_13 [8] [2] [i_3] [i_3] [i_3 + 3])));
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_1] [14] &= ((((arr_11 [i_1 - 1]) >> (((arr_11 [i_1 - 1]) - 4070952834)))));
            }
        }
    }
    var_17 *= ((var_9 ? ((0 ? (((max(866, 64669)))) : 1670318014)) : (1 ^ 1646438156)));
    var_18 &= (1 && var_10);
    #pragma endscop
}
