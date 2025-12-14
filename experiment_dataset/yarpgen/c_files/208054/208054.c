/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((max(2563, var_4))), -var_3));
    var_11 = (((var_6 ? var_8 : var_3)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = (min(var_12, (((~((-(((arr_0 [10]) ? var_1 : var_5)))))))));
                var_13 = (min(var_13, 114));
            }
        }
    }
    #pragma endscop
}
