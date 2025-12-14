/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((~((9223372036854775807 ? (-9223372036854775807 - 1) : 9223372036854775807))))) ? 12823 : var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] = ((((((arr_6 [i_3 + 1] [i_3 - 1] [i_3] [i_3 + 1]) ^ var_0))) ? ((1 ? 30593 : 43283)) : (((((arr_6 [i_0] [i_1] [i_2] [i_2]) ? (arr_0 [i_3] [i_3]) : var_3)) << ((((57458 ? 9223372036854775807 : var_13)) - 9223372036854775798))))));
                            arr_12 [i_1] [i_1] [i_1] [i_0] [i_1] [i_1] = var_10;
                            var_17 = (min(var_17, 9223372036854775807));
                            arr_13 [i_0] = (max(((((arr_3 [i_1] [i_1] [i_1]) == (arr_3 [i_0] [i_1] [i_2])))), -1859977114));
                        }
                    }
                }
                var_18 -= (max((arr_5 [i_0] [i_1]), (75 >= 2216247542)));
            }
        }
    }
    #pragma endscop
}
