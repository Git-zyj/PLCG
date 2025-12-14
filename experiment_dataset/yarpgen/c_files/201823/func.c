/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201823
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
    var_13 = min((((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) min((1610612736), (-1610612724)))))), (var_0));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */short) (-(((unsigned long long int) 18446744073709550592ULL))));
        var_14 = ((/* implicit */unsigned int) max((var_14), (((((/* implicit */_Bool) ((int) (+(((/* implicit */int) (short)-4426)))))) ? ((-(244038114U))) : (((unsigned int) arr_2 [i_0]))))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_3 [i_0]), (var_0))))));
            arr_8 [(_Bool)1] [i_1] = ((/* implicit */signed char) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (min((((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [4U]))))), (arr_6 [i_0] [i_1])))));
        }
        for (short i_2 = 3; i_2 < 10; i_2 += 4) /* same iter space */
        {
            arr_11 [i_0] = ((/* implicit */unsigned int) ((max((1023ULL), (((/* implicit */unsigned long long int) var_11)))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_7))) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) (short)248)))))));
            var_15 = ((/* implicit */short) (+(4852108900270538097ULL)));
            /* LoopSeq 4 */
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_13 [i_2 + 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_2] [i_3]))))))) <= (0ULL)))) == (((/* implicit */int) arr_0 [i_2] [i_2]))));
                var_17 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_10 [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2])) ? (13594635173439013518ULL) : (((/* implicit */unsigned long long int) arr_12 [i_2] [i_2] [i_3])))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_6 [i_2 - 3] [i_2 + 1])) + (2147483647))) << (((1006ULL) - (1006ULL))))))));
                var_18 = ((/* implicit */short) ((((long long int) 1034ULL)) == (((/* implicit */long long int) ((/* implicit */int) (((-(((/* implicit */int) arr_6 [i_0] [i_2])))) <= (((/* implicit */int) (!((_Bool)1))))))))));
            }
            for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (signed char)120)), (min((arr_1 [i_0]), (var_1)))));
                var_20 = ((/* implicit */short) (~(((/* implicit */int) min((arr_5 [i_2 - 2]), (arr_5 [i_2 - 3]))))));
            }
            for (signed char i_5 = 1; i_5 < 10; i_5 += 2) 
            {
                arr_20 [i_0] [i_5] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_8)))), (((/* implicit */int) (short)-2533))))) ? (((var_10) ? ((~(-5212343021668026078LL))) : (9223372036854775792LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709550618ULL)) ? (((/* implicit */unsigned int) var_5)) : (arr_9 [i_2] [i_2 - 3]))))));
                var_21 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_5 [i_0])) ? (4405364107319452293ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0]))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    arr_23 [i_6] [i_0] [i_2] [i_0] [i_0] &= ((/* implicit */unsigned char) ((short) arr_22 [i_0] [i_0] [i_2 - 1] [i_0]));
                    arr_24 [i_0] [i_5] [9LL] [i_6] = (~(4294967295U));
                }
                arr_25 [i_5] = ((/* implicit */unsigned char) ((short) max((((((/* implicit */unsigned long long int) 1610612736)) / (var_2))), (9571758358577517606ULL))));
            }
            for (unsigned char i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                arr_28 [i_0] [i_2 + 1] [i_0] = max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 1610612751)))) & ((+(arr_27 [i_0] [i_2]))))), (((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */long long int) (signed char)122)), (-4032275136529703858LL))))));
                var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)27218))));
            }
        }
        for (short i_8 = 3; i_8 < 10; i_8 += 4) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_9 = 1; i_9 < 10; i_9 += 4) 
            {
                var_23 = ((/* implicit */unsigned long long int) -1198230710);
                var_24 = ((/* implicit */long long int) (~(((/* implicit */int) ((var_4) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
            }
            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
            {
                arr_38 [i_0] [i_0] = ((/* implicit */unsigned int) 18014398509481983LL);
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709550592ULL)) ? (arr_17 [i_8] [i_10 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [(short)3] [i_8 - 1] [i_8])))))) ? (((((((/* implicit */_Bool) (signed char)-121)) ? (12U) : (((/* implicit */unsigned int) var_5)))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_8 - 2])) && (((/* implicit */_Bool) 1023ULL)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709550628ULL))))))));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_26 = ((/* implicit */unsigned int) arr_35 [i_8 + 1] [i_8 + 2] [i_8 - 3]);
                var_27 |= ((/* implicit */int) (-(max((min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_3 [i_11]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_0)))))))));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-4426))));
                arr_44 [i_0] [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) (!((_Bool)1)));
                var_29 = ((/* implicit */long long int) arr_43 [i_0] [i_12] [i_12]);
            }
            var_30 = ((((/* implicit */_Bool) 16140901064495857664ULL)) ? (18446744073709551615ULL) : (min((18446744073709550609ULL), (3610625732042343018ULL))));
            arr_45 [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) (short)-4422);
        }
        for (unsigned int i_13 = 2; i_13 < 10; i_13 += 4) 
        {
            var_31 = ((/* implicit */signed char) (short)(-32767 - 1));
            arr_48 [i_13] = ((/* implicit */signed char) min((((arr_34 [i_13 - 2] [i_13 + 2] [i_13 - 2] [i_13 + 1]) / (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), ((~(3835434081U)))));
            var_32 = ((/* implicit */short) (+(((/* implicit */int) arr_37 [i_0] [(short)3] [(short)3] [i_0]))));
        }
    }
    for (signed char i_14 = 1; i_14 < 22; i_14 += 1) /* same iter space */
    {
        arr_52 [i_14] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (signed char)120)) < (arr_49 [i_14 - 1])))) == ((~(arr_49 [i_14 - 1])))));
        var_33 = ((/* implicit */unsigned long long int) var_11);
        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_0))) ? ((~(((/* implicit */int) (unsigned char)255)))) : (((int) 467992376417492337LL))));
        /* LoopSeq 4 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_35 = ((/* implicit */int) min((var_35), (arr_49 [i_14])));
            var_36 &= (-(min((((unsigned long long int) var_1)), (arr_50 [i_14 - 1]))));
        }
        for (long long int i_16 = 1; i_16 < 20; i_16 += 4) 
        {
            var_37 = ((/* implicit */unsigned int) max(((+(((/* implicit */int) ((var_5) >= (((/* implicit */int) arr_55 [i_14] [i_16] [11ULL]))))))), (((/* implicit */int) max((((/* implicit */unsigned char) var_10)), (arr_55 [i_14 - 1] [i_14 - 1] [i_16 - 1]))))));
            arr_57 [i_16] = ((/* implicit */unsigned long long int) arr_54 [(unsigned char)10] [(unsigned char)10] [i_16]);
            arr_58 [i_16] = ((/* implicit */long long int) ((short) min((1489877709), (((/* implicit */int) (_Bool)1)))));
        }
        for (unsigned long long int i_17 = 3; i_17 < 22; i_17 += 4) /* same iter space */
        {
            arr_61 [i_17] [i_14 - 1] = ((/* implicit */short) min((((((10477209425774531666ULL) != (((/* implicit */unsigned long long int) 5212343021668026077LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)-1)))) : ((((_Bool)0) ? (arr_60 [i_14] [i_14] [i_17 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_17]))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-108))) : (0ULL)))))))));
            var_38 = ((/* implicit */long long int) (short)-32748);
        }
        for (unsigned long long int i_18 = 3; i_18 < 22; i_18 += 4) /* same iter space */
        {
            var_39 |= ((/* implicit */unsigned int) (~((+(((/* implicit */int) (short)-32758))))));
            /* LoopSeq 4 */
            for (int i_19 = 2; i_19 < 22; i_19 += 2) 
            {
                var_40 = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned long long int) arr_59 [i_19 + 1])));
                arr_67 [i_14] [i_14] [i_14] = ((/* implicit */unsigned char) ((_Bool) arr_59 [i_18 + 1]));
            }
            for (short i_20 = 1; i_20 < 22; i_20 += 4) 
            {
                var_41 = ((/* implicit */short) (signed char)120);
                arr_70 [i_14] [i_14] [i_18 + 1] [i_20 + 1] = ((/* implicit */unsigned long long int) var_5);
            }
            for (long long int i_21 = 0; i_21 < 23; i_21 += 2) /* same iter space */
            {
                var_42 = (+(((int) arr_72 [i_14] [i_14 + 1] [i_21])));
                /* LoopNest 2 */
                for (unsigned int i_22 = 0; i_22 < 23; i_22 += 1) 
                {
                    for (unsigned int i_23 = 0; i_23 < 23; i_23 += 1) 
                    {
                        {
                            arr_79 [i_14 + 1] [i_18] [i_21] [i_21] [i_22] [i_22] [i_21] = (short)32767;
                            var_43 ^= ((/* implicit */unsigned long long int) arr_64 [i_22] [i_21]);
                        }
                    } 
                } 
            }
            for (long long int i_24 = 0; i_24 < 23; i_24 += 2) /* same iter space */
            {
                arr_82 [i_24] [i_14 - 1] = ((/* implicit */short) ((signed char) max((((/* implicit */long long int) ((arr_54 [i_24] [i_18] [i_18]) > (((/* implicit */unsigned int) 946829039))))), (((856045969556663724LL) - (((/* implicit */long long int) ((/* implicit */int) (short)20523))))))));
                var_44 = ((/* implicit */signed char) ((unsigned long long int) max((arr_75 [i_14 - 1] [i_18 - 1] [i_18] [i_18] [i_18 + 1]), (var_12))));
            }
            /* LoopNest 2 */
            for (unsigned char i_25 = 3; i_25 < 19; i_25 += 1) 
            {
                for (short i_26 = 0; i_26 < 23; i_26 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned int i_27 = 0; i_27 < 23; i_27 += 4) 
                        {
                            var_45 = ((/* implicit */_Bool) ((unsigned char) (~(-8911034329936804813LL))));
                            var_46 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_89 [i_14] [i_14] [i_18] [i_18 - 3] [(_Bool)1]))));
                            var_47 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2105104117194008507LL)))))) >= (arr_64 [(signed char)14] [i_27])));
                            var_48 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121))) & (arr_85 [i_14 - 1] [i_14 + 1] [i_14 + 1])));
                        }
                        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) /* same iter space */
                        {
                            var_49 ^= ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)123)), (1943688416U)))))));
                            var_50 = min((((/* implicit */unsigned long long int) arr_78 [i_14 + 1] [i_14 + 1] [10ULL] [i_26] [i_28] [i_18] [i_25])), (min((((/* implicit */unsigned long long int) (signed char)-121)), (14846537976623077665ULL))));
                            var_51 |= ((/* implicit */signed char) max((max((arr_60 [i_25] [i_25] [i_25 + 4]), (((/* implicit */long long int) arr_49 [i_25 - 2])))), (((/* implicit */long long int) (+(((/* implicit */int) var_12)))))));
                            var_52 = ((/* implicit */signed char) ((unsigned int) max(((+(var_0))), (((/* implicit */unsigned long long int) (unsigned char)178)))));
                        }
                        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) /* same iter space */
                        {
                            var_53 = ((/* implicit */_Bool) (-(((/* implicit */int) min((arr_96 [i_14] [i_14 - 1] [i_25] [i_18 - 2]), ((_Bool)1))))));
                            var_54 = ((/* implicit */short) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1)))))))));
                            var_55 = ((/* implicit */unsigned int) arr_65 [i_18 + 1] [i_18 + 1]);
                        }
                        for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) /* same iter space */
                        {
                            arr_101 [i_14 + 1] [i_30] [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 + 1] = ((/* implicit */short) (~((~(((/* implicit */int) (_Bool)1))))));
                            arr_102 [i_30] [i_14] [i_14] [i_18] [i_14] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_93 [i_25 - 1] [i_25] [i_25] [i_25 - 2] [i_25])))))));
                        }
                        var_56 ^= ((/* implicit */int) (((!(((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_12)))))) ? ((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-106))) : (17453054787696859209ULL))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_63 [i_14] [i_26])))))));
                    }
                } 
            } 
        }
    }
    for (signed char i_31 = 1; i_31 < 22; i_31 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_32 = 0; i_32 < 23; i_32 += 4) 
        {
            for (short i_33 = 0; i_33 < 23; i_33 += 2) 
            {
                {
                    arr_111 [i_31 + 1] [i_32] [i_31 + 1] [i_32] = 1008ULL;
                    arr_112 [i_33] [(_Bool)1] [i_31] = min((((/* implicit */unsigned long long int) arr_72 [i_31] [i_32] [i_31])), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) % (arr_56 [i_31 - 1] [i_31 + 1] [i_31]))));
                }
            } 
        } 
        arr_113 [i_31] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_55 [5] [i_31] [i_31]))));
        var_57 = ((/* implicit */long long int) min((var_57), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-116))) : (223022511098674166LL)))));
        var_58 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) != (13174235239209214467ULL))))));
    }
    for (unsigned long long int i_34 = 0; i_34 < 13; i_34 += 2) 
    {
        arr_118 [i_34] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)9995))));
        arr_119 [i_34] [i_34] = ((/* implicit */unsigned long long int) (-(2105104117194008507LL)));
        /* LoopNest 2 */
        for (unsigned long long int i_35 = 0; i_35 < 13; i_35 += 4) 
        {
            for (int i_36 = 3; i_36 < 9; i_36 += 1) 
            {
                {
                    var_59 &= ((((/* implicit */_Bool) (short)2532)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)110))) : (1745953511U));
                    /* LoopNest 2 */
                    for (unsigned long long int i_37 = 0; i_37 < 13; i_37 += 2) 
                    {
                        for (unsigned int i_38 = 0; i_38 < 13; i_38 += 1) 
                        {
                            {
                                var_60 = ((/* implicit */signed char) (~(arr_49 [i_36 + 2])));
                                var_61 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)124)))))));
                                var_62 = ((/* implicit */signed char) min((var_62), (((/* implicit */signed char) var_7))));
                            }
                        } 
                    } 
                    arr_132 [i_34] [i_36] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-124))))) >> (((min((arr_85 [i_36 + 4] [i_36 + 1] [i_36]), (arr_85 [i_34] [i_36 + 1] [i_34]))) - (307378332U)))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_39 = 1; i_39 < 12; i_39 += 2) 
        {
            var_63 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_96 [i_39 - 1] [i_39] [i_34] [i_34])) | (((/* implicit */int) arr_96 [i_39 - 1] [i_39] [i_34] [i_34]))))) ? (((/* implicit */int) ((1729424404U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((arr_81 [i_39 + 1] [i_39] [i_39 + 1] [i_39]) != (arr_81 [i_39 + 1] [i_39] [i_34] [i_34]))))));
            arr_135 [i_34] [i_34] [i_34] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_92 [i_34] [i_34] [i_34] [8U] [i_39 - 1] [i_34])), (((var_7) + (((/* implicit */unsigned long long int) arr_81 [i_34] [i_39] [i_39 + 1] [i_34])))))))));
        }
        for (unsigned short i_40 = 4; i_40 < 10; i_40 += 1) 
        {
            arr_139 [i_34] [i_34] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_50 [(short)2])) ? (-2105104117194008508LL) : (((/* implicit */long long int) (+(((/* implicit */int) arr_105 [i_40 - 4])))))));
            var_64 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))) : (3622184806761147490ULL))))));
            arr_140 [i_34] [i_40] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_124 [i_34] [i_40 - 2] [i_34]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) || (((/* implicit */_Bool) (-(4LL))))));
            arr_141 [i_34] [i_34] = ((/* implicit */long long int) min(((~(arr_69 [i_40] [i_40] [i_40 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_123 [i_40 - 3] [i_40 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121))) : (1729424404U))))));
        }
        for (_Bool i_41 = 0; i_41 < 1; i_41 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_42 = 3; i_42 < 12; i_42 += 4) 
            {
                arr_148 [i_34] [i_34] = ((/* implicit */long long int) arr_114 [i_42] [i_41]);
                var_65 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_123 [i_42] [i_34]))) & (((/* implicit */unsigned int) ((/* implicit */int) min((arr_146 [i_41] [i_41] [i_41]), ((signed char)-116)))))))) && (((/* implicit */_Bool) (~(((/* implicit */int) ((short) arr_63 [i_34] [19U]))))))));
            }
            var_66 ^= min((0ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (8372080499625511113ULL))))))));
            var_67 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? ((-(((/* implicit */int) (unsigned short)31744)))) : (((/* implicit */int) ((((/* implicit */_Bool) (+(18446744073709551615ULL)))) || ((_Bool)1))))));
        }
        var_68 = ((/* implicit */long long int) ((arr_53 [i_34]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (12ULL)));
    }
}
