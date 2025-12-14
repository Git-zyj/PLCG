/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 = (((arr_0 [i_0 - 2] [i_1]) ? (arr_4 [i_1]) : 249));
                    var_19 = (arr_5 [1] [i_0 - 2] [1]);
                    var_20 = (((arr_4 [i_0 - 2]) ? (min((arr_4 [i_0 - 2]), (arr_4 [i_0 - 1]))) : (((arr_4 [i_0 - 1]) ? (arr_4 [i_0 + 1]) : (arr_4 [i_0 + 1])))));
                    var_21 = (((((arr_4 [i_0]) && 519598280))));
                }
            }
        }
    }
    var_22 = var_5;
    var_23 = 193259123405404911;
    var_24 = (min(var_11, ((min(var_0, 11399903751559689030)))));
    #pragma endscop
}
