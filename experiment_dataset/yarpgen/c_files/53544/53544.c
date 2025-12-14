/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_1] = ((var_7 ? var_11 : ((((min((arr_0 [i_0] [i_0]), (arr_1 [i_0])))) ? (max((arr_2 [i_0] [i_1]), 3251618089158386830)) : var_10))));
                var_16 = var_12;
            }
        }
    }
    #pragma endscop
}
