/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((min(var_0, var_9)) > var_13)))));
    var_18 &= var_5;
    var_19 |= (((var_9 ? -481406331 : 2141984419)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = ((var_15 % ((var_16 ? (arr_5 [i_0] [i_1] [i_2] [i_2]) : (((arr_6 [i_0]) ? (arr_6 [i_0]) : var_6))))));
                    var_21 = (max(var_21, (max((arr_1 [i_0] [i_0]), ((~((var_1 ? (arr_4 [10] [i_2]) : (arr_4 [1] [1])))))))));
                    arr_7 [i_0] [i_0] [i_1] [i_0] = (max((arr_2 [i_2 - 1]), ((-(arr_2 [i_2 - 1])))));
                    var_22 = (max(29, ((((min(var_6, var_16))) / (arr_5 [i_2 + 1] [i_1] [i_2 + 1] [i_2 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
