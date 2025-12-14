/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (min((min((arr_1 [i_0 + 3]), (arr_1 [i_0 + 3]))), (max(255, (arr_1 [i_0 - 1])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, (arr_1 [i_0])));
                    var_20 &= ((-(((130 ? (arr_1 [i_1]) : var_5)))));

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        arr_12 [i_0] [16] [8] [i_0] |= (arr_1 [i_0]);
                        arr_13 [i_0] [i_0] [i_2] [i_2] [i_3] = -26622;
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 19;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            var_21 = (min(var_21, ((min((-32767 - 1), ((((((arr_11 [i_5] [i_5] [i_5] [i_4 + 3] [i_4]) ? (arr_8 [i_4] [i_5]) : var_13))) ? (min(4113661344881007175, var_17)) : (((var_18 ? (arr_10 [i_4] [i_4]) : var_0))))))))));
            arr_19 [16] [12] [i_5] |= (min((!823529283227682025), (arr_6 [i_4])));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            arr_23 [i_6] [i_4] [i_4] = (~var_5);
            var_22 *= var_8;
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        {
                            var_23 = (~var_14);
                            arr_30 [i_7] [i_4] [i_4] [i_7] [i_7] [i_7] [i_7] = (~22550);
                        }
                    }
                }
            }
        }
        var_24 = (min(((var_17 ^ (min(var_15, -26638)))), 1589389746));
    }
    for (int i_10 = 1; i_10 < 19;i_10 += 1) /* same iter space */
    {
        var_25 ^= ((~((-(((arr_15 [i_10] [21]) ^ var_8))))));
        arr_33 [i_10] = (!26638);
    }

    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        arr_36 [i_11] [i_11] = (arr_27 [6] [i_11]);
        arr_37 [i_11] = (((arr_35 [i_11]) * (((arr_35 [i_11]) + (arr_35 [i_11])))));
        arr_38 [i_11] = (((((arr_7 [i_11] [i_11] [i_11]) + 2147483647)) >> (((((((128 ? -1589389747 : 1589389746))) ? ((1 ? -26638 : 26658)) : 0)) + 26640))));
    }
    for (int i_12 = 0; i_12 < 15;i_12 += 1)
    {
        var_26 = ((-431524986 ? 14 : -64));
        arr_42 [i_12] = ((((var_1 ? -26661 : var_4))));
    }
    for (int i_13 = 0; i_13 < 11;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 11;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 10;i_15 += 1)
            {
                {
                    var_27 &= var_7;
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 11;i_16 += 1)
                    {
                        for (int i_17 = 2; i_17 < 8;i_17 += 1)
                        {
                            {
                                var_28 = var_8;
                                var_29 = (((var_6 ? 117 : (min(2147483647, 2147483647)))) < (~var_11));
                                var_30 = (min(var_16, (min((((arr_48 [i_13]) ? var_16 : 130)), (~71)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 4; i_18 < 10;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 11;i_19 += 1)
                        {
                            {
                                var_31 -= ((~((~(arr_10 [i_19] [i_15])))));
                                var_32 -= (max((min(((var_18 << (var_2 + 28542))), (((~(arr_20 [i_14] [i_14] [i_14])))))), (~var_18)));
                                var_33 += ((min((arr_26 [i_15 - 1] [i_15 - 1] [i_18 - 2] [i_15 - 1] [i_18]), (arr_0 [i_15 - 1]))));
                                var_34 = ((~(((!((min(var_9, 192))))))));
                            }
                        }
                    }
                    var_35 = ((var_16 ? (arr_29 [13] [i_14] [i_13]) : ((((arr_17 [i_13] [i_13]) ? (((max(-1, -106)))) : (arr_24 [i_13] [i_13] [i_13] [i_13]))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_20 = 3; i_20 < 7;i_20 += 1)
        {
            for (int i_21 = 3; i_21 < 9;i_21 += 1)
            {
                {
                    var_36 = (min(1, (max(26637, 117))));
                    arr_65 [i_13] [i_20] [i_21] = var_1;
                    arr_66 [i_13] [1] [i_13] = ((!((!((min(-6, 0)))))));
                    var_37 = ((((min((arr_55 [i_13] [i_21 - 2] [i_21] [i_21] [i_21]), var_0))) ? ((~(arr_4 [16] [16] [i_13]))) : (((-(((arr_14 [i_20]) * var_14)))))));
                    arr_67 [i_13] [i_13] [i_20] [i_21] = ((((((((var_8 ? (arr_6 [i_20 + 3]) : (arr_52 [i_13] [i_13] [i_20] [i_21])))) ? (~var_7) : 8290286281502673408))) ? (arr_56 [i_13] [i_20] [i_20 - 2] [i_21 - 2]) : (max(var_18, (arr_11 [i_13] [i_20] [i_20] [i_21] [i_21])))));
                }
            }
        }
        arr_68 [i_13] [i_13] = (min((arr_29 [i_13] [i_13] [i_13]), 84));
    }
    for (int i_22 = 0; i_22 < 23;i_22 += 1)
    {
        arr_72 [i_22] = ((~(((arr_71 [i_22]) - 231))));
        arr_73 [i_22] [i_22] = ((-(~var_14)));
        arr_74 [i_22] = 4194303;
        var_38 = (min(var_38, (((((min((130 / var_1), (arr_69 [i_22])))) * ((-((var_12 ? (arr_71 [i_22]) : (arr_70 [i_22]))))))))));
        var_39 = (min(((((((0 ? var_6 : var_14))) ? (arr_71 [i_22]) : 104))), ((((min(0, -9223372036854775802))) ? var_11 : (arr_69 [i_22])))));
    }
    #pragma endscop
}
