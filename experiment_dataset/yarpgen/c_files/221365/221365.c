/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 21120;
    var_11 = ((var_2 ? var_6 : (var_6 != 44395)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = -4814746263606992853;
                arr_6 [i_0] [i_1] = -11;
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 |= -3;
                                var_14 ^= 44416;
                                arr_15 [i_0] [5] [i_2 + 4] [i_3] [i_3] [5] = ((21420 ? (((((max(-87, -4))) >= -55))) : (((!160) ? -var_4 : ((var_2 ? var_4 : var_2))))));
                                var_15 ^= 1;
                            }
                        }
                    }
                }
                var_16 = -135;
            }
        }
    }

    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {
                        arr_24 [i_7] [i_7] [i_7] = (((((-2854922962878456795 ? var_0 : -3242230550144348294))) | ((21437 ? 1180706907 : ((1180706913 ? 56 : var_1))))));
                        var_17 = ((var_2 ? (((var_6 < (((2911176889751848391 ? var_7 : var_0)))))) : ((min((arr_19 [i_6 + 2] [i_7 - 1] [i_7 + 1]), (arr_19 [i_6 - 1] [i_7 + 1] [i_7 - 1]))))));
                    }
                }
            }
        }
        var_18 *= -2854922962878456793;
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    {
                        arr_34 [i_5] [i_9] [i_10] [i_11] [i_11] = (-11 != 251);

                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            var_19 = 65;
                            var_20 ^= ((-29155 ? 1180706903 : 0));
                        }
                        for (int i_13 = 1; i_13 < 17;i_13 += 1)
                        {
                            var_21 |= 25964;
                            arr_40 [i_9] [i_9] [i_9] [i_9] [18] = (-2854922962878456772 + 186);
                            var_22 *= var_7;
                        }
                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            arr_43 [i_5] [i_5] [i_10] [i_14] [i_5] [i_5] [i_14] = ((var_4 / ((1180706921 ? var_0 : (max(182, 2044))))));
                            arr_44 [i_5] [i_5] [i_10] [i_5] [i_5] = 1180706903;
                            arr_45 [i_5] [i_9] [i_10] [i_10] [i_5] [i_5] [i_14] = var_6;
                            arr_46 [i_10] = (((((var_8 ? ((var_4 ? var_8 : var_6)) : ((1 ? var_6 : var_9))))) ? var_3 : (((44400 ? 228 : 1)))));
                            var_23 |= ((18446744073709551602 ? 1 : (((1 ? -18169 : var_0)))));
                        }
                        var_24 = (min(1, var_4));
                        arr_47 [4] [13] [10] [i_10] [i_10] [i_11] = var_7;
                    }
                }
            }
        }
    }
    #pragma endscop
}
