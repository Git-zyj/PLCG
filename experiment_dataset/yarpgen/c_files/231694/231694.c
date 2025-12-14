/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    var_15 = ((var_3 ? ((((!1878845617624666075) ? ((max(16525, var_7))) : (max(-1489732516, 65535))))) : var_2));
    var_16 = -16534;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 -= (-(max(16252928, 1)));
                    var_18 = (max(var_18, (((~(((var_3 ? 3616858398 : 1))))))));
                }
            }
        }
    }
    #pragma endscop
}
