/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += max(var_11, var_2);
    var_14 -= (((((-14403 ? (max(var_1, var_5)) : (!0)))) ? (~8388606) : (max((((var_11 ? var_9 : 64790))), (max(var_11, 39305))))));
    var_15 = (max(var_15, 2147483647));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, ((((-982679169 - 3243231473) / ((((arr_5 [i_0] [i_0] [i_2 + 3] [i_3]) ? (arr_5 [i_0] [i_2 - 2] [6] [i_2 - 2]) : (arr_5 [i_0] [i_0] [i_0] [i_0])))))))));
                                var_17 *= ((max(var_5, (arr_11 [i_0] [i_1 - 1] [i_3] [i_3] [i_4 - 1]))));
                                var_18 = (min(var_18, (min((var_5 && var_12), (min((((arr_4 [i_3] [i_3] [i_3]) ? var_5 : (arr_9 [i_0] [10] [i_2] [i_0] [i_3]))), -1426020944))))));
                                var_19 *= (max((min(var_4, (arr_4 [i_4 + 2] [i_2 + 3] [i_1 + 2]))), (-1 | -1157288435)));
                            }
                        }
                    }
                    arr_15 [i_2] [i_1] [i_1] = ((((~(arr_10 [i_2] [9]))) + (min(0, var_9))));
                }
            }
        }
    }
    #pragma endscop
}
