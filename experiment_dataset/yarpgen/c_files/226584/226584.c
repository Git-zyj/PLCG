/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (7 & var_0);
    var_17 = (var_10 ? (255 / 42) : var_1);
    var_18 |= ((!(((~((var_2 ? 248 : var_11)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = -7665;
                var_20 = (32116 || 927487121);
            }
        }
    }
    #pragma endscop
}
