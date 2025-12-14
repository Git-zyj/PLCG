/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = ((-(min(var_9, 1125349483))));
    var_12 = var_0;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = 8960011988521563232;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_13 += (max((arr_1 [0]), (max(var_7, var_2))));
                    arr_7 [i_0] [i_0] [i_0] = (~-18);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_14 = (arr_5 [i_0] [i_0] [i_2]);
                                var_15 *= ((-9223372036854775807 - 1) ? (-127 - 1) : (-9223372036854775807 - 1));
                                arr_12 [i_4] [i_3] [i_0] [i_0] [10] [i_0] = (var_4 && 1);
                                var_16 = (arr_3 [i_0] [i_1]);
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] [i_2] = 18446744073709551615;
                    var_17 += var_0;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 16;i_6 += 1)
            {
                {
                    var_18 = ((var_6 && ((max(var_7, var_8)))));
                    var_19 += (((((((-32756 ? 1125349483 : -397376580))) ? var_8 : var_7)) % (((-((var_4 ? (arr_11 [i_6] [14] [8] [i_6] [i_6]) : (arr_16 [i_0] [1] [0]))))))));
                }
            }
        }
        var_20 &= (((max(var_5, (~var_7))) >> (var_3 - 6784496947768689578)));
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        var_21 = (min(var_21, var_3));
        arr_21 [i_7] = -4;
        arr_22 [19] = (!645140811136929394);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            {
                                var_22 = (min(var_22, var_7));
                                var_23 = (min(var_23, ((((max(var_5, (var_9 + var_5))) + ((((max((arr_24 [i_7]), var_8))) ? var_5 : ((max(127, 1))))))))));
                                var_24 = min(((max(((35667 ? -13 : (-127 - 1))), var_5))), var_0);
                            }
                        }
                    }
                    var_25 = arr_32 [i_7] [i_8] [i_9] [i_9] [7];
                    var_26 = ((~-13) ? 9223372036854775797 : var_3);
                    var_27 = var_8;
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 19;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            {
                                arr_41 [i_9] [i_8] [i_9] [i_13] = ((min((((arr_33 [i_7] [1] [i_7] [10] [i_7]) ? var_8 : var_0)), ((var_6 | (arr_24 [i_9]))))));
                                var_28 = 3169617812;
                                var_29 -= var_5;
                                var_30 = var_8;
                            }
                        }
                    }
                }
            }
        }
        var_31 *= (arr_30 [i_7] [i_7] [17] [13]);
    }
    #pragma endscop
}
