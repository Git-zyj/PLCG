/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_19 *= (var_13 ? (((3557155598 ? var_6 : (arr_1 [i_1])))) : ((((max(19720, var_3))) ? (arr_0 [i_1] [i_1]) : ((18051 ? (arr_2 [i_0] [i_1]) : 3557155591)))));
                var_20 += ((!(((~(min(var_6, var_8)))))));
            }
        }
    }
    #pragma endscop
}
