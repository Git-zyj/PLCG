/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_10 &= 747418078;
                var_11 += (((-25812 >= (arr_1 [i_0]))));
            }
        }
    }
    var_12 = var_7;
    #pragma endscop
}
