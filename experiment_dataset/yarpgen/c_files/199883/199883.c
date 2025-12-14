/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_16, var_12));
    var_21 *= var_17;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((var_18 ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 1]))) > ((max((arr_1 [i_1 + 2]), (arr_1 [i_0]))))));
                var_22 = (min(var_22, -8));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_23 = (((((arr_3 [i_0] [i_0 + 1]) && (arr_3 [i_0] [i_0 - 1]))) ? var_19 : ((-((((arr_4 [i_4]) && var_10)))))));
                                var_24 = (max(var_24, (((~(arr_4 [i_1 - 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = var_14;
    #pragma endscop
}
