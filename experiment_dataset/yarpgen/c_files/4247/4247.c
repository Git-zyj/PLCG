/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_1] [2] [i_1] = (arr_4 [i_0] [i_1]);
                arr_7 [i_0] [i_1] [i_1] = ((~(((arr_4 [i_0] [i_1]) ? var_9 : (arr_4 [i_1] [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_1] = (arr_12 [1] [i_2] [i_2 - 1] [i_2]);
                            arr_15 [i_0] [7] [i_1] [19] [i_3] = (((arr_4 [i_1] [i_1]) ? ((var_2 ? (((-(arr_2 [i_0])))) : -var_11)) : (arr_0 [i_2 - 1] [i_2])));
                            arr_16 [i_1] = (arr_5 [i_0] [i_1]);
                        }
                    }
                }
            }
        }
    }
    var_17 = var_13;
    var_18 = -var_10;
    #pragma endscop
}
