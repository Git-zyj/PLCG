/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21059
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
    for (short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_13 = ((/* implicit */_Bool) var_8);
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                for (short i_3 = 1; i_3 < 21; i_3 += 4) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_14 = ((((/* implicit */_Bool) ((arr_3 [i_2 - 1] [i_2 - 1] [i_2 - 2]) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2]))))))))) ? (((/* implicit */unsigned long long int) var_2)) : (var_7));
                            var_15 = ((/* implicit */_Bool) var_11);
                        }
                    } 
                } 
            } 
            var_16 &= ((/* implicit */unsigned short) (unsigned char)0);
            var_17 = ((/* implicit */unsigned int) ((long long int) (unsigned char)255));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            for (unsigned int i_6 = 3; i_6 < 21; i_6 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        var_18 = ((/* implicit */int) arr_20 [i_0] [(signed char)3] [i_6] [i_7]);
                        var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22758)) ? (268435200) : (((/* implicit */int) (unsigned char)19))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (-4334402165558697683LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1)))))) ? ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27240))) : (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_6] [i_0] [i_6 - 1] [i_0] [i_6] [(unsigned char)2])) ? (((/* implicit */int) arr_0 [i_6 + 1] [i_7])) : (((/* implicit */int) var_8))))))) : (((((/* implicit */_Bool) max((2539323879U), (((/* implicit */unsigned int) arr_0 [10U] [(signed char)2]))))) ? (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_6 - 3] [i_0] [21ULL] [i_0])) : (var_9))));
                        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
                        var_21 = ((/* implicit */unsigned char) arr_0 [i_0 + 1] [i_7]);
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((unsigned long long int) (-(var_0))))));
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 19; i_8 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned int) ((signed char) (-((+(var_9))))));
                        arr_23 [0U] [i_5] [i_5] [0U] [12] |= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_6 - 3])) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_6 - 1])) : (((/* implicit */int) var_11))))));
                        arr_24 [i_0] [15ULL] [i_5] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) (signed char)-4)) : (268435180))))));
                    }
                    arr_25 [i_0] [i_5] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((4334402165558697674LL) << (((arr_3 [i_0 + 1] [i_0 + 1] [i_0]) - (3221111279U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (((_Bool)0) ? (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_5] [i_6] [i_0] [i_5])) : (arr_19 [i_0] [i_0] [i_5] [i_0] [i_6] [15ULL])))))) : (min((arr_21 [i_6 + 1] [18U] [i_6] [i_0] [i_6]), (((/* implicit */unsigned long long int) arr_17 [i_6 - 3] [i_0] [i_0]))))));
                }
            } 
        } 
    }
    for (unsigned int i_9 = 2; i_9 < 17; i_9 += 3) 
    {
        arr_28 [i_9] &= ((/* implicit */long long int) ((unsigned int) ((7680822469338969806ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_9 - 2] [i_9 + 1] [(unsigned char)4]))))));
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 21; i_10 += 4) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    var_24 = arr_35 [i_11] [(signed char)16] [i_10] [i_9];
                    arr_36 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) (short)-27240)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : ((~(((/* implicit */int) (_Bool)1)))))) : ((+(((/* implicit */int) arr_18 [i_9 - 1] [i_9 - 1]))))));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */int) var_12);
    /* LoopSeq 2 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_26 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_6)) ? (arr_10 [i_12] [i_12] [11ULL] [15U] [i_12] [i_12]) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)10))) * (2291090352U))))))));
        /* LoopNest 2 */
        for (unsigned int i_13 = 0; i_13 < 11; i_13 += 4) 
        {
            for (unsigned long long int i_14 = 4; i_14 < 10; i_14 += 4) 
            {
                {
                    arr_45 [(_Bool)1] [i_12] [i_14] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_31 [i_12] [i_12])), (var_0)))))))));
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 457455694U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_34 [17] [i_13] [19ULL]))))))));
                }
            } 
        } 
        var_28 = arr_17 [i_12] [i_12] [i_12];
    }
    for (unsigned short i_15 = 3; i_15 < 20; i_15 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_16 = 0; i_16 < 21; i_16 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_17 = 0; i_17 < 21; i_17 += 3) 
            {
                arr_54 [i_15 - 3] [i_16] [i_17] [i_17] = ((long long int) ((((/* implicit */_Bool) arr_12 [i_15 - 2] [i_15 - 3] [i_15 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_6)))) : ((-(arr_12 [i_15] [i_16] [i_15])))));
                arr_55 [i_15] [i_16] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)127)) ? (((((/* implicit */_Bool) arr_16 [i_15 - 1] [i_15 - 1] [i_15 - 2] [12ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_7))) : (((/* implicit */unsigned long long int) var_2))));
            }
            for (signed char i_18 = 1; i_18 < 18; i_18 += 1) 
            {
                var_29 = ((/* implicit */short) var_10);
                var_30 = ((/* implicit */signed char) var_10);
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_19 = 0; i_19 < 21; i_19 += 3) 
            {
                var_31 = ((/* implicit */signed char) ((((/* implicit */long long int) (~(min((-1), (((/* implicit */int) (signed char)-108))))))) | ((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 797976069)) : (arr_10 [1ULL] [i_19] [i_16] [i_16] [i_16] [9U])))))));
                /* LoopSeq 2 */
                for (unsigned short i_20 = 0; i_20 < 21; i_20 += 3) 
                {
                    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_15] [i_16] [2LL])), (((long long int) arr_2 [i_15] [i_15] [i_19]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)1))))) : (((min((((/* implicit */unsigned long long int) arr_30 [i_20])), (var_7))) * (((((/* implicit */_Bool) arr_14 [i_15] [i_16] [i_19])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_20] [(signed char)2] [i_16] [5ULL])))))))));
                    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 797976052)) ? (457455699U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)19)))))) ? (max((((/* implicit */int) (short)-8)), (-797976070))) : (((/* implicit */int) (unsigned char)255))));
                }
                for (unsigned long long int i_21 = 0; i_21 < 21; i_21 += 3) 
                {
                    arr_65 [i_19] [i_19] [i_19] [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) max((var_10), (((/* implicit */unsigned short) max((arr_60 [i_15] [i_19]), (((/* implicit */short) var_11))))))))) : (((((((/* implicit */_Bool) (unsigned char)205)) ? (((/* implicit */long long int) arr_8 [i_21] [21] [i_16] [(unsigned char)16])) : (arr_49 [i_16]))) | (((((/* implicit */_Bool) arr_11 [i_15] [i_15] [i_15] [7ULL] [i_19] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_15 - 1] [i_15 - 1] [2ULL] [12U]))) : (1598347247364811492LL)))))));
                    arr_66 [i_16] [i_19] [i_19] [i_21] = ((/* implicit */long long int) (+((+(((/* implicit */int) (signed char)-125))))));
                    var_34 = ((/* implicit */long long int) ((var_6) > (((/* implicit */long long int) ((((/* implicit */unsigned int) 797976066)) / (((((/* implicit */_Bool) 2097151)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
                    var_35 = (((+(((/* implicit */int) var_11)))) > (((/* implicit */int) max((max((((/* implicit */short) (unsigned char)51)), (arr_1 [i_19]))), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)96)) || (((/* implicit */_Bool) (unsigned char)222)))))))));
                }
            }
            /* LoopNest 2 */
            for (unsigned long long int i_22 = 2; i_22 < 17; i_22 += 1) 
            {
                for (unsigned short i_23 = 0; i_23 < 21; i_23 += 3) 
                {
                    {
                        arr_73 [i_15 - 2] [i_15 - 2] [4ULL] [12U] [18U] [i_23] |= ((/* implicit */short) arr_8 [i_15 - 3] [i_15 - 3] [i_22] [i_23]);
                        var_36 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */int) (short)-1)), (((((/* implicit */_Bool) arr_14 [i_23] [i_16] [i_23])) ? (((/* implicit */int) arr_34 [i_23] [i_22] [i_15])) : (var_2)))))));
                    }
                } 
            } 
            arr_74 [i_15] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)206))))))));
        }
        for (short i_24 = 0; i_24 < 21; i_24 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_25 = 0; i_25 < 21; i_25 += 1) 
            {
                arr_79 [i_25] [i_15] [i_15] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_70 [i_15 - 1] [i_15 - 2]))))));
                var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) min((((((/* implicit */_Bool) arr_60 [i_24] [i_25])) ? (max((((/* implicit */unsigned int) (signed char)31)), (var_1))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))))), (((/* implicit */unsigned int) min((arr_17 [i_15 - 1] [i_24] [i_15 - 2]), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_2)))))))))))));
                var_38 = ((/* implicit */unsigned int) var_0);
                arr_80 [i_15] [i_24] [i_25] = max((((((/* implicit */_Bool) arr_63 [i_24] [i_24] [i_15] [i_24] [i_15])) ? (71987225293750272ULL) : (((/* implicit */unsigned long long int) -2097166)))), (((unsigned long long int) 2198710231U)));
            }
            /* LoopNest 3 */
            for (unsigned short i_26 = 0; i_26 < 21; i_26 += 4) 
            {
                for (long long int i_27 = 0; i_27 < 21; i_27 += 1) 
                {
                    for (unsigned long long int i_28 = 0; i_28 < 21; i_28 += 4) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) max((max((2595192105U), (((/* implicit */unsigned int) arr_91 [i_15 - 2] [i_24] [i_26] [i_27] [i_28] [i_27])))), (((((/* implicit */_Bool) ((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-18466)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)219))) : ((-(var_4))))))))));
                            arr_92 [i_15 - 3] [i_24] [i_26] [i_27] [i_27] [i_15 - 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_15 + 1] [i_15 - 2])) ? (((/* implicit */int) arr_18 [i_15 - 1] [i_15 + 1])) : ((+(((/* implicit */int) arr_18 [i_15 + 1] [i_15 - 1]))))));
                            var_40 = ((/* implicit */signed char) (unsigned char)1);
                        }
                    } 
                } 
            } 
        }
        var_41 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((2097151) / (((/* implicit */int) arr_60 [i_15 - 1] [i_15 + 1]))))) ? (((((/* implicit */_Bool) arr_76 [i_15])) ? (((/* implicit */int) (unsigned short)30182)) : (((/* implicit */int) arr_16 [(signed char)0] [12] [i_15] [(signed char)0])))) : (2097151))))));
        /* LoopNest 2 */
        for (int i_29 = 0; i_29 < 21; i_29 += 3) 
        {
            for (unsigned long long int i_30 = 2; i_30 < 18; i_30 += 3) 
            {
                {
                    arr_99 [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_15 - 2])) ? (18446744073709551601ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_89 [i_30] [18ULL] [18ULL] [18ULL] [i_30]))) : (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)219))))), (arr_9 [i_15 - 3])))));
                    arr_100 [i_29] [i_29] [i_29] [i_15 + 1] = ((/* implicit */unsigned int) arr_18 [i_15 + 1] [i_29]);
                    arr_101 [0U] [i_29] [0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) max(((~(((/* implicit */int) (unsigned short)4423)))), (((/* implicit */int) var_8))))) % (4293630142U)));
                    /* LoopSeq 3 */
                    for (signed char i_31 = 2; i_31 < 20; i_31 += 1) 
                    {
                        var_42 = ((((/* implicit */_Bool) -2097163)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */int) (unsigned char)37)) : (((/* implicit */int) (unsigned char)255))))) : (var_0));
                        arr_105 [i_15] [i_15] [(signed char)8] [i_31] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_61 [18LL] [8] [i_30 + 1] [8] [i_29])) ? ((-(((/* implicit */int) arr_61 [(signed char)8] [16ULL] [16ULL] [i_31] [i_31])))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_61 [i_15] [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1]))))));
                        var_43 = ((/* implicit */unsigned char) max((((unsigned long long int) -370581261)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2097157)))))));
                        var_44 = ((/* implicit */short) var_1);
                    }
                    for (unsigned int i_32 = 0; i_32 < 21; i_32 += 4) 
                    {
                        arr_108 [i_29] = ((/* implicit */_Bool) (-(96553157U)));
                        arr_109 [i_15] [i_29] [i_30 + 3] [i_32] = (+(arr_6 [i_32] [i_29] [i_32]));
                        arr_110 [i_15] [i_15] [i_30] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_102 [i_15] [i_32] [i_15] [i_32]))))));
                    }
                    for (unsigned int i_33 = 0; i_33 < 21; i_33 += 1) 
                    {
                        var_45 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((int) (unsigned char)153))) > (max((7380835371176795973ULL), (18446744073709551615ULL)))));
                        arr_113 [i_15] [3LL] [i_15] [12U] [3LL] [i_15] = ((/* implicit */long long int) ((short) ((long long int) ((short) var_2))));
                        arr_114 [i_15 - 3] [17] [i_15 - 3] [i_15 - 1] = ((/* implicit */unsigned int) var_5);
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_34 = 0; i_34 < 21; i_34 += 4) 
                    {
                        var_46 = ((/* implicit */unsigned short) ((signed char) arr_69 [i_15] [i_15 - 2] [i_15] [i_15 - 3]));
                        var_47 = ((/* implicit */_Bool) (-(((/* implicit */int) var_8))));
                        arr_117 [i_34] [i_15] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_50 [i_15 - 3] [i_29])) ? (arr_72 [1LL] [i_15 + 1] [i_30 - 2]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [i_15 - 1] [i_34])))))));
                        arr_118 [i_15 + 1] &= ((/* implicit */unsigned char) (_Bool)1);
                    }
                }
            } 
        } 
    }
    var_48 |= var_2;
    /* LoopNest 2 */
    for (unsigned long long int i_35 = 4; i_35 < 9; i_35 += 1) 
    {
        for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
        {
            {
                arr_123 [i_35] [(short)8] [i_36] &= ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_4)))));
                var_49 &= ((/* implicit */unsigned int) -2097163);
                /* LoopSeq 1 */
                for (unsigned short i_37 = 0; i_37 < 12; i_37 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_38 = 4; i_38 < 9; i_38 += 3) 
                    {
                        for (unsigned char i_39 = 0; i_39 < 12; i_39 += 1) 
                        {
                            {
                                var_50 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_111 [i_35] [i_36] [i_38] [i_38 + 1] [18U] [i_35]))));
                                arr_134 [i_35] [i_36] [i_35] [i_38] [i_35] = ((/* implicit */unsigned int) 18446744073709551589ULL);
                                arr_135 [i_37] [i_35] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)37))))) && (((/* implicit */_Bool) (+(1337155U))))));
                                var_51 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_52 [(signed char)17] [i_37] [(signed char)1]))))))));
                            }
                        } 
                    } 
                    var_52 = ((/* implicit */signed char) max((var_52), (((/* implicit */signed char) arr_72 [i_35 - 2] [i_35 - 2] [i_35 - 2]))));
                }
            }
        } 
    } 
}
