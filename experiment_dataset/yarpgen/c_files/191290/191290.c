/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_4 ? 576460752303161344 : ((((var_8 ? 2009875946695788531 : var_12)) - (var_15 / var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = (((((arr_3 [i_0]) - (min((arr_3 [i_1]), 1620671940064585512)))) - (arr_1 [i_1 + 2])));
                var_22 = (((((max(18239, (arr_1 [i_0]))))) ? ((((arr_2 [i_1 + 2]) < (arr_1 [i_1 + 2])))) : (arr_2 [i_1])));
            }
        }
    }
    var_23 = (max(var_23, var_5));
    var_24 = (~var_1);
    #pragma endscop
}
