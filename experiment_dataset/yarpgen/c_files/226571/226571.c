/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((-9223372036854775807 - 1) ? ((-(((var_0 + 2147483647) >> (var_1 - 1710267638))))) : -166231379));
    var_13 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_2] [i_4] [i_2] = (min(2849996910634336819, var_10));
                                arr_15 [i_2] = ((!((((!(arr_12 [13] [i_1] [i_3] [i_1] [i_1] [i_2])))))));
                            }
                        }
                    }
                    arr_16 [11] [i_2] [i_2] = ((!((((7 <= 54443) << ((((9 ? 1528073637 : 3891410817)) - 1528073637)))))));
                    arr_17 [i_2] [3] [7] [i_2] = ((var_8 ? var_4 : ((var_5 ? ((var_4 | (arr_9 [6] [13] [5] [14] [i_1] [14]))) : (((var_3 && (arr_3 [i_0] [i_2]))))))));
                }
            }
        }
    }
    var_14 &= var_0;
    #pragma endscop
}
