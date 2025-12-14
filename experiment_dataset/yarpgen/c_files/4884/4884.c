/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((-649626096 ? (var_1 * var_9) : -67)) % (((!var_7) ? var_14 : ((var_3 ? var_0 : var_12))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = (((-(arr_4 [i_1] [i_1 - 1]))));
                var_17 |= ((((((((arr_3 [i_1 - 2] [i_1 - 2] [i_1 - 2]) + 2147483647)) << (((arr_3 [i_1 - 2] [i_1 - 2] [i_1 - 2]) + 611309366))))) - ((2147483647 ? (arr_1 [i_1]) : 54))));
            }
        }
    }
    #pragma endscop
}
