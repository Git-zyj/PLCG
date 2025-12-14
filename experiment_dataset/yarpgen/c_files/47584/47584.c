/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_16 -= arr_2 [i_0];
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_17 = var_9;
                                var_18 ^= (((arr_5 [8] [i_1 - 1] [i_1 - 1]) ? (arr_5 [i_0] [i_1 + 1] [i_2]) : 13509));
                                arr_13 [i_4] [i_4] = (((arr_1 [i_1 + 1] [i_0 + 1]) ? (arr_1 [i_1 + 1] [i_0 + 1]) : (arr_1 [i_1 + 1] [i_0 + 1])));
                            }
                        }
                    }
                }
                var_19 = ((((min(31182, var_0))) ? (arr_12 [0] [i_1] [i_1] [i_1] [10] [i_0 + 1]) : ((var_7 ? (arr_2 [i_0]) : (arr_12 [i_0] [i_0] [6] [i_0] [0] [i_0 + 2])))));
            }
        }
    }
    var_20 = -var_1;
    var_21 = var_7;
    var_22 = var_9;
    #pragma endscop
}
