/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0 + 1] [14] [18] [i_1 + 1] |= (var_4 ? (((-var_16 > (arr_5 [i_2])))) : (~var_12));
                    arr_9 [1] [1] |= ((648073822 ? (arr_7 [i_1 - 1] [i_0 + 1] [i_0 + 1]) : (((arr_7 [i_1 - 1] [i_0 + 1] [i_0 + 1]) ? 16483999802210391222 : 648073822))));
                    arr_10 [i_0] [i_1] = ((var_4 ? -1909661963 : 648073822));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 = (((min(-5376945324183206909, -648073822))));
                                var_18 ^= ((-648073822 >> (-19330 + 19376)));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_19 ^= (arr_16 [i_1] [i_1]);
                        var_20 = (((arr_1 [i_1 + 1]) / ((6357921699291739968 & (((648073822 ? -648073823 : (arr_14 [i_0] [i_1] [i_2] [i_2] [i_5]))))))));
                    }
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            arr_22 [8] [i_1] [i_2] [i_6 + 1] [i_7] = (((arr_16 [i_6] [i_7]) ? var_6 : (((1 ? var_11 : (arr_2 [i_0] [1]))))));
                            arr_23 [i_0] [i_1] [i_1] [i_6 + 1] [i_7] = (((((2843322627 ? 1837982338 : 0))) | -5376945324183206909));
                            arr_24 [i_0] [i_0] [i_2] [i_1] [i_2] = ((1096326006 | (arr_13 [i_2] [0] [16])));
                        }
                        arr_25 [i_6] [i_6] [20] [i_1] = ((~(arr_5 [i_2])));
                    }
                }
            }
        }
        arr_26 [i_0] = (arr_0 [i_0 + 1] [i_0 + 1]);
        var_21 = (arr_6 [i_0] [i_0]);
        var_22 ^= (min((((arr_5 [i_0 + 1]) ? (arr_5 [i_0 + 1]) : (arr_5 [i_0 + 1]))), (((-648073822 ^ 5376945324183206909) ? 3165692333 : 123))));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 20;i_8 += 1)
    {
        arr_31 [i_8 + 1] [i_8] = (arr_6 [i_8 + 2] [i_8 - 1]);
        arr_32 [i_8] = var_11;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                {
                    var_23 = 843680134;
                    arr_39 [7] [1] [i_9] [i_10] = ((-(arr_35 [i_8] [i_8 + 2])));
                }
            }
        }
    }
    var_24 = (max(var_24, (((1129274962 ? (-0 + var_6) : var_1)))));

    /* vectorizable */
    for (int i_11 = 1; i_11 < 21;i_11 += 1)
    {
        var_25 = ((~(8676416597653607767 | -4068286132780127262)));
        var_26 = -5376945324183206909;
    }
    var_27 = var_5;
    var_28 = var_8;
    #pragma endscop
}
