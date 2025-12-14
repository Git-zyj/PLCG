/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_16 > -53);
    var_20 = ((!(((~(26825 - 50017))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_21 = (arr_0 [i_0]);
                arr_5 [i_0] [i_1] = (15517 & -2147483642);
            }
        }
    }
    var_22 &= (min(1, 50017));
    var_23 -= ((min(var_14, (min(56, var_1)))));
    #pragma endscop
}
