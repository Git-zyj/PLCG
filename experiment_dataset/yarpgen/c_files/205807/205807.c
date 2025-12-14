/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = (((min(var_8, (arr_9 [i_0 - 2] [i_0 - 2] [i_2] [i_1 - 2]))) >= (arr_9 [i_0 - 1] [i_1 - 1] [i_0 - 1] [i_2])));
                    arr_10 [i_0] [i_1] [i_0] [i_2] = (arr_6 [4]);
                    var_21 = (arr_4 [1] [i_0 - 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_15 [i_0 + 2] [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_0] = var_7;
                                var_22 = (max(var_22, (((((min((arr_8 [i_0 - 2] [i_0 - 2]), (arr_8 [i_0 - 1] [i_0 + 1])))) & ((max((arr_8 [i_0 - 2] [i_0 - 1]), (arr_8 [i_0 - 2] [i_0 + 2])))))))));
                                arr_16 [10] [10] [i_2] [i_2] [11] [i_2] [i_2] &= (((((-(arr_8 [i_0 - 2] [i_1 - 1])))) ? (min((arr_11 [i_1 + 2] [i_0 + 2] [i_0 - 1]), (arr_8 [i_0 + 1] [i_1 + 3]))) : (arr_8 [i_0 + 2] [i_1 - 2])));
                                var_23 |= var_5;
                                arr_17 [i_4] [i_0 + 1] = (min(var_6, (~-44)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 ^= (min(var_19, ((min(93, var_15)))));
    #pragma endscop
}
