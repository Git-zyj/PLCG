/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, ((max(1, (((arr_4 [i_3] [6] [i_3]) ? (arr_4 [i_3] [i_0] [i_3]) : var_15)))))));
                                var_19 &= (min(((((12422 ? (arr_10 [i_0 - 2] [i_3] [i_2] [i_2] [i_0 - 2] [i_0 - 2]) : var_11)))), (min((((arr_2 [0] [i_2] [i_2]) & 100)), (~60837)))));
                                var_20 += ((~(min((!var_5), ((var_3 ? (arr_10 [i_0 - 2] [i_4] [i_3] [i_3] [i_3] [i_3]) : -1))))));
                            }
                        }
                    }
                    arr_11 [i_2] [i_1] |= ((+((-var_16 ? (((arr_7 [i_2] [i_2]) / -1499763433)) : (arr_10 [i_0] [2] [i_2] [i_1] [i_2] [i_2])))));
                    var_21 ^= (min((arr_6 [i_0 - 1] [i_1] [9]), (min((arr_0 [i_1]), (arr_5 [i_2] [i_1] [i_2])))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        arr_16 [5] [i_0] [i_0] [i_0] = (arr_1 [i_0]);
                        var_22 += (arr_15 [1] [i_1] [i_1]);
                    }
                }
            }
        }
    }
    var_23 *= ((!((min(32413, 33285996544)))));
    var_24 -= var_6;
    #pragma endscop
}
