/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_0;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            var_21 = (!var_18);
            var_22 = var_19;

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 23;i_4 += 1)
                    {
                        {
                            var_23 = (!var_11);
                            var_24 = (~-var_7);
                            var_25 = (max(var_25, var_19));
                        }
                    }
                }
                var_26 = var_14;
                arr_12 [i_0] [i_1] [i_2] = 128;
            }
            for (int i_5 = 1; i_5 < 22;i_5 += 1)
            {
                arr_15 [i_5 + 1] [i_1 - 1] [i_5 + 1] = (~(!var_0));
                arr_16 [i_0] [i_1 - 1] [i_5 + 1] [i_5] &= ((~(~var_18)));
            }
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {

                for (int i_7 = 1; i_7 < 22;i_7 += 1)
                {
                    var_27 = var_7;

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        var_28 = var_6;
                        arr_25 [i_8] [i_7] [i_8] [i_8] = (!(!var_13));
                        arr_26 [i_6] [i_7] [14] = (~var_2);
                        arr_27 [i_7] [i_6] [i_6] = var_9;
                    }
                    for (int i_9 = 3; i_9 < 23;i_9 += 1)
                    {
                        arr_30 [i_0] [i_1 + 1] [i_7] [11] [i_6] [23] [23] = var_13;
                        var_29 ^= (-(!var_16));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        var_30 = (~var_12);
                        arr_34 [i_0] [i_7] [i_0] [8] [i_0] [i_0] = (~var_12);
                        arr_35 [i_0] [i_10] [i_7] [i_7] [i_6] [i_6] [4] = (!var_4);
                    }
                    var_31 = var_0;
                    arr_36 [i_1 - 2] [i_7] = var_0;
                }
                for (int i_11 = 2; i_11 < 23;i_11 += 1)
                {
                    var_32 = ((!(~0)));
                    arr_39 [i_1] = -var_4;

                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        var_33 = -var_15;
                        arr_43 [i_0] [i_1 - 1] [23] [i_11 + 1] [i_12] = var_7;
                    }
                }
                for (int i_13 = 1; i_13 < 20;i_13 += 1)
                {
                    arr_47 [i_0] [i_1] [i_6] [i_13] = (~var_11);
                    var_34 = var_19;
                }
                arr_48 [i_6] [21] [21] [4] = -var_12;
            }
            for (int i_14 = 0; i_14 < 24;i_14 += 1)
            {
                var_35 = ((~(~var_1)));
                arr_53 [i_14] = var_4;
                var_36 += (+-var_13);
            }
        }
        for (int i_15 = 0; i_15 < 24;i_15 += 1)
        {
            var_37 *= ((~(~var_6)));
            arr_57 [i_0] = -var_16;
        }
        var_38 = var_1;
        arr_58 [i_0] = var_0;
    }
    var_39 = -var_3;
    var_40 = var_4;
    var_41 = (!var_12);
    #pragma endscop
}
