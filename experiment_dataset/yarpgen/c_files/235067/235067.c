/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_17 -= 1729;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_18 += 1653779371;
                                var_19 += 49379;
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 10;i_7 += 1)
            {
                {
                    var_20 = (max(var_20, 2047));
                    arr_16 [i_5] [i_5] [i_7] [i_5] |= 28518;
                    arr_17 [i_5] |= 32767;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 10;i_9 += 1)
            {
                {
                    var_21 = (max(var_21, 1653779371));
                    var_22 = (max(var_22, 122));
                    var_23 = (max(var_23, 0));
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
    {
        var_24 &= 28518;
        var_25 -= (arr_10 [i_10]);
        var_26 ^= 9223372036854775807;
        var_27 = (max(var_27, 2047));
        var_28 &= 5261;
    }
    var_29 = (max(var_29, 1262));
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            {

                /* vectorizable */
                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    var_30 = (max(var_30, var_2));
                    var_31 -= var_8;
                    var_32 *= 31457280;
                }
                var_33 *= 65535;
            }
        }
    }
    #pragma endscop
}
