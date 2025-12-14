/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_1] = (min(((23 ? (max(2, -30)) : (arr_0 [i_0] [i_1]))), (((~1591255342) ? 1591255365 : 54590))));
                var_17 += 0;
            }
        }
    }
    var_18 = (((~var_10) ? ((-((max(-28, var_12))))) : (1 + 9924)));
    var_19 += (min(1, (max(((var_16 ? var_7 : 30)), (~1)))));
    var_20 = 1;
    #pragma endscop
}
