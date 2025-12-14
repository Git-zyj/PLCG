/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221866
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (var_5) : (((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_1))))) : (var_5)))));
    var_13 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */long long int) ((int) var_0))) / (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_6))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    var_14 = ((/* implicit */signed char) var_10);
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) 10584460416181145307ULL)) ? (min((10584460416181145307ULL), (((/* implicit */unsigned long long int) -1519945009)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))))))));
        var_16 += ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 7862283657528406290ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24452))) : (-9223372036854775786LL)))));
        var_17 = ((/* implicit */unsigned long long int) var_0);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 4) 
    {
        var_18 = ((((/* implicit */_Bool) arr_0 [i_1 + 3] [i_1 + 4])) ? (var_5) : (((/* implicit */long long int) arr_0 [i_1 - 2] [i_1 + 1])));
        var_19 = ((short) ((var_2) ? (((/* implicit */int) (unsigned short)10)) : (arr_3 [i_1])));
        var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775788LL)) ? (7862283657528406290ULL) : (10584460416181145338ULL)));
        arr_5 [i_1 + 4] [(unsigned short)9] = ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_0 [i_1 - 2] [i_1 + 4])));
    }
    for (short i_2 = 3; i_2 < 13; i_2 += 1) /* same iter space */
    {
        arr_9 [11LL] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) -9223372036854775766LL)) && (((/* implicit */_Bool) 16138260530965733554ULL)))))));
        /* LoopSeq 4 */
        for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            /* LoopSeq 4 */
            for (short i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                var_21 = max(((-(arr_10 [i_2] [i_3] [i_2 - 2]))), (max((arr_10 [i_4] [(unsigned short)16] [i_2 + 1]), (var_3))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_5 = 2; i_5 < 16; i_5 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        arr_21 [(unsigned char)12] [i_5] [i_2 - 1] [i_4] [i_2 - 1] [i_2 - 1] = ((/* implicit */unsigned short) (-((((_Bool)1) ? (((/* implicit */long long int) 1015388243)) : (var_5)))));
                        arr_22 [i_6] [i_5] [i_4] [i_3] [16LL] = ((/* implicit */short) ((((/* implicit */_Bool) -842139527)) ? (((/* implicit */int) arr_18 [i_5 - 2] [i_3] [i_4] [(short)6] [i_2])) : (((/* implicit */int) arr_18 [i_5 + 1] [i_3] [i_5 - 2] [i_5] [i_3]))));
                        arr_23 [i_2] [i_5 - 1] [i_3] [i_5 - 2] [i_6] = ((/* implicit */long long int) (+(2614995230U)));
                    }
                    for (long long int i_7 = 1; i_7 < 15; i_7 += 4) 
                    {
                        arr_26 [i_7 + 2] [i_2 - 3] [i_2 - 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_7)));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) (short)-22464))));
                    }
                    arr_27 [i_5] [i_4] [i_3] [i_2 - 3] = ((/* implicit */short) ((var_9) && (((/* implicit */_Bool) arr_12 [i_2 + 3] [i_5 + 1] [i_2]))));
                }
            }
            /* vectorizable */
            for (long long int i_8 = 0; i_8 < 17; i_8 += 1) 
            {
                var_23 -= ((/* implicit */unsigned long long int) var_8);
                arr_31 [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_6)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_11 [i_2] [i_3]))));
                arr_32 [i_8] [i_2] [i_3] [i_2] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)65532))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7862283657528406277ULL)))))) : (((((/* implicit */_Bool) var_7)) ? (10584460416181145355ULL) : (((/* implicit */unsigned long long int) arr_6 [i_2] [i_2 - 2]))))));
            }
            for (unsigned char i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_10 = 0; i_10 < 17; i_10 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 1) 
                    {
                        var_24 -= min((((/* implicit */short) arr_36 [i_2 + 4] [i_11] [i_11] [i_11])), (min((((short) var_8)), (var_8))));
                        var_25 = ((/* implicit */signed char) min((var_5), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) 10584460416181145329ULL))))), (arr_7 [i_2 - 2])))));
                    }
                    arr_41 [i_10] [i_2] [i_3] [i_2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) 885823328U)) ? (((/* implicit */int) (short)19941)) : (-842139527))), (((((/* implicit */_Bool) var_11)) ? (arr_25 [i_9] [i_9] [i_9] [i_2 + 3] [i_2 - 3]) : (arr_25 [i_10] [i_10] [i_10] [i_2 + 3] [i_2 - 3])))));
                    arr_42 [i_10] [i_9] [i_3] [i_2] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_6)) ? ((~(1744337248334744378ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_9] [i_9] [i_9])) ? (((/* implicit */long long int) -842139527)) : (var_6))))))));
                    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((((_Bool) 7862283657528406277ULL)) ? (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [(unsigned short)6] [i_3])))) : (((/* implicit */int) arr_37 [i_3] [i_3] [i_10] [i_2 + 4] [i_9]))))))))));
                    /* LoopSeq 4 */
                    for (signed char i_12 = 0; i_12 < 17; i_12 += 1) 
                    {
                        var_27 -= ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)128)) && (((/* implicit */_Bool) (short)-16425)))));
                        var_28 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)6)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))))))) ? (((((var_2) && (((/* implicit */_Bool) (signed char)15)))) ? (((/* implicit */unsigned long long int) arr_44 [i_2 + 4] [i_2 + 4] [i_2 + 4] [i_10] [i_12])) : (min((2472447336776405271ULL), (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((unsigned char) var_5)), (((/* implicit */unsigned char) var_2))))))));
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 17; i_13 += 4) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_2 - 1])) ? (((((/* implicit */_Bool) var_3)) ? (arr_43 [(short)12] [0LL] [i_9] [i_10] [i_13]) : (-190713993))) : (((/* implicit */int) arr_19 [i_2] [i_2] [i_9] [i_10] [i_10] [i_2 + 1]))));
                        var_30 ^= ((/* implicit */unsigned int) var_8);
                        arr_48 [(short)3] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_45 [i_2] [i_2 + 1] [i_9] [i_10] [i_2 + 1] [i_3] [i_2])) : (((/* implicit */int) arr_45 [i_2 + 3] [i_2 + 1] [i_9] [i_10] [i_13] [i_3] [i_10]))));
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) - (((int) var_8))));
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_39 [i_2 + 2] [i_3]) : (var_7)));
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 17; i_14 += 4) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned short) var_0);
                        var_34 ^= ((/* implicit */unsigned int) var_5);
                    }
                    for (signed char i_15 = 0; i_15 < 17; i_15 += 4) 
                    {
                        var_35 = ((/* implicit */short) min((((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (-1333315385) : (((/* implicit */int) (unsigned char)120))))))), (max((3532366842U), (((/* implicit */unsigned int) (unsigned char)66))))));
                        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775784LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9U)))))) : (7862283657528406312ULL))))));
                    }
                }
                var_37 *= min((min((arr_33 [i_9] [(signed char)7] [i_3] [i_2]), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) min((arr_39 [i_2 - 2] [i_2]), (((/* implicit */unsigned int) var_2))))));
                /* LoopSeq 1 */
                for (unsigned int i_16 = 0; i_16 < 17; i_16 += 1) 
                {
                    var_38 += ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (arr_39 [i_2 - 3] [i_2 - 3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-7214)), (arr_24 [i_9] [i_2 + 4] [i_3] [i_9] [i_2 + 3]))))) : (((((/* implicit */unsigned long long int) arr_25 [i_2 - 3] [i_2] [i_2] [i_2 - 3] [i_2])) & (arr_54 [i_2] [i_2 - 3] [i_2 - 3] [(unsigned short)15])))));
                    var_39 *= ((/* implicit */unsigned char) min((((/* implicit */long long int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) 9223372036854775784LL)) && (((/* implicit */_Bool) (unsigned char)55))))), (arr_34 [i_2 + 3] [i_16] [i_9] [i_3])))), (((((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (var_2))))) & (((((/* implicit */_Bool) 762600478U)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_10)))))));
                }
                var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) (+(max((((/* implicit */long long int) (~(var_7)))), (max((((/* implicit */long long int) (short)29842)), (-5324197457946916391LL))))))))));
                var_41 -= min((var_2), ((!(((/* implicit */_Bool) 732538181U)))));
            }
            for (unsigned long long int i_17 = 1; i_17 < 13; i_17 += 3) 
            {
                arr_60 [i_3] [i_3] [i_3] &= ((/* implicit */int) min((((/* implicit */long long int) min((((unsigned int) var_0)), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6)))))))), (max((arr_33 [i_2] [i_17 - 1] [i_2] [i_2 + 1]), (((/* implicit */long long int) arr_57 [i_2]))))));
                arr_61 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10584460416181145340ULL)) ? (((/* implicit */unsigned long long int) -740032677)) : (18446744073709551597ULL)))) ? (((arr_53 [(unsigned short)0] [i_17 - 1] [i_3] [i_2 + 4] [i_3]) & (((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) (unsigned short)2048)) : (((/* implicit */int) (short)-17257))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_33 [i_2 - 2] [i_17 - 1] [i_17 + 1] [i_17 - 1]))))))));
            }
            var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) ((((/* implicit */int) (unsigned short)7)) & (((/* implicit */int) min((((/* implicit */signed char) var_9)), ((signed char)108)))))))));
            var_43 += ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (unsigned char)128))))));
        }
        for (unsigned long long int i_18 = 0; i_18 < 17; i_18 += 3) 
        {
            var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-17877))) : (470972559U)))) : (max((var_10), (((/* implicit */long long int) var_9)))))), ((((-(var_0))) & (((/* implicit */long long int) ((/* implicit */int) (short)29823))))))))));
            /* LoopSeq 2 */
            for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
            {
                var_45 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))), (((((/* implicit */_Bool) min((1744337248334744354ULL), (16702406825374807238ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) & (((/* implicit */int) var_8))))) : (var_7)))));
                var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_44 [(short)7] [i_2 + 3] [i_19] [i_2 + 4] [i_19 - 1])), (((long long int) var_9))))) && ((!(((/* implicit */_Bool) (short)1))))));
                /* LoopSeq 1 */
                for (signed char i_20 = 1; i_20 < 16; i_20 += 4) 
                {
                    var_47 = ((/* implicit */unsigned int) (-(min((1744337248334744357ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))));
                    var_48 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_51 [i_20 + 1] [i_2 - 3]) : (arr_51 [i_20 + 1] [i_2 - 1])))) ? (min((((/* implicit */unsigned long long int) var_9)), (arr_51 [i_20 - 1] [i_2 + 4]))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)27544)), (-453139066881145115LL)))));
                }
                var_49 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((arr_57 [i_2]) ? (max((1048575LL), (6995217473262008268LL))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_19 [(unsigned char)14] [(unsigned char)14] [i_19] [i_18] [16ULL] [i_19])), (var_1)))))))), (min((min((((/* implicit */unsigned long long int) var_1)), (16702406825374807238ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5792809338541191766LL)) ? (arr_8 [i_18]) : (((/* implicit */int) var_11)))))))));
                var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_29 [i_2 + 4])), (var_0)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)2290))))) : (min((((/* implicit */long long int) arr_29 [i_2 + 1])), (var_6)))));
            }
            for (short i_21 = 0; i_21 < 17; i_21 += 3) 
            {
                var_51 = ((/* implicit */unsigned short) var_8);
                arr_73 [i_18] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_4 [i_2 + 2] [i_2 + 2])))), (((var_9) && (((/* implicit */_Bool) var_3))))));
            }
        }
        /* vectorizable */
        for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_23 = 1; i_23 < 15; i_23 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_24 = 0; i_24 < 17; i_24 += 1) 
                {
                    var_52 = ((/* implicit */long long int) var_4);
                    var_53 = ((/* implicit */int) arr_49 [i_22] [i_23 + 2]);
                    var_54 |= var_2;
                    /* LoopSeq 2 */
                    for (int i_25 = 3; i_25 < 16; i_25 += 4) /* same iter space */
                    {
                        var_55 = ((/* implicit */signed char) min((var_55), (((/* implicit */signed char) (!(((((/* implicit */_Bool) var_1)) && (var_2))))))));
                        arr_82 [i_22 - 1] [i_22 - 1] [i_23 + 2] [i_24] [i_23] [i_24] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_23 + 2] [i_22 - 1])) ? (((/* implicit */long long int) arr_43 [i_23 - 1] [i_22 - 1] [i_23 - 1] [i_24] [i_25 - 3])) : (var_0)));
                    }
                    for (int i_26 = 3; i_26 < 16; i_26 += 4) /* same iter space */
                    {
                        var_56 = ((/* implicit */short) min((var_56), (((/* implicit */short) arr_74 [i_24] [i_22]))));
                        var_57 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) arr_8 [i_22 - 1])) : (var_7)));
                    }
                }
                for (unsigned int i_27 = 2; i_27 < 15; i_27 += 4) 
                {
                    arr_88 [i_23] [i_22] [i_22] [i_23] [i_22] [i_23 + 2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [i_22 - 1])) & (((/* implicit */int) arr_29 [i_22 - 1]))));
                    var_58 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 120653719)) ? (((/* implicit */int) (unsigned char)221)) : (((/* implicit */int) (unsigned char)131))));
                }
                for (short i_28 = 1; i_28 < 15; i_28 += 4) 
                {
                    var_59 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_37 [i_23] [i_23 + 1] [i_28 + 2] [i_28 + 1] [i_28 + 1]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_29 = 1; i_29 < 16; i_29 += 4) 
                    {
                        arr_93 [14LL] [i_22] [i_22] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-121)) && (((/* implicit */_Bool) var_5))));
                        var_60 = ((/* implicit */unsigned short) ((arr_35 [i_28] [i_22 - 1] [i_23]) || (((/* implicit */_Bool) arr_43 [i_2 + 1] [i_22 - 1] [i_22] [i_28] [i_29]))));
                    }
                }
                arr_94 [i_23] [i_22] = ((/* implicit */short) var_9);
                arr_95 [i_23] [i_23 + 1] [i_23] = ((/* implicit */unsigned int) arr_30 [i_23 + 1] [i_2]);
            }
            for (unsigned int i_30 = 0; i_30 < 17; i_30 += 1) 
            {
                var_61 = ((/* implicit */long long int) ((arr_76 [i_2 + 3]) ? (((/* implicit */int) var_1)) : (arr_83 [(unsigned short)14] [i_22 - 1] [(unsigned short)14])));
                /* LoopSeq 1 */
                for (signed char i_31 = 1; i_31 < 16; i_31 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_32 = 0; i_32 < 17; i_32 += 1) /* same iter space */
                    {
                        var_62 = ((/* implicit */unsigned short) max((var_62), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) 1099257220852794125LL))) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) (short)27762)))))));
                        arr_103 [i_32] [i_32] [i_30] [i_31] [i_32] = ((/* implicit */signed char) ((unsigned short) arr_46 [i_30] [i_2 - 3] [i_31 + 1] [i_31]));
                    }
                    for (int i_33 = 0; i_33 < 17; i_33 += 1) /* same iter space */
                    {
                        var_63 = ((/* implicit */short) min((var_63), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65534)) && (((/* implicit */_Bool) 3761896956522644307ULL)))))));
                        arr_106 [i_31] [i_31] [i_30] [(_Bool)1] [(_Bool)1] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_40 [i_2 + 3] [i_22 - 1] [i_33] [i_2 + 3] [i_22 - 1]))));
                        arr_107 [i_31] [i_22 - 1] [i_30] [i_31 + 1] [i_33] = ((/* implicit */int) ((unsigned char) var_8));
                        arr_108 [i_33] [(unsigned short)2] = ((/* implicit */unsigned short) arr_81 [i_2 + 2]);
                        var_64 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-13))) & (var_5)))) && ((!(((/* implicit */_Bool) 5239660995107895761LL))))));
                    }
                    var_65 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                }
            }
            arr_109 [i_22 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_7))) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) arr_28 [i_2 + 1] [i_22 - 1]))));
        }
        for (unsigned char i_34 = 2; i_34 < 15; i_34 += 4) 
        {
            var_66 = ((/* implicit */_Bool) min((var_66), (((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) var_8))) & (arr_75 [i_2 - 2] [i_34]))), (max((arr_75 [i_2 + 2] [i_2 + 2]), (var_6))))))));
            arr_113 [i_2] [i_34] [i_2 - 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1038924296)) ? (((/* implicit */int) (unsigned short)2290)) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) var_4)) ? (var_0) : (arr_102 [i_2 + 3] [i_34 - 2] [i_34 - 2] [i_2 + 3] [i_2 + 3]))) : (((((/* implicit */_Bool) arr_102 [i_34 - 2] [i_34 - 2] [i_34 - 2] [i_2 + 3] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_102 [i_34] [i_34 - 2] [i_34 - 2] [i_2 + 3] [i_2])))));
            arr_114 [i_2] [i_34] [i_2] = ((/* implicit */int) var_6);
        }
        arr_115 [i_2 + 4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65516))) : (((((/* implicit */_Bool) (unsigned short)22415)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)101))) : (var_3)))))) && (((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) var_4)))))));
    }
    for (short i_35 = 3; i_35 < 13; i_35 += 1) /* same iter space */
    {
        var_67 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) -5792809338541191783LL)) && (((/* implicit */_Bool) 5792809338541191765LL))))));
        var_68 = ((/* implicit */int) arr_98 [i_35 + 4] [i_35 + 2] [i_35 + 1]);
        var_69 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_35 + 2] [i_35 + 2] [i_35 + 2])) ? (544331191) : (arr_20 [i_35] [i_35 + 2] [i_35])))) && (((/* implicit */_Bool) ((unsigned char) arr_116 [i_35])))));
        var_70 = ((/* implicit */unsigned char) min((var_70), (((/* implicit */unsigned char) arr_110 [i_35] [i_35]))));
    }
}
