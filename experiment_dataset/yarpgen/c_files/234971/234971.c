/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 |= (~var_5);
        var_20 &= -1;
        var_21 &= var_9;
        var_22 = var_3;
        var_23 = (max(var_23, var_14));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_24 = var_18;
        arr_5 [i_1] [i_1] |= -48;
        arr_6 [i_1] = 48;
    }
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = ((~(~var_8)));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 16;i_5 += 1)
                {
                    {
                        var_25 *= ((!(!0)));
                        var_26 = (max(var_26, var_15));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 16;i_7 += 1)
            {
                {
                    arr_22 [i_2] [i_2] = (!-1661264850);
                    var_27 = 18953;
                    arr_23 [i_6] [i_6] [i_7] &= ((~(~0)));
                }
            }
        }
    }
    for (int i_8 = 1; i_8 < 1;i_8 += 1)
    {

        for (int i_9 = 4; i_9 < 15;i_9 += 1)
        {
            var_28 += 18446744073709551594;
            var_29 ^= 22;
        }
        arr_29 [i_8] = 16777215;
        var_30 |= 6949;
        var_31 += var_9;
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                {

                    for (int i_12 = 2; i_12 < 13;i_12 += 1)
                    {
                        var_32 += var_11;
                        var_33 *= 1;
                    }
                    var_34 -= 254;
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 14;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 16;i_14 += 1)
                        {
                            {
                                arr_44 [i_8] [i_8] = (!-1553261587);
                                arr_45 [i_8] = var_1;
                            }
                        }
                    }
                    arr_46 [4] [i_8] [i_8] &= 2147483640;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 2; i_15 < 23;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 24;i_16 += 1)
        {
            {
                var_35 = (!var_2);
                arr_53 [i_16] [i_15] = (~var_8);
                /* LoopNest 3 */
                for (int i_17 = 3; i_17 < 22;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 24;i_18 += 1)
                    {
                        for (int i_19 = 3; i_19 < 23;i_19 += 1)
                        {
                            {
                                var_36 ^= 22860;
                                var_37 |= var_0;
                                var_38 *= 16777220;
                                var_39 ^= (!var_17);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
