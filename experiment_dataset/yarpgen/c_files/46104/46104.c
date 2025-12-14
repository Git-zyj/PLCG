/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 -= ((((min(0, 0))) ? var_2 : -var_10));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_20 ^= (min(((min(22, 1))), (~18446744073709551597)));
            arr_4 [i_0] [i_1] [i_0] = var_3;
            arr_5 [i_1] [i_1] = ((var_4 ? (((19 ? -7465084114699642771 : 1))) : 18446744073709551615));
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_10 [i_1] [i_1] [i_1] = ((((min(var_6, -1077147534))) ? var_7 : ((-var_8 ? var_3 : (min(var_3, var_17))))));
                        var_21 = (min(var_21, (~var_4)));
                        arr_11 [i_2] [i_2] [i_2 - 2] [i_1] [i_2] = var_11;

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            var_22 -= 8734604645655981967;
                            arr_16 [i_1] [i_1] [i_1] [i_3] [i_1] = -2251798739943424;
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_20 [i_0] [i_1] [1] [i_3] [i_5] &= var_12;
                            var_23 = (max(var_23, ((((max(var_6, var_15)))))));
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            arr_23 [i_1] [i_2] [i_1] = ((!(((var_18 ? ((var_13 ? var_6 : var_2)) : (~var_7))))));
                            var_24 = (min(var_24, ((min((min(4294967295, 24495)), (~-var_12))))));
                            var_25 -= (min(18, (((-(min(10, 0)))))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 13;i_7 += 1)
        {

            for (int i_8 = 4; i_8 < 12;i_8 += 1)
            {
                var_26 = (max(var_26, ((((((var_9 ? var_10 : var_14))) ? ((var_10 ? var_17 : var_0)) : (((-32767 ? 0 : 1))))))));
                var_27 = (((~1125899906842496) ? ((var_6 ? var_6 : var_2)) : var_11));
            }
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                arr_30 [i_9] [i_9] [i_7] [i_0] = (var_9 ? -15 : (~var_14));
                arr_31 [i_0] [i_0] [i_9] = -var_10;
            }
            arr_32 [i_0] [i_0] [i_0] = (-1552511235 ? (((1 ? 3140200614 : 14))) : ((var_16 ? var_4 : var_17)));
            var_28 &= var_2;
        }
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            arr_37 [i_10] [i_10] [i_0] = ((!(((var_12 ? -var_15 : (!var_13))))));
            var_29 *= (max(3029560097479717819, (-32767 - 1)));
        }
    }
    var_30 = ((+(((!var_5) ? (!var_9) : ((max(var_10, var_1)))))));
    #pragma endscop
}
