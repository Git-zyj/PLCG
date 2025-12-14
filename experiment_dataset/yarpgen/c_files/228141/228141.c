/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_16 -= ((((-10 ? (((arr_0 [i_0]) ? 125126909 : 12129)) : -12146)) - var_6));
        var_17 = (((var_14 - 1) * (-4096 > var_11)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_18 = ((2789907462728918887 ? (var_9 % -61) : 60));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                {
                    var_19 = ((!(arr_4 [i_1 - 1])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 14;i_5 += 1)
                        {
                            {
                                arr_15 [i_5] &= ((1 ? 2789907462728918887 : 4294967294));
                                var_20 = ((arr_9 [i_2] [i_2 - 1] [i_2 - 1]) && 60);
                                var_21 = var_0;
                            }
                        }
                    }
                }
            }
        }
        var_22 = var_5;
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_18 [17] [i_6] = ((var_12 ? (max(var_8, var_13)) : -1760450557));
        var_23 = ((4294967281 || (((((-61 ? -84 : 4294967250)) >> (-61 + 71))))));
    }
    var_24 = (((~var_11) ? ((max(var_0, var_6))) : var_5));
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 12;i_9 += 1)
            {
                {
                    arr_27 [8] [i_8] [1] [i_7] = ((14 ? (var_9 & 12123) : (((4 <= ((var_7 ? 65535 : var_11)))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            {
                                var_25 = ((-490703837626465128 ? 1 : 14));
                                var_26 = var_8;
                                var_27 = ((-525799488 ^ (96 <= 65535)));
                                var_28 = (min(var_28, var_15));
                            }
                        }
                    }
                    var_29 = var_14;
                }
            }
        }
    }
    #pragma endscop
}
