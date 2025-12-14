/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_16 = (-2967607984249005569 ^ var_9);
        var_17 = var_2;
    }
    for (int i_1 = 3; i_1 < 8;i_1 += 1)
    {
        var_18 = ((2967607984249005577 >> (((~2967607984249005569) + 2967607984249005611))));
        arr_7 [i_1] [i_1] = (min((min((2967607984249005573 > var_10), var_13)), var_11));
        var_19 = (max(((min(var_9, var_12))), (-2967607984249005563 - -31082)));
        var_20 = (min(var_20, (((-var_0 != (var_11 / -2967607984249005573))))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_21 = (((min(var_6, 549755289600)) % (var_4 / var_3)));

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_22 = -2967607984249005578;
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        var_23 = ((!((!(var_0 < 2147483647)))));
                        var_24 = (!232);
                    }
                }
            }
            arr_20 [i_3] = var_13;
        }
        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            arr_25 [i_6] [i_2] = ((((var_8 != 524284) * 254)));
            arr_26 [i_2] [i_2] = (((min((var_8 * var_4), -8057)) >> (((var_0 - -24662) - 18446744072230223912))));
            var_25 = (min(var_25, 60));
            var_26 -= ((((max(9952907543347371317, -14874) + (max(-2967607984249005553, var_10))))));
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            var_27 -= (var_8 <= var_2);
            arr_29 [i_2] [i_2] [i_7] = (((var_5 / 587862821627301433) < ((195 | (!var_8)))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 20;i_9 += 1)
                {
                    {
                        arr_34 [i_9] [i_9] [i_9] [i_9] = ((((var_14 - (~var_3))) % 62));

                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            var_28 &= (max(var_5, (var_10 | var_15)));
                            arr_37 [i_2] [i_7] [i_8] [i_9] [i_10] = ((max(((min(587862821627301436, var_6)), (var_4 - var_11)))));
                            var_29 &= var_8;
                            var_30 = 202;
                        }
                        for (int i_11 = 1; i_11 < 21;i_11 += 1)
                        {
                            arr_40 [i_2] [i_7] [i_2] [0] |= var_7;
                            var_31 = (((max(var_0, var_11)) ^ (var_8 + var_7)));
                            arr_41 [i_2] [i_7] [i_7] [i_9] [i_7] [i_9] [i_11] = (max(((min((max(var_9, 251)), -1))), -524263));
                        }
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            var_32 &= 113;
                            var_33 -= (min(((-(max(var_1, var_12)))), var_15));
                            arr_45 [i_9] = 11577171530100493546;
                        }
                        for (int i_13 = 2; i_13 < 21;i_13 += 1)
                        {
                            var_34 *= max((((-587862821627301428 <= (min(-1, -2323078720568169674))))), (((10562231310866116617 | 20) + 12719203143292504853)));
                            var_35 = (min(var_35, (((-((max(83, var_3))))))));
                        }
                    }
                }
            }
        }
        var_36 = var_0;
    }
    var_37 |= (((max((var_11 >= var_6), (min(32764, 173)))) >= (((var_2 | var_7) * (var_15 <= var_2)))));
    #pragma endscop
}
