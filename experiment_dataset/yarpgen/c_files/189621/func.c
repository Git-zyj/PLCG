/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189621
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) (_Bool)1))))))));
            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (signed char)-10))));
            arr_5 [i_0] |= ((/* implicit */short) ((unsigned char) ((var_10) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) (_Bool)0)))));
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
            {
                arr_9 [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1 + 4] [i_1 + 3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))));
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 4) 
                {
                    var_17 = ((/* implicit */unsigned long long int) var_11);
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_7 [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (((arr_7 [(short)23] [(unsigned char)23] [13U] [(unsigned short)12]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_2] [i_3 + 3]))))))))));
                    var_19 |= ((/* implicit */unsigned int) ((short) 5183835752920940292ULL));
                    arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) var_10);
                }
                arr_13 [i_2] [(signed char)8] [i_2] = ((/* implicit */unsigned short) var_6);
                arr_14 [(unsigned char)17] [(unsigned char)17] [i_1 - 1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) -929908360))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_4 [i_1 - 1]))));
            }
            for (long long int i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    arr_21 [i_0] [i_0] [i_1 + 1] [(signed char)11] = ((/* implicit */unsigned int) (short)2433);
                    var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_1 + 2])) || (((/* implicit */_Bool) (unsigned short)37022))));
                }
                for (int i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    var_21 = ((unsigned short) var_9);
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned char) (unsigned short)28514);
                        var_23 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) 2641094863U))) % (((/* implicit */int) arr_3 [i_4] [i_1] [i_4]))));
                    }
                    for (unsigned int i_8 = 1; i_8 < 20; i_8 += 3) 
                    {
                        arr_30 [(unsigned short)12] [(unsigned char)6] [i_6] [i_8 + 4] = ((/* implicit */unsigned int) (unsigned short)28513);
                        var_24 = ((/* implicit */unsigned long long int) ((arr_27 [i_8 + 4]) / (arr_27 [i_8 + 3])));
                        arr_31 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)235)) * (((/* implicit */int) (signed char)0))))));
                    }
                    arr_32 [i_1 + 2] [i_1 + 2] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28496))) : (arr_8 [i_0] [i_1] [i_4] [i_6])));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 3) 
                {
                    for (short i_10 = 2; i_10 < 23; i_10 += 2) 
                    {
                        {
                            arr_37 [i_10] = ((/* implicit */unsigned char) (-((~(arr_24 [i_10] [i_9] [i_4] [i_0] [i_1 - 1] [i_0] [i_0])))));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (arr_3 [i_0] [i_0] [i_0])));
                            arr_38 [i_0] [i_1] [i_4] [i_0] [i_10] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (2760920765U)))));
                            var_26 = ((((/* implicit */int) var_0)) - (((/* implicit */int) var_5)));
                            arr_39 [i_0] [i_1 - 2] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((2364512070U) >> (((((/* implicit */int) (signed char)-20)) + (39))))) >> (((((/* implicit */int) (unsigned short)65529)) - (65520)))));
                        }
                    } 
                } 
                arr_40 [i_0] [i_0] [i_4] = ((/* implicit */unsigned long long int) arr_26 [i_0] [i_1 + 3] [i_1 + 1] [i_4] [i_1 + 2] [i_4]);
            }
        }
        /* vectorizable */
        for (unsigned char i_11 = 0; i_11 < 24; i_11 += 1) 
        {
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_6 [i_0] [(signed char)5] [i_11] [i_11])) - (arr_16 [i_0] [i_0] [i_11])));
            arr_44 [i_0] [(signed char)22] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((5563829737865083692LL) | (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) % (arr_24 [i_0] [i_0] [i_0] [(unsigned char)3] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)37042)))))));
        }
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(15103480739473764629ULL)))) ? (((((((/* implicit */_Bool) arr_35 [i_0] [i_0] [1ULL] [i_0] [(unsigned char)11] [i_0])) ? (((/* implicit */int) (signed char)101)) : (((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0] [i_0])))) * (((int) (unsigned short)37028)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)37042)))))));
        /* LoopNest 2 */
        for (signed char i_12 = 0; i_12 < 24; i_12 += 4) 
        {
            for (int i_13 = 2; i_13 < 23; i_13 += 2) 
            {
                {
                    var_29 = ((/* implicit */short) min((((/* implicit */long long int) ((((57121033) + (((/* implicit */int) arr_50 [i_0] [i_0] [i_12] [i_0])))) - ((-(((/* implicit */int) arr_20 [12LL] [(unsigned char)15] [(short)13]))))))), (((long long int) min((((/* implicit */unsigned short) var_1)), (arr_26 [i_0] [i_13 - 2] [15LL] [i_12] [i_12] [i_0]))))));
                    var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (unsigned char)3))));
                    arr_52 [9LL] [(short)14] [i_12] [i_13] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_13] [i_13 - 1] [i_13] [i_13] [i_13 - 1] [i_13] [i_13 + 1]))) > (max((((/* implicit */unsigned long long int) arr_29 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 - 2] [5ULL] [i_13 + 1])), (arr_25 [i_13] [i_13 - 1] [i_13 - 2] [i_13] [i_13 - 2])))));
                }
            } 
        } 
        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) max((((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) - (((/* implicit */int) var_12))))) / (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned int) var_8)))))));
    }
    var_32 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (long long int i_14 = 0; i_14 < 25; i_14 += 3) 
    {
        for (unsigned short i_15 = 1; i_15 < 24; i_15 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (short i_16 = 1; i_16 < 23; i_16 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_17 = 1; i_17 < 21; i_17 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_18 = 3; i_18 < 22; i_18 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned long long int) (unsigned short)37042);
                            var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) arr_64 [i_18] [i_18] [i_18 + 2] [i_16 - 1] [i_18 + 1] [i_17 - 1] [i_18 - 3]))));
                        }
                        /* LoopSeq 2 */
                        for (int i_19 = 0; i_19 < 25; i_19 += 2) /* same iter space */
                        {
                            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_64 [i_17 + 3] [i_17] [i_15 + 1] [i_16 - 1] [i_15 + 1] [i_15 + 1] [i_15 + 1])) | (((/* implicit */int) arr_55 [i_16 + 1])))) * (((((/* implicit */_Bool) arr_55 [i_16 + 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_55 [i_16 - 1])))))))));
                            var_36 = ((/* implicit */unsigned short) ((max((((/* implicit */int) arr_58 [i_14] [i_14] [22LL] [i_14])), (((((/* implicit */int) arr_61 [i_15] [8U] [i_19])) << (((((/* implicit */int) (unsigned char)201)) - (186))))))) << ((((((~(((((/* implicit */_Bool) arr_67 [i_14] [i_14] [i_14] [i_14] [(short)1] [i_14] [i_14])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_64 [i_14] [i_15] [i_14] [i_16] [i_17] [i_17] [(signed char)12])))))) + (27))) - (25)))));
                        }
                        /* vectorizable */
                        for (int i_20 = 0; i_20 < 25; i_20 += 2) /* same iter space */
                        {
                            var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) ((unsigned char) arr_64 [i_17 + 2] [i_17 + 3] [i_16 + 2] [i_15 + 1] [i_15 - 1] [i_15 + 1] [i_15 + 1])))));
                            arr_70 [i_14] [i_20] [i_17] [i_14] [i_20] |= ((/* implicit */short) ((((/* implicit */_Bool) ((12U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15)))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(var_3))))));
                            var_38 = ((/* implicit */long long int) ((int) var_5));
                        }
                        var_39 = (+(((/* implicit */int) ((max((7634502409653873015LL), (((/* implicit */long long int) (signed char)3)))) >= (((/* implicit */long long int) ((/* implicit */int) max((arr_55 [i_17]), (((/* implicit */unsigned short) (short)32436))))))))));
                        var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 7U)))) ? (((/* implicit */int) arr_59 [i_16] [i_16 - 1])) : (((/* implicit */int) ((unsigned char) (unsigned short)33982)))))) || (((/* implicit */_Bool) arr_68 [i_14] [i_15] [(unsigned char)2] [(unsigned char)2] [i_15 - 1] [i_15] [7ULL]))));
                        var_41 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_67 [i_16 - 1] [i_16] [i_16 + 1] [(short)17] [i_16] [i_16 + 2] [i_16])) ? (((/* implicit */int) arr_67 [i_16 + 1] [(signed char)20] [i_16] [i_16 + 1] [i_16 - 1] [i_16] [(short)20])) : (((/* implicit */int) arr_59 [i_16 - 1] [i_15 + 1]))))));
                    }
                    var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) min((var_7), (((/* implicit */short) var_11)))))));
                }
                for (unsigned short i_21 = 0; i_21 < 25; i_21 += 3) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) /* same iter space */
                    {
                        var_43 ^= ((/* implicit */int) max((min((((/* implicit */unsigned short) var_8)), (arr_76 [(unsigned char)16] [i_22] [i_22 - 1] [(unsigned char)16]))), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_4)) || (var_11))), ((((_Bool)1) || (((/* implicit */_Bool) arr_60 [i_14] [i_15] [i_21] [i_22 - 1])))))))));
                        var_44 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_68 [i_14] [i_14] [i_15] [i_15] [i_21] [i_21] [i_22])))) >= ((~(2130706432U)))));
                    }
                    for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) /* same iter space */
                    {
                        var_45 = ((/* implicit */unsigned short) var_7);
                        arr_82 [i_14] [i_15] [i_21] [(unsigned char)11] [i_15] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(-7634502409653873026LL))) * (((/* implicit */long long int) ((/* implicit */int) arr_64 [i_14] [(short)0] [i_21] [i_23] [(unsigned short)8] [1ULL] [i_21])))))) ? (((/* implicit */long long int) max((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)0)), (var_12)))), (((((/* implicit */int) (signed char)117)) - (1334034273)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_23])) ? (((/* implicit */int) (short)15)) : (((/* implicit */int) (unsigned char)98))))) ? (((long long int) -1)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)31))))))))));
                        var_46 = ((/* implicit */short) min((var_46), (((/* implicit */short) (~(((((/* implicit */int) (signed char)3)) >> (((((/* implicit */int) arr_67 [21] [i_15] [i_23 - 1] [i_23] [i_15 - 1] [21] [i_15 - 1])) - (47))))))))));
                        arr_83 [i_23] = ((_Bool) (+(((((/* implicit */int) var_13)) - (((/* implicit */int) var_6))))));
                    }
                    for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) /* same iter space */
                    {
                        var_47 = ((/* implicit */unsigned int) min((var_47), (((/* implicit */unsigned int) (signed char)0))));
                        arr_88 [i_24] [i_15 - 1] [(unsigned short)17] [(short)19] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_13), ((short)-14385)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) && (((/* implicit */_Bool) 2130706432U)))))) : (min((3493117615095269107ULL), (var_4)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_81 [i_24 - 1] [i_14])) ? (((((/* implicit */_Bool) (unsigned short)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)101))) : (14953626458614282484ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) arr_69 [i_14] [i_14] [i_15 - 1] [i_21] [(_Bool)1])))))))))));
                        arr_89 [i_24] [i_15] [i_15] = (~(((((/* implicit */_Bool) ((((/* implicit */int) (signed char)15)) ^ (((/* implicit */int) arr_78 [i_24 - 1] [i_24 - 1] [i_24 - 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) ^ (2164260867U)))) : (((((/* implicit */_Bool) 956146348)) ? (12788294612544393606ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
                        var_48 = ((/* implicit */unsigned int) min((var_48), (((/* implicit */unsigned int) arr_64 [(unsigned short)8] [13ULL] [(unsigned short)8] [(unsigned short)8] [i_24 - 1] [i_24] [i_24 - 1]))));
                        arr_90 [i_14] [22] [i_21] [i_24] = max((((2164260852U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 956146339)) && (((/* implicit */_Bool) 10627301269662804782ULL))))));
                    }
                    for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) /* same iter space */
                    {
                        var_49 -= arr_91 [16U] [i_15 - 1] [i_21] [(unsigned short)3];
                        var_50 = ((/* implicit */unsigned long long int) var_3);
                        var_51 = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_63 [4LL])) != (((/* implicit */int) var_11)))))) * (arr_75 [18LL])))));
                    }
                    arr_95 [i_14] [i_14] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-22478))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_26 = 0; i_26 < 25; i_26 += 3) 
                    {
                        for (signed char i_27 = 2; i_27 < 24; i_27 += 4) 
                        {
                            {
                                var_52 = ((/* implicit */signed char) max((var_52), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((1941765947957021141LL) > (((/* implicit */long long int) ((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_100 [i_14] [i_15] [i_21] [i_21] [i_15])) : (((/* implicit */int) (unsigned short)20372))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)130))))) ? (((((/* implicit */int) (signed char)84)) + (((/* implicit */int) arr_73 [i_14] [7ULL] [i_21] [i_14])))) : (((/* implicit */int) var_1)))) : (((/* implicit */int) var_1)))))));
                                arr_103 [i_14] [i_14] [i_14] = ((/* implicit */unsigned long long int) 956146364);
                            }
                        } 
                    } 
                }
                for (unsigned int i_28 = 0; i_28 < 25; i_28 += 4) 
                {
                    var_53 -= ((/* implicit */unsigned long long int) arr_86 [15] [i_15 - 1]);
                    arr_106 [i_28] [i_15 + 1] [i_15 + 1] [i_14] = ((/* implicit */unsigned short) arr_71 [i_15 - 1]);
                }
                var_54 = ((/* implicit */unsigned char) var_3);
                var_55 = ((/* implicit */unsigned char) max((var_55), (((/* implicit */unsigned char) ((((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)17)), (var_12)))) & (((((/* implicit */_Bool) arr_100 [i_14] [4ULL] [i_14] [i_15] [8LL])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9)))))) & (((/* implicit */int) arr_74 [i_14] [i_14] [i_14] [2])))))));
            }
        } 
    } 
    var_56 = ((/* implicit */long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_2))));
}
