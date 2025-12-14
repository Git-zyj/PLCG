/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = ((+(((arr_5 [i_0]) ? (arr_5 [i_0]) : (arr_5 [i_0])))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 6;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 = (arr_9 [i_4] [i_3] [i_2 + 2] [i_1]);
                                var_17 = min((((min(var_14, -35)) ^ (((-1 ? 1560501686 : 1560501686))))), 1560501697);
                                var_18 = 4649;
                                arr_14 [i_0] [1] [i_0] [i_3] [1] = ((((((arr_5 [i_0]) ? var_12 : (arr_7 [i_0] [7] [7] [i_4])))) ? (arr_5 [i_0]) : (((arr_9 [i_0] [4] [i_2] [i_3]) ? (((-(arr_7 [5] [5] [i_3] [i_4])))) : (arr_10 [i_2 + 2] [i_2 - 1] [i_2] [i_4] [6])))));
                            }
                        }
                    }
                }
                var_19 = (max(var_19, (((~(-2 >= var_11))))));
            }
        }
    }
    var_20 ^= var_8;
    var_21 = 4653;
    var_22 = ((~((26437 << ((((var_7 ? var_2 : var_8)) - 6700))))));
    #pragma endscop
}
