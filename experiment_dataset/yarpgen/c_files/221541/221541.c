/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_18 = 32746;
                                arr_14 [4] [i_0] [i_2] [3] [0] [4] [i_4] = ((-(arr_1 [i_0] [i_0 - 1])));
                                var_19 ^= 30337;
                            }
                        }
                    }
                    var_20 = 32767;

                    for (int i_5 = 4; i_5 < 11;i_5 += 1)
                    {
                        var_21 *= (max(-32761, ((-((min((arr_2 [i_2]), -1)))))));
                        arr_18 [i_0] [i_0] [i_0] = (arr_10 [i_1 + 1] [i_0] [6] [4]);
                    }
                    for (int i_6 = 4; i_6 < 12;i_6 += 1)
                    {
                        var_22 = (~18101);
                        arr_23 [13] [i_0] [3] [0] [i_0] [i_0] = var_0;
                    }
                    var_23 = arr_7 [i_0] [1] [i_2];
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 13;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            {
                                var_24 = -4596;
                                var_25 = 25814;
                            }
                        }
                    }
                    var_26 ^= -6268;
                    var_27 -= ((+((-16619 ? (-32767 - 1) : -843))));

                    for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
                    {
                        var_28 -= (arr_6 [i_0 - 2]);
                        var_29 = (max(var_29, (arr_12 [i_0] [i_0 + 1] [i_11] [i_8 - 1] [i_0 + 1])));
                        arr_38 [i_0] [i_0] [6] [i_0] = (arr_1 [i_0] [i_8 - 1]);
                        var_30 = -20664;
                    }
                    for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
                    {
                        var_31 = -1589;
                        var_32 = -32756;
                    }
                    for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
                    {
                        var_33 = ((var_3 ? (((!(!var_10)))) : 0));
                        var_34 = -512;
                        var_35 = 1614;
                        arr_45 [i_8] [i_7] [i_0] [i_7] [i_0] [7] = 0;
                    }
                    for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
                    {
                        arr_48 [8] [i_0] = (!63);
                        var_36 = (min(var_36, 8185));
                        arr_49 [10] [10] [i_0] [i_14] = var_7;
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 14;i_16 += 1)
                        {
                            {
                                arr_55 [i_0] [i_0] [6] [13] [13] = -1589;
                                arr_56 [i_0] [i_0] = ((0 ? -32754 : (~11287)));
                                arr_57 [i_0] [13] [i_0] [0] = 1570;
                                var_37 ^= 295;
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 14;i_17 += 1)
        {
            for (int i_18 = 2; i_18 < 10;i_18 += 1)
            {
                {
                    arr_64 [i_17] [12] [i_18] [i_18] &= -10265;
                    /* LoopNest 2 */
                    for (int i_19 = 3; i_19 < 11;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 14;i_20 += 1)
                        {
                            {
                                var_38 = ((-11287 ? -26253 : 27));
                                arr_72 [13] [i_17] [3] [2] [i_20] [i_0] [i_20] = min(-24219, var_11);
                            }
                        }
                    }
                    var_39 &= (((((var_16 ? ((-24228 ? (arr_61 [6] [i_17]) : -32749)) : (arr_40 [8] [i_17] [i_17] [2] [i_17] [i_0])))) ? ((max((-32767 - 1), (arr_9 [i_0 - 2] [6] [i_17] [12] [i_17])))) : -24228));
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 14;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 14;i_22 += 1)
                        {
                            {
                                var_40 *= ((-((-24228 ? -2221 : 2347))));
                                var_41 = 32759;
                                var_42 = -32738;
                                var_43 = ((-11219 ? 32748 : 18));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_23 = 2; i_23 < 16;i_23 += 1) /* same iter space */
    {
        var_44 += -1;
        arr_82 [i_23] [1] = 32730;
        arr_83 [i_23] = (-32767 - 1);
        var_45 = -853;
    }
    for (int i_24 = 2; i_24 < 16;i_24 += 1) /* same iter space */
    {

        for (int i_25 = 1; i_25 < 14;i_25 += 1)
        {
            var_46 = (max(var_46, ((((arr_84 [i_24 - 1]) ? (arr_84 [i_24 - 2]) : (~19662))))));
            var_47 &= 4373;
        }
        /* vectorizable */
        for (int i_26 = 1; i_26 < 17;i_26 += 1)
        {
            /* LoopNest 2 */
            for (int i_27 = 0; i_27 < 18;i_27 += 1)
            {
                for (int i_28 = 3; i_28 < 16;i_28 += 1)
                {
                    {

                        for (int i_29 = 0; i_29 < 18;i_29 += 1)
                        {
                            var_48 ^= var_6;
                            var_49 |= (((arr_92 [12] [i_26 + 1] [i_27]) ? (arr_92 [i_26 + 1] [i_26 + 1] [i_26 + 1]) : 18323));
                            var_50 *= -24131;
                        }
                        var_51 = (arr_90 [i_24 + 1] [i_26 + 1] [i_28 + 1]);
                        var_52 = (((arr_90 [i_24 + 1] [i_26 + 1] [17]) ? 32767 : var_13));
                        arr_99 [0] = 1;
                    }
                }
            }
            var_53 = (~30701);
        }
        for (int i_30 = 1; i_30 < 17;i_30 += 1)
        {
            var_54 -= 20639;
            var_55 = -6779;
        }
        for (int i_31 = 0; i_31 < 18;i_31 += 1)
        {
            /* LoopNest 2 */
            for (int i_32 = 3; i_32 < 16;i_32 += 1)
            {
                for (int i_33 = 0; i_33 < 18;i_33 += 1)
                {
                    {
                        var_56 &= ((~(arr_86 [i_31])));
                        arr_110 [i_24] [i_32] [i_32] [i_33] [1] = 32748;
                        var_57 = 29378;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_34 = 0; i_34 < 18;i_34 += 1)
            {
                for (int i_35 = 0; i_35 < 18;i_35 += 1)
                {
                    {
                        var_58 += (arr_97 [i_24 - 2] [i_24 + 2] [7]);
                        var_59 = -20014;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_36 = 2; i_36 < 15;i_36 += 1)
            {
                for (int i_37 = 0; i_37 < 18;i_37 += 1)
                {
                    {
                        arr_121 [i_36] [i_31] [i_36 + 2] [i_37] [17] = var_15;
                        arr_122 [i_24] [i_24] [i_36] [11] [i_24 + 2] [i_24] = var_12;
                        arr_123 [0] [i_31] &= -13049;
                    }
                }
            }
        }
        var_60 = (~-6779);
        arr_124 [i_24] [4] |= arr_100 [i_24 - 1] [i_24 - 1] [i_24 - 1];
        var_61 = (max((arr_94 [i_24 + 1] [i_24] [5] [16] [i_24]), var_15));
    }
    var_62 = (!var_3);
    var_63 = var_0;
    /* LoopNest 2 */
    for (int i_38 = 1; i_38 < 9;i_38 += 1)
    {
        for (int i_39 = 3; i_39 < 10;i_39 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_40 = 0; i_40 < 13;i_40 += 1)
                {
                    for (int i_41 = 0; i_41 < 13;i_41 += 1)
                    {
                        {
                            var_64 = (min(var_64, (((!(arr_94 [4] [i_38] [4] [2] [i_39 - 3]))))));
                            arr_136 [i_38] [i_39] [i_38] = arr_117 [i_39 + 1] [i_38 + 4];
                        }
                    }
                }
                var_65 = (max(var_65, var_10));
                arr_137 [i_39] = max(3593, 10331);
                arr_138 [i_38] [i_39] [i_39] = -3593;
            }
        }
    }
    #pragma endscop
}
