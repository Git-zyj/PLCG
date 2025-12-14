/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244383
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
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) var_2))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_13 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) >= (9349514275944993176ULL)));
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) arr_1 [i_0]))));
        var_15 = ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
        {
            var_16 = ((unsigned char) -2953794002705415415LL);
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (_Bool)0);
        }
        for (long long int i_2 = 0; i_2 < 13; i_2 += 2) /* same iter space */
        {
            var_17 -= (((_Bool)1) ? (11772373392829395006ULL) : (((/* implicit */unsigned long long int) 1935955953309133031LL)));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (int i_4 = 2; i_4 < 12; i_4 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                        {
                            var_18 |= ((/* implicit */long long int) 2049975593);
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((arr_14 [i_4 - 2] [i_4] [i_4] [i_4 + 1] [i_0] [(unsigned char)3]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4 + 1] [i_4] [i_4 + 1] [i_0] [i_0]))))))));
                            var_20 &= ((/* implicit */int) arr_13 [i_2] [i_4 - 2] [i_4 - 2] [i_4] [3]);
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((arr_10 [i_4 + 1] [i_4 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (6005785393753743341LL))))));
                            arr_20 [i_2] [i_5] = (~(arr_5 [i_4] [i_2] [i_0]));
                        }
                        for (long long int i_6 = 1; i_6 < 9; i_6 += 2) 
                        {
                            var_22 &= ((/* implicit */_Bool) ((int) (_Bool)1));
                            var_23 = ((/* implicit */unsigned long long int) (~(arr_9 [i_4 - 2])));
                            arr_23 [i_0] [i_0] [i_6] [(unsigned short)3] [i_6] [i_0] [i_0] = ((/* implicit */long long int) var_4);
                        }
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [(_Bool)1] [i_4 + 1] [i_4] [i_4]))) - (arr_2 [i_0] [i_4 + 1])));
                        /* LoopSeq 3 */
                        for (int i_7 = 4; i_7 < 10; i_7 += 2) 
                        {
                            var_25 += ((/* implicit */_Bool) var_1);
                            arr_28 [i_7 - 1] [i_4] [i_3] [i_2] [i_0] = ((/* implicit */unsigned char) arr_15 [i_0]);
                        }
                        for (unsigned char i_8 = 0; i_8 < 13; i_8 += 2) 
                        {
                            var_26 = ((/* implicit */_Bool) ((int) arr_22 [i_2] [i_2] [i_3] [i_4] [(_Bool)1]));
                            var_27 -= ((/* implicit */unsigned long long int) ((unsigned short) 9991323857446829035ULL));
                        }
                        for (int i_9 = 1; i_9 < 12; i_9 += 2) 
                        {
                            var_28 |= ((/* implicit */long long int) arr_34 [i_4 - 2] [i_4 - 2] [i_3] [i_4] [i_4 - 2]);
                            arr_35 [i_0] [i_0] [(_Bool)1] [7] [i_9] = ((/* implicit */long long int) (unsigned char)180);
                        }
                        var_29 = ((/* implicit */unsigned short) ((arr_0 [i_4 - 2] [i_4 - 2]) / (((/* implicit */int) var_3))));
                        var_30 &= ((/* implicit */unsigned char) ((arr_6 [i_4] [(_Bool)1]) >> (((arr_14 [i_4] [(_Bool)1] [i_4 - 1] [i_4] [10U] [i_4 - 2]) - (2758596572U)))));
                    }
                } 
            } 
            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) -21LL)) ? (8129668514281102039ULL) : (((/* implicit */unsigned long long int) 2953794002705415434LL))));
            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)190)) ? (((/* implicit */unsigned long long int) arr_16 [0] [(_Bool)1] [i_0] [i_0] [i_0])) : (1331796555698375445ULL)));
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 13; i_10 += 2) 
            {
                for (unsigned char i_11 = 3; i_11 < 12; i_11 += 2) 
                {
                    {
                        var_33 = ((/* implicit */long long int) arr_15 [i_11 - 1]);
                        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_11 - 3] [i_11 - 3] [i_11 - 3] [i_11 - 3] [i_0])) ? (arr_31 [i_11 - 2] [i_2] [i_10] [7LL] [7ULL]) : (arr_31 [i_11 - 2] [i_11 - 2] [5U] [i_11] [5U])));
                        var_35 &= ((/* implicit */unsigned int) arr_32 [i_0] [i_0] [i_2] [i_10] [i_11 - 2]);
                        var_36 = ((/* implicit */long long int) max((var_36), (arr_2 [i_0] [(signed char)9])));
                    }
                } 
            } 
        }
        for (int i_12 = 0; i_12 < 13; i_12 += 2) 
        {
            arr_42 [(unsigned short)0] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned int) ((var_4) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(_Bool)1] [i_12]))))));
            var_37 &= ((/* implicit */long long int) ((signed char) ((5005682066172841522ULL) ^ (((/* implicit */unsigned long long int) 6005785393753743341LL)))));
            arr_43 [i_12] [i_0] = ((/* implicit */unsigned char) (~(-2701288220251072787LL)));
            var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) (-(arr_4 [i_12] [i_12]))))));
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 13; i_13 += 2) 
        {
            for (unsigned char i_14 = 1; i_14 < 11; i_14 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 0; i_15 < 13; i_15 += 2) 
                    {
                        for (unsigned char i_16 = 0; i_16 < 13; i_16 += 2) 
                        {
                            {
                                var_39 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6005785393753743317LL)) ? (arr_29 [i_16] [i_15] [i_14] [i_13] [(unsigned short)7]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)34)) ? (469762048ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-13))))))));
                                var_40 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_57 [i_14 + 1] [i_14 + 1] [i_14 - 1])) ? (arr_6 [i_13] [i_0]) : (arr_50 [i_14 + 2] [i_0] [i_0] [i_13])));
                                arr_58 [i_0] [i_13] [7U] [7U] [i_14] = ((/* implicit */signed char) var_2);
                                var_41 |= ((/* implicit */unsigned int) ((((/* implicit */int) (!((_Bool)1)))) / ((((_Bool)1) ? (((/* implicit */int) arr_47 [i_16] [i_15] [(unsigned char)7])) : (arr_39 [i_16] [i_13] [i_13] [i_13])))));
                                var_42 = ((/* implicit */long long int) (-(((/* implicit */int) arr_53 [i_14] [i_14] [i_14] [i_14]))));
                            }
                        } 
                    } 
                    var_43 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_14 + 2] [i_14 + 2] [i_14 + 2] [4LL] [i_0])) ? (-6005785393753743341LL) : (((/* implicit */long long int) arr_50 [i_13] [i_13] [i_14 - 1] [i_14 - 1]))));
                    /* LoopNest 2 */
                    for (unsigned char i_17 = 0; i_17 < 13; i_17 += 2) 
                    {
                        for (unsigned char i_18 = 0; i_18 < 13; i_18 += 2) 
                        {
                            {
                                var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) (-(((unsigned long long int) arr_62 [i_0] [i_13] [12] [i_17] [i_18] [i_0] [i_18])))))));
                                arr_63 [1] [i_14] [i_14] [8] [i_0] [i_14] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) 6388810913167619401ULL));
                                var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) arr_57 [i_14 - 1] [i_14 + 1] [i_14 + 1]))));
                                var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) arr_6 [11U] [i_13]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_19 = 1; i_19 < 10; i_19 += 2) 
                    {
                        for (long long int i_20 = 0; i_20 < 13; i_20 += 2) 
                        {
                            {
                                var_47 -= ((/* implicit */_Bool) ((((((/* implicit */int) arr_47 [i_19] [10LL] [11LL])) >> (((/* implicit */int) (_Bool)1)))) / (arr_16 [6LL] [i_13] [i_14] [(unsigned char)11] [i_20])));
                                arr_69 [3] [(unsigned short)5] [i_14 + 1] [i_14] [i_20] [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_47 [0ULL] [i_14] [i_14]) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_20] [i_13] [i_14] [i_13] [i_0]))) : (var_11)))) ? ((~(3945150162633135459LL))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                                var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_20] [i_13] [i_19 + 1] [i_14] [i_13] [4LL])) ? (6005785393753743347LL) : (0LL)));
                            }
                        } 
                    } 
                    var_49 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_14 + 2] [i_14] [i_14 + 1] [i_14] [i_14 + 2] [i_14 + 1])) ? (arr_54 [i_14 + 2] [i_14] [i_14 + 1] [(signed char)11] [i_14 + 2] [i_14 + 2]) : (arr_54 [i_14 + 2] [7ULL] [i_14 + 1] [i_14 - 1] [i_14 + 2] [i_13])));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        for (unsigned long long int i_22 = 2; i_22 < 12; i_22 += 2) 
        {
            {
                var_50 = ((/* implicit */unsigned int) (~(max((((arr_72 [i_21] [i_21]) ? (((/* implicit */long long int) ((/* implicit */int) arr_74 [i_22]))) : (-2623788078557777297LL))), (((/* implicit */long long int) arr_72 [i_22 - 1] [i_22 + 1]))))));
                /* LoopSeq 3 */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    var_51 *= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) arr_73 [(unsigned short)2])))), (((/* implicit */int) arr_71 [i_22]))))), (min((((/* implicit */unsigned int) arr_72 [i_22] [i_22 + 2])), (arr_75 [i_21] [i_22] [i_22])))));
                    arr_79 [i_21] [i_22] [i_22] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_71 [i_21]))) ? (min((((/* implicit */unsigned long long int) arr_72 [i_22 - 1] [i_22 + 2])), (var_4))) : (min((8129668514281102054ULL), (((/* implicit */unsigned long long int) arr_76 [i_21] [i_21] [i_23]))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_24 = 0; i_24 < 14; i_24 += 2) 
                    {
                        var_52 = ((/* implicit */_Bool) max((var_52), (((((/* implicit */long long int) (-(((/* implicit */int) arr_73 [i_22 - 1]))))) > (((20LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_73 [i_22 + 1])))))))));
                        var_53 = ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
                        var_54 *= ((/* implicit */long long int) var_10);
                    }
                    for (unsigned char i_25 = 0; i_25 < 14; i_25 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_26 = 0; i_26 < 14; i_26 += 2) /* same iter space */
                        {
                            var_55 += ((/* implicit */unsigned int) arr_80 [i_21]);
                            var_56 = ((/* implicit */long long int) ((unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_78 [i_22 - 2] [i_21])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_27 = 0; i_27 < 14; i_27 += 2) /* same iter space */
                        {
                            arr_90 [i_27] [i_27] &= ((/* implicit */_Bool) arr_73 [i_21]);
                            var_57 = ((/* implicit */signed char) arr_71 [i_21]);
                            var_58 *= ((/* implicit */unsigned char) ((_Bool) arr_85 [i_21] [i_22 + 2] [(unsigned char)13] [i_25] [(unsigned char)13] [4] [i_22 - 2]));
                        }
                        var_59 = ((/* implicit */int) max((var_59), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)27)))))));
                        var_60 = ((/* implicit */unsigned int) arr_80 [(_Bool)1]);
                        var_61 = ((/* implicit */long long int) max((var_61), (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_84 [i_22 + 1] [i_22 - 2]))) : (6222927652914683197LL))), (((((/* implicit */_Bool) 8129668514281102039ULL)) ? (((/* implicit */long long int) 0)) : (0LL)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_28 = 2; i_28 < 10; i_28 += 2) 
                    {
                        for (long long int i_29 = 1; i_29 < 12; i_29 += 2) 
                        {
                            {
                                var_62 = ((/* implicit */unsigned char) max((var_62), (((/* implicit */unsigned char) arr_82 [i_21] [(_Bool)0] [i_22] [(unsigned char)8] [i_28 + 2] [i_28]))));
                                var_63 |= ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_3))))));
                            }
                        } 
                    } 
                    var_64 = ((/* implicit */long long int) max((var_64), (((/* implicit */long long int) (unsigned short)16384))));
                }
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                {
                    var_65 = ((/* implicit */unsigned char) ((_Bool) var_0));
                    arr_99 [i_21] [i_22] [i_30] [i_21] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-9061130966836503284LL), (((/* implicit */long long int) arr_96 [i_21] [i_22 - 2] [2U] [i_22 - 2] [i_30] [i_30]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_74 [i_22]))))) : (arr_83 [i_30] [6ULL] [i_22] [i_22 - 1])))) || (((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)8064)) && (((/* implicit */_Bool) var_5))))), (((((/* implicit */_Bool) arr_91 [i_21] [i_30] [(unsigned char)2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_95 [i_21] [i_22] [8LL] [i_30])))))))));
                    var_66 -= ((/* implicit */unsigned int) (~(((/* implicit */int) min((arr_78 [i_22 + 1] [i_22]), (((/* implicit */unsigned short) (signed char)118)))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_31 = 0; i_31 < 14; i_31 += 2) 
                    {
                        arr_103 [i_21] [i_22] [i_21] [i_22] = ((/* implicit */unsigned long long int) max((((long long int) ((unsigned long long int) var_10))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_83 [i_21] [i_22 + 1] [(unsigned short)4] [4ULL])))));
                        var_67 *= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_97 [i_30])), ((~(min((((/* implicit */unsigned int) (signed char)79)), (arr_85 [i_21] [i_22] [i_30] [i_31] [i_30] [i_21] [i_21])))))));
                        arr_104 [i_21] [i_21] [7LL] [i_30] [i_30] [i_31] = arr_84 [i_22 - 1] [i_22 + 2];
                        var_68 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_94 [i_21] [i_22] [(unsigned char)13] [i_21]), (((long long int) arr_70 [7] [i_21]))))) ? (min((((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_87 [i_21] [i_21] [i_21] [i_21] [i_21]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) arr_73 [i_31])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_96 [i_31] [13LL] [i_30] [(_Bool)1] [i_22] [i_21])), (arr_101 [i_21] [i_21] [i_21] [i_21])))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_84 [12U] [i_22 + 2]))) / (var_9))) : (((/* implicit */long long int) ((/* implicit */int) arr_89 [i_30] [i_22 + 1] [i_22] [i_22 - 1] [i_21]))))))));
                        var_69 |= ((/* implicit */long long int) arr_102 [i_21] [i_21] [(unsigned char)4] [i_30] [i_31]);
                    }
                    for (unsigned int i_32 = 0; i_32 < 14; i_32 += 2) 
                    {
                        var_70 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_92 [i_22 + 1] [i_22] [i_22 + 1] [7U])) ? (((/* implicit */int) (signed char)118)) : (0)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_0)) % (((/* implicit */int) (unsigned char)66))))));
                        arr_109 [i_21] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) 2049975593)) : (arr_86 [8ULL] [i_22] [i_22] [8ULL] [i_22 - 2] [i_22])))) ? (arr_93 [i_21] [i_21] [i_22] [i_21] [i_30] [i_32]) : (((var_9) - (((/* implicit */long long int) arr_86 [i_21] [(unsigned short)13] [i_30] [i_32] [(unsigned char)0] [i_22]))))))));
                    }
                }
                for (long long int i_33 = 2; i_33 < 12; i_33 += 2) 
                {
                    arr_112 [i_21] [7U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_75 [10ULL] [i_22 + 1] [10ULL]))) ? (arr_75 [i_22 - 1] [i_22 + 1] [i_33]) : (((((/* implicit */_Bool) arr_75 [7ULL] [i_22 - 2] [i_22])) ? (arr_75 [i_21] [i_22 + 2] [i_33 + 1]) : (arr_75 [i_21] [i_22 + 1] [i_22])))));
                    /* LoopNest 2 */
                    for (long long int i_34 = 0; i_34 < 14; i_34 += 2) 
                    {
                        for (int i_35 = 0; i_35 < 14; i_35 += 2) 
                        {
                            {
                                arr_117 [6] [6] [i_21] [i_33 + 1] [i_33] [i_33 + 1] [i_33 + 1] = ((/* implicit */unsigned long long int) min((((unsigned char) arr_74 [(_Bool)1])), ((unsigned char)77)));
                                var_71 = ((/* implicit */long long int) min((var_71), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)45235)), (5977195610756967832ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_81 [i_21] [i_22] [i_35] [i_35] [i_35] [i_35])) ? (((/* implicit */int) arr_110 [i_22] [i_22])) : (((/* implicit */int) var_6))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-6222927652914683197LL)))))));
                                var_72 *= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_84 [i_35] [i_33])) ? (arr_113 [(unsigned char)1] [4U]) : (var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)61))))) : (((/* implicit */int) arr_111 [i_22 - 2] [i_22 - 1] [i_33 - 1])))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_74 [i_22])), (arr_82 [i_21] [i_22] [i_34] [i_34] [i_35] [i_22]))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
