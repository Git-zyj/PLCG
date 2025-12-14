/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30207
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_3 + 4] [i_2] [i_0] [i_4] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) % ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11072463614540855547ULL)))))) && (((/* implicit */_Bool) (-(18446744073709551615ULL))))));
                                var_10 = (+(max((((/* implicit */unsigned int) (_Bool)1)), (arr_9 [i_2 - 1] [i_2 - 3] [i_3 + 4]))));
                            }
                        } 
                    } 
                    var_11 = ((/* implicit */unsigned int) ((int) (_Bool)1));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16; i_5 += 4) 
    {
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    arr_25 [i_7] [i_7] [15] [(_Bool)1] = ((/* implicit */_Bool) (signed char)-16);
                    var_12 = ((((/* implicit */int) (unsigned char)145)) * (((/* implicit */int) (signed char)127)));
                    var_13 = ((/* implicit */signed char) arr_0 [4LL] [i_5]);
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 13; i_8 += 4) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 4) 
                        {
                            {
                                arr_31 [i_8] [(_Bool)1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_23 [12U] [i_8 - 3] [i_8 + 1] [i_8 + 1])) ? (((/* implicit */int) arr_23 [i_8] [i_8 + 3] [i_8] [i_8 - 3])) : (((/* implicit */int) var_9)))), (((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_29 [(_Bool)1]))) && (((/* implicit */_Bool) max((arr_24 [i_5]), (((/* implicit */int) (_Bool)1))))))))));
                                arr_32 [i_5] [i_8] [i_5] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned char) arr_8 [i_8 - 3] [(unsigned char)1] [i_7] [i_8]))), (((((/* implicit */unsigned long long int) ((arr_16 [i_5]) / (((/* implicit */long long int) arr_8 [i_5] [i_6] [i_7] [i_8 + 3]))))) | (min((arr_27 [i_6]), (((/* implicit */unsigned long long int) 1U))))))));
                                var_14 -= ((/* implicit */int) arr_29 [3]);
                                arr_33 [i_5] [i_7] [i_8] [i_5] = (-((~((+(((/* implicit */int) var_1)))))));
                                var_15 = ((/* implicit */unsigned long long int) (_Bool)1);
                            }
                        } 
                    } 
                }
                /* LoopSeq 1 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    arr_36 [i_10] = ((/* implicit */signed char) min((((arr_2 [i_5]) | (arr_2 [i_10]))), (((arr_2 [i_10]) | (((/* implicit */int) (short)18718))))));
                    var_16 = ((/* implicit */signed char) ((((int) var_9)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)29))))))))));
                }
                arr_37 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) ? (arr_19 [i_6] [i_5] [i_5]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_5] [i_6])) % (2007306145))))));
                /* LoopSeq 1 */
                for (unsigned int i_11 = 0; i_11 < 16; i_11 += 4) 
                {
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) min((max(((~(((/* implicit */int) (unsigned short)43832)))), ((-(((/* implicit */int) arr_5 [i_5] [i_5])))))), (((/* implicit */int) var_1)))))));
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) 3085482092U))));
                    arr_41 [i_5] [i_5] [i_6] [i_11] = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), ((+(max((((/* implicit */int) var_1)), (-1)))))));
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 16; i_12 += 4) 
                    {
                        for (int i_13 = 0; i_13 < 16; i_13 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_43 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_43 [i_5] [(signed char)1] [(unsigned short)7] [i_5] [i_13] [i_5])) : (((/* implicit */int) arr_43 [(_Bool)0] [(_Bool)0] [i_11] [i_12] [i_11] [i_13])))) - ((-(((((/* implicit */int) arr_11 [i_5] [i_5] [i_11])) - (((/* implicit */int) var_8)))))))))));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_6] [i_6] [i_6])) ? (4294967279U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -1))))))))) ? ((-(((10850264984052717227ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)4))))))) : (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) var_4)), (arr_38 [i_5] [i_11]))) / (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                                var_21 &= ((/* implicit */short) ((219305765696224786LL) << ((((~(((((/* implicit */_Bool) (short)8395)) ? (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_6] [i_11] [i_12] [i_13]))) : (5278395106131115038LL))))) - (91LL)))));
                                arr_49 [i_5] [i_6] [i_12] [i_12] [i_6] [i_5] [i_11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(0ULL))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_14 = 4; i_14 < 13; i_14 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_15 = 2; i_15 < 15; i_15 += 4) 
                        {
                            var_22 += ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                            var_23 = ((/* implicit */int) 2353089493U);
                            arr_56 [12ULL] [3ULL] [12ULL] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_22 [i_5] [i_6] [i_14 - 4] [2U])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))));
                            var_24 = ((/* implicit */signed char) (-(arr_44 [i_14 - 1])));
                        }
                        for (unsigned short i_16 = 2; i_16 < 13; i_16 += 4) 
                        {
                            var_25 = ((/* implicit */short) ((arr_38 [i_16 + 1] [i_16 + 1]) & (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                            var_26 += ((/* implicit */unsigned long long int) arr_12 [i_14 - 4] [20ULL] [i_16 + 2] [i_14 - 4] [i_14 - 4] [i_14 - 4] [i_16 + 1]);
                            arr_59 [i_5] [i_5] [15ULL] [i_5] [7U] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) (unsigned short)8)) >> (((((/* implicit */int) arr_12 [i_6] [i_6] [9] [i_14] [i_14] [i_11] [i_14])) - (224))))));
                            var_27 = ((/* implicit */long long int) ((((((/* implicit */int) arr_7 [i_16] [14ULL] [14ULL])) - (((/* implicit */int) var_1)))) << (((arr_46 [i_16 - 2] [10ULL] [i_14] [i_11] [i_6] [i_5]) - (1809768397)))));
                            var_28 = ((((/* implicit */_Bool) arr_51 [i_16 + 1] [i_16 + 2] [i_14] [i_14] [i_14 + 3])) ? (arr_51 [i_14 - 2] [i_16 - 2] [i_14] [(signed char)15] [i_14 - 2]) : (arr_51 [i_16 + 1] [i_16 + 3] [i_14] [(_Bool)1] [i_14 - 4]));
                        }
                        var_29 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_46 [i_5] [i_5] [i_14 + 3] [i_14] [i_6] [i_14 + 3])) ? (arr_46 [i_5] [i_6] [i_14 + 3] [i_6] [i_6] [15ULL]) : (-13)));
                        /* LoopSeq 1 */
                        for (unsigned short i_17 = 0; i_17 < 16; i_17 += 4) 
                        {
                            arr_63 [(short)15] [i_14] [i_5] [i_6] [i_5] = ((/* implicit */int) ((((((/* implicit */int) (_Bool)0)) > (arr_2 [i_6]))) ? (arr_51 [i_14 - 1] [i_14] [i_14] [i_14] [i_14 - 2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_5] [i_5] [i_6] [i_6] [i_11] [i_6] [i_17]))) : (4294967279U))))));
                            var_30 += ((/* implicit */unsigned short) var_4);
                            var_31 = (-(arr_22 [i_14 - 1] [i_14 - 1] [i_14 + 3] [i_14 + 2]));
                        }
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 16; i_18 += 4) 
                    {
                        var_32 += ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 6554248497262946393ULL)) ? (var_5) : (((/* implicit */unsigned long long int) arr_3 [i_11]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)5))))) : (min((arr_65 [i_5] [i_5] [i_11] [i_18]), (((/* implicit */unsigned long long int) (unsigned char)174))))))));
                        var_33 = ((/* implicit */int) (-(((long long int) arr_50 [i_5] [i_5] [(unsigned short)2] [(short)3]))));
                    }
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_19 = 0; i_19 < 19; i_19 += 4) 
    {
        for (unsigned long long int i_20 = 0; i_20 < 19; i_20 += 4) 
        {
            {
                var_34 = ((/* implicit */long long int) (~(((((/* implicit */int) var_8)) << (((219305765696224786LL) - (219305765696224777LL)))))));
                arr_73 [i_19] [i_19] [i_19] = ((/* implicit */_Bool) var_2);
                var_35 = ((/* implicit */unsigned int) arr_67 [i_19]);
                var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_5 [i_19] [i_19])) ? (((/* implicit */int) arr_5 [17] [i_20])) : (((/* implicit */int) arr_5 [i_19] [i_20])))), (((/* implicit */int) ((short) var_7))))))));
            }
        } 
    } 
    var_37 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (-30))))))));
    /* LoopNest 2 */
    for (long long int i_21 = 0; i_21 < 18; i_21 += 4) 
    {
        for (short i_22 = 0; i_22 < 18; i_22 += 4) 
        {
            {
                var_38 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_76 [i_21])) ? (((long long int) (unsigned char)37)) : (((/* implicit */long long int) min((((/* implicit */int) arr_74 [i_21])), (arr_10 [i_21] [(signed char)9]))))))) ? (min((((/* implicit */unsigned long long int) 4294967295U)), (1326338843443740512ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_21] [i_22] [i_22])))));
                /* LoopSeq 1 */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_24 = 0; i_24 < 18; i_24 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (short i_25 = 2; i_25 < 14; i_25 += 4) 
                        {
                            var_39 = ((/* implicit */short) (~((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) / (arr_69 [i_21])))))));
                            var_40 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)-6833)) : (-69071119)));
                        }
                        var_41 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_82 [i_23] [i_24])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-6548080962051217125LL)))) || (((/* implicit */_Bool) arr_88 [i_21] [(signed char)15] [i_23] [i_24])))) || ((((_Bool)1) && (((/* implicit */_Bool) arr_72 [i_22] [i_23] [i_24]))))));
                    }
                    var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) ((int) 19)))));
                    /* LoopNest 2 */
                    for (long long int i_26 = 0; i_26 < 18; i_26 += 4) 
                    {
                        for (short i_27 = 0; i_27 < 18; i_27 += 4) 
                        {
                            {
                                var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_8)) ? (219305765696224795LL) : (((/* implicit */long long int) ((/* implicit */int) arr_87 [i_21] [i_21] [i_21] [i_26] [i_26]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 36)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))))))))));
                                var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) min((((((/* implicit */unsigned int) (~(arr_91 [i_21] [(_Bool)1] [i_27])))) | ((~(arr_8 [i_21] [i_22] [(unsigned char)4] [i_26]))))), (arr_0 [i_21] [i_22]))))));
                                var_45 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) min(((short)8395), (((/* implicit */short) var_9))))) - (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (arr_10 [i_21] [i_21]))))) : (((((/* implicit */int) ((short) (_Bool)1))) / (((((/* implicit */_Bool) var_3)) ? (19) : (((/* implicit */int) arr_71 [i_22] [i_23] [i_27]))))))));
                                var_46 = ((/* implicit */long long int) ((_Bool) (~(((((/* implicit */_Bool) arr_86 [i_21] [i_21] [i_21] [i_21] [i_21])) ? (arr_80 [i_21]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_28 = 0; i_28 < 18; i_28 += 4) 
                    {
                        for (unsigned long long int i_29 = 0; i_29 < 18; i_29 += 4) 
                        {
                            {
                                var_47 = ((/* implicit */int) max((var_47), ((-(((int) (unsigned char)221))))));
                                arr_100 [i_23] [i_23] = ((/* implicit */unsigned short) ((((_Bool) ((((/* implicit */_Bool) var_0)) && ((_Bool)1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_84 [i_23] [i_22] [i_22] [i_23]))))) * (17170676215312341965ULL)))));
                                arr_101 [i_23] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_21])) == (((/* implicit */int) (unsigned short)0))))) == (((((((/* implicit */int) arr_67 [i_28])) - (((/* implicit */int) (signed char)124)))) + (((((/* implicit */_Bool) (unsigned short)63)) ? (((/* implicit */int) arr_86 [i_29] [i_21] [(short)6] [i_21] [i_21])) : (((/* implicit */int) arr_6 [i_21]))))))));
                                var_48 *= ((/* implicit */signed char) ((unsigned int) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)126)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_94 [i_21] [i_23] [i_28] [i_21]))))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (unsigned int i_30 = 1; i_30 < 17; i_30 += 4) 
                {
                    for (int i_31 = 0; i_31 < 18; i_31 += 4) 
                    {
                        for (int i_32 = 0; i_32 < 18; i_32 += 4) 
                        {
                            {
                                var_49 = ((/* implicit */_Bool) (+(((/* implicit */int) var_0))));
                                arr_111 [(short)2] &= ((/* implicit */_Bool) var_0);
                                var_50 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))), (((((/* implicit */_Bool) arr_93 [i_31] [i_22] [i_22])) ? (4ULL) : (var_5))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))) << (((((((/* implicit */_Bool) arr_88 [i_22] [i_30] [i_32] [i_32])) ? (arr_0 [i_21] [i_21]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) - (2853757499U))))))));
                                var_51 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)253))));
                                arr_112 [i_32] [i_22] [i_22] [0] [i_32] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_21] [i_30 - 1] [i_32])) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)9027)), (1072693248U)))) ? (((((/* implicit */int) arr_78 [i_31])) << (((4294967280U) - (4294967256U))))) : (((/* implicit */int) ((short) (short)-8115))))) : ((+((+(((/* implicit */int) var_0))))))));
                            }
                        } 
                    } 
                } 
                arr_113 [i_21] [2U] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_2))))));
            }
        } 
    } 
}
