/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210648
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) 1283023052)), (((unsigned int) max((((/* implicit */unsigned int) arr_6 [i_1] [i_2])), (var_11))))));
                    arr_9 [i_2] = ((/* implicit */unsigned char) min((((/* implicit */signed char) (_Bool)0)), (arr_5 [i_0])));
                    var_14 = ((/* implicit */unsigned char) (((_Bool)1) ? (min(((+(var_6))), (((/* implicit */unsigned int) ((int) arr_8 [i_1] [i_0] [i_1] [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3322185227U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 1; i_4 < 8; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 335738400)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_12 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4])) : (((/* implicit */int) arr_19 [i_4 - 1] [i_4] [i_4] [i_4 + 2] [i_4]))));
                                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) arr_15 [i_0] [i_0] [i_4] [i_5] [i_6]))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */int) min((((/* implicit */unsigned int) ((int) 2788810111U))), (((((/* implicit */_Bool) (-(arr_1 [i_3] [i_4])))) ? (min((924323129U), (((/* implicit */unsigned int) (short)8312)))) : (924323129U)))));
                }
            } 
        } 
        arr_21 [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? ((((~(((/* implicit */int) (unsigned char)7)))) % (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (((int) (unsigned char)109))));
        /* LoopSeq 4 */
        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (int i_8 = 0; i_8 < 10; i_8 += 4) 
            {
                var_18 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((int) -175502450))) : (4294967295U)));
                var_19 = ((/* implicit */unsigned int) min(((+(((arr_6 [i_0] [i_8]) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_8])) : (arr_2 [i_0] [i_0]))))), (((/* implicit */int) min((arr_15 [i_0] [i_7] [i_7] [i_8] [i_8]), (((/* implicit */unsigned short) (unsigned char)147)))))));
            }
            for (signed char i_9 = 0; i_9 < 10; i_9 += 3) 
            {
                var_20 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_13 [i_0] [(signed char)5] [i_9])) ? (arr_0 [i_7] [i_7]) : (335738400)))))));
                var_21 = ((/* implicit */short) ((signed char) arr_15 [i_0] [i_0] [i_7] [i_7] [i_7]));
                arr_28 [i_9] [i_7] [i_0] |= ((/* implicit */unsigned int) min(((-((+(((/* implicit */int) arr_24 [0] [i_7])))))), (min(((-(((/* implicit */int) arr_10 [i_0] [i_0] [i_9])))), (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0])) < (((/* implicit */int) arr_18 [i_7] [i_7] [i_0] [i_0] [i_0])))))))));
                var_22 = ((/* implicit */int) arr_22 [i_7] [i_0]);
            }
            var_23 = ((/* implicit */int) max((((/* implicit */unsigned int) ((int) arr_23 [i_0]))), ((~((-(1688476692U)))))));
            var_24 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_22 [i_0] [i_7]))))))));
            arr_29 [i_0] [i_7] [i_7] = min((((/* implicit */int) (_Bool)0)), (max((((((/* implicit */int) (unsigned char)0)) + (arr_0 [i_0] [i_0]))), (arr_23 [i_0]))));
            arr_30 [i_0] [i_7] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_7])) ? (((/* implicit */int) arr_16 [(_Bool)0] [i_0] [(_Bool)0] [i_7])) : (1273085033)))));
        }
        /* vectorizable */
        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 4) /* same iter space */
        {
            arr_33 [i_0] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? ((-(((/* implicit */int) arr_18 [i_0] [i_0] [i_10] [i_10] [i_10])))) : (((((/* implicit */_Bool) arr_8 [0] [i_0] [i_0] [i_10])) ? (((/* implicit */int) (signed char)-89)) : (arr_27 [i_0] [i_10] [i_0])))));
            /* LoopNest 2 */
            for (short i_11 = 0; i_11 < 10; i_11 += 4) 
            {
                for (int i_12 = 0; i_12 < 10; i_12 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_13 = 0; i_13 < 10; i_13 += 4) 
                        {
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (-335738400) : (((/* implicit */int) (unsigned char)131))))))));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_20 [i_0] [i_0] [i_0] [i_12] [(_Bool)1] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_41 [i_13] [(unsigned char)1] [(unsigned char)1]))))));
                            var_27 = 1756367255U;
                            var_28 = ((/* implicit */signed char) (unsigned char)3);
                            arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_0] [i_10] [i_11] [i_13])) ? (((/* implicit */int) (short)-28629)) : (((/* implicit */int) arr_40 [i_0] [i_10] [i_12] [i_13]))));
                        }
                        for (int i_14 = 0; i_14 < 10; i_14 += 4) /* same iter space */
                        {
                            var_29 += ((/* implicit */unsigned char) arr_4 [i_11]);
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((unsigned int) arr_24 [i_14] [i_0]))));
                        }
                        for (int i_15 = 0; i_15 < 10; i_15 += 4) /* same iter space */
                        {
                            var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_20 [i_0] [i_0] [i_11] [i_12] [i_15] [(short)2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_10] [9] [i_12])))))) ? ((+(((/* implicit */int) (short)0)))) : (arr_0 [i_0] [i_0]));
                            arr_51 [i_0] [i_0] [i_10] [i_11] [i_11] [i_12] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_0] [i_10] [i_11] [i_15])) ? (((/* implicit */int) arr_35 [i_0] [i_10] [i_12] [i_15])) : (((/* implicit */int) arr_35 [3] [i_11] [i_12] [i_15]))));
                        }
                        var_32 = ((unsigned char) ((((/* implicit */_Bool) arr_24 [i_11] [i_10])) ? (-986072292) : (arr_27 [i_0] [i_10] [i_11])));
                    }
                } 
            } 
            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (_Bool)1)) : (2147483647)))) ? (2515472350U) : (((/* implicit */unsigned int) -890535247))));
            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((_Bool) ((_Bool) (_Bool)1))))));
        }
        for (unsigned int i_16 = 0; i_16 < 10; i_16 += 4) /* same iter space */
        {
            var_35 = ((/* implicit */unsigned int) (!((!(((((/* implicit */_Bool) (signed char)115)) || (((/* implicit */_Bool) 4294967295U))))))));
            /* LoopNest 3 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (unsigned char i_18 = 0; i_18 < 10; i_18 += 4) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            var_36 ^= arr_13 [i_0] [i_16] [i_17];
                            arr_61 [i_0] [i_17] [i_17] [i_18] [i_19] = ((/* implicit */unsigned short) var_10);
                            var_37 |= ((/* implicit */signed char) ((int) (~(((/* implicit */int) (unsigned char)54)))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_20 = 0; i_20 < 10; i_20 += 4) /* same iter space */
        {
            var_38 = ((/* implicit */unsigned char) ((int) (-(((/* implicit */int) (unsigned short)23)))));
            /* LoopNest 3 */
            for (unsigned int i_21 = 0; i_21 < 10; i_21 += 2) 
            {
                for (unsigned int i_22 = 0; i_22 < 10; i_22 += 3) 
                {
                    for (short i_23 = 3; i_23 < 8; i_23 += 3) 
                    {
                        {
                            arr_73 [i_0] [i_0] [i_0] [i_0] [i_22] = ((/* implicit */unsigned char) arr_2 [9U] [i_23 - 1]);
                            var_39 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
            } 
            var_40 = ((/* implicit */signed char) (+(((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_20] [i_0]))));
            var_41 &= ((/* implicit */int) var_1);
            arr_74 [i_0] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_16 [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) ((arr_39 [i_0] [i_0] [(unsigned char)2] [i_0] [i_0] [(signed char)8]) == (((/* implicit */int) arr_17 [i_0] [i_20] [1U] [i_0])))))));
        }
    }
    for (unsigned int i_24 = 0; i_24 < 13; i_24 += 4) /* same iter space */
    {
        arr_78 [i_24] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)147)), (arr_77 [i_24])))) ? (((/* implicit */int) max((arr_76 [i_24]), (arr_76 [i_24])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1U)))))))));
        var_42 = ((/* implicit */unsigned int) (-(max((((((/* implicit */_Bool) arr_77 [i_24])) ? (((/* implicit */int) var_3)) : (arr_75 [i_24] [i_24]))), (((((/* implicit */_Bool) 2751833615U)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (_Bool)1))))))));
    }
    for (unsigned int i_25 = 0; i_25 < 13; i_25 += 4) /* same iter space */
    {
        var_43 += ((/* implicit */short) ((4294967295U) % (arr_81 [i_25])));
        /* LoopSeq 2 */
        for (int i_26 = 0; i_26 < 13; i_26 += 4) 
        {
            var_44 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)28))) ? ((+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (short)31835))))))) : (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0))))));
            /* LoopNest 3 */
            for (int i_27 = 0; i_27 < 13; i_27 += 4) 
            {
                for (signed char i_28 = 0; i_28 < 13; i_28 += 4) 
                {
                    for (short i_29 = 0; i_29 < 13; i_29 += 3) 
                    {
                        {
                            var_45 += ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) arr_83 [(_Bool)1] [i_27] [i_28])))))) ? ((+(((unsigned int) (unsigned char)244)))) : ((-(((((/* implicit */_Bool) arr_92 [i_28])) ? (501460052U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)98)))))))));
                            arr_93 [i_28] [i_26] [i_26] [(signed char)10] &= ((unsigned int) ((signed char) min((58720256U), (((/* implicit */unsigned int) 2147483643)))));
                        }
                    } 
                } 
            } 
            var_46 = min(((((_Bool)1) ? (-2059316437) : (((/* implicit */int) (short)32767)))), (((/* implicit */int) arr_76 [i_25])));
            var_47 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_91 [i_26] [i_26] [10U] [i_25] [i_25] [i_25] [i_25])) ? (arr_75 [i_26] [i_25]) : (((/* implicit */int) arr_91 [i_25] [i_26] [i_26] [i_26] [i_26] [i_26] [i_26])))), (((/* implicit */int) ((unsigned short) (_Bool)1)))));
            var_48 = ((/* implicit */int) max((var_48), (((/* implicit */int) arr_82 [i_25]))));
        }
        for (int i_30 = 0; i_30 < 13; i_30 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_31 = 0; i_31 < 13; i_31 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                {
                    var_49 *= ((/* implicit */short) -2128288635);
                    var_50 = ((/* implicit */unsigned int) (!(((_Bool) arr_81 [i_25]))));
                }
                /* LoopNest 2 */
                for (unsigned int i_33 = 2; i_33 < 10; i_33 += 1) 
                {
                    for (signed char i_34 = 0; i_34 < 13; i_34 += 4) 
                    {
                        {
                            var_51 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_94 [i_25] [i_25])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)76)) && (((/* implicit */_Bool) (unsigned short)7))))))), (min(((-(((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) var_7))))))));
                            var_52 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((int) arr_101 [i_25] [i_31] [i_31] [i_33] [i_34]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_88 [i_25] [7U] [i_31] [i_33 + 1] [i_33 + 1])) ? (((/* implicit */int) arr_104 [i_25] [i_30] [i_25] [i_33] [i_33] [i_34])) : (((/* implicit */int) arr_87 [i_25] [(_Bool)1] [i_33 - 1]))))) : (max((((/* implicit */unsigned int) 956357482)), (arr_94 [i_25] [i_25])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_35 = 0; i_35 < 13; i_35 += 4) 
                {
                    for (unsigned int i_36 = 0; i_36 < 13; i_36 += 4) 
                    {
                        {
                            var_53 = ((/* implicit */_Bool) max((((/* implicit */int) ((short) max((var_4), (((/* implicit */unsigned int) arr_77 [i_25])))))), (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) (unsigned short)9476))))));
                            arr_110 [i_25] [i_30] [i_31] [(signed char)1] [i_35] [(signed char)1] [i_36] = arr_101 [i_25] [i_31] [i_25] [i_25] [(unsigned char)2];
                            var_54 = ((/* implicit */int) max((((max((73636095U), (((/* implicit */unsigned int) arr_95 [i_36] [(short)2] [i_30])))) << (((((((/* implicit */_Bool) arr_83 [i_25] [i_25] [i_35])) ? (var_6) : (arr_80 [i_25] [i_25]))) - (4098110637U))))), (((/* implicit */unsigned int) arr_95 [i_25] [i_30] [i_31]))));
                            var_55 = ((/* implicit */unsigned short) (-(((int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (-1))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_37 = 0; i_37 < 13; i_37 += 4) 
                {
                    arr_113 [i_25] [i_31] [i_31] [i_37] = ((/* implicit */int) (unsigned char)255);
                    var_56 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_91 [i_31] [i_31] [10] [i_30] [i_31] [(short)5] [i_37])) ? (arr_89 [i_25] [10] [i_25] [(short)4] [i_31] [i_25]) : (((/* implicit */int) (signed char)0))))) : (((((/* implicit */_Bool) arr_111 [i_25] [i_30] [i_31] [i_37])) ? (var_11) : (((/* implicit */unsigned int) arr_92 [i_25]))))))) ? (((/* implicit */int) arr_79 [i_37])) : (((((/* implicit */_Bool) arr_96 [i_37] [(signed char)7] [i_30] [i_25])) ? (((/* implicit */int) (signed char)31)) : (arr_96 [i_25] [i_30] [i_31] [3])))));
                }
            }
            /* LoopSeq 1 */
            for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
            {
                arr_116 [i_25] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_111 [i_25] [i_30] [i_30] [i_30])) ? (var_11) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_75 [i_30] [i_25])) ? (arr_90 [i_25] [i_30]) : (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_85 [i_25]))))))) : (((((/* implicit */_Bool) (unsigned char)131)) ? (116545358U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_91 [i_30] [i_25] [(short)8] [i_25] [(short)8] [(signed char)4] [i_38]))))));
                var_57 = ((/* implicit */signed char) ((904678814) & (((/* implicit */int) (unsigned char)196))));
                var_58 = ((/* implicit */unsigned char) min((((/* implicit */int) (signed char)-85)), (arr_96 [i_25] [i_25] [i_30] [i_25])));
            }
            var_59 &= ((/* implicit */_Bool) 520150879U);
            var_60 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) -1522663619)))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_91 [i_25] [(_Bool)1] [i_30] [i_25] [i_25] [i_25] [i_25])) : (((/* implicit */int) (_Bool)1))))), (((unsigned int) 3774816417U)))) : (((/* implicit */unsigned int) 1522663619))));
        }
        var_61 = ((/* implicit */signed char) max((var_61), (((/* implicit */signed char) ((((/* implicit */_Bool) 1352442355U)) ? (((/* implicit */unsigned int) -1522663619)) : (((((/* implicit */_Bool) (-(arr_90 [i_25] [i_25])))) ? (1252076020U) : (((/* implicit */unsigned int) arr_97 [i_25] [i_25] [(unsigned char)10] [7U])))))))));
        /* LoopNest 2 */
        for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
        {
            for (int i_40 = 0; i_40 < 13; i_40 += 4) 
            {
                {
                    var_62 = ((/* implicit */unsigned int) ((int) -536870912));
                    var_63 -= ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_90 [i_25] [i_40])))) ? (((((/* implicit */_Bool) min((((/* implicit */int) arr_108 [i_25] [i_39] [i_40] [i_39] [i_40])), (-904678814)))) ? (((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)238))) : (1252076020U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_103 [i_40] [i_39] [i_39] [i_25] [i_25]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_104 [i_25] [i_25] [i_40] [i_39] [11U] [i_25])) || (var_3)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_85 [i_39])) && (((/* implicit */_Bool) arr_84 [i_40] [i_39] [i_25]))))))))));
                    var_64 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_94 [(unsigned char)3] [i_40])) ? (arr_92 [i_40]) : (((/* implicit */int) arr_87 [i_25] [(_Bool)1] [i_40])))))) ? (arr_96 [i_25] [i_25] [i_25] [7U]) : (((/* implicit */int) var_12))));
                    var_65 = ((/* implicit */unsigned int) (short)26629);
                }
            } 
        } 
    }
    for (signed char i_41 = 0; i_41 < 24; i_41 += 4) 
    {
        arr_124 [i_41] = ((/* implicit */unsigned char) (unsigned short)65535);
        arr_125 [i_41] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_123 [i_41] [i_41])) ? (arr_123 [18] [i_41]) : (((/* implicit */int) ((unsigned char) arr_123 [i_41] [i_41])))));
    }
    var_66 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_8), (var_8)))) ? ((+(((/* implicit */int) var_2)))) : (max((1101332501), (((/* implicit */int) (short)-1))))))) ? (max((min((var_4), (((/* implicit */unsigned int) var_1)))), (max((var_11), (var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)121)))));
}
