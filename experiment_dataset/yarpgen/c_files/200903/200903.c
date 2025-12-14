/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 = (min(var_12, var_4));
        var_13 = -32;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 24;i_2 += 1)
        {
            {
                var_14 = (((var_6 ? (arr_6 [i_1] [i_2] [i_2]) : (((arr_6 [19] [21] [i_2]) ? (arr_7 [i_1] [i_2]) : var_6)))));
                arr_10 [7] = -32;
            }
        }
    }
    #pragma endscop
}
