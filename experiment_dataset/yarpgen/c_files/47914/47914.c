/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (((((min((arr_2 [i_0]), (arr_1 [i_0])))) & (((arr_2 [i_0]) / var_13)))))));
                var_15 = (min(82, var_0));
            }
        }
    }
    var_16 |= var_0;
    var_17 = ((+((((var_2 * var_4) && var_10)))));
    var_18 -= (((min(var_2, (~var_0)))) | ((~((var_6 ? var_9 : var_2)))));
    #pragma endscop
}
