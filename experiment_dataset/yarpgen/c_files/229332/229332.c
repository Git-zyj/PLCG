/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((!var_2) ? var_16 : ((var_2 - (max(-3742043736261406166, 1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = max((~1023), 4294966268);
                var_21 = (max(var_21, (128 + 4294966251)));
            }
        }
    }
    var_22 = var_1;
    var_23 = ((var_4 & ((var_14 ? 3505027725735158162 : var_12))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 16;i_4 += 1)
            {
                {
                    var_24 = (arr_11 [i_4] [i_4] [i_4]);
                    var_25 = (max(var_25, -35));
                }
            }
        }
    }
    #pragma endscop
}
