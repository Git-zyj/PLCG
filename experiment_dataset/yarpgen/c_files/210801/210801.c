/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = ((((var_0 ? (arr_2 [i_0]) : (arr_2 [i_0])))) ? 2923553791 : (((arr_2 [i_0]) ? var_7 : (arr_2 [i_1]))));
                var_19 = var_17;
            }
        }
    }
    var_20 -= (((-(max(2923553781, var_7)))));
    #pragma endscop
}
