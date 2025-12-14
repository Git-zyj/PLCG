/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = ((+((((arr_4 [i_1 + 1]) <= -112)))));
                var_17 = (min(var_17, ((max((min(((((arr_5 [i_0]) ? 536870911 : (arr_3 [i_1])))), (var_12 * var_13))), (var_1 * -16370))))));
                var_18 = (arr_3 [i_0]);
                var_19 = (max(var_19, ((max((((arr_1 [8]) - (arr_1 [i_0]))), 13707)))));
            }
        }
    }
    #pragma endscop
}
