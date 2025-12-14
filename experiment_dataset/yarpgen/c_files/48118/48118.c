/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 += (((((arr_6 [i_2] [i_1]) ? (arr_6 [i_1] [i_1]) : 25)) / (((arr_6 [i_1] [i_2]) ? -2147483644 : (arr_6 [i_1] [i_1])))));
                    var_18 = (min(var_18, ((((((((var_2 ? 1 : var_8)) * (arr_5 [i_0] [i_1] [i_1])))) ? ((min((arr_0 [i_1]), -2218))) : var_0)))));
                }
            }
        }
    }
    var_19 = (var_2 | (~var_13));
    var_20 = ((~var_15) | ((((((var_12 ? 10 : 25))) ? (-2235 || 25) : ((var_15 ? var_7 : var_7))))));
    #pragma endscop
}
