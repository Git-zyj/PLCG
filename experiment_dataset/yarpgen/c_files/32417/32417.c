/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    var_16 = ((((((max(var_10, 0))) ? ((1 ? var_0 : var_0)) : var_12))) ? var_11 : ((var_13 ? ((((!(-2147483647 - 1))))) : ((var_11 ? var_3 : -5154317904031081060)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, 5154317904031081060));
                                var_18 = (min(var_18, -5154317904031081073));
                            }
                        }
                    }
                }
                arr_13 [i_0] [i_0] [1] = ((((((arr_11 [i_0 + 1] [i_1 + 1] [i_0] [i_1] [i_0]) ? (arr_11 [i_0 + 1] [i_1 - 2] [i_0] [i_1] [i_0 - 1]) : (arr_11 [i_0 - 1] [i_1 - 1] [7] [i_1] [i_0])))) ? (arr_11 [i_0 + 1] [i_1 + 1] [i_1 + 1] [i_0] [i_0]) : ((-5154317904031081061 ? 1193161949 : 17819))));
            }
        }
    }
    var_19 |= var_4;
    var_20 = var_12;
    #pragma endscop
}
