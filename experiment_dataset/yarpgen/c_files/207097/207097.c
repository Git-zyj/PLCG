/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_19;
    var_21 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_22 = ((var_16 ? 5400481751693933286 : var_13));
        arr_4 [i_0] [i_0] = var_2;
        arr_5 [11] [i_0] = (!-2229466313737066794);
        var_23 = ((var_9 ? var_12 : 5400481751693933289));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 4; i_2 < 17;i_2 += 1)
        {
            var_24 += (((((1238260097 ? var_8 : var_6))) ? ((1909807914 ? var_11 : var_7)) : ((544317887 ? var_9 : var_11))));
            var_25 = (var_16 ? 2385159381 : (((-((544317881 ? 1 : 37561))))));

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                var_26 *= var_4;
                arr_13 [i_2] [i_1] [i_2 - 3] [16] &= (((((var_6 ? 1760358171 : var_6))) ? 0 : (((((var_5 ? var_16 : 417048666)) > var_0)))));
            }
            var_27 |= 5;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_28 = ((~((var_18 ? var_8 : var_7))));
            var_29 ^= var_5;
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_30 = (min(var_30, (((var_14 << (var_4 - 685417259))))));
            var_31 = (((((1 ? -9 : 1))) ? var_16 : 0));
        }
        var_32 -= var_16;
        arr_20 [i_1] = var_18;
    }
    #pragma endscop
}
