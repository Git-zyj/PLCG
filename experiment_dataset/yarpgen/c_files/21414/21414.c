/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [4] [i_0] = (arr_0 [i_0]);
        var_13 -= ((-(~var_0)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_14 = ((!(arr_1 [18])));
                                arr_14 [17] [17] [17] = ((!(arr_3 [i_4] [i_1])));
                            }
                        }
                    }
                    var_15 = var_0;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        var_16 = var_5;
        var_17 = var_5;

        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            var_18 -= 1;

            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                var_19 = (max(var_19, (~910056749)));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        {
                            arr_28 [i_5] [i_5] = ((~(~var_5)));
                            var_20 = (max(var_20, -var_5));
                            arr_29 [i_5 - 1] [i_5] [i_5 - 1] [i_5 + 1] = (~910056749);
                            var_21 = 31;
                            var_22 = 3384910546;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 4; i_11 < 14;i_11 += 1)
                    {
                        {
                            arr_35 [i_5] = 3384910547;
                            var_23 -= (arr_3 [i_5] [i_5]);
                        }
                    }
                }
            }
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 4; i_13 < 13;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        {
                            arr_45 [1] [i_6] [i_6] [i_6] [i_6] = ((~(arr_39 [i_14] [i_13 - 2] [i_12] [i_5 + 1] [i_6] [i_5 + 1])));
                            var_24 -= (!-16);
                            arr_46 [i_5] [i_6] [i_12] [i_13] [i_5] = (~var_9);
                            arr_47 [0] [0] [i_14] [0] [i_14] = var_1;
                        }
                    }
                }
                var_25 = (~var_2);
            }
            for (int i_15 = 0; i_15 < 15;i_15 += 1)
            {
                var_26 = (~3384910532);
                var_27 = (min(var_27, var_9));
            }
            for (int i_16 = 1; i_16 < 14;i_16 += 1)
            {
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 15;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 15;i_18 += 1)
                    {
                        {
                            var_28 = (~17452173759532061760);
                            arr_57 [i_16 - 1] [i_16] [i_16 - 1] [i_16 + 1] = 910056749;
                            var_29 &= ((-(arr_31 [i_16 + 1] [i_16] [i_5])));
                            var_30 = -8927988653530075996;
                        }
                    }
                }
                var_31 += 1;
                var_32 = 2128572912890928309;
                var_33 = (!3384910554);
                var_34 = -var_6;
            }
            arr_58 [i_6] = var_2;
        }
        for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
        {
            var_35 ^= 3384910546;

            for (int i_20 = 1; i_20 < 14;i_20 += 1)
            {
                arr_63 [i_20 + 1] [i_20 + 1] [i_19] [i_5] = var_11;
                var_36 = (!2128572912890928309);
            }
            for (int i_21 = 0; i_21 < 15;i_21 += 1)
            {
                var_37 = (~7390026072818140967);
                /* LoopNest 2 */
                for (int i_22 = 4; i_22 < 13;i_22 += 1)
                {
                    for (int i_23 = 2; i_23 < 12;i_23 += 1)
                    {
                        {
                            arr_71 [i_5] [i_5 + 1] [i_5] = (~910056764);
                            var_38 |= -var_7;
                            arr_72 [i_23] [i_19] [i_21] [i_19] [i_5] = (~1853944511);
                        }
                    }
                }
                var_39 = -var_2;
                arr_73 [i_5] [i_5 + 1] = (arr_42 [i_5 - 1] [i_5 + 1] [i_21]);
            }
            for (int i_24 = 1; i_24 < 14;i_24 += 1)
            {

                for (int i_25 = 0; i_25 < 0;i_25 += 1) /* same iter space */
                {
                    var_40 -= var_8;
                    var_41 = var_7;
                    arr_78 [i_24] = (!var_11);
                }
                for (int i_26 = 0; i_26 < 0;i_26 += 1) /* same iter space */
                {
                    arr_81 [i_26] = -var_0;
                    arr_82 [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 1] [i_5] [i_5] = var_1;
                }
                for (int i_27 = 0; i_27 < 15;i_27 += 1)
                {
                    var_42 = var_10;
                    arr_85 [i_5] [i_19] [i_24 - 1] [i_24 - 1] = var_10;
                }
                var_43 |= var_4;
            }
        }
    }
    var_44 = (!3384910567);
    #pragma endscop
}
