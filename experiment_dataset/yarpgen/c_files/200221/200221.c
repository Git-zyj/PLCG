/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 2; i_2 < 9;i_2 += 1) /* same iter space */
            {
                var_18 += (~49247);
                var_19 = -var_12;
            }
            for (int i_3 = 2; i_3 < 9;i_3 += 1) /* same iter space */
            {
                arr_13 [i_0] [i_0] [i_3] = var_15;
                var_20 = (max(var_20, (((-1 ? 0 : -29394)))));
                arr_14 [i_0] = var_10;
                var_21 *= (~var_3);

                for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                {

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_22 = -var_15;
                        arr_19 [i_5] [i_1] [i_4] [i_4] [i_0] [i_5] = var_16;
                    }
                    var_23 = (~137368657);
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    var_24 &= (!var_0);
                    arr_23 [i_0] [i_1] [i_3 + 3] [i_6] = (!var_0);

                    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                    {
                        arr_28 [i_0] [i_0] [i_1] [i_3] [i_6] [i_7] = 1;
                        var_25 = var_4;
                        arr_29 [1] [i_1] [i_1] [i_1] [i_0] &= ((0 ? var_14 : ((192 ? 209 : var_11))));
                    }
                    for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                    {
                        var_26 = (min(var_26, 64980));
                        var_27 += ((var_11 ? 561 : var_1));
                        var_28 ^= var_2;
                        var_29 = 6968160586895994092;
                        arr_33 [i_6] [i_1] [i_1] [8] [i_8] [i_6] = 192;
                    }
                    for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                    {
                        var_30 -= ((-((1 ? var_16 : var_9))));
                        arr_36 [i_9] [i_9] [i_1] [6] [1] = (~var_11);
                        arr_37 [i_9] [i_6] [i_3] [i_1] = var_15;
                        var_31 = 572;
                        var_32 = (max(var_32, 2676790615905657550));
                    }
                    for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                    {
                        arr_40 [i_0] [i_1] [i_3] [i_6] [i_1] [i_6] [i_1] = (!64974);
                        var_33 *= (~46);
                    }
                }
            }
            var_34 = 1;
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
        {
            var_35 = ((64974 ? 760671988 : 64963));
            var_36 |= (~127);
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
        {
            var_37 |= 61;
            var_38 = 96;
            arr_48 [i_0] [i_0] [i_0] = var_0;
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
        {
            arr_51 [0] [i_13] [i_13] = (((((var_0 ? var_4 : var_17))) ? 573 : 32767));
            var_39 += (!64975);
        }
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 12;i_15 += 1)
            {
                {

                    for (int i_16 = 0; i_16 < 12;i_16 += 1)
                    {
                        var_40 = (max(var_40, (((-(~48379))))));
                        arr_59 [i_14] = ((var_0 ? 262142 : -120));
                        var_41 = var_5;

                        for (int i_17 = 0; i_17 < 12;i_17 += 1) /* same iter space */
                        {
                            var_42 -= -3843951005906122847;
                            var_43 = var_10;
                        }
                        for (int i_18 = 0; i_18 < 12;i_18 += 1) /* same iter space */
                        {
                            var_44 = (max(var_44, 25695));
                            arr_66 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_16] &= var_9;
                            var_45 = (~var_9);
                            arr_67 [i_0] [i_14] [i_14] [i_16] [i_18] = (((~var_14) ? -2803907822911828161 : var_3));
                        }

                        for (int i_19 = 0; i_19 < 12;i_19 += 1) /* same iter space */
                        {
                            var_46 = var_8;
                            arr_71 [6] [i_14] [i_15] [i_14] [i_14] = (!4294966784);
                            var_47 = -var_1;
                            var_48 = (!-103);
                            var_49 = (max(var_49, (((3697491254 ? var_15 : (~-79856450))))));
                        }
                        for (int i_20 = 0; i_20 < 12;i_20 += 1) /* same iter space */
                        {
                            arr_74 [i_0] [i_16] [i_15] [i_16] [i_14] [i_14] = ((var_10 ? 169 : (~1943761086)));
                            var_50 += 223;
                            arr_75 [i_14] [i_14] [i_15] [i_16] = (~48379);
                            var_51 = (max(var_51, (((var_12 ? 909653074 : 64)))));
                            arr_76 [i_14] [i_14] [i_15] [i_14] [i_16] [i_14] = 144;
                        }
                    }
                    var_52 = (((var_16 ? var_16 : 64974)));
                    var_53 = 192;
                }
            }
        }
    }
    var_54 = (~8837);
    #pragma endscop
}
