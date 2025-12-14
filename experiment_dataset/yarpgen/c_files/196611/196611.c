/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (0 * -16910);
    var_13 -= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 -= -16937;
                arr_7 [i_0] [i_0] = (var_2 * var_7);
            }
        }
    }
    #pragma endscop
}
