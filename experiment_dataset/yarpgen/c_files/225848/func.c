/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225848
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        arr_8 [i_3] [i_0] &= ((/* implicit */long long int) var_4);
                        var_11 = ((/* implicit */unsigned char) arr_6 [7ULL] [i_1] [i_2] [i_3] [(unsigned char)0]);
                        var_12 -= ((/* implicit */unsigned short) ((arr_0 [i_1] [i_1]) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3])) : (((var_6) ? (((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_2])))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))))));
                        var_13 = ((/* implicit */short) (_Bool)1);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_6 = 4; i_6 < 23; i_6 += 4) 
                        {
                            var_14 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_10) - (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : (min((((/* implicit */long long int) arr_17 [20LL] [7LL] [i_0] [i_4] [23U] [i_0] [i_0])), (-3477333245414237134LL)))))) : ((~(arr_10 [i_1] [i_5])))));
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_10 [i_5] [i_6]) + (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_7)), (-4171457974727721848LL))))))) ? ((-(33553408U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                        }
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (576443160117379072ULL) : (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_16 [5ULL] [i_1] [5ULL])) ? (17208582258667121718ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                            arr_21 [i_0] [i_0] [i_0] [18LL] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)125)) ? (((967723591U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) var_8))));
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 33553408U)), (var_3)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (var_2))) : (max((var_2), (var_1)))))) * (((((/* implicit */_Bool) var_0)) ? (max((((/* implicit */long long int) var_2)), (-6316844782206922320LL))) : (((/* implicit */long long int) min((4294967295U), (((/* implicit */unsigned int) var_7)))))))));
                            arr_26 [i_0] [i_1] [i_4] [i_5] [i_4] = ((/* implicit */signed char) (_Bool)1);
                            arr_27 [(signed char)18] [i_5] [i_0] [(signed char)20] [i_0] = ((/* implicit */long long int) var_4);
                        }
                        for (short i_9 = 2; i_9 < 24; i_9 += 4) 
                        {
                            var_18 += ((/* implicit */unsigned long long int) (signed char)-83);
                            var_19 = ((/* implicit */_Bool) var_3);
                            arr_30 [i_9] [i_9] [i_4] [i_5] [11LL] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)2)), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_1])), (arr_14 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-81))) : (min((var_4), (((/* implicit */unsigned long long int) -299899959))))))));
                            arr_31 [i_9] [i_5] [i_0] [i_4] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) arr_20 [i_0] [i_1] [3ULL] [i_5] [i_9]);
                        }
                        var_20 = ((/* implicit */short) ((arr_13 [i_5] [i_4] [i_1] [i_0]) * (min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)58937))) - (0LL))), (((/* implicit */long long int) min((var_5), (((/* implicit */unsigned short) arr_9 [14] [i_1] [i_4] [i_5])))))))));
                    }
                } 
            } 
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max((((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_1] [i_1])), (min((((/* implicit */unsigned short) var_7)), (var_0))))))));
            /* LoopSeq 1 */
            for (unsigned int i_10 = 1; i_10 < 24; i_10 += 4) 
            {
                var_22 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) (short)-18861))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_6))))) : (1238161815042429898ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((0U), (var_1)))) ? (((/* implicit */long long int) 33553400U)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-18854))) : (var_3))))))));
                arr_34 [i_0] [(_Bool)1] = ((/* implicit */unsigned int) arr_3 [i_10 - 1]);
                /* LoopSeq 2 */
                for (long long int i_11 = 3; i_11 < 22; i_11 += 4) 
                {
                    arr_37 [i_0] [i_1] [i_10] [14ULL] &= ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) min((var_9), (((/* implicit */signed char) (_Bool)1))))) * (((/* implicit */int) var_0))))), (min((((/* implicit */long long int) (-(((/* implicit */int) var_0))))), (((var_6) ? (8646911284551352320LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                    arr_38 [i_0] [i_0] [i_1] [i_1] [i_10] [i_11 + 1] = ((/* implicit */short) 1238161815042429898ULL);
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((var_2) / (((/* implicit */unsigned int) ((/* implicit */int) (short)11599))))))));
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)18887)) ? (((/* implicit */int) max((((/* implicit */short) arr_16 [i_10 + 1] [i_1] [(unsigned short)12])), (arr_23 [i_10])))) : (((/* implicit */int) ((((/* implicit */long long int) 4020258865U)) > (-4171457974727721860LL))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64085))) - (min((((/* implicit */unsigned long long int) 4171457974727721843LL)), (18264031643050442716ULL)))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 4) 
                {
                    var_25 = ((/* implicit */signed char) -3LL);
                    arr_42 [i_0] [17LL] [i_0] [i_12] = 2893231870165929448LL;
                    var_26 = ((/* implicit */signed char) var_1);
                }
            }
        }
        /* vectorizable */
        for (unsigned long long int i_13 = 1; i_13 < 23; i_13 += 4) 
        {
            arr_45 [i_13] = ((/* implicit */long long int) var_2);
            /* LoopNest 2 */
            for (unsigned int i_14 = 0; i_14 < 25; i_14 += 4) 
            {
                for (unsigned int i_15 = 3; i_15 < 22; i_15 += 4) 
                {
                    {
                        var_27 += ((/* implicit */unsigned long long int) arr_33 [(short)0] [i_13] [i_13]);
                        arr_53 [i_0] [i_13] [i_13] [i_15 + 3] = ((/* implicit */long long int) var_6);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_16 = 0; i_16 < 25; i_16 += 4) 
            {
                for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                {
                    for (unsigned int i_18 = 1; i_18 < 24; i_18 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)20960))));
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) 7286659222540408058ULL))));
                            arr_63 [i_13] [i_13] [i_16] [(short)13] [i_18] = ((/* implicit */unsigned int) (unsigned short)10338);
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)-20963)))) ? (((((/* implicit */_Bool) var_5)) ? (var_3) : (arr_50 [i_0] [i_13 + 1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-2700)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))))));
            arr_64 [i_13] = ((/* implicit */long long int) arr_1 [i_0]);
        }
        /* LoopNest 2 */
        for (short i_19 = 2; i_19 < 24; i_19 += 4) 
        {
            for (unsigned char i_20 = 0; i_20 < 25; i_20 += 4) 
            {
                {
                    var_31 += max((-15LL), (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_20] [i_0] [i_0] [i_0]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_21 = 0; i_21 < 25; i_21 += 4) 
                    {
                        for (unsigned int i_22 = 0; i_22 < 25; i_22 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */short) min((17878079658258158211ULL), (((/* implicit */unsigned long long int) arr_62 [i_0] [16ULL] [i_22] [i_21] [i_22]))));
                                var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) max(((short)-20948), ((short)18853)))))));
                                var_34 *= ((/* implicit */unsigned int) 14LL);
                                var_35 = min((min((max((417401727961476097LL), (arr_39 [i_20]))), (((/* implicit */long long int) ((((/* implicit */_Bool) 23U)) ? (3821063106U) : (arr_69 [i_0] [i_19] [i_20])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_0] [i_22])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)199)))))) ? (((/* implicit */long long int) max((arr_4 [i_0] [i_21] [i_0] [i_0]), (var_1)))) : (max((3910413584894644732LL), (((/* implicit */long long int) (unsigned short)65520)))))));
                            }
                        } 
                    } 
                    arr_77 [18U] [i_19] = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_36 -= ((/* implicit */_Bool) arr_39 [i_0]);
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_23 = 1; i_23 < 23; i_23 += 4) 
        {
            for (unsigned int i_24 = 1; i_24 < 22; i_24 += 4) 
            {
                for (unsigned int i_25 = 0; i_25 < 25; i_25 += 4) 
                {
                    {
                        var_37 = ((/* implicit */unsigned int) (_Bool)1);
                        var_38 -= ((/* implicit */unsigned short) 2102240818U);
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_26 = 0; i_26 < 25; i_26 += 4) 
    {
        arr_91 [i_26] [i_26] = ((/* implicit */unsigned short) (unsigned char)56);
        var_39 ^= ((/* implicit */unsigned long long int) (~(3709400451U)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_27 = 0; i_27 < 25; i_27 += 4) 
        {
            /* LoopNest 2 */
            for (short i_28 = 1; i_28 < 24; i_28 += 4) 
            {
                for (unsigned long long int i_29 = 0; i_29 < 25; i_29 += 4) 
                {
                    {
                        var_40 = ((/* implicit */unsigned long long int) (~(3709400455U)));
                        var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [3U] [i_28] [i_29])) ? (1430581527U) : (((((/* implicit */_Bool) 2057155727U)) ? (arr_95 [i_26] [i_27] [i_28]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_26])))))));
                        var_42 = ((/* implicit */unsigned int) 549751619584LL);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (signed char i_30 = 4; i_30 < 24; i_30 += 4) 
            {
                arr_104 [i_26] [i_27] [i_27] [i_30] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 473904189U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 2923334233U))));
                /* LoopNest 2 */
                for (short i_31 = 2; i_31 < 24; i_31 += 4) 
                {
                    for (long long int i_32 = 1; i_32 < 23; i_32 += 4) 
                    {
                        {
                            var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) (signed char)(-127 - 1)))));
                            var_44 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7529)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_23 [i_26]))));
                            var_45 ^= ((/* implicit */short) var_9);
                        }
                    } 
                } 
            }
            for (long long int i_33 = 1; i_33 < 22; i_33 += 4) 
            {
                var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_22 [i_26] [i_26] [i_33]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64855)))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (arr_48 [i_27] [i_27])))) : (((/* implicit */int) (_Bool)1))));
                var_47 = (unsigned char)200;
                var_48 = ((/* implicit */unsigned int) ((arr_57 [i_26] [i_27] [i_27] [i_27] [i_26] [i_27]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)11)))));
            }
        }
    }
    /* LoopNest 2 */
    for (short i_34 = 0; i_34 < 19; i_34 += 4) 
    {
        for (long long int i_35 = 1; i_35 < 17; i_35 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_36 = 0; i_36 < 19; i_36 += 4) 
                {
                    for (signed char i_37 = 0; i_37 < 19; i_37 += 4) 
                    {
                        {
                            arr_125 [i_34] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_114 [i_35])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)105))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) min(((unsigned char)11), (((/* implicit */unsigned char) (_Bool)1)))))));
                            var_49 = ((/* implicit */long long int) (~(76180891U)));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned int i_38 = 0; i_38 < 19; i_38 += 4) 
                            {
                                arr_130 [i_34] [i_35] [i_36] [i_37] [i_38] [(short)2] |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) (signed char)127)) : (((((/* implicit */int) var_5)) - (((/* implicit */int) (signed char)(-127 - 1)))))));
                                var_50 = var_2;
                            }
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_39 = 0; i_39 < 19; i_39 += 4) 
                {
                    var_51 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)26545)) ? (((/* implicit */unsigned int) var_8)) : ((~(1239801923U)))))) ? (14075758430950179258ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)8064)) : (((/* implicit */int) (short)16384))))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-29586))) : (473904207U))))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_40 = 1; i_40 < 17; i_40 += 4) 
                    {
                        arr_135 [i_40] [i_40] [i_40] = ((/* implicit */unsigned long long int) arr_115 [i_34]);
                        /* LoopSeq 2 */
                        for (_Bool i_41 = 0; i_41 < 1; i_41 += 1) 
                        {
                            var_52 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) (_Bool)1)), (9U))), (((/* implicit */unsigned int) min((var_0), (((/* implicit */unsigned short) arr_28 [i_41] [i_40] [i_39] [i_39] [i_35] [i_35] [i_34])))))))) ? (((arr_111 [8] [0LL] [14]) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16991680648281923014ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)11172)), (1309652053U))))));
                            var_53 = ((/* implicit */unsigned short) max((9223372036854775807LL), (((/* implicit */long long int) 1239801929U))));
                        }
                        for (short i_42 = 0; i_42 < 19; i_42 += 4) 
                        {
                            var_54 = ((/* implicit */long long int) max((17225012264006477930ULL), (((/* implicit */unsigned long long int) (short)32767))));
                            var_55 -= ((/* implicit */unsigned long long int) 4294967287U);
                        }
                        var_56 *= ((/* implicit */long long int) (_Bool)1);
                    }
                    for (unsigned int i_43 = 0; i_43 < 19; i_43 += 4) 
                    {
                        var_57 = ((/* implicit */unsigned int) min((var_57), (min((((/* implicit */unsigned int) min(((!((_Bool)1))), (((9U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), (2579482956U)))));
                        arr_146 [i_34] [i_35] [i_39] [i_43] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(max((var_10), (((/* implicit */long long int) arr_40 [i_34] [i_35] [i_39] [i_39]))))))) ^ (max((var_4), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_96 [i_34] [3LL])))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_44 = 1; i_44 < 18; i_44 += 4) 
                    {
                        var_58 = ((/* implicit */unsigned short) (short)-16386);
                        /* LoopSeq 1 */
                        for (short i_45 = 0; i_45 < 19; i_45 += 4) 
                        {
                            var_59 -= ((/* implicit */_Bool) var_0);
                            arr_151 [i_34] [i_35] [i_44] [i_34] [i_45] = ((/* implicit */unsigned int) 15535000661040341645ULL);
                        }
                        var_60 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (553980860U) : (16777216U)))) ? (var_2) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)53)) : (((/* implicit */int) (_Bool)1)))))));
                        var_61 = ((/* implicit */_Bool) (short)20046);
                        arr_152 [18LL] [i_39] [i_39] [i_39] [i_39] &= ((/* implicit */_Bool) var_2);
                    }
                    for (unsigned int i_46 = 0; i_46 < 19; i_46 += 4) 
                    {
                        var_62 = ((/* implicit */unsigned int) var_4);
                        var_63 = ((/* implicit */short) ((((/* implicit */_Bool) arr_90 [i_34])) ? (1868512185U) : (((/* implicit */unsigned int) min(((~(((/* implicit */int) var_0)))), (min((var_8), (arr_82 [i_35]))))))));
                        var_64 = ((/* implicit */long long int) max((var_64), (((/* implicit */long long int) var_6))));
                    }
                }
                var_65 += ((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)-1)), (747045548U)));
                var_66 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) <= (max((9223372036854775801LL), (var_3)))));
            }
        } 
    } 
    var_67 = ((/* implicit */unsigned int) (((((_Bool)1) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_4))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
}
