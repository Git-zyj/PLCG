/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_10 || (((-var_8 ? var_12 : (max(-4876558810604072041, var_8)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_1 - 1] = ((((min(((~(arr_3 [i_1]))), (~var_2)))) ? (((((arr_3 [i_1 - 1]) - var_7)) + var_11)) : ((((arr_4 [i_1] [i_1] [i_1 + 1]) / 9223372036854775807)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_14 [i_3] [i_1] = ((((((((arr_8 [i_3] [17] [i_1 - 1] [i_0]) == (arr_1 [i_0]))) ? 1 : ((max(4876558810604072037, 1)))))) ? ((var_8 / (arr_10 [i_1 + 1]))) : ((min(((var_4 ? -1358990470141386450 : -2138955947)), 1)))));
                            arr_15 [i_3] [16] [i_2] [i_3] = 1;
                        }
                    }
                }
                arr_16 [i_0] = ((~((min((arr_8 [i_0] [i_0] [i_1 - 1] [i_1 + 1]), (arr_8 [i_0] [i_1 - 1] [i_1 + 1] [i_0]))))));
                arr_17 [i_0] [i_1] [i_0] = ((var_10 ? (((!(((var_3 ? var_2 : (arr_10 [0]))))))) : var_0));
            }
        }
    }
    #pragma endscop
}
