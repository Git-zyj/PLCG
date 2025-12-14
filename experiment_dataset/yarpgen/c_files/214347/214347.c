/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (((-81 + 2147483647) << (var_0 - 8189)));
    var_16 = (var_1 <= var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = -1931976506;
                var_18 = (arr_4 [i_0] [i_0] [i_0]);
                var_19 = ((((min(1, 29047))) ? (((-var_6 == ((-695467020 ? (arr_1 [i_0] [i_1]) : -1849582695))))) : ((((arr_0 [i_0]) == ((312183286 ? (arr_1 [i_0] [i_1]) : (arr_1 [i_0] [i_0]))))))));
                arr_7 [i_0] = (arr_5 [i_1] [i_0] [i_0]);
                var_20 = (min(((((var_7 || -620069204) | var_0))), 1563892861));
            }
        }
    }
    #pragma endscop
}
