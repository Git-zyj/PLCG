/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (max(var_18, (arr_2 [i_0] [i_0] [i_0])));
                    var_21 = (max(((-(arr_6 [i_0] [i_2] [i_1] [i_2 - 1]))), ((min(2110, (arr_6 [i_0] [i_2] [i_2 - 1] [i_2 - 1]))))));
                    arr_7 [i_2] = (((var_15 / (arr_1 [i_0] [i_2 - 1]))));
                    var_22 = (((((9224 ? 0 : 0))) ? (((var_16 && (((19560 ? (arr_2 [i_0] [i_1] [i_1]) : var_18)))))) : (max((arr_0 [i_2 - 1]), ((var_13 ? var_2 : var_11))))));
                    arr_8 [i_2] = ((-(0 && var_11)));
                }
            }
        }
    }
    var_23 = var_6;
    var_24 = ((!((max(var_12, ((0 ? 32750 : var_6)))))));
    var_25 &= var_19;
    #pragma endscop
}
