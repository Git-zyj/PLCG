/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = min((((((1 ? 56047 : (arr_4 [4] [i_1] [i_1])))) ? ((9486 ? var_0 : var_0)) : var_1)), (max(((((arr_4 [i_0] [i_0] [i_0]) && 56047))), (arr_3 [i_0] [i_0] [i_0]))));
                var_10 = var_0;
            }
        }
    }
    var_11 = (var_6 != var_2);
    var_12 = (max(var_9, (max(var_3, (56047 / var_0)))));
    #pragma endscop
}
