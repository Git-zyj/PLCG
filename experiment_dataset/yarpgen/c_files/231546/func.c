/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231546
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned short) var_7);
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned int) (unsigned char)68);
                                arr_12 [i_1] [i_2] [i_0] = ((/* implicit */signed char) ((arr_0 [i_1]) - (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) arr_6 [i_2])) : ((-(1023141911U)))))));
                                arr_13 [(unsigned short)0] [i_0] [i_0] [i_0] [4] [i_3] [i_4] = 4U;
                                arr_14 [i_0] = var_3;
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_5 [i_0] [i_0] [i_1]), (((/* implicit */unsigned int) (-(var_6))))))) ? (var_5) : (((/* implicit */unsigned int) ((int) var_4)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                {
                    arr_23 [i_5] [i_6] [i_5] [i_7] = max((2142123928U), ((~(2209092982U))));
                    var_12 = ((/* implicit */unsigned short) max((var_8), (((/* implicit */int) max((((unsigned char) 2152843367U)), ((unsigned char)64))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 25; i_9 += 4) 
                        {
                            {
                                arr_30 [i_6] [i_5] [i_9] = ((/* implicit */unsigned int) (-(var_1)));
                                var_13 = ((/* implicit */unsigned int) (unsigned char)191);
                                var_14 = ((/* implicit */unsigned char) var_10);
                                var_15 += ((/* implicit */unsigned short) min((min((var_1), (arr_25 [i_5] [i_5] [i_9] [i_8] [(unsigned short)12]))), (((/* implicit */int) ((260046848U) <= (((/* implicit */unsigned int) arr_25 [i_5] [i_5] [i_7] [(unsigned char)21] [i_5])))))));
                            }
                        } 
                    } 
                    arr_31 [(signed char)16] [i_6] [i_7] [i_5] = ((/* implicit */unsigned char) min((var_2), (((arr_26 [i_5] [i_6] [i_7] [19U] [i_5] [i_7]) / (arr_26 [i_5] [i_7] [i_6] [i_5] [i_5] [i_5])))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_10 = 0; i_10 < 25; i_10 += 4) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (int i_12 = 0; i_12 < 25; i_12 += 2) 
                {
                    {
                        var_16 = ((unsigned int) ((var_10) + (((/* implicit */unsigned int) var_2))));
                        arr_38 [i_5] [i_10] [i_11] [i_12] = ((/* implicit */_Bool) var_2);
                    }
                } 
            } 
        } 
        var_17 = ((((/* implicit */_Bool) 2142123928U)) ? ((-(598559194))) : (((-1491333417) & (((/* implicit */int) (unsigned char)84)))));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 25; i_13 += 3) 
        {
            for (int i_14 = 0; i_14 < 25; i_14 += 2) 
            {
                {
                    var_18 = (_Bool)1;
                    /* LoopSeq 1 */
                    for (int i_15 = 0; i_15 < 25; i_15 += 1) 
                    {
                        var_19 = ((/* implicit */int) ((min((((/* implicit */unsigned int) (signed char)12)), (937250737U))) >> (min((((/* implicit */unsigned int) (+(163330759)))), (0U)))));
                        var_20 ^= (((!(((/* implicit */_Bool) arr_16 [i_14])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((var_10) ^ (min((((/* implicit */unsigned int) (unsigned char)84)), (var_10))))));
                        var_21 -= ((/* implicit */unsigned char) 3129723704U);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 0; i_16 < 25; i_16 += 1) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                arr_52 [i_5] [i_13] [i_14] [i_16] [i_5] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1902847805)) ? (min((((/* implicit */unsigned int) arr_24 [i_5] [i_5] [i_14] [i_16] [i_17] [i_17])), (((((/* implicit */_Bool) 2209092967U)) ? (1427270378U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (min((((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (var_2)))), (min((1570098716U), (((/* implicit */unsigned int) -2147483637))))))));
                                var_22 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned char)171)))) + (((((unsigned int) 4294967292U)) + (var_7)))));
                                arr_53 [i_5] [i_5] [22U] [i_14] [i_14] [22U] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) 1337708060)) < (1896448673U)))) : (((((/* implicit */_Bool) (unsigned short)17631)) ? (((((/* implicit */_Bool) var_5)) ? (arr_44 [i_5] [i_5] [i_14] [i_16]) : (((/* implicit */int) (unsigned char)225)))) : (((/* implicit */int) (signed char)126))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_18 = 0; i_18 < 25; i_18 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_19 = 0; i_19 < 25; i_19 += 4) 
                        {
                            arr_59 [i_5] [i_13] [(unsigned short)0] [i_5] [i_5] = ((/* implicit */unsigned int) var_2);
                            var_23 = ((/* implicit */unsigned short) -1677838285);
                            var_24 = ((/* implicit */int) ((((var_0) ^ (var_0))) + (((((/* implicit */_Bool) arr_48 [i_5] [i_14] [7U])) ? (3357716558U) : (((/* implicit */unsigned int) -25085340))))));
                            var_25 = (+(((((/* implicit */_Bool) arr_29 [i_14] [0])) ? (arr_56 [i_14] [i_18] [i_14] [i_5]) : (((/* implicit */int) (signed char)-14)))));
                        }
                        for (unsigned char i_20 = 0; i_20 < 25; i_20 += 1) 
                        {
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(15728640)))) ? (((/* implicit */unsigned int) arr_50 [i_5] [(unsigned char)14] [(unsigned char)14] [(unsigned char)14] [i_20])) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (937250734U)))));
                            var_27 = ((/* implicit */unsigned int) (~(var_8)));
                        }
                        for (signed char i_21 = 0; i_21 < 25; i_21 += 3) 
                        {
                            arr_66 [i_5] [i_5] [i_14] [i_14] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))));
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_34 [i_5] [i_5] [i_5] [i_5])) < (((/* implicit */int) arr_34 [i_18] [i_21] [i_21] [i_18]))));
                            arr_67 [i_21] [i_14] [i_18] [12] [i_18] [i_14] &= (+(((((/* implicit */unsigned int) 618904395)) - (var_4))));
                            var_29 &= ((((/* implicit */_Bool) 842097408U)) ? ((+(3098445815U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_5] [i_5] [i_14] [i_18]))));
                            arr_68 [i_5] [i_13] = ((/* implicit */int) var_9);
                        }
                        var_30 = ((/* implicit */int) ((var_7) * (var_7)));
                    }
                    for (int i_22 = 0; i_22 < 25; i_22 += 3) 
                    {
                        arr_73 [i_22] [i_14] [i_5] [i_13] [i_5] = ((/* implicit */unsigned int) ((int) 15728640));
                        /* LoopSeq 4 */
                        for (unsigned int i_23 = 0; i_23 < 25; i_23 += 2) /* same iter space */
                        {
                            arr_76 [i_5] [i_5] [i_14] [i_22] [i_22] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_74 [i_5]) <= (((/* implicit */int) min(((signed char)48), (((/* implicit */signed char) (_Bool)1)))))))) >> (((((/* implicit */int) (signed char)90)) - (82)))));
                            var_31 = var_8;
                        }
                        for (unsigned int i_24 = 0; i_24 < 25; i_24 += 2) /* same iter space */
                        {
                            arr_80 [i_5] [i_13] [i_13] [i_14] [i_22] [i_24] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) 4153030571U))) ? (((int) arr_47 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])) : (((/* implicit */int) ((unsigned short) arr_72 [i_13] [i_22] [i_24])))));
                            var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((_Bool) ((unsigned short) arr_29 [i_5] [i_13]))))));
                            var_33 *= ((/* implicit */unsigned short) ((unsigned int) ((var_5) << (((((((/* implicit */_Bool) 3990447003U)) ? (var_4) : (var_0))) - (1995778998U))))));
                            arr_81 [i_22] [i_22] [i_5] [i_22] [i_22] = ((_Bool) ((arr_19 [i_5] [i_5]) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            arr_82 [i_5] [i_13] = ((/* implicit */signed char) 1585330838U);
                        }
                        for (unsigned int i_25 = 0; i_25 < 25; i_25 += 2) /* same iter space */
                        {
                            var_34 &= (unsigned short)0;
                            var_35 = ((/* implicit */signed char) ((max((arr_75 [i_5] [(unsigned short)19] [i_14] [i_5] [i_25]), (arr_75 [i_25] [i_13] [i_22] [i_22] [i_25]))) >= (2143395871)));
                            arr_87 [i_5] = (-(((int) arr_49 [i_25] [i_25] [i_22] [i_5] [(unsigned char)22] [i_5])));
                        }
                        for (unsigned int i_26 = 0; i_26 < 25; i_26 += 2) /* same iter space */
                        {
                            var_36 -= ((/* implicit */unsigned short) max((((unsigned int) (unsigned char)171)), (((/* implicit */unsigned int) (unsigned short)42640))));
                            var_37 = ((/* implicit */unsigned char) 14);
                        }
                        arr_90 [i_14] [i_5] = ((/* implicit */int) ((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 625883816U))))), (var_10))) == (arr_19 [i_5] [i_13])));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_27 = 0; i_27 < 12; i_27 += 2) 
    {
        /* LoopSeq 4 */
        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
        {
            arr_96 [i_27] [i_28] = ((/* implicit */unsigned short) ((unsigned int) var_8));
            var_38 *= ((unsigned int) var_7);
            var_39 = ((/* implicit */unsigned char) 625883816U);
            arr_97 [i_28] [i_28] [i_28] = ((/* implicit */signed char) ((arr_17 [i_28]) ^ (var_7)));
            arr_98 [i_27] [i_27] [i_27] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_24 [i_27] [i_27] [i_28] [i_28] [i_28] [i_28])) | (((/* implicit */int) (unsigned char)254))));
        }
        for (unsigned int i_29 = 0; i_29 < 12; i_29 += 2) 
        {
            var_40 = ((/* implicit */int) ((((/* implicit */_Bool) arr_75 [i_27] [i_29] [i_29] [i_29] [i_29])) ? (((/* implicit */unsigned int) arr_75 [i_29] [1] [i_29] [(_Bool)1] [i_27])) : (var_4)));
            var_41 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -15728647)) ? (4294967295U) : (((/* implicit */unsigned int) arr_100 [i_29])))) << (((1529022071U) - (1529022065U)))));
        }
        for (unsigned short i_30 = 0; i_30 < 12; i_30 += 4) 
        {
            var_42 = ((/* implicit */unsigned short) 1585330864U);
            arr_104 [i_27] = var_4;
        }
        for (unsigned short i_31 = 0; i_31 < 12; i_31 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
            {
                for (unsigned int i_33 = 0; i_33 < 12; i_33 += 1) 
                {
                    {
                        var_43 = ((/* implicit */int) ((unsigned int) (+(0U))));
                        arr_111 [i_27] [i_32] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 817660524))));
                        var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967276U)) ? (((/* implicit */int) ((unsigned short) 19U))) : (((/* implicit */int) ((signed char) var_5)))));
                        /* LoopSeq 1 */
                        for (int i_34 = 0; i_34 < 12; i_34 += 4) 
                        {
                            var_45 -= ((/* implicit */_Bool) var_2);
                            var_46 = ((/* implicit */unsigned short) ((arr_88 [i_27] [i_32] [i_33]) / (arr_88 [i_27] [i_32] [i_34])));
                            var_47 = ((/* implicit */unsigned char) ((var_9) >= (var_7)));
                            var_48 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_0)))) + (386127187U)));
                            var_49 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) (unsigned short)41272))));
                        }
                    }
                } 
            } 
            var_50 = (+(1184409141));
        }
        /* LoopNest 3 */
        for (unsigned int i_35 = 0; i_35 < 12; i_35 += 4) 
        {
            for (unsigned int i_36 = 0; i_36 < 12; i_36 += 2) 
            {
                for (unsigned int i_37 = 0; i_37 < 12; i_37 += 1) 
                {
                    {
                        arr_124 [i_27] [i_27] [i_27] [i_27] [(unsigned short)2] = ((((/* implicit */_Bool) arr_64 [i_27] [i_35] [i_36] [i_35])) ? (((/* implicit */int) arr_64 [i_37] [i_37] [i_36] [i_27])) : (((/* implicit */int) arr_64 [i_27] [i_35] [i_35] [i_36])));
                        var_51 *= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)55))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned char i_38 = 0; i_38 < 24; i_38 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_39 = 0; i_39 < 24; i_39 += 1) 
        {
            for (unsigned int i_40 = 0; i_40 < 24; i_40 += 4) 
            {
                {
                    var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((((/* implicit */_Bool) (signed char)30)) ? (3357716558U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)6))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_47 [i_38] [i_39] [i_39] [i_40] [i_39] [16])) || (((/* implicit */_Bool) arr_26 [i_38] [i_38] [i_38] [i_39] [i_40] [i_39]))))))));
                    var_53 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_40] [i_38] [i_38] [i_38])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_16 [i_38]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : ((-(arr_60 [i_38])))));
                }
            } 
        } 
        var_54 = ((/* implicit */unsigned char) min((var_54), (((/* implicit */unsigned char) ((int) 0U)))));
        arr_133 [i_38] = ((/* implicit */signed char) ((_Bool) ((unsigned short) arr_46 [i_38] [i_38] [i_38] [i_38])));
        var_55 = ((/* implicit */_Bool) (-(((/* implicit */int) max((arr_126 [i_38]), (arr_126 [i_38]))))));
    }
    var_56 *= ((max((((/* implicit */unsigned int) ((var_0) >= (((/* implicit */unsigned int) var_2))))), (var_7))) - (((((/* implicit */_Bool) (+(var_2)))) ? (min((var_10), (((/* implicit */unsigned int) (signed char)-30)))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
    var_57 ^= var_1;
}
