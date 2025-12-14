/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1932
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
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        var_19 = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) (signed char)30))), (((((_Bool) var_9)) ? (((/* implicit */int) ((_Bool) (signed char)60))) : (((/* implicit */int) (short)16376))))));
        arr_2 [i_0] = ((_Bool) ((_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_0 - 1])), (arr_1 [i_0] [i_0]))));
    }
    for (unsigned int i_1 = 4; i_1 < 20; i_1 += 2) 
    {
        var_20 = ((/* implicit */short) max(((signed char)-14), (((/* implicit */signed char) (_Bool)1))));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            var_21 -= ((/* implicit */short) ((((((((/* implicit */_Bool) arr_6 [i_1 - 4])) ? (arr_6 [i_1 - 2]) : (arr_6 [i_1 - 3]))) + (2147483647))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_4 [i_1 - 3] [i_2])) >= (arr_5 [i_1 - 3] [i_1 - 1] [5LL]))))));
            arr_8 [(unsigned char)20] [(_Bool)1] [(unsigned char)20] = ((/* implicit */unsigned int) (unsigned short)32640);
        }
    }
    for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 1) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) (signed char)-13)))));
        var_22 = ((min((((var_2) << (((((/* implicit */int) var_11)) - (61388))))), (((/* implicit */long long int) arr_9 [i_3])))) != (((/* implicit */long long int) ((/* implicit */int) ((short) (+(((/* implicit */int) var_5))))))));
        /* LoopSeq 4 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_23 = ((/* implicit */int) (+(((((/* implicit */_Bool) 7005480212046840301ULL)) ? (11441263861662711314ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            var_24 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)47))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_25 -= ((/* implicit */long long int) ((min((5580442746278741010ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((((/* implicit */int) (unsigned char)160)) << (((8388600) - (8388584))))))))));
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_17 [i_3 + 2])), (var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 11441263861662711315ULL))))) : (((/* implicit */int) var_3))));
        }
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 25; i_8 += 3) 
                {
                    for (short i_9 = 0; i_9 < 25; i_9 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */long long int) arr_20 [i_3] [i_3 + 1]);
                            var_28 += var_9;
                            var_29 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12178))) : (18018737802975160300ULL)))) ? (((((/* implicit */unsigned long long int) arr_22 [i_3] [i_3 + 2] [i_3])) ^ (9971580457154658083ULL))) : (((/* implicit */unsigned long long int) arr_16 [i_3 + 1] [i_9])));
                            var_30 += ((/* implicit */unsigned long long int) arr_9 [i_3]);
                        }
                    } 
                } 
                arr_31 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) var_4);
                arr_32 [i_3] [i_6] [(signed char)6] = ((/* implicit */unsigned long long int) 549755551744LL);
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_11 = 2; i_11 < 24; i_11 += 3) 
                {
                    arr_37 [i_3] [i_3] [i_6] [i_3] = ((/* implicit */unsigned char) var_11);
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7881299347898368LL)) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : (((arr_18 [i_3] [i_6]) ^ (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                    var_32 = ((/* implicit */unsigned char) (_Bool)1);
                }
                /* LoopSeq 1 */
                for (int i_12 = 1; i_12 < 23; i_12 += 4) 
                {
                    arr_42 [i_6] [i_6] [i_10] [i_10] = ((/* implicit */unsigned short) arr_38 [i_3] [i_6] [i_6] [i_12]);
                    arr_43 [i_3] [i_6] [i_6] [i_12] = ((/* implicit */signed char) arr_38 [i_3] [i_6] [i_6] [i_12]);
                }
                arr_44 [i_3] [i_3] [i_6] = ((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1));
                arr_45 [i_6] [i_6] = ((/* implicit */_Bool) ((arr_28 [i_3] [i_3 + 1] [(unsigned short)0] [i_3]) ? (((/* implicit */int) (short)16376)) : (((/* implicit */int) arr_14 [(_Bool)1] [i_3 + 1] [i_10]))));
                /* LoopSeq 1 */
                for (unsigned char i_13 = 0; i_13 < 25; i_13 += 4) 
                {
                    var_33 = ((/* implicit */signed char) ((unsigned int) arr_35 [i_3] [i_10] [i_13]));
                    arr_49 [i_3 + 2] [i_6] [i_6] [i_6] [i_10] [i_13] = ((/* implicit */unsigned long long int) ((arr_36 [i_3 - 1] [i_3 + 1] [i_3 + 1] [(unsigned char)19]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-44))))))));
                    arr_50 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65504)) || (((/* implicit */_Bool) arr_30 [i_3 + 2] [i_3 + 2] [i_3 + 1] [i_3 + 1] [i_3 + 2]))));
                }
            }
            /* LoopSeq 1 */
            for (signed char i_14 = 4; i_14 < 23; i_14 += 4) 
            {
                var_34 ^= ((/* implicit */int) arr_18 [i_3 - 1] [i_3 + 2]);
                var_35 = ((/* implicit */unsigned long long int) 1311024105);
                var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)143)) >= (1072693248))))));
                /* LoopSeq 2 */
                for (long long int i_15 = 3; i_15 < 22; i_15 += 1) /* same iter space */
                {
                    var_37 ^= ((/* implicit */_Bool) ((unsigned char) var_12));
                    var_38 *= ((/* implicit */unsigned long long int) (signed char)4);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 4) 
                    {
                        var_39 = ((/* implicit */unsigned int) var_0);
                        var_40 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)56)) % (2080768)));
                    }
                    arr_60 [i_6] [i_6] [i_14] [i_6] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-16078)) ? (((/* implicit */int) arr_28 [i_3] [i_3] [i_3 + 2] [i_3])) : (((/* implicit */int) arr_27 [i_3] [i_3 + 1] [i_6] [i_3]))))) : (arr_39 [i_3] [i_3 + 2] [i_14] [i_3] [i_3])));
                    arr_61 [i_15 + 2] [i_6] [i_6] [i_3] = ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15184))) + (var_0)));
                }
                for (long long int i_17 = 3; i_17 < 22; i_17 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_18 = 1; i_18 < 23; i_18 += 3) 
                    {
                        arr_68 [i_3] [i_3] [(signed char)24] [i_6] [i_3 - 1] [i_3 - 1] = ((/* implicit */unsigned long long int) (unsigned short)9357);
                        var_41 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 1152921435887370240ULL))))));
                        var_42 = ((/* implicit */unsigned long long int) ((7783754114494482927LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44866)))));
                        var_43 = (-(((/* implicit */int) arr_15 [i_3] [i_6] [i_14 - 4])));
                        var_44 = ((/* implicit */unsigned short) ((((int) 1073741824)) != (((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) arr_63 [i_18] [i_17] [i_6] [i_3])))))));
                    }
                    for (long long int i_19 = 0; i_19 < 25; i_19 += 2) 
                    {
                        arr_72 [i_3 + 1] [i_6] [i_3 + 1] [i_6] [i_19] [i_3] [3ULL] = ((/* implicit */unsigned long long int) arr_47 [i_19] [i_17] [i_14 - 2] [i_3 - 1]);
                        var_45 = ((/* implicit */signed char) (((_Bool)1) ? (11441263861662711322ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64245)))));
                    }
                    var_46 = ((/* implicit */_Bool) ((unsigned long long int) arr_29 [i_17] [i_17 - 3] [i_14 - 2] [i_6] [i_3 + 2] [i_3]));
                }
            }
            var_47 = ((/* implicit */int) max((var_47), ((+(((((/* implicit */int) arr_24 [i_3])) << (((((/* implicit */int) (short)8176)) - (8167)))))))));
        }
        /* vectorizable */
        for (unsigned char i_20 = 0; i_20 < 25; i_20 += 3) 
        {
            var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_20] [i_3 + 2])) ? (((/* implicit */int) arr_12 [i_20] [i_3 + 1])) : (((/* implicit */int) arr_12 [i_20] [i_3 + 1]))));
            /* LoopSeq 1 */
            for (unsigned int i_21 = 0; i_21 < 25; i_21 += 3) 
            {
                arr_79 [i_20] [i_21] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((((/* implicit */_Bool) (short)-4096)) ? (1152921435887370240ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) - (1152921435887370213ULL)))));
                /* LoopNest 2 */
                for (unsigned long long int i_22 = 0; i_22 < 25; i_22 += 4) 
                {
                    for (unsigned int i_23 = 1; i_23 < 24; i_23 += 4) 
                    {
                        {
                            var_49 -= ((/* implicit */int) ((arr_64 [i_3] [(unsigned short)20] [i_22] [i_22] [(unsigned char)14]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 28672)) ? (((/* implicit */int) arr_83 [i_3 + 1] [(unsigned char)9] [i_21] [i_22] [i_23])) : (168470165)))) : (var_0)));
                            var_50 = ((/* implicit */unsigned int) min((var_50), (((/* implicit */unsigned int) 72057594036879360ULL))));
                            arr_87 [i_20] [i_20] [i_23 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_3] [10ULL] [i_21] [i_3] [i_23 + 1])) ? (arr_75 [i_3] [i_20] [i_3 + 1]) : (((/* implicit */long long int) arr_16 [i_3 + 1] [i_23 + 1]))));
                        }
                    } 
                } 
                var_51 = ((/* implicit */_Bool) (unsigned short)29558);
                var_52 = ((/* implicit */_Bool) min((var_52), (((/* implicit */_Bool) arr_77 [i_21] [4ULL] [4ULL] [i_3]))));
                /* LoopSeq 4 */
                for (unsigned long long int i_24 = 1; i_24 < 23; i_24 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_25 = 3; i_25 < 24; i_25 += 1) 
                    {
                        arr_94 [i_21] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)9357)))))));
                        var_53 = ((((/* implicit */_Bool) var_0)) && ((!(var_3))));
                    }
                    var_54 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_80 [i_21] [i_20] [i_21] [i_24] [i_24 + 2])) : (((/* implicit */int) var_3))));
                    var_55 -= ((/* implicit */long long int) (unsigned char)149);
                }
                for (unsigned short i_26 = 0; i_26 < 25; i_26 += 1) 
                {
                    arr_99 [3ULL] [i_20] = ((/* implicit */unsigned short) ((arr_91 [i_3] [i_3 + 2] [i_20]) ? (((/* implicit */int) arr_91 [(unsigned short)21] [i_3 + 2] [i_20])) : (((/* implicit */int) arr_91 [(signed char)22] [i_3 + 1] [i_20]))));
                    var_56 = ((/* implicit */int) (_Bool)1);
                    /* LoopSeq 1 */
                    for (int i_27 = 0; i_27 < 25; i_27 += 3) 
                    {
                        var_57 -= ((/* implicit */long long int) arr_13 [i_26] [19LL]);
                        var_58 = ((/* implicit */unsigned long long int) var_5);
                        var_59 *= ((/* implicit */short) ((_Bool) (unsigned char)124));
                        var_60 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)-16206))));
                    }
                    var_61 += ((/* implicit */signed char) 7371461483902862845ULL);
                }
                for (unsigned int i_28 = 0; i_28 < 25; i_28 += 4) 
                {
                    arr_106 [i_20] [i_20] [i_20] [i_28] = ((/* implicit */int) ((arr_77 [i_3 + 2] [i_3 + 2] [i_20] [i_3 - 1]) << (((((/* implicit */int) (signed char)-101)) + (146)))));
                    arr_107 [i_3] [i_20] = ((/* implicit */_Bool) (-(((((/* implicit */int) (short)768)) << (((4503599627108352LL) - (4503599627108341LL)))))));
                }
                for (short i_29 = 0; i_29 < 25; i_29 += 1) 
                {
                    var_62 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1040384U)) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_20] [i_20])))));
                    /* LoopSeq 1 */
                    for (signed char i_30 = 2; i_30 < 22; i_30 += 2) 
                    {
                        var_63 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17862)) ? (7006479548072039083ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23324)))));
                        var_64 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned int) -168470165)) : (((unsigned int) arr_51 [i_3 + 1] [i_20] [i_20]))));
                        var_65 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 536805376U)) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) ((_Bool) var_5)))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_31 = 0; i_31 < 25; i_31 += 4) /* same iter space */
                    {
                        var_66 = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_5)) > (((/* implicit */int) (signed char)104)))));
                        var_67 = ((/* implicit */unsigned short) arr_95 [i_20] [i_21] [i_29]);
                    }
                    for (unsigned long long int i_32 = 0; i_32 < 25; i_32 += 4) /* same iter space */
                    {
                        arr_117 [i_3] [i_32] [i_21] [i_29] [(signed char)2] [i_32] [i_32] &= ((/* implicit */unsigned char) ((_Bool) (unsigned short)49152));
                        arr_118 [i_3] [i_3] [i_32] [i_3] [i_3] [i_29] [(signed char)10] |= ((/* implicit */short) arr_102 [i_3 + 1] [i_32] [i_3 + 2] [i_32] [i_3 - 1]);
                        var_68 = ((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) (unsigned short)64542)))));
                        var_69 = ((/* implicit */signed char) 168470165);
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (unsigned char i_33 = 3; i_33 < 23; i_33 += 4) 
    {
        for (short i_34 = 1; i_34 < 23; i_34 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
                {
                    for (unsigned long long int i_36 = 1; i_36 < 23; i_36 += 3) 
                    {
                        {
                            arr_127 [i_33] [i_35] [i_35] = arr_30 [i_33] [i_33] [i_33] [i_33] [(signed char)4];
                            var_70 = ((/* implicit */short) max((((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_104 [i_33] [i_34] [i_33] [i_36]))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (33423360)))))), (((((unsigned int) 2199023255296ULL)) - (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_37 = 1; i_37 < 1; i_37 += 1) 
                {
                    var_71 = ((/* implicit */signed char) min((((/* implicit */short) ((((int) -6461150452286938501LL)) >= ((-(((/* implicit */int) (_Bool)1))))))), (var_10)));
                    var_72 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)510))) % (((unsigned long long int) ((((/* implicit */_Bool) arr_65 [i_33] [i_33 - 2] [i_33 - 2] [i_37] [i_37] [i_37] [(_Bool)0])) ? (((/* implicit */unsigned long long int) 8589933568LL)) : (18410715276690587648ULL))))));
                    var_73 = ((/* implicit */short) arr_89 [i_33] [i_33] [(_Bool)0] [i_33]);
                }
                /* vectorizable */
                for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
                {
                    arr_133 [i_33] [i_33] [i_33] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 8257536)) ^ (var_8)))) ? (((/* implicit */int) (unsigned char)65)) : (((/* implicit */int) (short)3832))));
                    var_74 *= ((/* implicit */short) ((arr_28 [i_34 + 1] [(unsigned short)4] [i_34 + 1] [i_34 - 1]) ? (((/* implicit */int) arr_28 [i_34] [i_34] [i_34 - 1] [i_34 - 1])) : (((/* implicit */int) arr_28 [i_34 + 1] [i_34 + 1] [i_34 - 1] [i_34 - 1]))));
                    /* LoopNest 2 */
                    for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
                    {
                        for (long long int i_40 = 0; i_40 < 24; i_40 += 2) 
                        {
                            {
                                arr_140 [i_33] [i_38] [i_33] = ((/* implicit */unsigned long long int) ((arr_102 [i_33] [i_33] [i_38] [i_33] [i_33]) != (4550952151643057610ULL)));
                                var_75 *= ((unsigned char) (((_Bool)1) ? (arr_102 [i_33 - 3] [i_33] [(_Bool)1] [i_40] [i_33]) : (((/* implicit */unsigned long long int) arr_48 [(signed char)7] [i_39] [i_38] [i_33] [i_33]))));
                                arr_141 [23LL] [i_33] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_125 [i_40] [i_38])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_62 [i_33])))) : (var_0)));
                            }
                        } 
                    } 
                }
                var_76 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_18 [i_33 - 2] [i_33 - 1]) - (arr_18 [i_33 - 3] [i_33 + 1])))) ? (((/* implicit */unsigned long long int) (-(2219418773948889608LL)))) : (arr_82 [i_34] [i_34] [i_33] [i_34])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_41 = 1; i_41 < 19; i_41 += 3) 
    {
        for (signed char i_42 = 1; i_42 < 18; i_42 += 2) 
        {
            {
                arr_148 [i_41] = ((/* implicit */short) max((((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))))), (arr_112 [i_41] [i_41 + 1] [i_42] [i_42 + 2] [(_Bool)1] [i_42] [19LL])));
                arr_149 [i_41] [i_41 - 1] [i_41] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)178)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40048))) : (2305843009213693951ULL)));
            }
        } 
    } 
    var_77 = ((/* implicit */unsigned int) (~(max((((-6066282733351611406LL) + (((/* implicit */long long int) ((/* implicit */int) var_13))))), (((((/* implicit */_Bool) 4610560118520545280LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40055))) : (562945658454016LL)))))));
}
