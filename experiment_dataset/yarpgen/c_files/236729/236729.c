/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_13 ? (var_19 >= 58116) : 3871168096992620801));
    var_21 = (((((~(var_13 & 0)))) ? (min(14902767507682731219, 65110)) : ((((((~var_17) + 2147483647)) << ((((((var_19 ? var_4 : var_7)) + 32752)) - 13)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = -var_0;
                arr_8 [i_0] = (!var_0);
            }
        }
    }
    #pragma endscop
}
