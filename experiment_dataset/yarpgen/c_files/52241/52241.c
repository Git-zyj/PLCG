/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max((((122 | 42997) ? (((20 >> (var_5 - 74)))) : (~var_16))), (((var_12 >> ((((-1800682689 ? (-127 - 1) : 18)) + 182))))));
    var_20 = (max(118, var_12));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_21 = (min(var_21, (((~(arr_3 [i_0 - 2] [i_0 - 1] [i_0 - 1]))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_8 [i_0 + 4] [i_1] [i_2] [0] = ((((((arr_6 [i_0 - 2] [i_1 + 1] [i_1 + 1]) ? (arr_6 [i_0 + 4] [i_1 + 1] [i_1 + 1]) : (arr_6 [i_0 - 1] [i_1 + 1] [i_1 + 1])))) ? ((((35 > (arr_6 [i_0 + 4] [i_1 + 1] [i_1 + 1]))))) : (min(22549, (arr_6 [i_0 + 4] [i_1 + 1] [i_1 + 1])))));
                    arr_9 [i_0] [i_1] [1] [i_0] = (((((~((4294967272 ? var_5 : (arr_0 [i_0])))))) ? ((min(((var_5 ? -849377274 : 22538)), (~120)))) : var_6));
                }
            }
        }
    }
    #pragma endscop
}
