/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220883
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
    var_15 = ((/* implicit */unsigned long long int) min((var_15), ((((!(((/* implicit */_Bool) 13361593241943079861ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)165))) : ((+(1116892707587883008ULL)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) min((var_12), (((/* implicit */short) (!(((/* implicit */_Bool) 496ULL)))))));
        var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-102))));
            arr_5 [i_0] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) ((signed char) ((_Bool) 921805184151376945ULL)));
            var_18 = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0]))));
        }
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            var_19 = ((/* implicit */_Bool) (unsigned char)95);
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [(signed char)8])) ? (((((/* implicit */int) arr_0 [(_Bool)1])) << (((40356865697620100ULL) - (40356865697620080ULL))))) : (((/* implicit */int) ((unsigned short) var_8))))))));
                var_21 = ((/* implicit */_Bool) ((short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)90))) & (40356865697620100ULL))))));
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [(signed char)4] [i_2] [i_0]))) - (arr_7 [i_3]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)165)))))));
            }
            for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_5 = 3; i_5 < 9; i_5 += 4) 
                {
                    var_23 *= ((/* implicit */short) ((((/* implicit */int) (unsigned char)97)) | ((-(((/* implicit */int) var_10))))));
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_13))) ? (((/* implicit */int) ((signed char) var_8))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(13731654362970460637ULL)))))))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_6 = 3; i_6 < 9; i_6 += 4) 
                {
                    var_25 = ((/* implicit */unsigned long long int) ((14249837338995307226ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)166)))));
                    arr_17 [i_0] [i_0] [i_0] [i_0] [(unsigned short)8] [(unsigned short)8] = (signed char)-122;
                    arr_18 [i_0] [1ULL] [i_0] = ((unsigned long long int) arr_16 [i_0] [i_2] [i_6 + 2] [i_0]);
                    var_26 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 389779479891525599ULL)) ? (40356865697620100ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-41))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-84)))));
                }
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    var_27 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */_Bool) (short)23331)) ? (4196906734714244389ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3295)))))));
                    var_28 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) / (max((14249837338995307227ULL), ((+(4196906734714244407ULL))))));
                    var_29 += ((/* implicit */short) (+(min((((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */int) arr_11 [i_4] [i_2] [i_4] [i_7 + 1])) : (((/* implicit */int) var_12)))), (((/* implicit */int) ((signed char) (unsigned char)164)))))));
                }
            }
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_8 = 3; i_8 < 10; i_8 += 2) 
        {
            var_30 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [(short)2])) / (((/* implicit */int) var_14))));
            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_11 [i_8 - 3] [i_8] [i_8] [i_8]))));
            /* LoopSeq 2 */
            for (signed char i_9 = 1; i_9 < 8; i_9 += 3) /* same iter space */
            {
                var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) arr_11 [i_8 - 3] [i_8 - 1] [i_8 - 2] [i_8 - 1]))));
                /* LoopSeq 2 */
                for (signed char i_10 = 4; i_10 < 8; i_10 += 1) 
                {
                    arr_30 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_9))));
                    arr_31 [i_0] [(short)7] [i_8] [i_0] = ((signed char) ((((/* implicit */int) (unsigned short)37619)) | (((/* implicit */int) (unsigned char)87))));
                }
                for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 2) 
                {
                    arr_34 [i_11] [i_9 + 3] [i_8] [i_11] &= ((/* implicit */signed char) ((unsigned long long int) (unsigned char)172));
                    /* LoopSeq 3 */
                    for (signed char i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
                        arr_37 [(unsigned char)7] [i_0] [(short)9] = ((/* implicit */signed char) ((short) (short)3297));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        arr_40 [i_0] = (short)18635;
                        var_34 *= ((/* implicit */short) (signed char)127);
                        var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_11])))))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 11; i_14 += 3) 
                    {
                        var_36 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_21 [i_8 - 1] [i_8 - 3] [i_8]))));
                        var_37 = ((/* implicit */short) arr_27 [i_8 - 1] [i_9 + 1] [i_9 + 1] [i_9 + 1]);
                        arr_44 [i_0] = (((~(4196906734714244372ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [1ULL] [1ULL] [1ULL])) ? (((/* implicit */int) (short)-29497)) : (((/* implicit */int) var_4))))));
                    }
                }
                /* LoopSeq 2 */
                for (signed char i_15 = 0; i_15 < 11; i_15 += 1) 
                {
                    var_38 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_14)))))));
                    arr_49 [i_0] [i_8 - 2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) (short)14504)))));
                    var_39 += ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)0))));
                }
                for (short i_16 = 0; i_16 < 11; i_16 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_17 = 0; i_17 < 11; i_17 += 4) 
                    {
                        var_40 = arr_38 [i_0];
                        var_41 = ((/* implicit */signed char) min((var_41), (var_8)));
                    }
                    for (short i_18 = 0; i_18 < 11; i_18 += 2) 
                    {
                        var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)91)) && (((/* implicit */_Bool) var_14)))))));
                        var_43 = ((/* implicit */signed char) arr_19 [i_8]);
                    }
                    var_44 += ((/* implicit */unsigned short) (-(11536217288291794696ULL)));
                }
                var_45 *= ((/* implicit */signed char) (-(((((/* implicit */int) var_5)) | (((/* implicit */int) var_12))))));
            }
            for (signed char i_19 = 1; i_19 < 8; i_19 += 3) /* same iter space */
            {
                var_46 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)3286))));
                arr_62 [i_0] [i_8] [(short)3] = ((/* implicit */short) (signed char)-3);
                var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) (~(((/* implicit */int) arr_59 [i_8] [(unsigned short)5] [i_8 - 2] [i_8 - 3] [i_8 - 2] [i_19 + 1])))))));
            }
            /* LoopSeq 1 */
            for (unsigned char i_20 = 2; i_20 < 10; i_20 += 3) 
            {
                var_48 = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_0] [i_0] [(signed char)9] [i_0] [i_8 - 1]))) : (var_0));
                var_49 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)14411))));
                /* LoopSeq 1 */
                for (unsigned char i_21 = 1; i_21 < 10; i_21 += 3) 
                {
                    var_50 = ((/* implicit */unsigned short) arr_53 [i_0] [i_0] [(unsigned char)5] [i_21]);
                    var_51 = ((/* implicit */short) min((var_51), (((/* implicit */short) ((((/* implicit */_Bool) arr_39 [(short)4] [i_8] [i_8] [(short)4] [i_0])) ? (((/* implicit */int) arr_67 [i_0] [i_8 - 2] [i_8 - 2] [i_0] [i_0] [i_21 - 1])) : (((/* implicit */int) (signed char)-79)))))));
                    var_52 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-14155)) ? (((/* implicit */int) (short)14162)) : (((/* implicit */int) var_7)))) >= (((/* implicit */int) (signed char)52))));
                }
                /* LoopSeq 3 */
                for (unsigned short i_22 = 0; i_22 < 11; i_22 += 4) 
                {
                    var_53 ^= (((!((_Bool)1))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_0] [i_22] [i_8] [6ULL] [i_22] [i_22])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)91))))));
                    arr_72 [i_0] [i_20] [i_0] = ((/* implicit */short) (+(((/* implicit */int) (short)-21380))));
                }
                for (short i_23 = 0; i_23 < 11; i_23 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_24 = 2; i_24 < 10; i_24 += 3) 
                    {
                        var_54 = ((/* implicit */short) var_3);
                        var_55 = ((/* implicit */signed char) 11536217288291794721ULL);
                    }
                    var_56 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)56))));
                }
                for (short i_25 = 0; i_25 < 11; i_25 += 1) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (short i_26 = 1; i_26 < 9; i_26 += 2) 
                    {
                        arr_83 [i_0] [i_0] [i_8 - 3] [i_8 - 3] [(signed char)2] [i_0] = ((/* implicit */short) (signed char)-124);
                        var_57 *= ((((/* implicit */_Bool) var_1)) ? (arr_15 [i_26 + 1] [i_20 + 1] [i_8 - 3]) : (6910526785417756917ULL));
                    }
                    for (signed char i_27 = 0; i_27 < 11; i_27 += 4) 
                    {
                        var_58 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_1))));
                        var_59 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_8 - 1] [i_8] [i_27] [(signed char)0] [i_0]))) <= (var_0)));
                        var_60 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_7))));
                    }
                    for (unsigned short i_28 = 1; i_28 < 10; i_28 += 1) 
                    {
                        var_61 *= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                        var_62 = ((/* implicit */unsigned short) var_12);
                    }
                    for (unsigned short i_29 = 0; i_29 < 11; i_29 += 3) 
                    {
                        var_63 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (+(((/* implicit */int) (short)(-32767 - 1))))))));
                        var_64 = var_11;
                    }
                    var_65 = ((/* implicit */signed char) arr_48 [4ULL] [(short)3] [i_0] [(_Bool)1]);
                    var_66 = ((/* implicit */short) (-(((/* implicit */int) (short)21380))));
                    var_67 = (!(((/* implicit */_Bool) arr_8 [i_8 - 3] [i_8] [i_20])));
                    arr_94 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_4))));
                }
            }
        }
        for (short i_30 = 1; i_30 < 7; i_30 += 1) 
        {
            var_68 ^= ((/* implicit */signed char) ((((((((/* implicit */_Bool) (short)-21380)) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) var_10)))) < ((+(((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - ((~(var_0)))))));
            var_69 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_30]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (short)21391))))))) : ((-(max((var_0), (var_0)))))));
        }
        for (signed char i_31 = 2; i_31 < 10; i_31 += 4) 
        {
            var_70 = ((/* implicit */unsigned char) max((var_70), (((/* implicit */unsigned char) var_12))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_32 = 1; i_32 < 8; i_32 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_33 = 0; i_33 < 11; i_33 += 3) 
                {
                    var_71 = ((/* implicit */_Bool) (unsigned char)83);
                    var_72 -= ((/* implicit */short) ((((/* implicit */_Bool) (short)28990)) ? (((/* implicit */int) arr_46 [i_32 + 2] [i_31] [i_32] [(short)0] [i_32] [(signed char)0])) : (((/* implicit */int) var_5))));
                    var_73 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (short)21380))));
                }
                var_74 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)30824)) ? ((-(var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_31 - 2] [i_0])) || (((/* implicit */_Bool) arr_101 [i_32 + 2]))))))));
                var_75 = ((/* implicit */_Bool) min((var_75), (((/* implicit */_Bool) (+(((/* implicit */int) (short)-28357)))))));
                arr_106 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_21 [i_31 - 2] [i_31 - 2] [i_32 + 3]))));
            }
            arr_107 [i_0] [i_0] = ((unsigned short) (signed char)104);
            var_76 *= ((/* implicit */unsigned long long int) (signed char)-60);
        }
        arr_108 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) var_9)))));
    }
    for (short i_34 = 0; i_34 < 23; i_34 += 2) 
    {
        var_77 ^= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_110 [i_34])) : (((/* implicit */int) var_8)))));
        arr_111 [i_34] = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_109 [i_34]))))));
        arr_112 [(signed char)7] = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_110 [i_34])))), (((((/* implicit */int) (signed char)89)) ^ (((/* implicit */int) var_2))))));
    }
}
