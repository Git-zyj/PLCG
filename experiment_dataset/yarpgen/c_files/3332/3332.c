/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (max(var_12, (!var_15)));
    var_18 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = (min(((((min(53, (arr_2 [i_0])))))), ((((((-2147483647 - 1) ? (arr_0 [i_0] [4]) : 767481110))) ? (arr_4 [i_0]) : (((arr_3 [i_0]) ? (arr_3 [i_0]) : 767481110))))));
                var_20 = (((-(1842941942 | 767481110))));
            }
        }
    }
    #pragma endscop
}
