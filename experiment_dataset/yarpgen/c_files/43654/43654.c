/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((~119) ? ((var_15 ? var_1 : -27636)) : (!-1)))) ? ((-((-54 ? var_4 : var_11)))) : (((var_4 | var_14) << (((-120 | var_6) + 50))))));
    var_17 = 119;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = var_4;
        var_18 = (min(var_18, (var_12 != 61189)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = var_10;

                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        var_20 -= 0;
                        arr_10 [i_1] [i_3] = var_2;
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = (1 * -120);
                    }
                    var_21 = 119;
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_22 = var_13;
        var_23 = (var_0 >= 0);
        var_24 = (min(var_24, ((((((var_8 >= var_7) >= var_6)) || (((-(-127 - 1)))))))));
        var_25 = (((-120 || var_7) ? (!var_2) : ((var_9 ? 1 : var_9))));
        arr_14 [i_4] = var_4;
    }
    var_26 |= 6982599881270820998;
    var_27 = -143407904715278703;
    #pragma endscop
}
