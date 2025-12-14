/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_0 == var_1) ? (var_3 != var_2) : ((var_0 ? var_1 : var_0)))) - ((((var_7 < (var_3 >= var_2)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_11 &= ((((((min(var_7, var_3)) - ((var_4 ? var_4 : var_7))))) ? (var_7 < var_1) : (var_3 < var_3)));
                var_12 = var_2;
            }
        }
    }
    var_13 = ((var_1 ? (((var_4 ? (((var_0 ? var_8 : var_2))) : var_0))) : (max(((var_2 ? var_9 : var_1)), var_8))));
    #pragma endscop
}
