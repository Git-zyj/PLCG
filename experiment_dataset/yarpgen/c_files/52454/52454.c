/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (3746468122505115381 & var_14);
    var_16 = (var_12 || 111860171);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_17 = (((max((arr_3 [i_1 + 3] [i_1]), (((var_11 ? var_6 : (arr_1 [1] [i_1])))))) | (max((((var_12 ? var_4 : (arr_4 [i_0] [i_1])))), (var_10 / 3)))));
                var_18 = (((min(var_3, (((var_13 ? 111860171 : (arr_3 [i_0] [i_1])))))) << ((var_6 ? var_13 : (arr_3 [i_1 + 1] [i_1])))));
                var_19 = ((111860169 ? -111860172 : (arr_3 [i_1] [i_1])));
            }
        }
    }
    #pragma endscop
}
