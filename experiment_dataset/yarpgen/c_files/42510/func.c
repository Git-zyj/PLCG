/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42510
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
    for (int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_18 = ((/* implicit */int) min((var_18), ((+(((/* implicit */int) ((unsigned short) arr_2 [i_0 - 1])))))));
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) min((max((((((/* implicit */_Bool) 1447205282)) ? (((/* implicit */unsigned long long int) -1975635468)) : (var_2))), (((arr_3 [i_0]) - (arr_3 [i_0]))))), (((/* implicit */unsigned long long int) ((((unsigned long long int) arr_1 [i_0])) > (var_0)))))))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */_Bool) arr_3 [i_0])) ? (min((((/* implicit */unsigned long long int) max((arr_0 [i_0] [19U]), ((-2147483647 - 1))))), (max((((/* implicit */unsigned long long int) (unsigned short)2253)), (arr_3 [6]))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-6526)) + (((/* implicit */int) (short)6532)))) | (-2050562849))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 4) 
    {
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned char)53)) : (var_6)))) ? (((((/* implicit */_Bool) arr_7 [8ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) : (14126242626099809721ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 2] [i_1])))));
        arr_8 [3] [(unsigned char)11] &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_1 - 2])) <= (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)202)) || (((/* implicit */_Bool) arr_7 [i_1])))))));
        /* LoopSeq 2 */
        for (int i_2 = 1; i_2 < 22; i_2 += 4) 
        {
            arr_11 [i_2] [i_2] [23] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)210)) > (((/* implicit */int) (unsigned char)53))));
            arr_12 [i_2] [23ULL] = ((/* implicit */int) ((arr_7 [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(unsigned char)20])))));
        }
        for (short i_3 = 1; i_3 < 22; i_3 += 4) 
        {
            var_22 = ((((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 2])) >> (((2080768ULL) - (2080768ULL))));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_5 = 2; i_5 < 21; i_5 += 2) 
                {
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24576))) : (16128871543171439880ULL))))));
                    arr_23 [i_1] [0ULL] [6] [i_5] = ((/* implicit */unsigned long long int) var_14);
                }
                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((unsigned char) (unsigned char)53)))));
            }
            var_25 = ((((/* implicit */_Bool) arr_13 [i_3 - 1] [(unsigned char)4])) ? (14096810892372393863ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3 - 1] [(unsigned short)15]))));
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 23; i_6 += 4) 
    {
        for (int i_7 = 2; i_7 < 24; i_7 += 3) 
        {
            {
                var_26 = ((((((/* implicit */_Bool) arr_29 [i_6 - 1] [i_7 - 2])) ? (((/* implicit */int) arr_25 [i_6 - 1] [i_7 - 2])) : (((/* implicit */int) var_4)))) % (arr_29 [i_6 - 1] [i_7 - 2]));
                var_27 ^= ((/* implicit */unsigned long long int) (((+(4294967295U))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_25 [i_6 + 1] [i_6 + 1])) >= (arr_29 [i_7 - 2] [i_7 + 1])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_8 = 1; i_8 < 10; i_8 += 4) 
    {
        for (unsigned int i_9 = 1; i_9 < 12; i_9 += 1) 
        {
            {
                var_28 = ((/* implicit */unsigned char) min((var_28), ((unsigned char)252)));
                arr_37 [i_8] [i_9] [i_8] = ((/* implicit */unsigned char) ((min((arr_7 [i_8 - 1]), (arr_7 [i_8 - 1]))) + (((((/* implicit */_Bool) arr_7 [i_8 - 1])) ? (arr_7 [i_8 + 1]) : (((/* implicit */unsigned long long int) arr_24 [i_8 - 1]))))));
                /* LoopSeq 1 */
                for (unsigned char i_10 = 0; i_10 < 13; i_10 += 1) 
                {
                    arr_40 [i_8] [i_10] [7ULL] = max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_32 [i_8 + 1])) : (min((36028797018963967ULL), (((/* implicit */unsigned long long int) arr_13 [i_8] [i_8])))))), (((((/* implicit */_Bool) arr_18 [i_8 + 1])) ? (2080768ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [5ULL] [8]))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_11 = 0; i_11 < 13; i_11 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (int i_12 = 0; i_12 < 13; i_12 += 4) /* same iter space */
                        {
                            arr_47 [2] [2] [i_11] [i_10] [i_10] [i_9] [2] = ((arr_1 [i_8 + 1]) + (arr_29 [i_8] [21U]));
                            arr_48 [i_8] [i_8] [3] [i_10] [i_12] = ((/* implicit */short) arr_24 [(unsigned char)12]);
                            var_29 = ((/* implicit */unsigned short) var_17);
                            var_30 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) | (12791782851389807750ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_8 + 3] [5]))));
                            arr_49 [i_10] [(unsigned char)2] [12ULL] [i_9] [i_10] = ((/* implicit */unsigned long long int) ((arr_20 [i_8 + 1]) + (((/* implicit */int) (unsigned char)168))));
                        }
                        for (int i_13 = 0; i_13 < 13; i_13 += 4) /* same iter space */
                        {
                            arr_53 [i_10] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */unsigned long long int) arr_26 [i_8]))))) ? (arr_42 [i_9 + 1] [11] [i_9] [i_9 + 1]) : (((/* implicit */int) (unsigned char)3)));
                            var_31 = ((/* implicit */unsigned long long int) -1910477267);
                            var_32 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)40886))));
                            var_33 = ((/* implicit */int) ((arr_39 [i_8 + 2]) & (var_2)));
                        }
                        arr_54 [i_8 + 3] [i_10] [i_8 + 3] = ((/* implicit */int) var_17);
                        var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((arr_33 [i_8 + 1] [i_8 - 1]) <= (arr_33 [i_8] [i_8 + 1]))))));
                        arr_55 [i_8] [i_9] [i_10] [5ULL] [i_10] = ((((/* implicit */_Bool) 513678273)) ? (-292967783) : (arr_26 [i_8]));
                    }
                    for (short i_14 = 0; i_14 < 13; i_14 += 4) /* same iter space */
                    {
                        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((min((7831806901016241037ULL), (((/* implicit */unsigned long long int) arr_10 [i_8] [i_9 - 1] [i_10])))) <= (((/* implicit */unsigned long long int) arr_20 [i_9])))))));
                        var_36 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((-1) % (((/* implicit */int) (unsigned char)88)))) + (2147483647))) >> (((min((((/* implicit */unsigned long long int) (short)-6529)), (var_17))) - (1008939677943781182ULL)))))) != (16127533166252517288ULL)));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_15 = 0; i_15 < 13; i_15 += 1) 
                        {
                            var_37 = ((/* implicit */int) arr_39 [i_8 + 1]);
                            arr_62 [i_8] [i_10] [8] [8] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) % (((/* implicit */int) (unsigned char)136))));
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 3) 
                        {
                            arr_67 [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)252)) <= (((/* implicit */int) arr_18 [19]))));
                            arr_68 [i_10] [1U] [i_10] [i_16] = ((/* implicit */unsigned char) min((((unsigned long long int) 16127533166252517288ULL)), (var_12)));
                            arr_69 [i_8] [i_8] [i_9] [i_10] [i_14] [i_16] [i_16] = ((/* implicit */int) arr_35 [i_8 + 1]);
                        }
                    }
                    for (unsigned long long int i_17 = 2; i_17 < 11; i_17 += 4) 
                    {
                        arr_73 [i_10] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)249)) ? (7ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)167)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_13 [i_9 + 1] [i_9 + 1])) == (((/* implicit */int) arr_13 [i_9 + 1] [i_9 + 1]))))) : (((((/* implicit */int) (unsigned char)254)) ^ (((/* implicit */int) (unsigned char)168)))));
                        arr_74 [i_10] [0ULL] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) : (arr_44 [i_8] [i_9] [i_9])))) ? (max((((/* implicit */unsigned long long int) arr_43 [i_8 + 1] [i_9 + 1] [i_17 - 1])), (arr_64 [i_8 - 1] [i_9 + 1] [i_9 + 1] [i_17 + 1] [i_17 + 1]))) : (arr_64 [i_10] [i_9 + 1] [i_9] [i_17] [i_10])));
                        arr_75 [i_10] [i_10] [i_10] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((arr_0 [i_17 + 2] [i_8]), (((/* implicit */int) arr_22 [i_10]))))) <= (((((/* implicit */unsigned long long int) ((-1547113088) ^ (arr_51 [i_8] [i_8] [i_8] [i_8 + 3] [i_8])))) & (var_10)))));
                        var_38 = ((/* implicit */unsigned long long int) (unsigned char)244);
                        /* LoopSeq 3 */
                        for (unsigned char i_18 = 0; i_18 < 13; i_18 += 3) /* same iter space */
                        {
                            arr_78 [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((3734704390U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)168)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1369399925)))))))) ? (((((/* implicit */_Bool) ((7278444915854386084ULL) ^ (var_17)))) ? (((/* implicit */int) (unsigned char)115)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_18 [i_8])))))) : (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)248))))) || (((/* implicit */_Bool) 10011044831619826332ULL)))))));
                            var_39 = ((/* implicit */unsigned long long int) 292967783);
                            arr_79 [i_8] [0] [0] [i_17] [i_18] [0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_8 + 1])) ? (min((arr_29 [i_10] [i_18]), (((((/* implicit */_Bool) (unsigned char)6)) ? (-198876391) : (((/* implicit */int) var_4)))))) : (((/* implicit */int) ((((/* implicit */int) arr_9 [i_9 - 1] [i_8 + 2])) == (((/* implicit */int) (!(((/* implicit */_Bool) 9829228750548190734ULL))))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_19 = 0; i_19 < 13; i_19 += 3) /* same iter space */
                        {
                            var_40 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_60 [4ULL] [6ULL] [i_8 - 1] [i_9] [i_9 + 1] [i_9])) ? (((/* implicit */int) var_1)) : (-1823513170)));
                            var_41 ^= ((/* implicit */int) ((((/* implicit */_Bool) 294557192)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1073739776ULL)) && (((/* implicit */_Bool) arr_13 [i_9] [i_10])))))) : (arr_64 [i_17 - 2] [12ULL] [(unsigned char)2] [i_9] [i_8 + 1])));
                            arr_82 [i_19] [10ULL] [i_10] [i_9] [i_8] = ((/* implicit */unsigned char) arr_16 [i_17] [i_17 + 2] [i_9 + 1]);
                            var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)87))) : (16123275U)));
                        }
                        for (unsigned char i_20 = 0; i_20 < 13; i_20 += 3) /* same iter space */
                        {
                            arr_86 [i_10] = min((((((/* implicit */_Bool) arr_28 [i_10])) ? (((/* implicit */int) arr_63 [i_8] [(unsigned char)9] [i_10] [i_17] [i_20] [i_9 - 1] [i_17 + 2])) : (arr_28 [i_8 + 2]))), (((arr_28 [i_9 - 1]) / (arr_28 [i_9 - 1]))));
                            arr_87 [i_17] [i_17] [i_10] [9] [i_17 - 2] = ((((((((/* implicit */_Bool) 4294967264ULL)) ? (((/* implicit */int) arr_80 [i_8 + 3] [i_9 - 1] [i_9 + 1] [i_17 - 2] [i_20] [5])) : (((/* implicit */int) arr_80 [i_8 + 3] [i_9 - 1] [i_9 + 1] [i_17 - 2] [i_20] [11ULL])))) + (2147483647))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63932))) == (11423678985426482463ULL))) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) min(((unsigned char)130), ((unsigned char)0)))))));
                            arr_88 [i_10] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_9 - 1] [i_9] [i_9] [i_9 - 1]))) / (3170599862U)))) ? (((/* implicit */int) min(((unsigned short)58159), (((/* implicit */unsigned short) (short)25342))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_80 [i_9] [i_9] [i_9] [i_9 + 1] [i_10] [3])) && (((/* implicit */_Bool) arr_52 [i_8] [i_8] [i_9] [i_9 + 1] [(unsigned char)1])))))));
                        }
                    }
                    for (short i_21 = 0; i_21 < 13; i_21 += 3) 
                    {
                        arr_92 [i_8 + 1] [(unsigned char)1] [i_10] [i_21] [i_10] = ((max((((/* implicit */int) ((((/* implicit */_Bool) -454143880)) && (((/* implicit */_Bool) arr_63 [i_9] [i_9] [i_9 - 1] [(unsigned short)6] [i_9] [i_9 - 1] [i_9]))))), (((arr_42 [i_21] [1] [i_9 + 1] [5ULL]) & (((/* implicit */int) arr_13 [11ULL] [18])))))) | ((+(arr_90 [(short)1] [i_8 + 3] [i_8 - 1] [i_21]))));
                        arr_93 [i_8] [i_9] [i_10] [(unsigned char)12] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)243))) == (var_13)))))) << (((((((/* implicit */_Bool) arr_42 [i_9 + 1] [i_9] [(unsigned char)4] [i_9])) ? (arr_42 [i_9 - 1] [i_9 - 1] [i_9] [i_9]) : (arr_42 [i_9 - 1] [8ULL] [i_9] [i_9]))) - (1049482305)))));
                    }
                    var_43 = ((/* implicit */unsigned char) 1124367414U);
                }
                var_44 = ((/* implicit */int) 7023065088283069149ULL);
                /* LoopSeq 1 */
                for (int i_22 = 1; i_22 < 9; i_22 += 1) 
                {
                    var_45 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6532))) ^ (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)48)) ? (3170599857U) : (1609910986U)))) : (((var_17) & (((/* implicit */unsigned long long int) arr_59 [i_8] [i_9] [i_22] [i_9] [i_8] [i_8]))))))));
                    var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)202)), ((unsigned short)58821)))) - (((/* implicit */int) ((((/* implicit */_Bool) arr_83 [i_8] [i_8] [i_8] [i_8] [6] [i_22] [i_22])) || (((/* implicit */_Bool) (unsigned char)207)))))))))));
                    var_47 = ((18446744073709551615ULL) / (((/* implicit */unsigned long long int) arr_29 [(short)5] [i_9])));
                    var_48 = ((3919480194258841264ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 757424811)) && (((/* implicit */_Bool) 757424806)))))));
                }
            }
        } 
    } 
}
