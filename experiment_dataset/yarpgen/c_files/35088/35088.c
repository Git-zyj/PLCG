/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 = (arr_1 [i_0 - 1] [i_1]);
                            var_16 = ((var_13 << (((((arr_0 [i_0]) + 11421)) - 28))));
                        }
                    }
                }
                var_17 *= (max((arr_0 [i_1]), (arr_10 [i_0] [i_1])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_18 = 14739925450383621861;
                            var_19 = (min(var_19, (((var_9 ? (((max(var_11, var_12)))) : (arr_1 [i_1] [i_5 + 3]))))));
                            arr_16 [i_5] = 17554;
                            var_20 = ((((((min((arr_12 [i_0] [21] [i_4] [i_5]), var_0))))) ^ ((min(var_8, 1)))));
                            var_21 = 329098245;
                        }
                    }
                }
            }
        }
    }
    var_22 = var_8;
    #pragma endscop
}
