/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (2 < 56)));
    var_15 = (min(72, 252));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0 + 2] [i_1] [i_1] |= (var_12 - 174);
                var_16 = (min(var_16, (!252)));
            }
        }
    }
    var_17 = (min(var_17, var_6));
    var_18 = (max(var_7, (max(98, var_1))));
    #pragma endscop
}
