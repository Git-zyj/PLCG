/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            {
                var_20 = (arr_6 [i_0 - 3] [i_0 - 3]);
                var_21 &= 29816;
            }
        }
    }
    var_22 -= var_14;
    var_23 &= (var_17 | 1);
    #pragma endscop
}
