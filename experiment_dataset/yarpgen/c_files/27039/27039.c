/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = ((max(155, 1152921487426977792)) << ((var_8 ? var_13 : var_14)));
                var_18 = min(var_6, (min(var_3, var_10)));
            }
        }
    }
    #pragma endscop
}
