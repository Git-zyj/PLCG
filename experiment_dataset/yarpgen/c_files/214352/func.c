/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214352
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_1] [10U] |= ((/* implicit */signed char) var_13);
                    var_18 = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_2])) * (((/* implicit */int) ((((/* implicit */unsigned int) ((int) 3429825872U))) <= (((unsigned int) var_4)))))));
                    arr_8 [i_1] = ((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_2]);
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_3 [i_2]))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        arr_12 [i_0] [(unsigned char)9] [i_1] [i_1 - 1] [i_2] [11] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)11517))))))))) / (arr_5 [i_2] [i_2] [11ULL] [(short)11])));
                        arr_13 [i_0] [i_1] [i_1 + 1] [i_0] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_1 [i_1 + 2] [i_1 + 2])))) || (((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) (short)11507))))));
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((var_11) >> (((/* implicit */int) var_16))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [i_0] [i_1 + 2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) (short)-11504)) : (var_8))) == (((/* implicit */int) arr_14 [i_0] [(signed char)1] [i_3] [(short)12])))))) : (var_6)));
                            arr_17 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_11)) ? (var_14) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (arr_6 [i_0] [i_0] [6LL] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((1154559961U), (((/* implicit */unsigned int) -467857580))))) ? ((~(((/* implicit */int) var_16)))) : (arr_2 [i_2] [i_1 + 2]))))));
                            arr_18 [3] [12U] [i_2] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) var_6);
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((min((((/* implicit */int) (!(((/* implicit */_Bool) (short)11517))))), (var_10))) * (((/* implicit */int) arr_0 [10LL])))))));
                            var_21 = ((/* implicit */unsigned long long int) max((min((((((/* implicit */_Bool) 1154559961U)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_3]))))), (((/* implicit */long long int) arr_0 [i_3])))), (((/* implicit */long long int) max((arr_10 [i_3] [i_1 - 1] [i_1 - 1] [i_3] [i_4]), (arr_10 [i_4] [i_1 - 1] [i_2] [i_4] [i_3]))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) ((var_4) <= (((/* implicit */unsigned long long int) var_10)))))))));
                            arr_23 [i_0] = ((/* implicit */short) ((((arr_5 [i_3] [i_5] [i_1 + 1] [i_1]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [3LL] [i_1 + 1] [i_1 + 2] [(unsigned short)1] [i_5]))))) ? (((/* implicit */unsigned long long int) ((int) arr_22 [(short)5] [(short)9] [i_1 + 2] [(short)9] [i_5]))) : (((((/* implicit */_Bool) arr_22 [(_Bool)1] [(short)12] [i_1 + 1] [i_5] [i_1])) ? (((/* implicit */unsigned long long int) 1102865738)) : (var_4)))));
                            arr_24 [i_5] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) var_7))))) | (((long long int) arr_19 [i_1 + 1] [i_1 + 1] [7U]))))) ? (((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_0])))) : (((/* implicit */int) min((((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])) < (((/* implicit */int) (_Bool)0)))), (((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_2] [i_2] [i_2] [i_5]))) != (arr_6 [i_0] [1U] [i_2] [i_2])))))));
                        }
                    }
                    for (short i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (int i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_7))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) (signed char)44)) : (((/* implicit */int) var_3)))))) : (((((_Bool) -844504002)) ? (((((/* implicit */_Bool) arr_11 [i_7] [i_6] [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_4 [i_7] [(unsigned short)10] [i_0])) : (var_5))) : (((/* implicit */int) arr_31 [i_1 - 1] [i_1] [i_1 + 2] [i_1 - 1] [i_7]))))));
                            arr_32 [i_0] [i_1 + 2] [i_2] [i_6] [i_7] = ((/* implicit */unsigned char) max((var_10), (((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) 54222600U)) | (var_0)))))));
                            var_24 = ((/* implicit */unsigned int) (_Bool)0);
                            arr_33 [i_0] [i_1 + 2] [i_2] [i_2] [i_6] [i_6] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3168)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)255))))) ? ((-(((/* implicit */int) (unsigned char)109)))) : (((/* implicit */int) (short)4656)))) : (((/* implicit */int) ((signed char) arr_15 [(signed char)7] [(unsigned short)5] [(_Bool)1] [i_6] [i_6] [i_6])))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            arr_36 [13] = var_3;
                            arr_37 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-16347)) && (((/* implicit */_Bool) 16297047463977257930ULL))));
                        }
                        for (short i_9 = 2; i_9 < 12; i_9 += 2) 
                        {
                            arr_42 [i_0] [i_0] [i_2] [i_6] [i_0] [i_0] [i_6] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) (!((_Bool)0)))) > (((/* implicit */int) max((((/* implicit */unsigned short) (short)-22161)), (arr_1 [2LL] [i_1])))))));
                            arr_43 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_15 [i_0] [(unsigned short)9] [i_0] [i_0] [i_0] [i_0]);
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 1) 
                        {
                            arr_46 [i_1 + 2] [i_2] [i_1 + 2] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) min(((-(var_1))), (var_1))))));
                            var_25 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_44 [i_1 + 2] [i_1] [i_1 + 2] [i_1 + 1] [i_1 + 1]))))));
                        }
                        arr_47 [8LL] [(_Bool)1] [i_2] = ((unsigned long long int) (short)25055);
                        arr_48 [i_0] [i_6] [i_2] [i_6] = ((/* implicit */long long int) var_1);
                        var_26 = ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */int) var_15))))) + (arr_29 [i_1] [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1] [i_1 + 1] [i_1 + 1]))), (((/* implicit */unsigned long long int) ((short) (-(((/* implicit */int) arr_15 [i_6] [i_2] [12U] [i_1] [i_1] [i_0]))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        for (int i_12 = 0; i_12 < 22; i_12 += 3) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 3) 
                {
                    arr_56 [4LL] = ((/* implicit */long long int) (_Bool)1);
                    arr_57 [i_13] [(short)3] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)-14989)) * (((/* implicit */int) arr_52 [i_11] [i_11]))))) + (((((/* implicit */_Bool) 1154559961U)) ? (arr_49 [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    arr_58 [i_11] [i_11] [14U] &= ((/* implicit */unsigned char) arr_51 [i_13]);
                }
                for (short i_14 = 0; i_14 < 22; i_14 += 4) /* same iter space */
                {
                    arr_61 [i_11] [i_12] [(unsigned short)7] [(unsigned short)7] = ((/* implicit */unsigned long long int) ((short) (~(((unsigned long long int) 1798204062U)))));
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_52 [i_11] [i_14])) != (((/* implicit */int) var_15)))))))) ? (var_17) : (((/* implicit */long long int) ((int) var_6)))));
                    arr_62 [i_11] [i_11] [i_11] [(_Bool)1] = ((/* implicit */_Bool) ((long long int) (-((~(((/* implicit */int) (short)-3161)))))));
                    arr_63 [2] [2] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_60 [i_11] [i_11] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-11507))) : (((((/* implicit */_Bool) (short)29852)) ? (2512051012U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))))))), (320866238U)));
                }
                for (short i_15 = 0; i_15 < 22; i_15 += 4) /* same iter space */
                {
                    var_28 = ((/* implicit */short) min((((var_6) | (((/* implicit */long long int) ((/* implicit */int) (short)29852))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_59 [i_15] [i_15] [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_64 [i_12] [i_12] [i_11]))) : (arr_59 [i_11] [i_12] [i_15]))))));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 22; i_16 += 4) 
                    {
                        for (int i_17 = 4; i_17 < 20; i_17 += 3) 
                        {
                            {
                                arr_71 [i_16] [i_16] [13U] [(unsigned char)9] [i_16] = min((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_49 [i_16])))) : (min((arr_67 [i_11]), (((/* implicit */unsigned int) (unsigned short)24576)))))), (((arr_66 [i_17] [i_16] [i_12] [i_12]) * (((/* implicit */unsigned int) ((/* implicit */int) ((arr_59 [i_11] [i_15] [i_16]) < (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))))));
                                arr_72 [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_17), (((/* implicit */long long int) var_8))))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_15]))) : (-552943936248786766LL))))) : (((((/* implicit */_Bool) arr_55 [i_15])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                                arr_73 [i_11] [(short)1] [(short)8] [i_16] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_67 [i_16]) % (1798204047U)))) ? (min((1798204062U), (((/* implicit */unsigned int) -308473721)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_16))))))) ? (((/* implicit */long long int) min((arr_67 [i_17 - 2]), (arr_67 [i_17 - 3])))) : (-4962938315085864494LL)));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */int) var_17);
                    var_30 ^= (+(((/* implicit */int) ((((9483670152037251594ULL) & (((/* implicit */unsigned long long int) -1LL)))) <= (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))));
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    arr_77 [i_18] [i_11] [i_11] &= ((int) ((((/* implicit */_Bool) arr_51 [i_11])) ? (((int) (unsigned short)20021)) : (((int) var_3))));
                    arr_78 [i_11] [i_12] [i_18] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (418951119U))))));
                    arr_79 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((1798204062U), (var_2)))) ? (arr_65 [i_11] [i_12]) : (var_2)));
                    /* LoopSeq 1 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        arr_82 [i_19] [i_19] = ((/* implicit */unsigned int) -552943936248786773LL);
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4864)) ? (arr_66 [i_11] [i_11] [i_18] [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_11] [i_12] [21ULL])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)4863))))) : (((((/* implicit */_Bool) 4962938315085864494LL)) ? (arr_74 [i_11] [i_12] [i_18] [3U]) : (arr_74 [1] [i_18] [i_18] [i_18])))));
                        var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(min((-3781683853258276579LL), (((/* implicit */long long int) var_5)))))))));
                        var_33 = ((/* implicit */unsigned long long int) -2445728873353201058LL);
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)1)), ((unsigned short)30631)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_64 [i_18] [i_12] [i_11]) ? (((/* implicit */long long int) var_1)) : (arr_60 [i_12] [i_18] [i_19])))) ? (arr_60 [i_11] [i_12] [i_19]) : (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (short)-3165)) : (((/* implicit */int) arr_52 [i_12] [i_12]))))))))));
                    }
                    arr_83 [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) (~(2073831602)))) ? (((unsigned long long int) arr_75 [i_11])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_75 [i_11])) : (((/* implicit */int) arr_75 [i_11])))))));
                }
                arr_84 [i_11] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)55611)) || (((((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_11]))) != (arr_49 [(unsigned short)21])))))) != ((-(((/* implicit */int) arr_75 [i_12]))))));
                var_35 = ((/* implicit */long long int) var_1);
                var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_16))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_50 [i_11] [i_12]))))) : (var_14)));
                /* LoopNest 2 */
                for (unsigned long long int i_20 = 0; i_20 < 22; i_20 += 3) 
                {
                    for (unsigned int i_21 = 0; i_21 < 22; i_21 += 3) 
                    {
                        {
                            arr_90 [i_11] [i_12] [i_20] [i_11] = ((/* implicit */long long int) min((arr_55 [i_11]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1900135991)))))));
                            /* LoopSeq 4 */
                            for (long long int i_22 = 0; i_22 < 22; i_22 += 3) /* same iter space */
                            {
                                var_37 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_50 [i_12] [i_22]))) ? ((+(((/* implicit */int) arr_50 [i_11] [i_20])))) : ((~(((/* implicit */int) arr_50 [i_11] [i_22]))))));
                                var_38 = ((/* implicit */unsigned short) ((((var_8) + (2147483647))) >> (((max((((/* implicit */int) (unsigned short)58272)), (((((var_8) + (2147483647))) >> (((var_2) - (39068108U))))))) - (4563213)))));
                            }
                            for (long long int i_23 = 0; i_23 < 22; i_23 += 3) /* same iter space */
                            {
                                arr_98 [i_20] [i_12] [i_20] [(short)10] [i_23] = ((/* implicit */short) ((unsigned long long int) arr_86 [i_21] [18ULL] [i_20] [13U]));
                                var_39 = ((/* implicit */unsigned long long int) var_1);
                            }
                            for (long long int i_24 = 0; i_24 < 22; i_24 += 3) /* same iter space */
                            {
                                arr_101 [4U] [i_20] [i_20] [i_20] [i_11] = ((/* implicit */int) ((long long int) 4158060424505452833ULL));
                                var_40 = ((/* implicit */long long int) max((var_40), (((((arr_88 [i_11] [i_12] [i_11]) | (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))))))) % (((/* implicit */long long int) (-((~(-1391280126))))))))));
                                var_41 = ((/* implicit */long long int) ((short) ((unsigned int) (+(6291749943949564559ULL)))));
                            }
                            /* vectorizable */
                            for (long long int i_25 = 0; i_25 < 22; i_25 += 3) /* same iter space */
                            {
                                arr_105 [i_20] [i_11] [i_12] [i_21] [i_25] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2445728873353201055LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)11517))) : (1154559961U)));
                                arr_106 [i_11] [i_11] [i_12] [i_20] [i_20] [i_21] [i_25] = ((/* implicit */_Bool) (-(((var_17) / (((/* implicit */long long int) var_10))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_26 = 0; i_26 < 10; i_26 += 1) 
    {
        arr_109 [i_26] = ((/* implicit */int) ((long long int) ((((/* implicit */long long int) (+(arr_89 [i_26] [i_26] [i_26] [(_Bool)1])))) % (min((-4825446555573011751LL), (((/* implicit */long long int) var_3)))))));
        arr_110 [i_26] = ((/* implicit */_Bool) (-((+(((((/* implicit */_Bool) arr_27 [i_26] [i_26] [(short)11] [(signed char)12] [(signed char)12] [6U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26]))) : (1154559965U)))))));
        /* LoopNest 3 */
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            for (unsigned long long int i_28 = 0; i_28 < 10; i_28 += 4) 
            {
                for (unsigned short i_29 = 4; i_29 < 9; i_29 += 1) 
                {
                    {
                        arr_121 [i_26] [(unsigned short)7] [i_27] [i_28] [i_29] = ((/* implicit */signed char) ((((((/* implicit */int) ((short) (+(arr_103 [i_29] [i_28] [(signed char)10] [i_26]))))) + (2147483647))) >> (((max(((+(var_11))), (((/* implicit */unsigned long long int) (+(var_5)))))) - (1415996800102027085ULL)))));
                        arr_122 [i_26] [i_26] [i_26] = ((/* implicit */int) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_35 [i_26] [(unsigned char)13] [i_28] [i_28] [(unsigned short)5]))))) ? (((((/* implicit */_Bool) var_0)) ? (4158060424505452833ULL) : (((/* implicit */unsigned long long int) arr_103 [i_26] [i_27] [i_28] [i_29])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-31082)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (arr_49 [16U])))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(arr_118 [i_26] [i_27] [i_26] [(unsigned short)1]))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_28] [i_29 - 2] [i_29 - 2] [i_29] [i_29 - 4])))))))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
    {
        /* LoopNest 2 */
        for (int i_31 = 0; i_31 < 10; i_31 += 1) 
        {
            for (short i_32 = 0; i_32 < 10; i_32 += 4) 
            {
                {
                    arr_130 [i_30] = ((/* implicit */unsigned long long int) var_8);
                    arr_131 [i_30] [i_31] [i_30] [i_31] = ((/* implicit */int) arr_4 [i_30] [i_31] [i_32]);
                }
            } 
        } 
        arr_132 [i_30] = ((/* implicit */signed char) var_5);
    }
}
