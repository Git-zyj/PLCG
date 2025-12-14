/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -28580;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = (min(var_13, var_6));
                var_14 = (min(var_11, -28580));
                var_15 = ((236 && (((-2972957240210140227 ? (max((arr_3 [i_0] [i_1 - 1]), 15473786833499411389)) : -125)))));
                arr_7 [i_0] [i_1] = ((!((((arr_1 [i_0]) ? (arr_6 [i_0] [i_1] [i_0]) : 125)))));
                var_16 += 15473786833499411389;
            }
        }
    }
    #pragma endscop
}
