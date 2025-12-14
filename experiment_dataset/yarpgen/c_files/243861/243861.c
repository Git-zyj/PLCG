/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = (max((min(var_6, ((max((arr_1 [i_1 + 1] [i_2]), var_12))))), ((((var_17 ? (arr_1 [i_1] [i_0]) : var_2))))));
                    var_20 = ((((1597251449056389332 ? (arr_0 [i_1 - 1] [i_1 + 1]) : (arr_7 [i_1 + 3] [i_1 + 1] [i_1] [i_1 - 2]))) | (((var_4 << var_13) ? (var_10 ^ -1301460287) : (((arr_3 [i_1 + 2] [i_1 + 2]) - var_4))))));
                    arr_9 [1] [2] [i_1] [i_1] = 11165;
                }
            }
        }
    }
    var_21 = (min(var_10, ((var_16 ? (54358 ^ var_18) : 1597251449056389332))));
    #pragma endscop
}
