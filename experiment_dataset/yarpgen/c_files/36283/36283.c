/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((-5049125274581171764 ? 4294967283 : -5049125274581171782)), (((!(((var_11 ? var_7 : var_12))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_15 = ((min((arr_6 [i_2 + 1] [i_2]), (arr_6 [i_2 + 1] [i_2]))));
                    var_16 = ((4294967283 ? (arr_1 [i_1]) : ((((arr_0 [i_1]) - -var_0)))));
                }
            }
        }
    }
    var_17 = (!var_6);
    var_18 = var_2;
    var_19 = (((1 >= var_6) ? (0 ^ 1) : (max((max(var_5, var_13)), (((var_12 ? var_10 : 30974)))))));
    #pragma endscop
}
