/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_17 = (min(var_17, var_12));
                        var_18 = (var_0 & 53);
                    }
                }
            }
        }
        var_19 = (16599037804470790408 / 41555);
        var_20 -= var_0;
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
    {
        var_21 = (min(var_21, ((((-5357591453503517233 / 12171697027486615547) + (min((arr_12 [i_4]), 3584262634)))))));
        arr_13 [i_4] = min(var_4, ((((max(5850487733256314522, 1776951191)) <= ((18446744073709551614 << (((arr_11 [i_4]) - 3028850491848274775))))))));
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 1; i_6 < 24;i_6 += 1)
        {
            var_22 &= 6;
            var_23 = 3365487742;
        }
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {

                /* vectorizable */
                for (int i_9 = 1; i_9 < 24;i_9 += 1) /* same iter space */
                {

                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        var_24 = (min(var_24, (arr_19 [i_10] [i_5])));
                        var_25 = ((var_13 ? (!var_6) : var_16));
                        var_26 -= ((96 ^ (arr_28 [i_10] [i_7] [i_9] [i_9] [i_9 - 1] [i_9])));
                        arr_31 [i_5] [i_5] [i_5] [i_9] [i_10] = ((arr_19 [i_5] [i_5]) + 3);
                        arr_32 [i_5] [i_9] [i_8] [18] [i_5] = (((!59130) ? 65524 : (var_4 - 1)));
                    }
                    var_27 = 76;
                }
                for (int i_11 = 1; i_11 < 24;i_11 += 1) /* same iter space */
                {
                    var_28 = ((-1 / (max(169, ((4294967295 ? (arr_16 [i_5] [i_5]) : 5))))));
                    var_29 = ((((((var_6 / var_14) * 189))) ? (max(var_0, var_6)) : ((max((13097 * 1), (arr_34 [i_11] [1] [i_8] [i_11 + 1] [i_8]))))));
                }
                for (int i_12 = 1; i_12 < 24;i_12 += 1) /* same iter space */
                {
                    arr_39 [i_5] [23] [i_7] [23] [i_8] [i_5] = 255;
                    var_30 = (((64 && ((max(9318745353237885105, var_0))))));
                }
                for (int i_13 = 1; i_13 < 24;i_13 += 1) /* same iter space */
                {
                    var_31 += (var_6 > 13929);
                    var_32 = (min(var_32, var_11));
                    arr_43 [i_5] [i_5] [i_5] [i_5] = ((-((max(88, (arr_36 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))));
                }
                arr_44 [i_5] = 7;
                var_33 = var_2;
            }
            /* vectorizable */
            for (int i_14 = 0; i_14 < 25;i_14 += 1)
            {
                var_34 = (var_3 || 58705);
                var_35 = (-(arr_45 [i_7] [i_5] [18]));
                var_36 = var_3;
                var_37 -= (arr_34 [i_5] [i_5] [i_5] [i_7] [i_14]);
            }
            var_38 = (~-12);
            var_39 = ((((18120636706112970139 == var_4) ? 24852 : ((min(1, 61590))))));
        }
        var_40 += 18161543220653030272;

        /* vectorizable */
        for (int i_15 = 1; i_15 < 1;i_15 += 1)
        {
            var_41 = (2305843009213693951 < 0);
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                for (int i_17 = 3; i_17 < 22;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 25;i_18 += 1)
                    {
                        {
                            var_42 = ((var_11 << (var_14 - 50006)));
                            var_43 = (arr_28 [i_5] [i_5] [i_5] [i_5] [i_17] [i_17]);
                        }
                    }
                }
            }
            var_44 = (25810 ? 27 : var_0);
            var_45 = 422283773545007660;
        }
        for (int i_19 = 0; i_19 < 25;i_19 += 1)
        {
            var_46 = ((!((var_4 == (min(32768, 251269033))))));
            var_47 = ((!(((-8479602217182744988 || 0) && var_10))));
            var_48 -= 7758278814952929258;
            var_49 = ((((((80 ? 10261210621092733896 : 0)))) ? (65516 != var_9) : 10406));
        }
        for (int i_20 = 0; i_20 < 25;i_20 += 1)
        {
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 25;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 25;i_22 += 1)
                {
                    {
                        var_50 ^= (max((arr_15 [i_22]), 65535));
                        var_51 &= 18446744073709551608;
                    }
                }
            }
            var_52 = (min(27, (255 > var_3)));
        }
        arr_72 [i_5] = (30680 | -5978922010837540911);
        arr_73 [i_5] = ((((max(4, -48453))) ? (arr_47 [i_5] [i_5] [i_5]) : (arr_70 [i_5] [12] [15] [i_5])));
    }
    for (int i_23 = 0; i_23 < 25;i_23 += 1) /* same iter space */
    {
        arr_76 [i_23] = ((min(var_2, ((11458300866067373952 ? var_4 : 6)))));
        var_53 = var_14;
    }
    var_54 = var_16;
    var_55 = var_12;
    #pragma endscop
}
