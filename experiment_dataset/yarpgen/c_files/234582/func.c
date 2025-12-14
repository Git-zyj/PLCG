/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234582
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
    var_16 = ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 1) 
                {
                    /* LoopSeq 3 */
                    for (short i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
                        var_18 = ((/* implicit */unsigned short) max(((unsigned char)156), ((unsigned char)245)));
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_12))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        var_20 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) arr_1 [i_3])), (var_15))), (((/* implicit */unsigned long long int) var_9))));
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (-(arr_7 [i_3] [i_3 + 1] [i_3 - 1] [i_3 - 1]))))));
                        var_22 = ((/* implicit */short) (~(arr_13 [i_5] [i_3] [i_2] [i_3] [i_0] [i_0] [i_2])));
                        var_23 = ((/* implicit */short) max((min((arr_13 [17ULL] [i_2 - 1] [i_2] [i_2] [i_2] [5ULL] [i_1]), (arr_13 [i_2 + 2] [i_2 + 2] [i_2] [i_0] [i_2] [1ULL] [i_0]))), (((/* implicit */unsigned long long int) ((signed char) arr_0 [i_3 - 1])))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) 15293313306643157067ULL))));
                        var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)245))));
                        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_4 [i_3 + 1] [i_3 + 1] [i_3 - 1])), (arr_13 [i_0] [i_0] [20ULL] [20ULL] [20ULL] [i_0] [i_0]))) < ((-(((((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_6])) ? (var_14) : (var_14))))))))));
                    }
                    arr_17 [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) min((arr_4 [i_0] [i_0] [i_3]), (arr_4 [i_3] [i_2 + 1] [i_0]))))));
                }
                var_27 = ((/* implicit */_Bool) ((unsigned char) (-(((3153430767066394537ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
            }
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [17ULL]))))), (((((/* implicit */_Bool) (unsigned char)110)) ? (10019447762916677707ULL) : (17940560943256372649ULL)))))) ? (((/* implicit */int) ((((unsigned long long int) arr_7 [i_0] [i_1] [(_Bool)1] [20ULL])) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_0 [i_0])))))))) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))));
        }
        for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                /* LoopSeq 4 */
                for (unsigned char i_9 = 4; i_9 < 18; i_9 += 2) 
                {
                    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) arr_25 [16ULL] [i_9 - 2] [i_9]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 4; i_10 < 19; i_10 += 1) 
                    {
                        arr_29 [i_0] [i_7] [i_8] [i_9] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_0] [i_8])) >> (((((/* implicit */int) (signed char)124)) - (106)))));
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)20617)) || (((/* implicit */_Bool) (unsigned char)144))));
                        var_31 ^= ((/* implicit */unsigned char) ((unsigned long long int) var_14));
                        var_32 ^= ((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    var_34 = (~(arr_13 [i_7 - 1] [i_9 + 3] [i_9] [i_7 - 1] [i_9] [i_7 - 1] [i_7]));
                }
                for (unsigned short i_11 = 0; i_11 < 21; i_11 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 1; i_12 < 19; i_12 += 1) 
                    {
                        arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_27 [i_0] [i_0] [i_8] [i_11] [i_12]);
                        var_35 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) arr_33 [i_12 - 1] [i_7] [i_8] [16ULL])))))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_36 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */int) arr_22 [i_7 - 1] [i_7] [i_7]))));
                        var_37 = ((/* implicit */int) var_2);
                        var_38 -= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1755737007)) ^ (var_15)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((signed char) var_8))));
                        var_39 = ((/* implicit */signed char) arr_36 [i_13] [i_11] [i_8] [i_7 - 1] [i_0]);
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        var_40 = (!(((/* implicit */_Bool) (unsigned char)174)));
                        arr_44 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) arr_4 [i_0] [i_0] [i_7 + 1]));
                    }
                    var_41 = ((/* implicit */long long int) (~(((/* implicit */int) var_6))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 1) 
                    {
                        arr_47 [i_0] [i_0] [i_8] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_7 [i_0] [i_7] [i_7] [(short)13])))) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) arr_34 [i_0]))));
                        var_42 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_21 [i_7] [i_7 + 1] [i_7] [i_7]))));
                    }
                    var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_7 + 1])) ? (((/* implicit */int) (unsigned char)255)) : (var_1))))));
                }
                for (unsigned short i_16 = 0; i_16 < 21; i_16 += 1) 
                {
                    arr_50 [i_0] [i_7] [i_7] [i_16] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-30143))));
                    /* LoopSeq 2 */
                    for (int i_17 = 0; i_17 < 21; i_17 += 1) 
                    {
                        var_44 = ((/* implicit */signed char) var_14);
                        var_45 = ((/* implicit */short) ((((/* implicit */int) var_4)) >> (((((((/* implicit */_Bool) -1848080757)) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) (unsigned char)193)))) - (49)))));
                    }
                    for (unsigned long long int i_18 = 2; i_18 < 20; i_18 += 1) 
                    {
                        arr_55 [i_18] [i_7] [i_8] [i_7] [i_0] = var_4;
                        var_46 = arr_26 [i_0] [i_7 - 1] [5ULL] [i_7 - 1] [i_0] [i_16];
                    }
                    var_47 = ((/* implicit */int) ((((/* implicit */int) (unsigned short)27761)) < (((/* implicit */int) (unsigned char)97))));
                    var_48 = ((/* implicit */short) ((((/* implicit */_Bool) -1011358805)) ? (((/* implicit */int) (signed char)83)) : (((/* implicit */int) (short)0))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_19 = 3; i_19 < 20; i_19 += 2) 
                    {
                        var_49 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_19 - 2]))));
                        var_50 = ((/* implicit */short) ((((/* implicit */int) var_0)) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                        var_51 = ((/* implicit */unsigned long long int) var_12);
                        var_52 = ((/* implicit */long long int) arr_24 [i_0] [i_7 + 1] [i_8] [i_16] [i_19 - 1]);
                    }
                    for (short i_20 = 0; i_20 < 21; i_20 += 1) 
                    {
                        var_53 = ((/* implicit */unsigned char) (((+(arr_2 [i_0] [i_0]))) << ((((-(((/* implicit */int) var_3)))) + (25616)))));
                        var_54 = ((/* implicit */signed char) var_0);
                    }
                    for (unsigned long long int i_21 = 0; i_21 < 21; i_21 += 1) 
                    {
                        arr_65 [i_0] [i_0] [i_21] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_61 [i_8] [i_7] [i_7 + 1] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_61 [17ULL] [i_7] [i_7 - 1] [i_7] [i_7 + 1] [i_7])) : (((/* implicit */int) arr_61 [i_21] [i_16] [i_7 + 1] [i_0] [i_0] [i_0]))));
                        var_55 = ((/* implicit */unsigned long long int) var_2);
                    }
                    for (signed char i_22 = 0; i_22 < 21; i_22 += 1) 
                    {
                        var_56 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)253))));
                        arr_69 [i_0] [i_7] [i_0] [i_8] [i_16] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_5 [i_7 + 1] [(short)14] [i_7 + 1] [12])) + (arr_13 [i_7 - 1] [i_7] [(unsigned short)4] [i_7 - 1] [i_22] [i_0] [i_7])));
                        var_57 += ((/* implicit */signed char) ((_Bool) ((((((/* implicit */int) var_2)) + (2147483647))) << (((((/* implicit */int) (signed char)-83)) + (83))))));
                    }
                }
                for (unsigned short i_23 = 0; i_23 < 21; i_23 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_24 = 0; i_24 < 21; i_24 += 1) 
                    {
                        var_58 = ((/* implicit */signed char) ((((/* implicit */int) arr_43 [i_7 - 1] [i_7 - 1] [i_7] [i_7] [i_7] [i_7 - 1] [i_7 - 1])) << (((3153430767066394548ULL) - (3153430767066394539ULL)))));
                        var_59 = ((/* implicit */short) ((var_1) > (((/* implicit */int) arr_51 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7] [i_7]))));
                    }
                    for (unsigned long long int i_25 = 0; i_25 < 21; i_25 += 1) 
                    {
                        var_60 -= ((/* implicit */_Bool) arr_54 [i_7] [i_7 - 1] [i_7] [i_7]);
                        arr_78 [i_23] [i_23] [i_7] [i_8] [i_7] [i_23] = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_0] [(short)8]))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_24 [i_25] [i_23] [i_0] [i_7] [i_0])) : (((/* implicit */int) var_0)))));
                    }
                    arr_79 [i_0] [i_0] [i_8] [i_23] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_4))) <= (((/* implicit */int) arr_64 [i_7] [i_7] [i_7 + 1] [i_7 - 1] [i_7] [i_7 + 1] [i_7 + 1]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_26 = 0; i_26 < 21; i_26 += 2) 
                    {
                        var_61 |= ((/* implicit */unsigned long long int) ((short) (unsigned short)37775));
                        arr_82 [i_0] [i_0] [i_0] [i_23] [i_26] [i_23] [i_23] = ((/* implicit */short) (~(((/* implicit */int) arr_64 [i_26] [i_7 - 1] [i_8] [i_0] [i_26] [i_26] [i_0]))));
                        var_62 = ((/* implicit */short) ((((((/* implicit */int) var_9)) + (2147483647))) << (((((/* implicit */int) arr_41 [i_0] [i_0] [i_8] [i_23] [i_7 - 1])) - (222)))));
                    }
                    for (unsigned long long int i_27 = 3; i_27 < 18; i_27 += 2) 
                    {
                        arr_85 [i_23] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_20 [i_7 - 1] [i_7] [i_7 - 1]))));
                        var_63 = arr_43 [i_7] [i_7] [i_7] [i_7 + 1] [i_7] [i_27] [i_27];
                        var_64 += ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)107)) > (((/* implicit */int) arr_51 [i_0] [i_7 + 1] [i_27 - 1] [i_23] [i_27]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_28 = 0; i_28 < 21; i_28 += 1) 
                    {
                        var_65 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_31 [i_0] [i_0] [(_Bool)1]))))) ? (((((/* implicit */_Bool) arr_53 [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_0])) : (((/* implicit */int) arr_51 [i_0] [i_7] [i_7] [i_7] [i_0])))) : ((~(((/* implicit */int) arr_87 [i_23] [i_23] [i_23]))))));
                        var_66 = ((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_4)))));
                        var_67 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_43 [i_7 - 1] [i_7 - 1] [i_7] [i_7 + 1] [i_7] [i_7 + 1] [i_0]))));
                    }
                }
                var_68 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((7516996003817130003ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */int) arr_52 [i_0])) & (((/* implicit */int) (short)20633)))) : (((/* implicit */int) ((unsigned short) (unsigned char)7)))));
            }
            for (signed char i_29 = 2; i_29 < 20; i_29 += 1) 
            {
                var_69 = min((((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) 4294967295ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_0] [i_0] [i_0] [i_0]))) : (arr_57 [(short)16] [(short)16] [i_7] [(short)10] [(unsigned char)4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_62 [i_0])))), (((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) (signed char)48))))))));
                /* LoopNest 2 */
                for (signed char i_30 = 0; i_30 < 21; i_30 += 1) 
                {
                    for (unsigned char i_31 = 0; i_31 < 21; i_31 += 1) 
                    {
                        {
                            var_70 -= ((/* implicit */short) ((max(((~(((/* implicit */int) (short)-1)))), (((((/* implicit */_Bool) arr_5 [i_0] [i_29] [i_30] [18LL])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11)))))) > (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)83)), (arr_81 [i_29 - 2] [i_29] [(unsigned char)16] [i_29 - 2] [(unsigned char)6] [i_29 - 2]))))));
                            var_71 = ((/* implicit */signed char) ((min((((arr_7 [i_7 + 1] [i_7 + 1] [i_7 + 1] [20ULL]) + (((/* implicit */int) arr_35 [i_0] [i_0])))), (((/* implicit */int) arr_3 [i_0] [i_0] [i_7 + 1])))) <= (((/* implicit */int) arr_12 [(short)9] [i_29 - 1] [i_30]))));
                        }
                    } 
                } 
                var_72 = ((/* implicit */unsigned long long int) max((var_72), ((-(12958912184273677850ULL)))));
                /* LoopSeq 3 */
                for (unsigned long long int i_32 = 0; i_32 < 21; i_32 += 1) /* same iter space */
                {
                    var_73 = ((/* implicit */signed char) (~(((/* implicit */int) min((arr_19 [i_32] [i_29] [i_7]), (((/* implicit */unsigned char) var_7)))))));
                    var_74 -= ((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned long long int) 1048575)) + (((((/* implicit */_Bool) 9153785590169374914ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64))) : (arr_14 [14] [14] [14] [14] [i_32]))))));
                }
                for (unsigned long long int i_33 = 0; i_33 < 21; i_33 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_34 = 1; i_34 < 20; i_34 += 1) 
                    {
                        arr_107 [i_33] [i_0] [(signed char)10] [i_29 + 1] [i_0] [i_34] = ((/* implicit */short) arr_25 [i_29 - 1] [i_7 - 1] [i_29]);
                        var_75 = ((/* implicit */_Bool) var_13);
                        var_76 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((var_1) + (2147483647))) << (((((/* implicit */int) arr_68 [i_29 - 1] [i_34 - 1] [i_29 - 1] [i_33] [i_29 - 1] [i_7 - 1] [i_34 - 1])) - (21))))))));
                    }
                    var_77 |= ((/* implicit */unsigned char) ((unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (10929748069892421618ULL) : (((/* implicit */unsigned long long int) 2480527879U))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
                    {
                        var_78 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))));
                        var_79 = ((/* implicit */signed char) max((var_79), (((/* implicit */signed char) (-(0ULL))))));
                        arr_111 [i_33] [i_29 - 1] [i_33] [(signed char)14] = ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)18)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_75 [i_0] [i_35]))))) : (((/* implicit */int) var_10))));
                        var_80 = ((/* implicit */unsigned char) (((~(((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) ((((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_0] [(_Bool)1])) != (((/* implicit */int) arr_22 [i_0] [i_7] [i_29])))))));
                        var_81 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_16 [i_29 - 1] [i_7] [i_29] [i_33] [i_7 + 1] [i_0]))));
                    }
                    var_82 |= ((/* implicit */int) arr_108 [2U] [i_0] [i_0] [2U]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_36 = 0; i_36 < 21; i_36 += 1) 
                    {
                        var_83 = ((/* implicit */unsigned short) max((var_83), (((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) (short)-15902)) >= (((/* implicit */int) ((((/* implicit */_Bool) (signed char)15)) && (((/* implicit */_Bool) arr_43 [i_0] [i_36] [i_36] [i_36] [i_0] [i_0] [i_29])))))))))));
                        var_84 &= ((_Bool) (unsigned char)148);
                    }
                }
                for (unsigned long long int i_37 = 0; i_37 < 21; i_37 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_38 = 0; i_38 < 21; i_38 += 1) 
                    {
                        arr_118 [(_Bool)1] [i_7] [i_38] [i_37] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65535))))) + (((unsigned long long int) 1048575))));
                        var_85 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) min((arr_100 [i_0] [i_38] [i_38] [i_0]), (arr_0 [i_38]))))) != ((~(((((/* implicit */int) arr_11 [i_38] [i_38])) ^ (((/* implicit */int) (signed char)-34))))))));
                    }
                    var_86 += ((/* implicit */unsigned char) arr_31 [i_7 - 1] [i_7 - 1] [(signed char)4]);
                    var_87 = ((/* implicit */unsigned short) min((var_87), (((/* implicit */unsigned short) ((short) max((((/* implicit */int) (unsigned char)172)), ((~(((/* implicit */int) var_2))))))))));
                    var_88 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_10 [i_7 + 1] [i_7 + 1])) - (((/* implicit */int) (unsigned char)3)))), (((((/* implicit */_Bool) arr_10 [i_7 + 1] [i_7 + 1])) ? (((/* implicit */int) arr_10 [i_7 - 1] [i_7 + 1])) : (((/* implicit */int) arr_10 [i_7 + 1] [i_7 - 1]))))));
                }
                var_89 = ((/* implicit */_Bool) max(((unsigned char)105), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -7385375386907825365LL)), (10929748069892421612ULL)))))))));
            }
            var_90 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)22))) > (14730297316765592463ULL)));
            var_91 = ((/* implicit */unsigned char) min((var_91), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_12 [i_0] [i_7 - 1] [i_7]), (arr_12 [10ULL] [i_7 + 1] [i_7 + 1])))))))));
        }
        var_92 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned char i_39 = 4; i_39 < 22; i_39 += 1) 
    {
        arr_122 [i_39] [i_39] = ((/* implicit */signed char) 13374938736539614949ULL);
        var_93 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_121 [i_39]))));
        var_94 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_121 [i_39 - 3]))) ^ (var_8)));
    }
}
