/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 = ((0 ? (max(1, (7548 >> 0))) : ((1 ? -1700468742 : 63))));
                                var_21 = (((((((3073235333 >> (-14417 + 14426))) | (-1604048261 || 1)))) ? 36475 : 1));
                            }
                        }
                    }
                }
                var_22 = (max(var_22, ((min((((1 && (((1 ? 244 : 2147483647)))))), (((~39391668) ? -1 : 1)))))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_21 [i_0] [0] [i_5] [i_6] [i_7] [i_6] = (((-(~0))));
                                var_23 = (min(var_23, (-2147483647 - 1)));
                                var_24 = (min(var_24, (((-21200 ? (~1) : -1)))));
                                var_25 = ((((-1 ? 15 : 1))) ? (max((max(1700468741, -2065119889)), 1)) : ((((min(1678115993, 1))) ? (-2065119889 - 11382) : ((min(-17472, -52))))));
                            }
                        }
                    }
                }
                var_26 = ((~((((~1) == 1)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 20;i_9 += 1)
        {
            {
                var_27 = (1 ^ 54154);
                arr_26 [i_8] [i_9] [i_9 + 3] = (max(0, -15434));

                /* vectorizable */
                for (int i_10 = 1; i_10 < 21;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_28 = ((~(~164)));
                        var_29 = -7651;
                        var_30 = (max(var_30, (7650 ^ 9223372036854775807)));
                    }
                    for (int i_12 = 2; i_12 < 22;i_12 += 1)
                    {
                        var_31 = 3964697271701778639;
                        var_32 = (min(var_32, ((((182 ? 1 : 20693))))));
                    }
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        arr_40 [i_8] [i_8] [i_8] = 1;
                        arr_41 [i_8] [i_8] [i_10] [i_13] = (((~3) ? ((7868 ? -2147483637 : -2421)) : 0));
                        var_33 = ((((-1 + 9223372036854775807) >> 1)));
                    }
                    arr_42 [i_8] [i_9 - 1] [i_10] = 1;
                    var_34 = (min(var_34, (((0 ? 65535 : 127)))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 23;i_15 += 1)
                        {
                            {
                                var_35 = 255;
                                var_36 = (min(var_36, (~0)));
                                var_37 = (min(var_37, 0));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    var_38 = (min(var_38, 1));
                    var_39 &= 54;
                    arr_49 [8] [0] [0] [i_16] &= ((4294967287 ? 11381 : -79));
                }
                var_40 = (min(var_40, (max(((((851016752 && -27) ? -0 : 1))), (min(1, 1))))));
                var_41 &= min(1, (((max(0, 0)))));
            }
        }
    }
    #pragma endscop
}
