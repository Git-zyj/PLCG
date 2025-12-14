/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239929
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
    var_20 = ((/* implicit */unsigned char) min(((+((+(var_14))))), (((/* implicit */int) var_17))));
    var_21 = (!(((/* implicit */_Bool) var_6)));
    var_22 = ((/* implicit */unsigned short) (_Bool)0);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
        {
            arr_4 [i_0] [(_Bool)1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) (_Bool)1)))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                var_23 = ((/* implicit */long long int) max((var_23), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))) : (((long long int) (_Bool)0))))));
                arr_9 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) min(((!(((/* implicit */_Bool) arr_8 [8] [i_2] [i_2])))), (((var_18) != (((/* implicit */unsigned long long int) arr_7 [i_0] [i_2] [i_1] [i_2])))))))));
            }
        }
        for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */long long int) (-(((unsigned int) ((unsigned int) 2695358421U)))));
            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_5 [i_0] [(short)10] [i_3] [(short)10])), (min((min((var_4), (((/* implicit */unsigned long long int) (signed char)40)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))))))));
            var_26 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_3])) ? (arr_5 [i_0] [i_0] [(unsigned short)5] [8]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                var_27 = ((/* implicit */unsigned short) (((-(var_7))) != (((/* implicit */int) ((unsigned short) 11027083915544791297ULL)))));
                arr_14 [i_4] [i_3] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (var_11)))) || ((!((_Bool)1))))))));
                var_28 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_8 [i_0] [i_4] [i_4])) ? (arr_8 [i_0] [i_4] [(unsigned short)11]) : (arr_8 [i_0] [i_4] [i_4]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) arr_13 [i_0] [i_0] [i_0])))))))));
                var_29 |= ((/* implicit */_Bool) arr_0 [i_0]);
            }
        }
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    {
                        arr_25 [i_0] [i_5] [i_6] = ((/* implicit */unsigned char) var_7);
                        arr_26 [i_7] [i_7] [0] [i_6] [0] [i_0] = ((/* implicit */unsigned char) var_18);
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0])) ? (arr_18 [i_0] [i_6] [i_7]) : (((/* implicit */long long int) arr_20 [i_6] [i_6] [(_Bool)1] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) && ((_Bool)1))))) : (((unsigned int) arr_13 [(short)8] [(unsigned short)6] [(unsigned short)6])))))));
                    }
                } 
            } 
            var_31 = ((/* implicit */long long int) min((min((((unsigned int) (short)15053)), (((/* implicit */unsigned int) -22)))), (((unsigned int) var_4))));
        }
        for (long long int i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
            {
                for (unsigned int i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    {
                        arr_34 [(short)9] [i_8] [i_8] [(_Bool)1] = ((/* implicit */unsigned char) (_Bool)0);
                        var_32 += ((/* implicit */unsigned int) min((var_10), (((/* implicit */long long int) ((short) var_11)))));
                        /* LoopSeq 1 */
                        for (unsigned short i_11 = 0; i_11 < 12; i_11 += 3) 
                        {
                            arr_38 [i_11] [i_11] [i_9] [i_11] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_0] [i_8] [(unsigned char)9] [i_11])))))));
                            var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) (-(((/* implicit */int) arr_15 [i_0] [i_8] [(unsigned short)4]))))), (min((var_10), (((/* implicit */long long int) arr_23 [i_0] [4LL] [(signed char)11] [i_0])))))))))));
                            var_34 = ((/* implicit */unsigned short) var_13);
                        }
                    }
                } 
            } 
            var_35 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_15 [i_8] [i_0] [(_Bool)1]))))) * ((+(785944175U))))));
            /* LoopSeq 4 */
            for (unsigned char i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 4) 
                {
                    var_36 = ((/* implicit */unsigned long long int) ((((unsigned int) (_Bool)1)) + (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_0] [i_0] [i_12] [i_0])))));
                    arr_45 [i_0] [i_8] [i_8] [i_8] [i_8] [i_13] = ((/* implicit */unsigned int) (((-((-(var_11))))) == (((/* implicit */unsigned long long int) ((unsigned int) arr_20 [i_13] [i_12] [i_8] [i_0])))));
                    var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (arr_31 [i_0] [i_8] [i_12])))) * (min((11027083915544791297ULL), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_12] [i_0])))))), (((/* implicit */unsigned long long int) ((int) (+(((/* implicit */int) (_Bool)0)))))))))));
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 12; i_14 += 2) 
                {
                    arr_49 [(unsigned short)4] [i_8] [i_8] [i_12] [i_12] [i_14] = ((/* implicit */unsigned char) (+(348065492783236696ULL)));
                    /* LoopSeq 2 */
                    for (long long int i_15 = 0; i_15 < 12; i_15 += 4) /* same iter space */
                    {
                        var_38 &= ((/* implicit */signed char) ((long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)46)) - (26))))));
                        var_39 = ((/* implicit */int) max((var_39), ((+(((/* implicit */int) arr_29 [i_0]))))));
                        arr_52 [i_0] [i_0] [i_0] = ((var_10) != (((/* implicit */long long int) (~(((/* implicit */int) var_19))))));
                    }
                    for (long long int i_16 = 0; i_16 < 12; i_16 += 4) /* same iter space */
                    {
                        arr_56 [i_0] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) (unsigned char)247))));
                        arr_57 [i_0] [i_0] [i_12] [i_14] [i_16] [11] [1LL] = ((/* implicit */unsigned short) (_Bool)1);
                    }
                    arr_58 [i_0] [i_8] [i_8] [i_12] [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_12] [i_0])) ? ((~(((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 1 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_40 = (i_17 % 2 == 0) ? (((/* implicit */_Bool) (((((-(var_3))) + (9223372036854775807LL))) << (((((((long long int) arr_59 [i_0] [i_8] [i_12] [i_14] [i_17])) + (3663747713082565524LL))) - (7LL)))))) : (((/* implicit */_Bool) (((((-(var_3))) + (9223372036854775807LL))) << (((((((((long long int) arr_59 [i_0] [i_8] [i_12] [i_14] [i_17])) + (3663747713082565524LL))) - (7LL))) - (8449430360108505397LL))))));
                        arr_61 [i_0] [i_17] [i_12] [i_17] [i_17] = ((/* implicit */unsigned char) (_Bool)1);
                        var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) 0ULL))));
                    }
                }
                arr_62 [i_8] [i_0] = ((/* implicit */unsigned char) var_18);
                arr_63 [i_0] [i_8] [0ULL] [i_12] = ((/* implicit */_Bool) ((int) (~(((arr_36 [11] [i_8]) - (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0]))))))));
            }
            for (long long int i_18 = 0; i_18 < 12; i_18 += 2) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_19 = 0; i_19 < 12; i_19 += 4) 
                {
                    var_42 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_0] [i_8])) ? (((/* implicit */unsigned long long int) arr_36 [(_Bool)1] [i_8])) : (var_1)));
                    arr_68 [4LL] = ((/* implicit */unsigned short) ((unsigned long long int) var_3));
                    /* LoopSeq 2 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                    {
                        arr_73 [i_0] [11LL] [i_20] [i_0] [i_20] = ((/* implicit */_Bool) var_5);
                        var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_18)))) ? (arr_71 [6LL] [i_18] [i_18] [i_20]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1551659006)) || (arr_13 [i_0] [i_0] [i_0]))))))))));
                        arr_74 [i_0] [i_8] [1ULL] [i_19] [i_20] = ((/* implicit */_Bool) (~(((int) arr_2 [i_0] [i_19]))));
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
                    {
                        var_44 = ((/* implicit */unsigned char) (_Bool)1);
                        var_45 = ((/* implicit */unsigned short) min((var_45), (((/* implicit */unsigned short) (((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) << ((((((~(((/* implicit */int) (_Bool)1)))) + (15))) - (13))))))));
                        arr_77 [i_0] [i_0] [i_0] [i_0] [i_19] [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_54 [i_0] [i_0] [10LL] [(signed char)11] [i_0]))));
                        arr_78 [i_0] [i_8] [i_8] [i_18] [i_19] [i_19] [i_21] = ((/* implicit */long long int) (-(((unsigned int) var_3))));
                    }
                }
                for (long long int i_22 = 0; i_22 < 12; i_22 += 4) 
                {
                    var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned long long int) ((arr_20 [i_0] [i_8] [i_18] [i_22]) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_0] [i_0])) || (((/* implicit */_Bool) arr_51 [i_0] [i_8] [9ULL] [8LL] [i_18] [i_22]))))))))))))));
                    arr_82 [(unsigned char)6] [i_8] [i_8] [(short)8] [i_8] [(unsigned char)11] = arr_16 [i_18] [i_18] [i_0];
                }
                for (long long int i_23 = 0; i_23 < 12; i_23 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_24 = 0; i_24 < 12; i_24 += 1) /* same iter space */
                    {
                        arr_87 [i_0] [i_8] [i_18] [i_23] [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_53 [(short)2] [(short)2] [i_18] [i_23] [i_24] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(arr_1 [i_23]))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_67 [(short)8] [(short)8] [i_18] [i_23] [i_24]))))))) : (18446744073709551608ULL)));
                        var_47 -= ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) arr_30 [i_0] [(unsigned short)7] [i_18] [i_23]))))), (((var_10) % (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_0] [i_8]))))))))));
                        arr_88 [i_0] [i_8] [i_18] [i_23] = ((/* implicit */long long int) (+(-1551659006)));
                    }
                    for (unsigned long long int i_25 = 0; i_25 < 12; i_25 += 1) /* same iter space */
                    {
                        var_48 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_17)) ? (arr_55 [i_0] [(unsigned short)4] [i_18] [(unsigned char)9] [i_0] [i_25]) : (arr_55 [i_0] [i_8] [i_18] [i_23] [i_23] [i_25])))));
                        var_49 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((/* implicit */long long int) ((/* implicit */int) arr_64 [i_18]))) : (arr_71 [i_23] [i_25] [i_25] [i_0]))), (((long long int) min((((/* implicit */int) var_9)), (var_14))))));
                    }
                    for (unsigned long long int i_26 = 0; i_26 < 12; i_26 += 1) /* same iter space */
                    {
                        var_50 = ((/* implicit */short) min(((+(((/* implicit */int) arr_28 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */int) arr_84 [i_0] [i_8] [i_18] [i_23] [i_26])) : (-22)))));
                        var_51 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */unsigned long long int) var_2)), (var_11)))));
                        arr_93 [i_26] [i_23] [(short)4] [i_8] [i_0] &= ((/* implicit */unsigned long long int) var_10);
                    }
                    var_52 = ((/* implicit */unsigned long long int) var_19);
                    var_53 += ((/* implicit */unsigned long long int) min(((~((~(arr_81 [i_0] [i_0] [i_0] [i_8] [i_0] [i_23]))))), (((((/* implicit */long long int) -1551659006)) & ((~(var_6)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_27 = 0; i_27 < 12; i_27 += 3) 
                    {
                        var_54 = ((/* implicit */unsigned char) (((+(min((arr_83 [i_0] [i_8]), (((/* implicit */long long int) (_Bool)1)))))) * (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))));
                        arr_97 [i_0] [i_0] [i_23] [0LL] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_83 [i_0] [i_8])) && (((/* implicit */_Bool) arr_83 [i_0] [i_8]))))), (min((arr_83 [i_0] [i_23]), (((/* implicit */long long int) (_Bool)1))))));
                        arr_98 [i_0] [i_8] [i_18] [i_18] [i_27] [i_18] = ((/* implicit */long long int) (-(arr_2 [i_0] [i_0])));
                    }
                }
                /* LoopSeq 2 */
                for (unsigned short i_28 = 0; i_28 < 12; i_28 += 3) 
                {
                    arr_102 [i_0] [i_0] [i_18] [i_18] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_54 [i_0] [i_0] [i_18] [i_28] [i_28]))));
                    arr_103 [i_0] [i_28] [i_18] [i_18] = ((/* implicit */_Bool) (-(arr_71 [(unsigned char)3] [i_28] [i_18] [i_28])));
                    var_55 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(1279073342)))), (min((((/* implicit */unsigned long long int) var_13)), (arr_76 [i_0] [i_8] [i_18] [i_28])))))) ? (var_3) : (((/* implicit */long long int) (-((~(((/* implicit */int) var_19)))))))));
                }
                for (int i_29 = 0; i_29 < 12; i_29 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_30 = 0; i_30 < 12; i_30 += 4) 
                    {
                        arr_110 [i_18] [i_29] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_10 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_0] [i_0] [i_18] [i_29] [i_29] [i_0]))))))) ? ((+((-(var_2))))) : (315018266)));
                        var_56 = ((/* implicit */_Bool) ((arr_60 [i_0] [i_29] [i_18] [i_0] [0U] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */unsigned long long int) var_10)) == (var_1)))))))));
                    }
                    var_57 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_19))))) ? (((18446744073709551608ULL) ^ (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_16)) ^ (arr_53 [i_29] [i_0] [i_8] [i_8] [i_0] [i_0])))))), (((/* implicit */unsigned long long int) min((min((((/* implicit */int) arr_15 [i_0] [4ULL] [i_0])), (var_2))), (((/* implicit */int) ((unsigned char) var_7))))))));
                }
                arr_111 [i_18] = var_6;
            }
            for (unsigned long long int i_31 = 0; i_31 < 12; i_31 += 1) 
            {
                var_58 = ((/* implicit */long long int) max((var_58), (((/* implicit */long long int) var_8))));
                arr_115 [(signed char)7] [i_8] [i_8] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_0])) == (((/* implicit */int) var_15)))))))) > (arr_59 [i_0] [(signed char)8] [i_31] [i_8] [i_0])));
                arr_116 [i_0] [i_0] [i_31] [(_Bool)1] = (!(((/* implicit */_Bool) ((arr_48 [i_0] [i_8] [i_0]) % (((/* implicit */unsigned long long int) -1551659027))))));
                var_59 = ((/* implicit */long long int) (+(min((arr_11 [i_0]), (arr_11 [i_0])))));
                /* LoopSeq 1 */
                for (unsigned short i_32 = 0; i_32 < 12; i_32 += 1) 
                {
                    var_60 = ((/* implicit */int) var_18);
                    var_61 -= ((/* implicit */_Bool) ((int) 331840998U));
                }
            }
            for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
            {
                var_62 = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0] [i_8] [i_33])) ? (((/* implicit */long long int) var_0)) : (min((((/* implicit */long long int) ((unsigned short) var_7))), (arr_40 [i_0])))));
                arr_123 [i_0] [i_0] [i_33] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) min(((short)-8907), (((/* implicit */short) (_Bool)1)))))) % ((~(arr_6 [i_0] [i_33] [i_33])))));
            }
            /* LoopNest 3 */
            for (unsigned char i_34 = 0; i_34 < 12; i_34 += 1) 
            {
                for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
                {
                    for (unsigned char i_36 = 0; i_36 < 12; i_36 += 4) 
                    {
                        {
                            arr_133 [i_8] [i_34] = ((/* implicit */unsigned int) (-(((((/* implicit */int) (_Bool)1)) / (-196911717)))));
                            var_63 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_85 [i_0] [(_Bool)1] [i_34] [(signed char)7] [i_0] [(short)9])) <= ((-(arr_2 [i_0] [i_0])))));
                            var_64 = ((/* implicit */unsigned long long int) ((short) (-(((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
            } 
        }
        var_65 = ((/* implicit */unsigned int) min((var_65), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
        arr_134 [i_0] = (~(min((((/* implicit */unsigned long long int) 3776708515416548801LL)), (358906257612986908ULL))));
    }
    for (unsigned short i_37 = 0; i_37 < 14; i_37 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
        {
            for (unsigned char i_39 = 0; i_39 < 14; i_39 += 2) 
            {
                {
                    var_66 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                    var_67 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_140 [i_37] [i_38] [i_39]))) : (4516069301524773670LL)))), (var_11)));
                }
            } 
        } 
        arr_143 [i_37] [i_37] = var_10;
        arr_144 [i_37] = (((~(((/* implicit */int) arr_140 [1LL] [i_37] [i_37])))) * (((/* implicit */int) ((min((arr_142 [i_37] [i_37] [(unsigned short)3] [(unsigned short)11]), (((/* implicit */unsigned long long int) var_17)))) < (((/* implicit */unsigned long long int) ((unsigned int) var_13)))))));
    }
    for (long long int i_40 = 0; i_40 < 10; i_40 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_41 = 0; i_41 < 10; i_41 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_42 = 0; i_42 < 10; i_42 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_43 = 0; i_43 < 1; i_43 += 1) 
                {
                    arr_155 [i_43] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_72 [i_40] [i_40] [i_43] [i_40] [(_Bool)1] [i_40])) ? (arr_85 [i_40] [2LL] [3ULL] [(_Bool)0] [i_40] [i_40]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    var_68 = ((/* implicit */unsigned int) min((var_68), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) || (arr_43 [i_42] [i_41]))))));
                    /* LoopSeq 3 */
                    for (int i_44 = 0; i_44 < 10; i_44 += 2) 
                    {
                        var_69 = ((/* implicit */long long int) min((var_69), (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_117 [i_40] [i_41] [i_42] [i_41] [i_44])) <= (((/* implicit */int) (_Bool)1))))))))));
                        var_70 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_120 [i_43] [i_41]))) ? (((14756893654694067075ULL) >> (((/* implicit */int) (_Bool)1)))) : (arr_106 [i_42])));
                        arr_158 [i_40] [i_43] [i_43] = ((/* implicit */long long int) arr_1 [i_40]);
                    }
                    for (int i_45 = 0; i_45 < 10; i_45 += 4) 
                    {
                        var_71 = ((/* implicit */unsigned int) (-(5833990418178885696LL)));
                        arr_162 [i_40] [i_40] [i_40] [i_41] [i_45] |= ((/* implicit */long long int) ((int) var_8));
                    }
                    for (unsigned long long int i_46 = 0; i_46 < 10; i_46 += 3) 
                    {
                        arr_167 [i_40] [i_40] [i_43] [i_43] [i_40] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_19))))) ? (((/* implicit */int) arr_29 [i_40])) : (((((/* implicit */_Bool) arr_122 [(unsigned char)7] [i_41] [i_42] [i_41])) ? (var_2) : (((/* implicit */int) (_Bool)1))))));
                        var_72 = ((/* implicit */int) (~(arr_108 [i_40] [i_41] [i_41] [i_41] [8LL] [9LL])));
                        arr_168 [i_43] [i_43] [9LL] [i_43] [i_46] [i_46] = ((/* implicit */unsigned char) arr_79 [i_40] [i_40] [i_40] [i_40] [i_40]);
                    }
                    var_73 *= ((/* implicit */unsigned long long int) (~(arr_60 [i_40] [i_41] [i_41] [i_43] [i_41] [i_42])));
                }
                arr_169 [i_40] = ((/* implicit */_Bool) ((((/* implicit */int) arr_104 [i_40] [i_40] [i_41] [i_42])) ^ (((/* implicit */int) (_Bool)1))));
                var_74 = ((/* implicit */unsigned int) ((((long long int) arr_43 [(signed char)8] [(signed char)8])) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                arr_170 [0LL] [i_41] [i_41] [i_41] = ((/* implicit */unsigned short) var_0);
            }
            /* LoopSeq 1 */
            for (int i_47 = 0; i_47 < 10; i_47 += 1) 
            {
                var_75 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)25))))) - (min((min((var_4), (13270262259801875986ULL))), (((/* implicit */unsigned long long int) min((arr_18 [i_47] [i_41] [i_40]), (((/* implicit */long long int) var_7)))))))));
                /* LoopNest 2 */
                for (unsigned int i_48 = 0; i_48 < 10; i_48 += 1) 
                {
                    for (int i_49 = 0; i_49 < 10; i_49 += 2) 
                    {
                        {
                            var_76 = ((/* implicit */unsigned short) min((var_76), (((/* implicit */unsigned short) var_14))));
                            var_77 -= ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_124 [i_41] [10] [10U])) ? (((/* implicit */long long int) ((/* implicit */int) arr_90 [i_40]))) : (arr_22 [i_40] [i_49]))));
                            var_78 += ((/* implicit */unsigned char) arr_150 [2LL] [i_48] [i_47] [i_40]);
                        }
                    } 
                } 
            }
        }
        for (short i_50 = 0; i_50 < 10; i_50 += 4) 
        {
            var_79 = ((/* implicit */_Bool) (+((~(arr_122 [i_50] [i_40] [i_40] [i_40])))));
            arr_184 [(_Bool)0] [(_Bool)0] [(_Bool)0] = ((/* implicit */unsigned long long int) (-(var_0)));
        }
        for (long long int i_51 = 0; i_51 < 10; i_51 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_52 = 0; i_52 < 10; i_52 += 3) 
            {
                /* LoopSeq 3 */
                for (long long int i_53 = 0; i_53 < 10; i_53 += 2) 
                {
                    var_80 |= var_7;
                    var_81 *= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_64 [i_51]))) & (var_1))));
                    arr_191 [i_40] [i_52] [i_52] [9U] [i_40] [(unsigned short)0] = ((/* implicit */short) (+(((long long int) arr_70 [i_40] [i_52] [i_40] [(unsigned short)8] [i_53]))));
                    var_82 = ((/* implicit */unsigned long long int) max((var_82), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))));
                }
                for (unsigned long long int i_54 = 0; i_54 < 10; i_54 += 4) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_55 = 0; i_55 < 10; i_55 += 4) 
                    {
                        arr_198 [i_40] [1U] [i_52] [i_54] [i_55] = ((/* implicit */signed char) ((unsigned short) var_16));
                        var_83 = ((/* implicit */unsigned int) max((var_83), (((/* implicit */unsigned int) (((((_Bool)1) && (((/* implicit */_Bool) (unsigned char)181)))) ? (min((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) (_Bool)1)))))) : (arr_176 [i_51] [(_Bool)1] [i_54] [i_54]))))));
                    }
                    for (short i_56 = 0; i_56 < 10; i_56 += 2) 
                    {
                        arr_201 [i_52] [i_51] [i_52] [i_54] [i_56] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_172 [i_40] [i_51] [i_52])))) % (((/* implicit */int) ((signed char) arr_172 [i_40] [i_40] [i_40])))));
                        arr_202 [i_40] [i_52] [i_52] [i_52] [i_56] [(_Bool)0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_27 [i_40])), ((-(var_5)))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_57 = 0; i_57 < 10; i_57 += 1) 
                    {
                        arr_206 [i_57] [i_54] [2ULL] [(short)6] [i_52] [i_54] [i_40] |= ((/* implicit */unsigned short) 9715670218090318197ULL);
                        var_84 = ((/* implicit */short) (~((-(((/* implicit */int) ((_Bool) var_1)))))));
                        var_85 = ((/* implicit */unsigned short) max((var_85), (((/* implicit */unsigned short) (-(9701429558131204464ULL))))));
                        arr_207 [i_52] [i_54] = ((/* implicit */unsigned long long int) (+(arr_148 [i_52])));
                    }
                }
                for (int i_58 = 0; i_58 < 10; i_58 += 4) 
                {
                    arr_212 [i_51] [i_52] [i_51] &= ((/* implicit */_Bool) ((((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_193 [i_40] [i_51] [i_52] [i_40]))))), (min((((/* implicit */unsigned int) (_Bool)1)), (var_0)))))) / ((+((~(9223372036854775807LL)))))));
                    var_86 = ((/* implicit */unsigned long long int) min((var_86), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
                }
                var_87 = ((/* implicit */unsigned long long int) min((var_87), (min((((((/* implicit */_Bool) arr_125 [i_40] [i_51] [i_52])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_125 [i_40] [i_51] [10LL]))))), ((-(arr_59 [i_40] [i_51] [(unsigned short)8] [i_52] [i_51])))))));
            }
            for (unsigned int i_59 = 0; i_59 < 10; i_59 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_60 = 0; i_60 < 10; i_60 += 4) 
                {
                    for (int i_61 = 0; i_61 < 10; i_61 += 4) 
                    {
                        {
                            var_88 = ((/* implicit */long long int) max((var_88), (0LL)));
                            arr_222 [i_51] [i_51] = ((/* implicit */_Bool) var_0);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_62 = 0; i_62 < 10; i_62 += 4) /* same iter space */
                {
                    var_89 = ((/* implicit */int) min((var_89), (((((/* implicit */int) var_8)) | ((~(((/* implicit */int) arr_44 [i_40] [i_51] [i_59] [i_62]))))))));
                    var_90 = ((/* implicit */unsigned int) max((var_90), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_7)) & (var_4))))))))))));
                }
                for (int i_63 = 0; i_63 < 10; i_63 += 4) /* same iter space */
                {
                    var_91 = ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) -1551659032)) && (((/* implicit */_Bool) var_16)))), (((9223372036854775807LL) < (((/* implicit */long long int) ((/* implicit */int) var_9))))))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), ((~(var_1))))) : (min((((((/* implicit */unsigned long long int) var_14)) / (arr_160 [i_40] [i_40] [i_40] [i_40] [i_40]))), (((/* implicit */unsigned long long int) arr_124 [i_63] [4LL] [4LL]))))));
                    arr_229 [i_40] [i_51] [i_59] [i_63] [i_51] [i_40] = ((/* implicit */unsigned long long int) 536870911U);
                }
                var_92 = ((/* implicit */unsigned long long int) max((var_92), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) (_Bool)1))))))))))));
            }
            arr_230 [i_40] [i_40] = ((((/* implicit */_Bool) ((arr_118 [(unsigned short)2] [2ULL] [i_40] [2ULL] [i_40] [i_51]) / (arr_100 [i_51])))) ? (((unsigned long long int) arr_118 [i_40] [i_51] [i_51] [(unsigned char)7] [i_40] [i_51])) : (((var_4) - (arr_100 [i_51]))));
            arr_231 [i_40] [8] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (13270262259801875986ULL)))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_156 [i_40] [i_40] [i_40] [(_Bool)1] [i_51] [i_40])), (arr_105 [i_40] [i_40] [i_40] [(_Bool)1] [i_51] [i_51])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_19)))))) : (min((((/* implicit */long long int) (_Bool)0)), (arr_19 [10ULL] [i_51]))))) : (((/* implicit */long long int) ((int) arr_216 [i_40] [i_40] [i_40] [i_40] [7ULL]))));
        }
        var_93 -= ((/* implicit */short) 11997316282817881984ULL);
    }
    var_94 = ((/* implicit */long long int) ((var_12) ? (min((((unsigned int) var_0)), (((unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)96)) && (((/* implicit */_Bool) ((unsigned int) var_9)))))))));
}
