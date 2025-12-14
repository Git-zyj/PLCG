/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227007
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) ((((((/* implicit */int) var_0)) - (((/* implicit */int) (short)16383)))) / (((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 1 */
        for (int i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (short i_3 = 1; i_3 < 9; i_3 += 4) 
                {
                    {
                        arr_10 [i_0] [i_0] [(unsigned char)0] [i_3] = ((/* implicit */long long int) 11496263902900633826ULL);
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            var_12 = ((/* implicit */unsigned int) 18446744073709551603ULL);
                            var_13 *= ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0] [i_0] [i_4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) (_Bool)1)))))) : (11423925496389399506ULL));
                        }
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (((15249573175749500145ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)197)))))));
                    }
                } 
            } 
            arr_15 [i_0] [i_1] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
            var_15 = ((/* implicit */long long int) (unsigned short)21340);
            var_16 = ((/* implicit */_Bool) ((14ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)28027))) * (4123935545U))))));
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                {
                    var_17 *= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)21336))));
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_6] [i_5]))) % (4294967295U)))));
                        arr_23 [i_0] [i_0] [i_0] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((1413465009U) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [(signed char)4] [i_6])) && (((/* implicit */_Bool) 10ULL))))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            var_19 = ((/* implicit */long long int) ((((((/* implicit */long long int) 2881502308U)) >= (-8071794677176547157LL))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (unsigned char)26)))) : (((/* implicit */int) arr_22 [i_7] [i_7] [i_6] [i_0] [i_0]))));
                            var_20 = (unsigned char)102;
                            arr_26 [i_6] = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)57344))))) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_6] [i_7] [i_5] [(_Bool)1])) : (((/* implicit */int) (unsigned char)128)));
                        }
                        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 4) 
                        {
                            arr_30 [(short)8] [i_5] [i_5] [i_5] [i_9] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65516)) && (((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_5] [i_6] [i_7] [i_9]))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [(unsigned char)8] [i_7] [i_7])) ? (((/* implicit */int) arr_8 [i_5] [i_6] [i_7])) : (((/* implicit */int) arr_18 [i_5] [i_7] [i_9]))));
                            arr_31 [(unsigned short)6] [(unsigned short)6] [i_6] = ((/* implicit */short) arr_4 [i_0] [i_0]);
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            arr_35 [i_0] [i_0] [(unsigned char)3] [i_10] [(signed char)4] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) 9LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_6 [(signed char)1] [i_7] [(signed char)1])))));
                            arr_36 [i_0] [(short)8] [i_7] &= ((/* implicit */unsigned int) arr_24 [i_0] [i_5] [i_6] [9ULL] [0U]);
                            var_22 = ((/* implicit */long long int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) arr_13 [i_0] [i_0]))));
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_6] [i_7] [2])) + (((/* implicit */int) arr_9 [i_0] [i_5] [0LL] [i_6] [i_7] [i_10])))))));
                            var_24 &= ((/* implicit */long long int) var_4);
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            var_25 ^= ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) 15812154907124398197ULL)) || (((/* implicit */_Bool) arr_4 [7LL] [i_7])))))));
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((15812154907124398213ULL) + (((/* implicit */unsigned long long int) arr_19 [i_0])))))));
                        }
                    }
                    for (long long int i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        var_27 = ((/* implicit */long long int) arr_24 [i_0] [i_0] [(unsigned char)5] [i_0] [3]);
                        /* LoopSeq 1 */
                        for (unsigned char i_13 = 1; i_13 < 7; i_13 += 1) 
                        {
                            arr_45 [i_0] [2LL] [i_5] [i_13] [i_13] [2LL] = ((/* implicit */int) (unsigned short)21326);
                            var_28 *= ((/* implicit */unsigned long long int) arr_0 [i_0]);
                        }
                        var_29 = arr_24 [i_12] [i_0] [i_5] [i_5] [i_0];
                        arr_46 [(unsigned short)3] [i_5] = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2780))) | (2634589166585153436ULL)))));
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44196))) : (35184372084736LL)));
                    }
                    /* LoopSeq 4 */
                    for (int i_14 = 0; i_14 < 10; i_14 += 4) /* same iter space */
                    {
                        var_31 = (((+(var_4))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_5] [i_6] [i_14])) & (((/* implicit */int) arr_14 [i_0] [i_5] [i_5] [9ULL] [i_14]))))));
                        arr_50 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_12 [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_12 [i_5])) + (7)))));
                    }
                    for (int i_15 = 0; i_15 < 10; i_15 += 4) /* same iter space */
                    {
                        var_32 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)44217))));
                        var_33 = ((/* implicit */unsigned short) ((unsigned char) (unsigned char)76));
                        var_34 *= ((/* implicit */short) ((((/* implicit */int) (unsigned short)44209)) - ((+(-1887172343)))));
                    }
                    for (int i_16 = 0; i_16 < 10; i_16 += 4) /* same iter space */
                    {
                        var_35 = ((/* implicit */int) ((((/* implicit */int) (short)0)) != (arr_48 [(short)8] [(short)8] [i_5])));
                        arr_55 [9] [i_0] [i_0] [9] [3U] [i_16] = ((/* implicit */_Bool) ((arr_7 [i_0] [i_5] [i_0] [i_16]) % (arr_7 [i_0] [i_5] [i_0] [i_16])));
                        /* LoopSeq 1 */
                        for (int i_17 = 2; i_17 < 7; i_17 += 4) 
                        {
                            arr_58 [i_0] [i_6] [i_17] = ((/* implicit */unsigned int) arr_18 [i_0] [i_6] [i_17]);
                            arr_59 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)44227);
                        }
                    }
                    for (unsigned long long int i_18 = 4; i_18 < 8; i_18 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_19 = 0; i_19 < 10; i_19 += 1) 
                        {
                            var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) ((var_3) ? (((/* implicit */unsigned long long int) arr_60 [i_6] [i_18 + 1] [i_18 - 2] [i_6])) : (arr_49 [i_18 - 3] [i_18 - 2] [i_18 - 2] [i_19]))))));
                            var_37 = ((/* implicit */int) min((var_37), (((((/* implicit */_Bool) arr_40 [1ULL] [i_0] [i_18 - 3] [1ULL] [8] [8LL])) ? (((/* implicit */int) (unsigned short)44206)) : (arr_57 [i_0] [i_5] [i_6] [i_18 - 1] [9] [i_5])))));
                            arr_66 [i_6] = ((/* implicit */short) ((((/* implicit */int) var_0)) - (((/* implicit */int) arr_11 [i_18 - 2] [i_18 - 2] [i_18 - 2] [(short)2]))));
                            var_38 = ((/* implicit */short) (~(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_6 [i_18] [i_0] [i_0]))))));
                            arr_67 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_42 [i_0] [i_18 - 1] [i_0] [i_18 + 1]) != (((/* implicit */int) arr_40 [i_19] [i_18 - 1] [i_18] [i_18] [i_18] [1]))));
                        }
                        arr_68 [i_0] [i_0] [i_0] [i_18] = (((~(((/* implicit */int) arr_40 [i_18] [(unsigned short)2] [i_6] [i_5] [i_0] [i_0])))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)44209))))));
                    }
                    var_39 = ((/* implicit */int) ((arr_20 [i_0] [i_0] [i_0] [i_0]) ? (1413464991U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)16126)) < (((/* implicit */int) var_10))))))));
                }
            } 
        } 
        var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1413464978U)) ? ((-(((/* implicit */int) (unsigned short)48123)))) : (((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-9881))))));
    }
    for (int i_20 = 0; i_20 < 23; i_20 += 4) 
    {
        var_41 = ((/* implicit */int) min((var_41), (((/* implicit */int) ((min(((+(arr_69 [i_20]))), (((/* implicit */long long int) arr_71 [i_20])))) & (((/* implicit */long long int) ((/* implicit */int) (short)-9894))))))));
        var_42 = ((/* implicit */int) var_9);
        var_43 -= ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) arr_71 [i_20])) && (((/* implicit */_Bool) arr_71 [i_20]))))), (((((/* implicit */int) var_8)) - (((/* implicit */int) arr_71 [i_20]))))));
        /* LoopSeq 1 */
        for (unsigned short i_21 = 1; i_21 < 22; i_21 += 1) 
        {
            var_44 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 494954789U)) ? (494954794U) : (2881502309U)))) ? (max((((/* implicit */unsigned int) arr_70 [i_21 + 1] [(_Bool)1])), (1413464969U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_70 [i_21 - 1] [(short)13])))));
            var_45 -= ((/* implicit */signed char) (-((~(((/* implicit */int) arr_71 [i_20]))))));
            var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) min((((int) ((((/* implicit */_Bool) 3800012528U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))), (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_10)))))))));
        }
    }
    for (signed char i_22 = 0; i_22 < 16; i_22 += 4) 
    {
        arr_80 [i_22] [(short)3] = max((((/* implicit */unsigned int) ((2811567948U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)18)))))), ((~(2881502332U))));
        arr_81 [(unsigned char)6] [(unsigned char)6] = ((/* implicit */short) min((((/* implicit */int) ((unsigned short) (-(var_4))))), (((-2090719215) * (((/* implicit */int) ((((/* implicit */unsigned int) var_1)) > (2881502321U))))))));
    }
    var_47 = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (2881502328U))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), (max((var_8), (((/* implicit */unsigned short) var_7)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_23 = 2; i_23 < 12; i_23 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_24 = 0; i_24 < 15; i_24 += 4) 
        {
            arr_89 [i_24] &= ((/* implicit */_Bool) min((((15812154907124398193ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) max((arr_88 [i_23 + 1] [i_23 + 3] [i_23 - 2]), (arr_88 [i_23 + 3] [i_23 + 2] [i_23 - 2]))))));
            var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? ((-(var_4))) : (var_4)));
            var_49 = ((/* implicit */unsigned short) 4532305016170162203ULL);
            var_50 = ((/* implicit */unsigned long long int) (-(arr_69 [i_23 + 3])));
            var_51 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) max((var_8), (((/* implicit */unsigned short) (short)-30246))))), ((-(((/* implicit */int) (short)30239))))))) && (((/* implicit */_Bool) min((((unsigned short) arr_79 [i_24])), (((/* implicit */unsigned short) ((((/* implicit */int) var_10)) != (((/* implicit */int) (short)30233))))))))));
        }
        /* vectorizable */
        for (short i_25 = 0; i_25 < 15; i_25 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_27 = 0; i_27 < 15; i_27 += 4) 
                {
                    for (signed char i_28 = 0; i_28 < 15; i_28 += 1) 
                    {
                        {
                            var_52 = ((/* implicit */unsigned short) ((((unsigned long long int) (short)-9902)) & ((~(arr_77 [(_Bool)1])))));
                            var_53 += ((/* implicit */_Bool) arr_78 [(_Bool)1]);
                            arr_101 [i_23] [i_23] [i_23] [i_23] [i_26] [i_23] = ((/* implicit */unsigned short) (((~(2881502321U))) / (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_70 [i_23] [(unsigned short)19]))))));
                        }
                    } 
                } 
                var_54 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_97 [i_23 + 1] [i_23 + 3])) ? (arr_97 [i_23 - 1] [i_23 + 3]) : (arr_97 [i_23 + 1] [i_23 - 1])));
            }
            var_55 *= ((/* implicit */short) ((((((/* implicit */_Bool) 15812154907124398192ULL)) ? (arr_77 [i_23]) : (((/* implicit */unsigned long long int) -1847507265)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [i_23 + 1] [i_23 + 2])))));
            var_56 = ((/* implicit */_Bool) var_1);
            arr_102 [i_23] [(unsigned char)1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-4221))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-51)))))));
        }
        for (long long int i_29 = 0; i_29 < 15; i_29 += 3) 
        {
            var_57 = ((/* implicit */short) min((var_57), (((/* implicit */short) ((((/* implicit */_Bool) max((4107782011U), (187185293U)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) 3144599808032879779ULL)) || ((_Bool)1)))))))));
            var_58 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_82 [i_23 + 2])) && (((/* implicit */_Bool) arr_82 [i_23 + 2])))))));
        }
        var_59 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((11LL) | (((/* implicit */long long int) arr_85 [3]))))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || ((_Bool)1)))))), (((/* implicit */int) ((arr_93 [i_23] [i_23]) >= ((+(arr_105 [i_23]))))))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_30 = 0; i_30 < 12; i_30 += 3) /* same iter space */
    {
        var_60 = ((/* implicit */int) max((((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) < (2634589166585153401ULL))), (((((/* implicit */_Bool) arr_86 [i_30] [i_30])) && ((_Bool)1)))))), (max((((/* implicit */unsigned char) (_Bool)1)), (max((((/* implicit */unsigned char) (signed char)-32)), (arr_73 [i_30] [i_30] [i_30])))))));
        arr_108 [i_30] = ((/* implicit */short) (unsigned char)63);
        var_61 += (~(((arr_72 [i_30]) ? (((((/* implicit */int) arr_84 [i_30] [i_30])) * (((/* implicit */int) var_0)))) : (((((/* implicit */int) arr_78 [(short)7])) | (((/* implicit */int) arr_92 [i_30])))))));
        /* LoopNest 2 */
        for (long long int i_31 = 4; i_31 < 9; i_31 += 3) 
        {
            for (unsigned short i_32 = 0; i_32 < 12; i_32 += 4) 
            {
                {
                    var_62 = ((/* implicit */_Bool) arr_73 [i_31 + 1] [i_31 + 2] [i_30]);
                    arr_116 [i_32] [i_31] [i_32] [i_32] |= ((/* implicit */short) ((((/* implicit */_Bool) max((285978576338026496ULL), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 79064211U)) * (-2LL))))))) ? (((((/* implicit */_Bool) arr_93 [i_31] [i_31])) ? (((/* implicit */int) (unsigned char)138)) : (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned char)131)) : (((/* implicit */int) (short)-1)))))) : (max((((/* implicit */int) (unsigned short)55537)), (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_33 = 0; i_33 < 12; i_33 += 3) /* same iter space */
    {
        var_63 = ((/* implicit */long long int) max((var_63), (-2LL)));
        var_64 = ((((/* implicit */int) arr_92 [(_Bool)0])) | (((arr_97 [i_33] [i_33]) & (((/* implicit */int) (short)-16)))));
        var_65 -= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) var_4))) > (((/* implicit */int) var_2))));
    }
}
