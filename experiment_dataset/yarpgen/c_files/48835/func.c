/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48835
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((var_7), (((((/* implicit */int) var_5)) <= (((/* implicit */int) var_5))))))), (((((/* implicit */unsigned long long int) -5076256606045754861LL)) | (17ULL)))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((int) min((((/* implicit */unsigned int) (_Bool)1)), (var_4)))) == (((/* implicit */int) ((unsigned short) ((_Bool) var_0))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                /* LoopSeq 2 */
                for (short i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    arr_11 [i_0] [i_1] [i_0] [13U] [i_0] = ((/* implicit */unsigned int) (signed char)122);
                    var_10 = ((/* implicit */int) var_8);
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_11 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) 338857429U))));
                    /* LoopSeq 3 */
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        var_12 |= ((/* implicit */unsigned int) (((_Bool)0) && (((/* implicit */_Bool) var_5))));
                        arr_17 [i_0] [i_0] [i_1] [i_0] [3] [i_4] [i_5] = ((/* implicit */unsigned int) var_1);
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_13 &= ((/* implicit */unsigned int) ((signed char) (short)14432));
                        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_1)))))));
                    }
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)7673)) ? (((/* implicit */int) var_5)) : (arr_0 [i_2])));
                        arr_23 [i_0] [i_1] [5ULL] [i_4] [i_7] = ((/* implicit */unsigned int) (~(8671390380615750233ULL)));
                        arr_24 [i_1] [i_1] [3LL] [i_4] [i_7] = ((/* implicit */unsigned short) var_2);
                        var_16 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_2])) : (((/* implicit */int) (short)-24869)))))));
                    }
                }
                arr_25 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -3348586535107025518LL)))))) == (10160014174053957048ULL)));
            }
            for (int i_8 = 1; i_8 < 20; i_8 += 3) 
            {
                arr_30 [i_0] [i_1] [i_8 + 1] [i_8] = ((/* implicit */int) arr_13 [i_8] [i_1] [i_8 - 1] [i_1] [i_1 - 1]);
                arr_31 [i_8] [i_8] [i_1] [i_8 - 1] = ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) arr_26 [(short)12] [17U])) & (((/* implicit */int) (unsigned short)1965)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))));
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (short)-15122))));
            }
            var_18 = ((/* implicit */_Bool) (signed char)-115);
        }
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_10 = 2; i_10 < 20; i_10 += 4) 
            {
                arr_38 [i_9] = (((((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (8667211985793405956LL))))) | (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_10] [i_9 - 1] [0LL]))));
                arr_39 [i_0] [7U] [i_9] [i_0] = ((/* implicit */unsigned int) (~(((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)108))) | (arr_1 [i_0] [i_0]))))));
                arr_40 [i_10 + 1] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) -1LL);
                arr_41 [i_9] [i_9] [i_0] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((1073741312U) + (2070671143U))) : (((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_0] [i_0]))) : (arr_33 [i_9]))))))));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_19 = ((/* implicit */_Bool) ((unsigned int) -1641546741525157916LL));
                    var_20 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (arr_1 [i_0] [i_0])))) || (((/* implicit */_Bool) var_4)));
                    var_21 = ((/* implicit */int) -873170733285971127LL);
                }
                arr_48 [i_11] [i_9] [i_9] [i_0] = ((/* implicit */short) ((((long long int) var_8)) < (((/* implicit */long long int) ((/* implicit */int) var_0)))));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    arr_55 [i_9] [i_9] [10ULL] [i_9] [6U] [i_0] = ((/* implicit */unsigned short) ((long long int) arr_26 [i_13] [i_14]));
                    arr_56 [i_9] [i_9] [5U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((signed char)24), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_3)))))))) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) + (((/* implicit */int) arr_8 [i_0] [i_9 - 1] [i_9] [i_14])))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_15 = 2; i_15 < 20; i_15 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (arr_1 [i_0] [i_9])));
                        arr_60 [i_0] [i_0] [18] [i_9] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) * (((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_7)))) << (((((((/* implicit */_Bool) 3494530603U)) ? (((/* implicit */long long int) 3643276280U)) : (1856956152841905051LL))) - (3643276276LL)))))));
                        var_23 = ((/* implicit */signed char) (short)-24675);
                    }
                }
                /* LoopSeq 2 */
                for (unsigned int i_16 = 0; i_16 < 22; i_16 += 1) 
                {
                    var_24 *= ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) -8LL)) : (var_1))))) == (((((/* implicit */_Bool) ((((/* implicit */long long int) 3724721326U)) & (-8864355254712692808LL)))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
                    var_25 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_9 - 1])), (var_8)));
                    var_26 = ((/* implicit */unsigned int) max((var_26), (max((((unsigned int) 3931175838U)), (((/* implicit */unsigned int) var_0))))));
                }
                for (unsigned int i_17 = 0; i_17 < 22; i_17 += 1) 
                {
                    var_27 = ((/* implicit */unsigned int) (unsigned short)27145);
                    arr_66 [(signed char)0] [i_9 - 1] [(signed char)0] [i_9] [i_17] [i_17] = ((/* implicit */short) 8043938313198375465LL);
                }
                var_28 &= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_0] [i_0] [i_0] [i_9 - 1]))))) << (((((/* implicit */long long int) ((int) (unsigned short)35026))) * (((((/* implicit */long long int) ((/* implicit */int) var_5))) / (arr_58 [(unsigned char)4] [(unsigned char)4] [i_0] [(short)15] [i_13])))))));
                arr_67 [i_0] [(short)4] [i_0] [i_13] |= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)44935)) / (((/* implicit */int) (short)-31869))));
            }
            /* LoopSeq 4 */
            /* vectorizable */
            for (signed char i_18 = 0; i_18 < 22; i_18 += 2) 
            {
                arr_70 [i_0] |= ((/* implicit */_Bool) var_5);
                var_29 = ((/* implicit */long long int) var_6);
                /* LoopSeq 3 */
                for (unsigned int i_19 = 0; i_19 < 22; i_19 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_20 = 2; i_20 < 21; i_20 += 4) 
                    {
                        arr_76 [i_0] [i_9 - 1] [i_18] [i_9] = var_7;
                        arr_77 [i_9] [i_19] [i_9] = ((/* implicit */_Bool) ((var_1) | (((/* implicit */unsigned long long int) -264396910))));
                        var_30 = ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15))) : (9910850021800953913ULL))) ^ (((/* implicit */unsigned long long int) ((var_4) - (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_9] [i_9] [i_19])))))));
                        arr_78 [i_9] [i_9] [i_18] = ((/* implicit */_Bool) ((((arr_46 [i_20] [(short)20] [i_18] [15U]) * (((/* implicit */unsigned long long int) -20LL)))) << (((var_4) - (3017915654U)))));
                        arr_79 [(unsigned short)7] [i_9] [i_19] [i_18] [i_9] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_73 [i_9] [i_9] [i_18]))));
                    }
                    /* LoopSeq 4 */
                    for (unsigned int i_21 = 1; i_21 < 21; i_21 += 4) 
                    {
                        var_31 = arr_29 [i_9 - 1] [i_19];
                        arr_83 [i_0] [i_9] [i_18] [i_19] [i_9] [i_21 + 1] [i_21] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 9223372036854775807LL)) >= (var_8)))) < (((/* implicit */int) var_5))));
                        arr_84 [i_21 - 1] [i_9] [(short)13] [7ULL] [(short)8] [i_9] [i_0] = arr_27 [i_9] [i_9] [i_9] [i_9];
                    }
                    for (unsigned int i_22 = 0; i_22 < 22; i_22 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_6))));
                        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((unsigned short) var_9)))));
                        arr_89 [i_9] [i_9 - 1] [i_18] [i_9 - 1] [i_22] [i_22] = ((/* implicit */int) (unsigned short)65535);
                    }
                    for (unsigned int i_23 = 0; i_23 < 22; i_23 += 3) 
                    {
                        var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3)))))));
                        arr_92 [i_9] [(signed char)15] [i_18] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-65))) : (4194303LL))))));
                    }
                    for (long long int i_24 = 4; i_24 < 20; i_24 += 4) 
                    {
                        var_35 -= ((/* implicit */long long int) var_9);
                        var_36 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (((((/* implicit */unsigned long long int) 4)) | (var_9))));
                        arr_95 [i_0] [i_9] [i_18] [i_9] [i_24] = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) * (((unsigned int) 2642310439U)));
                        var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) var_4))));
                    }
                }
                for (unsigned int i_25 = 0; i_25 < 22; i_25 += 4) /* same iter space */
                {
                    arr_99 [i_9] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (1054065875U)));
                    var_38 = ((/* implicit */long long int) max((var_38), (1880544549168978689LL)));
                }
                for (unsigned int i_26 = 0; i_26 < 22; i_26 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_27 = 0; i_27 < 22; i_27 += 3) 
                    {
                        arr_105 [i_0] [(unsigned char)8] [i_18] [i_18] [i_27] &= ((/* implicit */short) (!(arr_6 [i_0] [i_0] [i_26] [i_0])));
                        var_39 = ((/* implicit */unsigned char) ((unsigned int) arr_45 [i_9] [i_9 - 1] [i_9 - 1] [i_9]));
                        arr_106 [i_0] [i_9] [i_18] [i_9] = ((/* implicit */unsigned int) var_7);
                    }
                    arr_107 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) : (var_9)))) ? (9007199254609920LL) : ((-(var_2)))));
                    var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-22169))) ^ (5939071403888457890LL)))) > (var_1))))));
                    arr_108 [i_0] [7LL] [i_9] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned int) (-(3575981299311715656LL))));
                }
            }
            for (long long int i_28 = 3; i_28 < 19; i_28 += 4) 
            {
                var_41 = ((/* implicit */unsigned long long int) 2905923261U);
                var_42 = ((/* implicit */unsigned int) ((unsigned char) max((((((/* implicit */_Bool) (unsigned char)213)) ? (var_9) : (((/* implicit */unsigned long long int) 618013789U)))), (((/* implicit */unsigned long long int) var_0)))));
                var_43 *= ((/* implicit */unsigned int) (unsigned short)30044);
            }
            for (short i_29 = 4; i_29 < 21; i_29 += 4) 
            {
                /* LoopSeq 2 */
                for (long long int i_30 = 0; i_30 < 22; i_30 += 4) 
                {
                    var_44 ^= ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) ((signed char) 15293225040216957467ULL))), (min((var_8), (((/* implicit */unsigned long long int) var_6)))))), (((/* implicit */unsigned long long int) ((short) 4294967295U)))));
                    var_45 = ((/* implicit */_Bool) ((short) ((short) -22)));
                    var_46 = ((/* implicit */short) var_7);
                }
                for (unsigned long long int i_31 = 1; i_31 < 18; i_31 += 2) 
                {
                    arr_118 [i_0] [i_9] [i_29 - 4] [i_9] [i_0] [i_29 - 3] = ((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) var_4)))));
                    var_47 = ((/* implicit */unsigned short) min((var_47), (((/* implicit */unsigned short) var_2))));
                }
                arr_119 [i_9] = ((/* implicit */_Bool) (short)-15517);
                arr_120 [i_29] &= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) -6205708111995875757LL)) ? (9104477677741643693LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23431))))));
            }
            for (unsigned long long int i_32 = 2; i_32 < 21; i_32 += 2) 
            {
                arr_123 [i_9] [1U] [i_9] [i_9] = ((/* implicit */signed char) min((((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) var_7)))))), ((((((((_Bool)1) ? (arr_49 [i_9] [i_9] [(_Bool)1] [14U]) : (arr_61 [i_0] [i_9] [i_9 - 1] [i_32]))) + (9223372036854775807LL))) << ((((-(316569171U))) - (3978398125U)))))));
                var_48 = ((/* implicit */unsigned int) (((-((+(var_3))))) * (((/* implicit */unsigned long long int) ((arr_115 [1ULL] [i_9] [i_0] [i_9] [i_32 - 2]) / (((/* implicit */long long int) ((1485702381U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))));
                arr_124 [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((5591127720773233801LL) | (8543048775375444441LL))) | (((/* implicit */long long int) ((int) var_6))))))));
            }
            var_49 ^= ((/* implicit */_Bool) var_2);
        }
        /* vectorizable */
        for (long long int i_33 = 1; i_33 < 20; i_33 += 2) 
        {
            var_50 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_33 + 1] [13]))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (522240ULL))));
            var_51 = ((/* implicit */unsigned short) max((var_51), (((/* implicit */unsigned short) ((short) (~(((/* implicit */int) (short)32767))))))));
            /* LoopSeq 1 */
            for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
            {
                var_52 = ((/* implicit */unsigned short) (~(-4414301002625006084LL)));
                var_53 = ((/* implicit */short) min((var_53), (((/* implicit */short) (!(((/* implicit */_Bool) arr_126 [i_0] [i_33 - 1])))))));
                var_54 = ((/* implicit */unsigned long long int) min((var_54), (((/* implicit */unsigned long long int) ((unsigned short) var_4)))));
                arr_130 [5] [i_33] [i_33] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
            }
        }
        var_55 = ((/* implicit */unsigned int) var_7);
    }
    var_56 = ((/* implicit */unsigned short) 0U);
    var_57 = ((/* implicit */int) max((((var_3) == (var_9))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (12310376264530860048ULL)))) && (((/* implicit */_Bool) ((int) 2950320647499311627LL)))))));
    var_58 = ((/* implicit */short) max((var_58), (var_0)));
}
