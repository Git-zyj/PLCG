/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25027
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
    var_18 &= ((/* implicit */unsigned char) var_8);
    var_19 += ((/* implicit */unsigned char) 0);
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_6))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
        {
            var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_0]))));
            var_22 = ((/* implicit */long long int) ((signed char) (unsigned char)24));
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_1 [i_0]))));
            arr_6 [i_0] |= ((/* implicit */unsigned char) ((arr_2 [i_1]) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0])))));
            var_24 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) (signed char)-98))));
        }
        for (long long int i_2 = 0; i_2 < 17; i_2 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) min((((/* implicit */long long int) (signed char)-100)), ((-9223372036854775807LL - 1LL)))))));
            /* LoopSeq 4 */
            for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) arr_4 [i_2])) == (1097305549)))))))));
                var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) arr_2 [i_2]))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        {
                            var_28 += ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_11 [i_0])) && (((/* implicit */_Bool) min((var_13), ((signed char)-107)))))), (((18033523736389891792ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247)))))));
                            var_29 ^= ((((/* implicit */_Bool) max((arr_14 [2U] [i_2] [2U] [i_0] [i_5] [i_4] [i_2]), (arr_4 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_5]))) : (9223372036854775807LL)))) : (((((/* implicit */_Bool) arr_1 [i_3])) ? (arr_7 [i_4]) : (arr_1 [i_5]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_7])) ? (arr_2 [(signed char)14]) : (arr_2 [6ULL])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -8871256334493955207LL)) ? (((/* implicit */int) (signed char)-89)) : (((((/* implicit */_Bool) (signed char)80)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)162))))))))))));
                            var_31 *= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_8 = 4; i_8 < 16; i_8 += 2) 
                {
                    for (signed char i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        {
                            var_32 += ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)46)) == (((/* implicit */int) (signed char)103)))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_8]))) - (-223488724586319090LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(9223372036854775807LL)))) ? (((/* implicit */int) arr_5 [i_8 - 4])) : (((/* implicit */int) arr_15 [i_0] [i_2] [i_0] [i_2] [i_0])))))));
                            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_14 [i_0] [i_2] [i_3] [i_2] [i_9] [i_2] [i_3])))))));
                            var_34 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_5)))) ? (((((/* implicit */int) (unsigned char)34)) << (((((((/* implicit */int) (signed char)-75)) + (102))) - (11))))) : ((~(((/* implicit */int) (signed char)46))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (long long int i_10 = 0; i_10 < 17; i_10 += 1) 
            {
                var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 3415046510779486145ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_10] [i_10] [i_2] [14LL]))) : (arr_12 [i_0] [i_10]))))));
                arr_31 [i_0] [i_2] [i_10] [i_10] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (arr_17 [i_0] [i_2]) : (((/* implicit */int) arr_3 [i_0] [i_2]))));
            }
            for (int i_11 = 0; i_11 < 17; i_11 += 3) /* same iter space */
            {
                var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) max((arr_22 [i_0] [i_0] [i_0] [3ULL] [(signed char)14] [i_11]), ((~((~(((/* implicit */int) (signed char)85)))))))))));
                arr_34 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) min((((signed char) arr_20 [1ULL] [i_2] [i_2] [i_2] [i_11] [i_11] [i_11])), ((signed char)-72)));
                /* LoopSeq 3 */
                for (long long int i_12 = 1; i_12 < 16; i_12 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_13 = 0; i_13 < 17; i_13 += 1) 
                    {
                        var_37 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned char) var_3))), (((((/* implicit */unsigned int) arr_22 [i_0] [i_0] [i_2] [i_11] [i_12] [i_13])) / (3840671925U))))))));
                        var_38 -= ((((/* implicit */_Bool) ((int) 868176653))) ? (min((((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0] [i_2] [i_11] [(unsigned char)6] [i_13]))) / (-6894398916198086178LL))), (((/* implicit */long long int) arr_17 [i_11] [(signed char)9])))) : (((/* implicit */long long int) (+(arr_38 [i_0] [i_0] [i_0] [i_12])))));
                    }
                    for (long long int i_14 = 0; i_14 < 17; i_14 += 2) 
                    {
                        var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((-288230376151711744LL) - (0LL)))) ? (15031697562930065453ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-109)))))))))))));
                        var_40 += ((/* implicit */unsigned int) ((signed char) 16625237947807935503ULL));
                        var_41 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)103)) ? (-6894398916198086178LL) : (9223372036854775801LL)));
                    }
                    var_42 ^= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (-(7536914330813562006LL)))) ? ((-(((/* implicit */int) var_10)))) : (arr_38 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12]))), (((((((/* implicit */int) (unsigned char)238)) & (0))) / (arr_10 [i_12 - 1] [i_12] [i_12] [i_12 - 1])))));
                }
                for (long long int i_15 = 1; i_15 < 16; i_15 += 4) /* same iter space */
                {
                    var_43 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)8)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-101))))))), (((/* implicit */unsigned long long int) arr_20 [i_0] [i_2] [i_11] [i_11] [i_11] [i_11] [i_15 + 1]))));
                    var_44 = ((/* implicit */unsigned int) max((var_44), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_16)))) ? (((long long int) arr_40 [i_0] [i_2] [i_2] [i_11] [i_15])) : (((/* implicit */long long int) ((unsigned int) (signed char)-8)))))) ? ((+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)145))) - (13U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-14)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_16 = 0; i_16 < 17; i_16 += 2) /* same iter space */
                    {
                        var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) ((((/* implicit */_Bool) ((-1LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)14)))))) ? (((((/* implicit */long long int) var_17)) / (((((/* implicit */_Bool) var_4)) ? (arr_37 [i_0] [i_2] [12] [i_15] [i_0]) : (var_16))))) : (min((arr_40 [i_16] [i_16] [(unsigned char)14] [i_16] [i_15 - 1]), (((/* implicit */long long int) arr_38 [i_0] [1] [i_11] [i_15])))))))));
                        var_46 *= ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_30 [i_0])) | (((/* implicit */int) arr_5 [i_16]))))));
                    }
                    for (unsigned int i_17 = 0; i_17 < 17; i_17 += 2) /* same iter space */
                    {
                        var_47 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)212)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)145))) : (4644691457939125509LL))));
                        var_48 *= ((/* implicit */int) max(((+(2999541523708687793ULL))), (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                        var_49 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */long long int) 4294967295U)) : (max((((-3542053058653991483LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)41))))), (((/* implicit */long long int) (signed char)127))))));
                    }
                }
                for (long long int i_18 = 1; i_18 < 16; i_18 += 4) /* same iter space */
                {
                    var_50 = ((/* implicit */unsigned char) min((var_50), (((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_18 + 1] [i_11] [i_2] [i_0])) ? (((/* implicit */int) arr_24 [i_0] [i_2] [i_11] [i_18])) : (((/* implicit */int) arr_24 [i_0] [i_2] [i_11] [i_18 - 1]))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)152))) + (-9114826482536802282LL))))))));
                    var_51 |= ((var_11) << (((((((/* implicit */_Bool) (~(1108307720798208ULL)))) ? (var_1) : (((/* implicit */int) (signed char)-70)))) - (108379970))));
                }
                var_52 = ((/* implicit */unsigned long long int) min((var_52), (((/* implicit */unsigned long long int) (unsigned char)47))));
                var_53 = ((/* implicit */unsigned char) max((var_53), (max((((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)46)) && (((/* implicit */_Bool) arr_44 [i_0]))))), (((unsigned char) arr_24 [i_0] [i_0] [i_2] [i_11]))))));
            }
            /* vectorizable */
            for (int i_19 = 0; i_19 < 17; i_19 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_20 = 0; i_20 < 17; i_20 += 3) 
                {
                    for (signed char i_21 = 0; i_21 < 17; i_21 += 4) 
                    {
                        {
                            var_54 |= ((/* implicit */signed char) arr_41 [i_0] [i_0] [i_2] [i_19] [i_20] [i_21] [i_21]);
                            var_55 -= ((/* implicit */unsigned int) arr_4 [i_21]);
                        }
                    } 
                } 
                var_56 &= ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-47))));
            }
            var_57 *= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_10), (((unsigned char) arr_27 [i_2] [i_2] [i_0] [i_0] [i_0])))))) != (arr_59 [i_0] [i_2] [i_2])));
        }
        for (unsigned char i_22 = 0; i_22 < 17; i_22 += 3) /* same iter space */
        {
            var_58 += ((/* implicit */unsigned int) var_17);
            var_59 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_52 [i_0] [i_22] [i_0] [i_22] [i_22]))) + (var_16)))) ? ((-(0ULL))) : (((/* implicit */unsigned long long int) 4294967295U))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) (signed char)89))))))) : (min((((/* implicit */unsigned int) (signed char)50)), (arr_51 [i_0] [i_0] [i_0] [14U] [i_0])))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_23 = 0; i_23 < 17; i_23 += 4) 
            {
                var_60 ^= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)35)) ? (1108307720798208ULL) : (((/* implicit */unsigned long long int) arr_38 [5LL] [9] [5LL] [i_23])))));
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 17; i_24 += 2) 
                {
                    for (long long int i_25 = 2; i_25 < 13; i_25 += 2) 
                    {
                        {
                            var_61 += ((/* implicit */int) arr_55 [i_0] [i_0] [i_0] [i_0]);
                            var_62 = ((/* implicit */unsigned char) max((var_62), (((/* implicit */unsigned char) (signed char)-50))));
                        }
                    } 
                } 
            }
            var_63 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)50)) ? (((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned char)156)))) - (arr_10 [i_0] [i_0] [i_0] [i_0])))) : (min((max((10U), (((/* implicit */unsigned int) (signed char)-127)))), (4261121820U)))));
        }
        for (unsigned char i_26 = 0; i_26 < 17; i_26 += 3) /* same iter space */
        {
            var_64 -= (signed char)90;
            /* LoopSeq 2 */
            for (unsigned long long int i_27 = 0; i_27 < 17; i_27 += 3) /* same iter space */
            {
                var_65 = ((/* implicit */long long int) max((var_65), (((/* implicit */long long int) var_5))));
                /* LoopSeq 1 */
                for (unsigned char i_28 = 0; i_28 < 17; i_28 += 3) 
                {
                    var_66 = ((/* implicit */unsigned long long int) max((var_66), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967280U)) ? (9223372036854775807LL) : (((/* implicit */long long int) 867719554U)))))));
                    var_67 = ((/* implicit */unsigned char) max((var_67), ((unsigned char)64)));
                }
            }
            /* vectorizable */
            for (unsigned long long int i_29 = 0; i_29 < 17; i_29 += 3) /* same iter space */
            {
                var_68 *= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)51)) * (((/* implicit */int) (unsigned char)114))));
                arr_81 [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_29] [i_26] [i_29])) ? (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0])) : (9223372036854775807LL)));
                var_69 -= ((/* implicit */signed char) arr_60 [i_0] [i_0] [i_0]);
                var_70 -= (-(arr_76 [i_0] [i_26] [i_29] [i_26]));
            }
            var_71 = ((/* implicit */long long int) min((var_71), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)115))) : (540431955284459520ULL))))));
            /* LoopNest 3 */
            for (unsigned char i_30 = 2; i_30 < 15; i_30 += 1) 
            {
                for (int i_31 = 0; i_31 < 17; i_31 += 3) 
                {
                    for (long long int i_32 = 0; i_32 < 17; i_32 += 3) 
                    {
                        {
                            var_72 = ((/* implicit */unsigned char) min((var_72), (var_0)));
                            var_73 *= ((/* implicit */signed char) var_10);
                            var_74 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)158))) : (4294967288U)));
                        }
                    } 
                } 
            } 
            var_75 = ((/* implicit */signed char) min((var_75), (((/* implicit */signed char) 1354759651))));
        }
        var_76 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_55 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)69))) : (2165259939U)));
        /* LoopNest 3 */
        for (long long int i_33 = 2; i_33 < 15; i_33 += 4) 
        {
            for (signed char i_34 = 0; i_34 < 17; i_34 += 1) 
            {
                for (signed char i_35 = 0; i_35 < 17; i_35 += 4) 
                {
                    {
                        var_77 = ((/* implicit */unsigned char) max((var_77), (((/* implicit */unsigned char) (((~(((/* implicit */int) arr_16 [i_33] [i_33] [i_33 + 1] [i_33])))) & ((~(((/* implicit */int) arr_91 [i_33] [i_33 - 2])))))))));
                        var_78 = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_0] [i_33 - 2])) ? (min((-4424233482286531428LL), (((/* implicit */long long int) (unsigned char)177)))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_19 [i_33 + 1] [i_33 + 1])), (10U))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_36 = 3; i_36 < 14; i_36 += 1) 
                        {
                            var_79 |= ((/* implicit */signed char) var_8);
                            var_80 = ((/* implicit */long long int) min((var_80), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_87 [i_36 + 1] [i_36] [i_33 + 2])) ? (2447902247821938858ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_36 + 3] [i_36 + 1]))))))));
                            var_81 += ((/* implicit */long long int) ((unsigned char) 4294967280U));
                        }
                        for (long long int i_37 = 0; i_37 < 17; i_37 += 4) 
                        {
                            var_82 *= ((/* implicit */signed char) var_17);
                            arr_102 [i_0] [i_33] [i_33] &= arr_18 [i_33 + 2] [i_35] [i_34] [i_33 + 2] [i_0];
                            var_83 = ((/* implicit */unsigned char) max((var_83), (((/* implicit */unsigned char) var_6))));
                        }
                    }
                } 
            } 
        } 
        var_84 = ((/* implicit */unsigned char) max((var_84), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-51)), ((unsigned char)131)))) ? (((((/* implicit */_Bool) (unsigned char)146)) ? (15998841825887612757ULL) : (((/* implicit */unsigned long long int) 1354759651)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-62))))))))));
    }
    for (unsigned char i_38 = 0; i_38 < 17; i_38 += 4) /* same iter space */
    {
        var_85 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-63))) != (18446744073709551615ULL)));
        var_86 = ((/* implicit */long long int) (-(((/* implicit */int) arr_30 [14LL]))));
    }
    var_87 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_5)))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) > (((/* implicit */int) var_4))))), (17147937934594730628ULL))) : ((-(((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)122))) : (67108800ULL)))))));
}
