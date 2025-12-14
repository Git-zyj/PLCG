/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_11));
    var_15 |= min(var_11, ((-((var_12 ? var_7 : var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = (min((((arr_3 [12]) ^ 0)), (min((arr_4 [i_0 + 2] [i_0 + 1] [i_0 + 1]), -4844430302496922763))));
                var_17 &= var_5;
                var_18 -= var_13;
            }
        }
    }
    #pragma endscop
}
