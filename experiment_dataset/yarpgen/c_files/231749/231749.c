/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_5 [10] = (((arr_3 [i_0 - 2] [i_0 + 2]) ? (arr_3 [i_0 + 2] [i_0 + 2]) : 65535));
            var_15 |= (((arr_2 [i_0 - 3]) / (((arr_2 [9]) * 7001556604688884133))));
            var_16 &= (arr_1 [12]);
        }
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_14 [i_4] [i_4] |= var_4;
                        var_17 = 3425010400;
                        var_18 = (min(var_18, (((1321682839 == (1321682839 <= 1))))));
                        var_19 = 523776;
                    }
                }
            }
        }
        var_20 = ((var_7 && (((-8 ? 924875224 : var_12)))));
        var_21 = (min(var_21, (arr_10 [i_0] [i_0 + 3] [i_0 - 1] [i_0 - 3])));
    }
    for (int i_5 = 3; i_5 < 12;i_5 += 1) /* same iter space */
    {
        var_22 = var_12;
        var_23 = ((((!var_7) ? (!var_13) : ((-6283295521669890437 ? var_5 : var_10)))));
        var_24 *= ((-((924875245 ? 1 : 2147483620))));
        arr_18 [i_5] = -2147483596;
        var_25 = ((var_12 >= ((((!((min(1, -1519488909)))))))));
    }
    var_26 = (((-127 - 1) ? ((255 ? var_0 : var_11)) : var_0));
    var_27 = ((-(((!var_4) ? (~var_14) : var_5))));
    #pragma endscop
}
