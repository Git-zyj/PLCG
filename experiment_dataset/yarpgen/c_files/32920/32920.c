/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (((var_12 ^ (1 == 1))));
                var_19 = ((((((!1) ? ((max(1166764914, 4294967282))) : var_2))) ? (((-9223372036854775807 - 1) ? -1604119195 : 1)) : (-127 - 1)));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_2] = (((((4294967282 ? -5078 : 3128202382))) ? ((-5692064370062628310 ? var_0 : ((var_14 ? 1604119194 : var_16)))) : ((((7873482738442545415 < ((1 ? 4141637697 : var_11))))))));
                    var_20 = (0 ? ((min(4294967282, var_4))) : -9223372036854775800);
                    var_21 = (var_5 | -1501);
                    arr_10 [i_0] [i_0] [i_1] [i_0] = (max(((var_1 / (((arr_1 [11]) * var_12)))), 1166764914));
                }
            }
        }
    }
    var_22 = 1;
    var_23 = var_9;
    #pragma endscop
}
