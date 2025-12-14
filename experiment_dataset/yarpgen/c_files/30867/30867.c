/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 ^= (7 || 56);
        var_18 = var_7;
        var_19 |= 10199140733102618730;
        var_20 = var_11;
        var_21 = (min(((10199140733102618730 ? 6692663608591581958 : 877694940)), (((((max(var_6, var_14))) ? var_12 : 144115188075855871)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 23;i_4 += 1)
                {
                    {
                        var_22 = var_15;
                        var_23 = var_9;
                        var_24 = ((28308 ? var_3 : (((var_10 + 9223372036854775807) << (var_0 - 2784720035038155069)))));
                    }
                }
            }
        }
        var_25 |= (((4851641354422073559 * var_9) ? (((4 ? -7502960198742861510 : var_8))) : ((var_2 ? 9482298959309031843 : var_3))));

        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_26 = (var_13 < (var_5 - var_15));
            var_27 -= (((var_7 | var_10) ? ((var_13 ? var_12 : var_16)) : (var_6 & var_16)));
        }
        var_28 = var_3;
        var_29 = -225349949;
    }
    var_30 = var_15;
    #pragma endscop
}
