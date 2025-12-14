/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_2));
    var_16 += (min(var_5, 112));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        var_17 = (min(var_17, -122));
                        var_18 ^= (((arr_9 [i_0]) * (((2181431069507584 >> (2181431069507574 - 2181431069507515))))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_19 = -var_3;
                        var_20 = (((!var_4) ? var_9 : var_8));

                        for (int i_5 = 4; i_5 < 18;i_5 += 1)
                        {
                            var_21 = (min(var_21, -306398449696489926));
                            var_22 = 1146765945;
                            var_23 = (min(var_23, (!var_3)));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_18 [i_1] [i_1] [i_4] [i_4] [i_6] = ((~((1146765945 ? 14887983086189752226 : var_14))));
                            arr_19 [i_0] [i_1] [i_2] [i_1] [16] = (((127 ? var_4 : 1146765944)));
                            var_24 = var_10;
                        }
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        arr_22 [i_7] [i_2] [0] [i_0] [i_0] [i_7] = (arr_7 [i_0 + 1] [i_0] [i_0] [i_0]);
                        var_25 = ((4103610235 ? (-4918907897809031586 != 7) : ((2615225862 ? 16176043232990566259 : (arr_14 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))));
                        arr_23 [i_7] [12] [12] [i_7] [14] = (~26);

                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_26 = (var_10 < -1048064);
                            var_27 = 213478083;
                            var_28 = (!var_12);
                            var_29 = (max(var_29, (arr_6 [i_7])));
                            var_30 = ((-(arr_15 [i_0] [i_1] [i_2] [i_7] [i_0 - 1] [i_7])));
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_31 = (((arr_9 [i_7]) ? var_14 : (arr_9 [i_7])));
                            var_32 = -24696;
                        }
                        for (int i_10 = 1; i_10 < 19;i_10 += 1)
                        {
                            arr_32 [i_7] [i_7] [i_0] [i_2] [i_7] = (arr_16 [i_0 + 1] [i_0 + 1] [i_2] [i_7] [i_2]);
                            var_33 = (max(var_33, ((((!20851) < (arr_14 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_10 - 1]))))));
                            var_34 = ((-(arr_27 [i_1] [i_7] [i_2] [i_7] [i_1] [i_1] [i_10 - 1])));
                            var_35 = 20851;
                            var_36 = (min(var_36, ((((arr_13 [i_0] [i_0] [i_0 - 1] [i_10 + 1] [i_10 - 1]) << (((arr_6 [i_0 - 2]) - 797891194)))))));
                        }
                        arr_33 [i_0] [i_7] = (var_8 < 637);
                    }
                    var_37 = 1;
                    arr_34 [i_0] [i_1] [0] |= (((~-1) ? (((var_8 ? 14554 : (arr_31 [i_0])))) : (arr_14 [i_0] [i_0] [i_2] [i_0 - 1] [i_0] [i_2] [i_1])));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            {
                                var_38 = ((0 ? 237 : 776688724));
                                var_39 = var_6;
                                arr_42 [i_1] [i_1] [i_2] [i_0] [i_12] = (~-6401854927098585507);
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 20;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 19;i_14 += 1)
            {
                {
                    var_40 = ((var_9 ? var_0 : (arr_17 [i_0] [i_0] [i_0 - 2] [i_0] [i_0 - 2] [i_0 + 1] [i_0])));
                    arr_48 [i_13] = (((arr_31 [i_0]) ? -6401854927098585506 : 4081489182));
                }
            }
        }
    }
    #pragma endscop
}
