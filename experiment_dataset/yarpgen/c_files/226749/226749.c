/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_16 *= (!21058);
                var_17 *= min(((-(min(18446744073709551605, (arr_3 [i_1]))))), (((((min((arr_4 [i_0] [i_1]), var_3))) - (((arr_2 [i_0] [i_1]) ? (arr_2 [11] [i_0]) : (arr_0 [i_1])))))));
            }
        }
    }
    var_18 = (-(((-8833650283873364304 ? 6199 : var_9))));
    #pragma endscop
}
