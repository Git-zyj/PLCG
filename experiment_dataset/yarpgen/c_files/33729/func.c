/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33729
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] [i_0 + 1] &= ((/* implicit */signed char) ((((/* implicit */int) max(((!(((/* implicit */_Bool) (unsigned char)128)))), ((!(((/* implicit */_Bool) -1368976067))))))) << (((((arr_0 [i_0]) ? (-2303713475702188404LL) : (((/* implicit */long long int) var_3)))) + (2303713475702188419LL)))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((576460752301326336LL), (((/* implicit */long long int) arr_0 [i_0 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) -1683632856)), (arr_1 [i_0])))))) : (var_6)));
        var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1])))) && ((!(((/* implicit */_Bool) arr_1 [i_0 + 1]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_20 = ((/* implicit */int) (+(1152921502459363328ULL)));
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 2) 
                {
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)219)))))));
                            var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)123))) >= ((~(arr_4 [i_0] [8ULL] [i_4])))));
                        }
                    } 
                } 
            } 
        }
        var_23 = max((((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (-576460752301326337LL) : (((/* implicit */long long int) ((/* implicit */int) var_17))))), (3235518027190876788LL));
    }
    for (int i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_5]))));
        /* LoopSeq 3 */
        for (long long int i_6 = 3; i_6 < 9; i_6 += 3) 
        {
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_6 - 1] [i_6 + 4] [i_6 + 3])) ? (((/* implicit */unsigned long long int) arr_4 [i_6 + 3] [i_6 - 2] [i_6 - 1])) : (13705038744355774697ULL)))) ? (((((/* implicit */_Bool) arr_10 [i_6 + 1] [i_6 - 2] [i_6 - 1])) ? (arr_10 [i_6 + 3] [i_6 + 4] [i_6 - 2]) : (arr_10 [i_6 + 2] [i_6 - 1] [i_6 - 3]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
            var_26 += ((/* implicit */signed char) (+(((unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_5] [i_6 + 2] [i_6 + 2])) ? (arr_6 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))))));
            /* LoopSeq 1 */
            for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1683632856)) ? (((/* implicit */int) arr_0 [i_6 - 2])) : (((/* implicit */int) arr_0 [i_6 + 1]))))), (((unsigned int) arr_11 [i_6 + 2] [i_7])))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        var_28 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_0 [i_6]))))) ? (((/* implicit */int) ((unsigned char) var_3))) : (((/* implicit */int) (unsigned short)62081))))) ? (((unsigned long long int) 18446744073709551598ULL)) : ((+(max((1152921502459363331ULL), (((/* implicit */unsigned long long int) var_12))))))));
                        var_29 = ((/* implicit */_Bool) ((arr_9 [(signed char)13] [i_6 - 3] [i_6 + 2] [i_6] [i_6 + 1] [i_9 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_9 [(unsigned short)11] [i_6 - 3] [i_6 + 1] [i_6] [i_6 - 3] [i_9 - 1]), (arr_9 [i_5] [i_6 - 3] [i_6 + 2] [i_6 - 3] [i_6 + 2] [i_9 - 1]))))) : (((unsigned long long int) arr_9 [i_6] [i_6 + 2] [i_6 + 4] [14] [i_6 - 1] [i_9 - 1]))));
                        arr_22 [i_5] [i_5] [3ULL] [i_5] [i_5] [3ULL] = ((/* implicit */_Bool) arr_5 [i_5] [i_5] [i_5] [i_8]);
                        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) 1238991556))));
                        arr_23 [i_5] [i_6 - 1] [i_6 - 1] [i_8] [i_9] [i_5] [i_7] = ((/* implicit */int) (unsigned short)62101);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        arr_27 [9ULL] [i_5] [9ULL] = ((((/* implicit */_Bool) ((unsigned char) -576460752301326356LL))) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) arr_25 [i_5] [i_6 - 2] [i_7])));
                        arr_28 [i_10] [(unsigned char)8] [i_5] [i_6 + 4] [i_10] |= ((/* implicit */long long int) ((_Bool) 17293822571250188261ULL));
                    }
                    /* vectorizable */
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551592ULL)) ? (8236091373122006911ULL) : (5ULL)))) ? (((((/* implicit */_Bool) (unsigned char)128)) ? (1152921502459363348ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) (~(arr_10 [13ULL] [i_7] [13ULL])))));
                        var_32 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_6 - 3] [i_6] [i_8])) ? (((/* implicit */int) (unsigned char)49)) : (((/* implicit */int) arr_21 [i_6 + 4] [1LL] [10ULL]))));
                        var_33 = ((/* implicit */unsigned char) (((+(var_6))) > (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5] [i_7] [i_11 + 1])))));
                    }
                    var_34 += (!((!(((/* implicit */_Bool) arr_24 [i_6 + 4] [i_7] [i_6 - 1] [i_6 + 1] [i_6 + 4])))));
                    var_35 += ((/* implicit */unsigned char) (-(4294967295U)));
                }
                /* vectorizable */
                for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 2) 
                {
                    arr_35 [i_5] [i_7] [(unsigned char)1] = ((/* implicit */_Bool) ((long long int) arr_1 [i_6 + 1]));
                    var_36 = ((/* implicit */_Bool) -4611686018427387904LL);
                    var_37 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (30ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? ((+(747460854068004311ULL))) : (var_4)));
                }
                /* vectorizable */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_38 = ((/* implicit */int) arr_37 [5LL] [5LL] [i_7] [(_Bool)1]);
                    var_39 &= ((/* implicit */unsigned long long int) 4611686018427387902LL);
                    var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [i_13]) ? (10082427431119908679ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [(unsigned char)9])))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))));
                    /* LoopSeq 3 */
                    for (unsigned char i_14 = 0; i_14 < 13; i_14 += 2) 
                    {
                        var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_5] [i_6 - 1] [i_5] [i_14]))) : (arr_19 [3LL] [i_14] [(unsigned char)9] [i_7] [(_Bool)1] [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)112)))));
                        var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)62084))))) ? (((/* implicit */int) arr_38 [i_5] [i_5] [i_6] [i_6 + 4] [(_Bool)1] [i_6 + 1])) : (((/* implicit */int) arr_9 [i_6 + 2] [14LL] [i_6] [(signed char)9] [(unsigned char)13] [11ULL]))));
                        var_43 |= ((/* implicit */_Bool) ((int) arr_38 [(unsigned char)6] [i_7] [i_6] [i_5] [i_7] [(_Bool)0]));
                    }
                    for (signed char i_15 = 3; i_15 < 10; i_15 += 3) 
                    {
                        arr_44 [i_5] [i_6] [i_5] [i_13] [i_15 + 2] [i_15] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_41 [(unsigned char)3] [i_6 + 4] [i_7] [i_13] [i_15] [i_7]))) ? (var_14) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)125)) ? (((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_5] [i_5] [i_13])) : (((/* implicit */int) var_10)))))));
                        arr_45 [i_6] [i_6 + 1] [i_6] [6] [i_7] [i_6] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (unsigned char)255))));
                        var_44 += ((/* implicit */unsigned char) (-(arr_30 [4ULL] [i_6 - 2] [i_15 - 2] [i_15 - 2] [i_7])));
                    }
                    for (int i_16 = 0; i_16 < 13; i_16 += 3) 
                    {
                        arr_50 [i_5] [i_5] [i_5] [i_16] = ((/* implicit */unsigned char) ((unsigned long long int) (((_Bool)0) ? (((/* implicit */int) var_1)) : (-1204100959))));
                        var_45 |= ((/* implicit */int) ((signed char) ((((/* implicit */int) arr_5 [i_5] [i_5] [i_5] [i_5])) >= (((/* implicit */int) (signed char)59)))));
                    }
                    var_46 = ((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) var_0)))));
                }
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 13; i_17 += 2) 
                {
                    for (long long int i_18 = 0; i_18 < 13; i_18 += 2) 
                    {
                        {
                            var_47 = ((/* implicit */long long int) (-(1666339678)));
                            var_48 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [(signed char)12])), (arr_34 [i_17] [1ULL] [i_6])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [(unsigned char)2]))) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))))))) : (((((/* implicit */_Bool) (+(arr_12 [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) != (arr_13 [i_6] [i_6] [i_18]))))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-110))) - (var_6)))))));
                        }
                    } 
                } 
                var_49 |= ((/* implicit */_Bool) (+(var_6)));
            }
        }
        for (unsigned char i_19 = 2; i_19 < 10; i_19 += 2) 
        {
            var_50 |= ((/* implicit */long long int) max(((~(((/* implicit */int) arr_25 [i_19] [i_19] [i_19 + 3])))), (((/* implicit */int) min((((/* implicit */unsigned char) var_0)), (arr_25 [i_19] [i_19] [i_19 + 3]))))));
            arr_57 [i_5] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_32 [1LL] [i_19 - 1] [i_19] [i_5]), (((/* implicit */long long int) ((int) var_4)))))) ? (max((((long long int) arr_0 [i_5])), (((/* implicit */long long int) arr_14 [i_19] [i_5])))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_18 [i_5]))))));
            arr_58 [i_5] [i_19 - 1] = ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) min((arr_20 [i_19 - 1] [12ULL] [i_19 + 3] [i_19 + 3] [i_19 + 3]), (arr_20 [i_19 + 3] [i_19 + 3] [i_19 + 3] [i_19 + 3] [i_19])))));
        }
        /* vectorizable */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            /* LoopSeq 3 */
            for (long long int i_21 = 1; i_21 < 10; i_21 += 3) 
            {
                var_51 *= ((/* implicit */_Bool) (-(((/* implicit */int) arr_53 [i_21 + 2] [(_Bool)0]))));
                arr_64 [i_5] = ((/* implicit */long long int) arr_13 [i_5] [i_21] [i_5]);
            }
            for (unsigned long long int i_22 = 1; i_22 < 9; i_22 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    for (unsigned short i_24 = 2; i_24 < 12; i_24 += 3) 
                    {
                        {
                            var_52 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_5])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) (unsigned char)141)) : (1686559545)));
                            var_53 = ((/* implicit */signed char) max((var_53), (((/* implicit */signed char) (unsigned char)133))));
                            var_54 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)215)) ? (arr_40 [i_22 + 3] [(_Bool)1] [i_24 - 2] [i_5]) : (arr_61 [i_22 + 1] [i_24] [i_24 - 1])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_25 = 0; i_25 < 13; i_25 += 3) 
                {
                    for (long long int i_26 = 0; i_26 < 13; i_26 += 3) 
                    {
                        {
                            var_55 = var_14;
                            var_56 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)8))))));
                        }
                    } 
                } 
                arr_77 [i_5] [i_20] [i_5] [i_22] = ((/* implicit */long long int) ((((/* implicit */int) arr_21 [1LL] [i_20] [i_22 - 1])) & (((/* implicit */int) arr_21 [i_5] [i_5] [i_22 - 1]))));
            }
            for (unsigned long long int i_27 = 1; i_27 < 9; i_27 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (_Bool i_28 = 0; i_28 < 0; i_28 += 1) 
                {
                    var_57 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_28] [(signed char)4] [(signed char)4] [(signed char)4]))) : (381604136U)))) ^ ((+(var_11)))));
                    var_58 = ((/* implicit */signed char) ((((arr_9 [i_5] [i_5] [i_20] [i_5] [i_27 + 4] [i_27 + 4]) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [(unsigned short)6] [(unsigned char)11] [i_28]))))) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1882227751U))))))));
                    var_59 = ((/* implicit */_Bool) ((unsigned char) var_13));
                }
                for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                {
                    var_60 += ((/* implicit */_Bool) (-(((arr_16 [i_5] [8LL] [i_27]) & (var_14)))));
                    arr_86 [i_5] [i_5] [i_5] [i_5] [i_5] = (-(((unsigned long long int) (unsigned char)129)));
                }
                var_61 |= ((/* implicit */long long int) var_17);
            }
            arr_87 [i_5] [i_5] [i_20] = ((/* implicit */unsigned short) arr_12 [i_5]);
        }
    }
    var_62 |= min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (1882227751U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9)))) : ((+(((/* implicit */int) var_17))))))), (-96946239832196915LL));
    var_63 = ((/* implicit */int) max((var_63), (((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_4)) ? (13ULL) : (((/* implicit */unsigned long long int) ((long long int) var_6))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_14) | (((/* implicit */long long int) var_2))))) ? (((-2125911732152452108LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)26)))))))))));
}
