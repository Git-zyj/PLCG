/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = ((~(((arr_0 [i_1]) ? (arr_2 [i_0] [i_1]) : (arr_0 [i_1])))));
                var_13 = (max(var_13, (((43831 ? -41 : -8541429671147407613)))));
                arr_6 [i_1] [1] = ((((arr_3 [i_1] [i_1]) ? 8541429671147407613 : ((2146435072 ? 2148532224 : (arr_1 [5]))))));
                arr_7 [i_1] [10] = (~-1);
                var_14 = (min(var_14, (((8541429671147407613 << (8179 - 8179))))));
            }
        }
    }
    var_15 = ((var_3 % ((((~8541429671147407613) != var_3)))));
    #pragma endscop
}
