/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 += (max((((((((arr_4 [7] [i_0] [i_0]) >= 0))) >= (!var_3)))), ((var_13 ? (246 | 255) : (max((arr_2 [6]), -44251396))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_16 |= (var_13 - 18446744073709551615);
                                arr_11 [i_0] [1] [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_12 ? 31096 : (arr_0 [i_2])));
                                var_17 = var_14;
                            }
                        }
                    }
                }
                var_18 += ((+(((8752009182165117082 < (max((arr_5 [6] [i_1] [i_0 + 3] [i_0 + 3]), (arr_7 [8] [i_1] [i_1] [i_1]))))))));
                var_19 = (max(var_19, (((((var_3 ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [12]) : -8521931292152083109)))))));
                arr_12 [i_0] [i_0] [1] = (((arr_8 [5] [5] [5] [i_1]) & 232));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_20 [i_6] = (((((((max(9223372036854775807, (arr_15 [i_5] [i_5] [i_7])))) ? 1 : 50067))) % 2883162283));
                    arr_21 [i_7] [i_5] [6] = max(((44251395 << ((((21995 ? 54214 : 255)) - 54211)))), (min(var_6, var_14)));
                }
            }
        }
    }
    var_20 = (((min(((var_5 ? var_2 : var_4)), -var_8)) & (((max(var_10, 248))))));
    #pragma endscop
}
