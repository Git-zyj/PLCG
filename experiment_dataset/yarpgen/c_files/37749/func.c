/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37749
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
    var_15 &= ((/* implicit */signed char) ((max((((var_8) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) 4294967292U)))) > (((/* implicit */unsigned long long int) min((((/* implicit */int) var_13)), (((var_9) - (var_5))))))));
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */int) ((signed char) var_7))) : (((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */int) var_13))))))) != (((unsigned long long int) 4294967290U)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((unsigned short) ((short) ((arr_1 [i_0]) > (arr_1 [i_0]))))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            arr_4 [(unsigned short)3] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((-(min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (min((((/* implicit */unsigned int) (signed char)-4)), (4294967294U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                arr_7 [i_0] [(short)11] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-704))) : (13U)));
                arr_8 [i_0] [i_0] [i_2] [i_2] = ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) var_4)), (4U)))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0])) : (arr_1 [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))));
                var_18 = max((arr_1 [i_0]), (((unsigned long long int) arr_6 [i_0] [i_0] [i_1] [i_2])));
            }
            arr_9 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */short) (signed char)-56)), ((short)32767))))))) ? (((/* implicit */int) ((short) arr_1 [i_1]))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) && (((/* implicit */_Bool) var_11)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_6 [(short)14] [(short)14] [i_0] [(short)14])) : (var_12)))))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (short i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (short i_4 = 1; i_4 < 13; i_4 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        arr_18 [i_3] [i_5] = ((/* implicit */unsigned short) arr_0 [3ULL]);
                        var_19 += ((/* implicit */unsigned short) ((4294967294U) % (((/* implicit */unsigned int) 1232641302))));
                        arr_19 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-26))))) ? (10311456877280982199ULL) : (((/* implicit */unsigned long long int) ((4294967262U) + (arr_2 [i_1] [i_3] [i_4]))))));
                    }
                    arr_20 [i_3] [i_3] [i_3] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)113)))))));
                }
                for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    arr_23 [i_0] [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) arr_10 [i_3] [i_3] [(short)0] [i_3]))));
                    /* LoopSeq 2 */
                    for (signed char i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_7] &= ((/* implicit */unsigned long long int) ((arr_1 [i_3]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                        arr_28 [i_0] [i_3] [4] [i_3] [i_6] [i_7] = ((short) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [(unsigned short)13] [i_0] [i_3]))));
                        arr_29 [i_3] [i_1] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((arr_2 [13] [i_3] [i_6]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_3] [i_3] [i_6])))));
                        var_20 &= ((/* implicit */short) (-((-(18U)))));
                    }
                    for (signed char i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        arr_32 [(signed char)12] [(signed char)12] [(unsigned short)2] [(signed char)12] [(unsigned short)2] |= ((/* implicit */unsigned long long int) var_1);
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_30 [i_0] [i_1] [i_1] [12] [i_8]))));
                        arr_33 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_3] [i_3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_14 [i_3] [(short)13])))) : (((((/* implicit */unsigned long long int) 1725686113)) - (arr_1 [i_0])))));
                    }
                    /* LoopSeq 1 */
                    for (short i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        arr_37 [i_0] [i_3] [i_0] [i_3] [i_0] = ((/* implicit */signed char) (-(((((((/* implicit */int) var_4)) + (2147483647))) >> (((1213975168) - (1213975144)))))));
                        var_22 -= ((/* implicit */unsigned long long int) ((signed char) (-(((/* implicit */int) arr_21 [i_0] [12ULL] [2ULL] [2ULL])))));
                        arr_38 [i_3] [i_3] [i_3] [i_3] [i_3] = ((((/* implicit */int) ((unsigned short) var_12))) + (480502386));
                        arr_39 [i_0] [i_1] [i_3] [i_6] [i_9] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_0] [i_1] [i_3] [i_6] [i_9])))))));
                    }
                }
                var_23 = (~(arr_31 [(short)0] [i_1] [14] [i_1] [i_1]));
            }
            for (short i_10 = 0; i_10 < 16; i_10 += 1) /* same iter space */
            {
                arr_42 [i_0] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) arr_13 [(signed char)5] [i_0] [i_10] [i_10] [i_10])), ((short)-5484)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) 4294967286U)) ? (3U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)92)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_12))))))) : (((((/* implicit */_Bool) min((arr_1 [(short)8]), (((/* implicit */unsigned long long int) var_2))))) ? (max((((/* implicit */unsigned int) arr_21 [i_0] [i_10] [6ULL] [i_10])), (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((18132400223859056824ULL) != (((/* implicit */unsigned long long int) var_5))))))))));
                arr_43 [i_0] [i_10] [i_1] [i_10] = ((/* implicit */signed char) (short)27835);
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_10] [i_10] [i_10])) ? (max((min((((/* implicit */unsigned int) arr_36 [i_0] [i_10])), (arr_22 [i_0] [i_0] [i_1] [i_10] [(short)5]))), (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) / (arr_31 [i_1] [(unsigned short)4] [i_10] [4] [i_1])))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_10] [i_0])))));
                arr_44 [i_10] = (i_10 % 2 == zero) ? (min((((((arr_31 [3] [i_0] [i_10] [i_10] [3]) + (2147483647))) >> (((((/* implicit */int) arr_11 [i_10] [i_1] [i_1])) - (47950))))), (((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_10] [i_0] [i_0])) ? (arr_31 [i_0] [(signed char)13] [i_10] [i_10] [i_10]) : (arr_31 [i_0] [i_0] [i_10] [i_0] [i_0]))))) : (min((((((arr_31 [3] [i_0] [i_10] [i_10] [3]) + (2147483647))) >> (((((((/* implicit */int) arr_11 [i_10] [i_1] [i_1])) - (47950))) - (16579))))), (((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_10] [i_0] [i_0])) ? (arr_31 [i_0] [(signed char)13] [i_10] [i_10] [i_10]) : (arr_31 [i_0] [i_0] [i_10] [i_0] [i_0])))));
            }
            for (short i_11 = 0; i_11 < 16; i_11 += 1) /* same iter space */
            {
                var_25 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_1] [(signed char)12]))) : (max((min((var_8), (((/* implicit */unsigned long long int) (short)0)))), (((/* implicit */unsigned long long int) arr_17 [i_0] [(signed char)0] [i_0] [12U] [i_0]))))));
                var_26 *= max((min((arr_25 [i_0] [i_1] [i_1] [14ULL] [i_11]), (arr_25 [i_0] [i_0] [i_1] [6] [i_11]))), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_0] [i_1] [2] [(short)4] [(signed char)2] [i_11] [i_11])) || (((/* implicit */_Bool) var_0))))));
                arr_47 [i_11] [i_1] [i_1] [(short)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) (short)14336)) : (1213975168)))) || (((/* implicit */_Bool) max((arr_45 [i_0] [i_0] [i_11]), (((/* implicit */int) arr_11 [i_11] [i_1] [i_1])))))));
                /* LoopSeq 1 */
                for (signed char i_12 = 0; i_12 < 16; i_12 += 1) 
                {
                    arr_52 [i_11] = ((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((signed char) arr_34 [i_11] [i_11]))));
                    arr_53 [i_11] = ((/* implicit */short) ((1110926154) >= (((/* implicit */int) ((signed char) ((((((/* implicit */int) var_13)) + (2147483647))) << (((((((/* implicit */int) (short)(-32767 - 1))) + (32795))) - (27)))))))));
                }
            }
            /* vectorizable */
            for (int i_13 = 0; i_13 < 16; i_13 += 2) 
            {
                var_27 = ((/* implicit */short) arr_51 [i_13] [(unsigned short)8] [i_13] [i_1] [i_13] [i_13]);
                arr_56 [i_13] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_24 [i_0] [i_13]))))) - (arr_16 [i_13] [i_1] [i_1] [i_13] [i_1] [i_1] [i_1])));
                arr_57 [i_0] [i_1] [i_13] = ((/* implicit */signed char) var_8);
                var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)14336)) ^ (((/* implicit */int) (signed char)31)))))));
            }
        }
        for (unsigned short i_14 = 3; i_14 < 13; i_14 += 2) 
        {
            var_29 = ((/* implicit */unsigned int) arr_12 [i_14]);
            var_30 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) % (4294967273U)))) ? (arr_2 [i_0] [i_14] [i_14]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_60 [i_0] [i_0] [i_0])))))))) ? (((/* implicit */unsigned long long int) (-(max((2052834470), (((/* implicit */int) arr_48 [(signed char)6] [i_14] [i_14] [i_14] [i_14 - 2] [i_14]))))))) : (max((((unsigned long long int) 3537384121U)), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)28846)) & (((/* implicit */int) (signed char)127)))))))));
            /* LoopSeq 1 */
            for (short i_15 = 0; i_15 < 16; i_15 += 2) 
            {
                var_31 -= (signed char)-76;
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_16 = 0; i_16 < 16; i_16 += 3) 
                {
                    /* LoopSeq 4 */
                    for (short i_17 = 0; i_17 < 16; i_17 += 4) /* same iter space */
                    {
                        arr_72 [(short)10] [i_15] &= ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (arr_0 [i_15]) : (arr_0 [i_0])));
                        var_32 = ((/* implicit */unsigned short) arr_40 [i_14] [i_15] [i_16] [i_17]);
                        arr_73 [i_15] [i_14] &= var_0;
                        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_54 [(signed char)13] [i_14 + 2] [i_16] [(short)13])) ? (arr_2 [i_0] [i_0] [(signed char)7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_14] [i_15] [i_16] [i_17])))))))));
                    }
                    for (short i_18 = 0; i_18 < 16; i_18 += 4) /* same iter space */
                    {
                        var_34 -= ((/* implicit */unsigned long long int) var_2);
                        var_35 = ((((arr_65 [i_0] [i_14] [(signed char)15]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (var_5)))));
                        arr_78 [i_14] [i_14] [i_14] [i_15] [i_16] [i_18] = ((/* implicit */unsigned short) arr_1 [i_0]);
                        arr_79 [3ULL] [i_14 + 2] [i_14] [i_14] [(signed char)14] = ((/* implicit */unsigned long long int) var_13);
                    }
                    for (short i_19 = 0; i_19 < 16; i_19 += 4) /* same iter space */
                    {
                        arr_82 [i_16] [i_16] [i_16] [i_16] [i_16] [i_14] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_30 [i_0] [(short)9] [i_15] [i_14] [i_19])) & (((/* implicit */int) var_4))))) : (arr_35 [i_0] [i_0] [i_14] [i_15] [i_16] [i_16] [i_19])));
                        var_36 = ((/* implicit */short) var_1);
                        arr_83 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) ((((var_12) <= (((/* implicit */int) var_6)))) ? (((/* implicit */unsigned long long int) (~(1713633329U)))) : (var_8)));
                    }
                    for (unsigned int i_20 = 0; i_20 < 16; i_20 += 2) 
                    {
                        arr_87 [i_0] [i_14] = ((/* implicit */signed char) arr_66 [i_14]);
                        var_37 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_75 [i_20] [i_14] [i_14] [i_14] [i_14])) | (((/* implicit */int) (unsigned short)0))));
                        var_38 = ((var_14) + (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) & (arr_45 [i_15] [i_16] [i_14])))));
                        var_39 |= ((/* implicit */short) var_4);
                    }
                    var_40 = 1931786773;
                    /* LoopSeq 2 */
                    for (unsigned short i_21 = 0; i_21 < 16; i_21 += 3) 
                    {
                        var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) 4U))) ? (((/* implicit */int) arr_49 [i_0] [i_15] [i_16] [i_15])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
                        arr_90 [i_0] [i_14] [i_15] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_58 [i_14] [i_14 - 3] [i_14])) : (var_7)))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8))) : (var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_64 [i_0] [i_14] [i_16] [i_21])) : (arr_68 [i_0] [i_0] [i_0] [i_14] [i_0]))))));
                    }
                    for (int i_22 = 3; i_22 < 15; i_22 += 2) 
                    {
                        var_42 += ((/* implicit */signed char) ((int) arr_64 [(signed char)10] [i_15] [i_15] [i_22]));
                        arr_94 [i_0] [i_14] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 8U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))));
                        var_43 -= ((/* implicit */int) arr_89 [4ULL] [i_15] [i_14] [i_15] [i_15] [i_15] [(signed char)6]);
                    }
                }
                /* vectorizable */
                for (int i_23 = 0; i_23 < 16; i_23 += 4) 
                {
                    var_44 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_34 [i_0] [i_14]))))));
                    arr_97 [i_0] [i_0] [i_14] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_58 [i_14] [i_14] [7ULL]))));
                    /* LoopSeq 2 */
                    for (int i_24 = 0; i_24 < 16; i_24 += 3) 
                    {
                        arr_101 [i_14] [i_14] = ((/* implicit */unsigned long long int) arr_99 [i_0] [i_0] [i_0] [i_14] [i_0]);
                        var_45 -= ((/* implicit */signed char) var_8);
                    }
                    for (unsigned int i_25 = 0; i_25 < 16; i_25 += 2) 
                    {
                        var_46 -= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_1)))));
                        var_47 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_11)) | (arr_16 [i_14] [i_0] [i_14] [0U] [i_14 + 2] [i_23] [i_25])));
                        var_48 = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_92 [i_0] [i_23] [i_15] [i_23] [i_25]))) / (var_8)))));
                        arr_105 [i_0] [i_14] [i_0] [i_15] [i_14] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-1)) ? (-271807974) : (((/* implicit */int) (signed char)-32))));
                    }
                    arr_106 [i_14] [i_14] [14U] [i_23] = ((/* implicit */short) arr_67 [i_14 + 3] [i_14] [i_14] [i_14 + 3]);
                }
                /* vectorizable */
                for (unsigned long long int i_26 = 2; i_26 < 15; i_26 += 4) 
                {
                    arr_110 [i_0] [i_0] [i_14] = (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_2 [i_0] [i_0] [i_0]))));
                    arr_111 [i_14] [i_14] [i_14 - 2] [i_14] = arr_21 [i_0] [i_14] [i_0] [i_0];
                }
            }
        }
        for (unsigned short i_27 = 0; i_27 < 16; i_27 += 3) 
        {
            arr_114 [i_0] [4] [i_27] &= var_13;
            var_49 = ((/* implicit */int) min((var_49), (((/* implicit */int) ((arr_69 [i_0] [i_27] [i_27]) >= (((/* implicit */unsigned int) var_7)))))));
        }
        var_50 ^= ((/* implicit */short) ((((/* implicit */_Bool) (~(((int) var_14))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)38989))));
    }
    for (signed char i_28 = 0; i_28 < 20; i_28 += 3) 
    {
        var_51 = ((/* implicit */signed char) max((var_51), (((/* implicit */signed char) arr_116 [i_28]))));
        arr_119 [i_28] = ((short) max((((/* implicit */unsigned long long int) ((((arr_116 [i_28]) + (2147483647))) << (((arr_117 [i_28]) - (1419640880366517761ULL)))))), (((arr_117 [i_28]) + (((/* implicit */unsigned long long int) arr_116 [i_28]))))));
    }
}
