/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (((((!(((arr_2 [1]) && 4294967295)))) ? (max(0, (arr_5 [i_0] [i_1 - 2]))) : -1536)))));
                arr_7 [i_0] [i_0] = (max(((((max((arr_0 [i_0] [i_0]), 1))) ? (min(2823433695, (arr_1 [i_0] [i_1]))) : (!var_2))), (arr_0 [i_0] [i_1 + 1])));
                var_16 ^= ((((arr_4 [4]) * (max(45, var_7)))));
                arr_8 [i_0] [i_1] = (arr_5 [i_1 + 2] [i_1 - 1]);
            }
        }
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_11 [i_2] = (min((~28672), (min((arr_10 [i_2]), var_10))));
        var_17 = ((-1 + ((((arr_9 [i_2]) >= (arr_9 [i_2]))))));
    }
    var_18 &= (~(((var_12 / var_10) ? var_12 : (min(var_1, var_3)))));
    var_19 &= var_11;
    var_20 = (max(var_20, (((((max(12846, var_11))) ? (min(((var_2 << (var_1 - 305756978573011860))), (var_12 + var_8))) : var_5)))));
    #pragma endscop
}
