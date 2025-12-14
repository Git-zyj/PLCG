/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 ^= (max((((arr_3 [i_0] [i_1] [i_0]) < (arr_2 [i_2]))), (((arr_6 [i_0] [i_0] [i_0] [i_0]) && (arr_3 [i_0] [i_1] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 = ((((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_12 [i_4 + 1] [i_4 - 3] [i_0] [i_4 - 3] [i_4 + 1]) : 3))) && (arr_13 [i_0] [i_4] [i_4 - 2] [i_4] [i_4 + 1] [i_3] [i_0])));
                                var_20 = ((((min((arr_5 [i_4 - 1]), (arr_11 [i_4] [i_4] [i_4] [i_0] [i_4 - 1])))) ? (((arr_11 [i_4] [i_4] [i_4] [i_0] [i_4 - 3]) ? (arr_11 [i_4] [i_4] [i_4] [i_0] [i_4 - 1]) : 71)) : (~2147483647)));
                            }
                        }
                    }
                    var_21 = (var_8 || var_14);
                }
            }
        }
    }
    var_22 = ((((min(var_16, (min(var_1, -9088177890700069829))))) ? var_7 : (min((~var_6), var_15))));
    #pragma endscop
}
