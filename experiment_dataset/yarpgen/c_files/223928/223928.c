/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= var_3;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (((((var_6 ? var_4 : var_0))) ? (-12752 | var_8) : -123));
        var_12 = (min(var_12, ((max((((((var_5 + -12752) + 2147483647)) << (-var_6 - 76))), ((12761 ? ((1 ? 1 : 1)) : var_2)))))));
        var_13 = ((-13775 ? 0 : 1));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    {
                        var_14 = var_7;
                        arr_15 [i_4 - 2] [i_2 + 2] [i_3] [i_2] [i_3] [i_4] = (((-5074 ^ var_6) ? var_6 : ((var_4 ? 1 : var_8))));
                        var_15 = var_9;
                        arr_16 [i_1] [i_2 + 1] = (1 == 1);
                        var_16 |= ((5772159665118641641 ? var_6 : var_9));
                    }
                }
            }
        }
        var_17 = ((((((-2147483647 - 1) ? var_7 : 6))) ? (var_1 | var_0) : ((var_3 ? var_4 : var_4))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 8;i_7 += 1)
            {
                {
                    var_18 *= var_7;
                    var_19 = -0;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_20 |= var_4;
                                arr_32 [i_5] [i_7 + 1] [i_5] = ((242 ? -9942 : 127));
                                arr_33 [i_5] [i_6] [i_8] [1] [i_9] [i_9] [i_7 - 1] = ((((2047 ? 12146 : 8388607))) ? var_9 : (-2147483647 - 1));
                                var_21 *= 3803350171;
                            }
                        }
                    }
                }
            }
        }
        var_22 = (((-127 - 1) == var_1));
        arr_34 [i_5] [i_5 + 1] = -var_0;
        var_23 = var_7;
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 7;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                {
                    var_24 = 255;
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 8;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 10;i_13 += 1)
                        {
                            {
                                var_25 = ((0 ? var_3 : var_1));
                                arr_45 [i_5] = 1;
                                arr_46 [i_5] [i_5] [i_5] [i_5] [i_5] = -105;
                                var_26 = (((((var_8 + -3) + 9223372036854775807)) << (((-15876 + 15886) - 10))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
