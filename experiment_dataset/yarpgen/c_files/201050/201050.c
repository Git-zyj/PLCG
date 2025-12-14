/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {

                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    var_10 = -71;
                    var_11 = (max(var_11, (~var_6)));
                    var_12 = (min(var_12, -1));
                }
                var_13 = var_5;

                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    arr_14 [i_0] [i_4] = var_4;
                    var_14 = var_3;
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_15 = var_7;
                    var_16 = 0;
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    var_17 = -57;

                    for (int i_7 = 2; i_7 < 12;i_7 += 1)
                    {
                        var_18 = (max(var_18, var_1));
                        var_19 = (max(var_19, var_7));
                        var_20 = var_0;
                    }
                    for (int i_8 = 4; i_8 < 11;i_8 += 1)
                    {
                        var_21 = 2580323818;
                        var_22 = var_0;
                        arr_28 [i_8 - 1] [i_6] [i_2] [i_1] [i_1] [i_1] [i_0] = 255;
                        var_23 = 8313519008339055310;
                    }
                    var_24 = var_4;
                }
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    var_25 -= var_5;
                    var_26 = var_3;
                    var_27 = (min(var_27, (!var_5)));
                }
            }
            for (int i_10 = 1; i_10 < 12;i_10 += 1)
            {
                var_28 = 9223372036854775800;
                var_29 = 685294911;
            }
            for (int i_11 = 1; i_11 < 1;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    var_30 = var_8;
                    arr_41 [i_0] [i_0] = 0;
                    var_31 = (~var_4);

                    for (int i_13 = 1; i_13 < 12;i_13 += 1)
                    {
                        arr_44 [i_13 + 1] [i_12] [i_11] [i_1] [i_0] = 252;
                        var_32 = var_8;
                        arr_45 [i_13] [i_11 - 1] [i_11 - 1] [i_1] = 25527;
                        var_33 = 15012256908410950240;
                    }
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        var_34 = -1236748673;
                        var_35 = var_1;
                    }
                }
                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {
                    var_36 = 1215657303;
                    var_37 = var_8;
                }
                for (int i_16 = 0; i_16 < 14;i_16 += 1)
                {
                    var_38 += var_3;
                    var_39 += var_1;

                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        var_40 = var_9;
                        var_41 = var_5;
                        var_42 = var_2;
                        var_43 = 18;
                    }
                    for (int i_18 = 1; i_18 < 13;i_18 += 1)
                    {
                        var_44 = (~var_8);
                        var_45 = var_0;
                        var_46 = 60054;
                        arr_59 [i_16] [i_16] [i_16] [i_16] [i_16] = -var_4;
                        var_47 = 155;
                    }
                    arr_60 [i_0 + 1] [i_16] [i_0 + 1] [i_11 - 1] [i_11 - 1] [i_16] = (!-6097797923222592743);
                }
                var_48 = 25531;
                var_49 = (!var_5);
                var_50 = var_2;
            }
            var_51 = var_8;
        }
        for (int i_19 = 0; i_19 < 14;i_19 += 1)
        {
            arr_63 [i_0] [i_0 - 2] [i_19] = -900403827528092831;
            var_52 += (!var_4);
        }
        for (int i_20 = 0; i_20 < 14;i_20 += 1)
        {

            for (int i_21 = 0; i_21 < 14;i_21 += 1)
            {
                /* LoopNest 2 */
                for (int i_22 = 1; i_22 < 13;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 14;i_23 += 1)
                    {
                        {
                            arr_74 [i_22] = 14;
                            arr_75 [i_20] [i_20] [i_20] [i_21] [i_22] [i_20] [i_23] = var_9;
                            var_53 = -6097797923222592725;
                            var_54 = (max(var_54, var_2));
                        }
                    }
                }
                var_55 = var_4;
                var_56 = var_4;
            }
            var_57 = var_9;
        }
        var_58 = (min(var_58, var_8));
    }
    var_59 -= var_0;
    var_60 = var_3;
    var_61 = var_6;
    #pragma endscop
}
