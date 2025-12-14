/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [0] [i_1] [0] = ((~((13507580652877793686 ? 56 : var_4))));
                            arr_12 [i_0] [i_0] [i_2] [i_1] = 3133676635744204908;
                        }
                    }
                }
                var_10 = (-57 && 52);
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                            {
                                var_11 = (((var_5 - var_3) <= (min(((min(var_4, 56))), 3133676635744204908))));
                                arr_19 [i_1] [2] [i_4] [i_1 + 1] [i_1] = (((40 || 24) | (max(16352, 0))));
                                var_12 = 49234;
                                var_13 ^= ((var_0 ? ((var_8 ? 454575354775695 : -57)) : var_7));
                                arr_20 [14] [i_6] &= (min((((((max(-25, 254))) && 0))), 0));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                            {
                                arr_23 [i_1] [i_1] = ((var_8 ? var_5 : ((var_3 ? 5908006740594719180 : 40))));
                                var_14 &= (~-24);
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                            {
                                var_15 = (!var_8);
                                var_16 = (~2147483647);
                                arr_26 [i_8] [i_1] [i_4] [i_1] [i_0] = 18446744073709551615;
                                var_17 = ((-((0 ? 32310 : var_0))));
                                arr_27 [i_1] [i_5] [i_4] [i_1] [i_1] = (((43395 % 18) ? -16301 : 8200964831228640341));
                            }
                            var_18 = (!-7);
                            var_19 = (max(var_19, ((min(53, 8)))));
                            var_20 = (~27691);
                        }
                    }
                }
                var_21 -= (min(47, var_3));
                var_22 = (((max(9223372036854775807, 235)) > var_9));
            }
        }
    }
    var_23 = 52;

    for (int i_9 = 2; i_9 < 21;i_9 += 1)
    {
        var_24 = var_0;
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                {
                    var_25 = ((var_3 ? 48 : (((56 + -88) ? -8214506175850223803 : -19))));
                    arr_36 [i_9] [i_10] [i_10] = 15674958977606295311;
                }
            }
        }
        arr_37 [i_9] [i_9] = ((4569600309837776982 <= (-1885783758 && 25)));
    }
    var_26 = (-8214506175850223803 + var_6);
    var_27 = var_9;
    #pragma endscop
}
