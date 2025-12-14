/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (max(var_9, (max((max(1, 18446744073709551615)), var_6))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = max((min(var_5, (min(var_0, var_6)))), (~var_6));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_11 |= (min(var_7, var_5));
                        var_12 = (((min(var_8, var_9))));
                    }
                    var_13 = (max(var_1, ((var_3 ? (min(127, 8218455703862564239)) : ((min(var_1, var_7)))))));

                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_14 ^= var_2;
                        var_15 |= (((min(var_2, var_8))));
                        arr_14 [i_1] [i_1] [i_1] [i_1] = ((((!(((1 ? -2678002502334681498 : 177187093))))) ? (((max(var_2, var_1)))) : ((0 ? 255 : (-2147483647 - 1)))));
                        arr_15 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((!(((-((var_9 ? var_7 : var_9)))))));
                        arr_16 [i_0] [i_1] [i_0] [i_1] [i_0] = var_4;
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_16 = var_8;
                        var_17 *= (max(((((((var_2 ? var_3 : var_6))) ? var_7 : (~var_3)))), (min(255, 2624889595377982739))));
                        arr_20 [i_0] [i_0] [i_0] [i_0] &= (max((((var_8 ? var_2 : var_4))), var_2));
                        var_18 = (min(((max(var_7, var_4))), (max(var_3, -100))));
                    }
                    arr_21 [i_0] [i_0] [i_0] &= (((((max(55089552, 1)))) ? (min(var_3, var_3)) : (max(var_7, (!-116)))));
                    arr_22 [i_1] = 932;
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {

        for (int i_7 = 4; i_7 < 11;i_7 += 1)
        {
            var_19 = var_6;
            var_20 = ((2183 ? -2183 : 1));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        {
                            var_21 = var_6;
                            var_22 = -var_9;
                        }
                    }
                }
            }
            var_23 += var_2;
            var_24 = (max(var_24, var_4));
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 0;i_13 += 1)
            {
                {

                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        var_25 = (max(var_25, ((max((((var_9 ? var_7 : var_5))), (((~((var_8 ? var_0 : var_1))))))))));
                        arr_44 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] |= max((max(((var_5 ? var_5 : var_1)), (min(var_0, var_2)))), -255);

                        for (int i_15 = 1; i_15 < 13;i_15 += 1)
                        {
                            arr_47 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = var_9;
                            var_26 = ((((max(2833395025, 1))) ? (((127 ? -20129 : 1))) : ((min((max(var_0, var_3)), var_0)))));
                            var_27 = (max(var_27, ((max(var_3, (!var_5))))));
                        }
                        for (int i_16 = 3; i_16 < 13;i_16 += 1)
                        {
                            var_28 = (((min(var_0, var_8))) ? var_4 : var_4);
                            var_29 += ((-((min(var_7, var_5)))));
                            var_30 = (((-var_6 ? (max(176, 5562168079742944232)) : (~41))));
                            var_31 -= ((var_5 ? (min((max(var_9, var_5)), var_1)) : var_5));
                        }
                    }

                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        var_32 = (min(var_32, ((max(((min(107, ((max(var_9, 1)))))), 5562168079742944246)))));
                        var_33 |= (min(((max(var_1, (max(var_0, var_7))))), ((max(var_6, var_4)))));
                    }
                    for (int i_18 = 3; i_18 < 12;i_18 += 1)
                    {
                        var_34 -= ((min(((min(var_9, var_9))), (max(var_4, var_6)))));
                        var_35 = (min(var_1, ((-(~var_8)))));

                        for (int i_19 = 0; i_19 < 14;i_19 += 1)
                        {
                            var_36 += (max((min(2624889595377982733, ((1 ? 1 : 8218455703862564229)))), -var_7));
                            var_37 = (max((((var_4 ? (((max(var_1, var_4)))) : (min(var_4, var_6))))), ((max(var_1, var_9)))));
                        }
                        for (int i_20 = 2; i_20 < 13;i_20 += 1)
                        {
                            arr_62 [i_12] [i_12] [i_12] = (((1 ? 223 : -20751)));
                            var_38 = (min(var_38, var_9));
                            var_39 = (min(var_39, var_3));
                        }
                        /* vectorizable */
                        for (int i_21 = 0; i_21 < 14;i_21 += 1)
                        {
                            var_40 = ((var_9 ? var_4 : var_4));
                            var_41 = var_1;
                            var_42 = (min(var_42, ((var_9 ? var_6 : 2147483647))));
                        }
                    }
                    var_43 |= ((((min(((min(var_1, var_1))), ((var_9 ? var_5 : var_7))))) ? 12 : (((min(var_2, var_8))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_22 = 0; i_22 < 14;i_22 += 1)
        {
            for (int i_23 = 3; i_23 < 10;i_23 += 1)
            {
                {
                    var_44 = (max(((max(var_1, ((var_6 ? var_8 : var_1))))), var_5));
                    var_45 = var_2;
                    var_46 = (min(1, 1));
                }
            }
        }
    }
    for (int i_24 = 1; i_24 < 17;i_24 += 1)
    {
        /* LoopNest 3 */
        for (int i_25 = 1; i_25 < 17;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 18;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 1;i_27 += 1)
                {
                    {
                        var_47 = (min(var_47, (((min(var_8, var_8))))));
                        var_48 += ((((min(var_5, (min(var_6, var_6))))) ? var_7 : ((~(~var_0)))));
                        var_49 = ((var_5 ? ((((max(var_4, var_8))) ? var_9 : var_4)) : var_7));
                        var_50 = (max(var_7, (max(-8218455703862564229, -20751))));
                        arr_82 [i_24] [i_24] [i_24] [i_24] [i_24] = (min((!var_5), (min(var_7, (min(var_1, var_6))))));
                    }
                }
            }
        }
        var_51 = (max(var_51, var_2));
        var_52 = (min(var_52, (max((min((min(-359101345, 4294967291)), ((min(var_7, var_7))))), (((((var_8 ? var_3 : var_1))) ? (((max(var_4, var_4)))) : (max(var_5, var_9))))))));
        var_53 = (min(var_8, (min((max(var_6, var_1)), ((max(var_1, var_8)))))));
        arr_83 [i_24] = var_2;
    }
    for (int i_28 = 1; i_28 < 21;i_28 += 1)
    {
        var_54 = -var_9;
        arr_88 [i_28] [i_28] = (min(((max(9703, 2))), (((-(~var_1))))));
    }
    var_55 = (min(var_55, (((var_8 ? var_5 : (min(var_2, var_2)))))));
    var_56 = var_0;
    var_57 = (max(125, -var_8));
    #pragma endscop
}
