/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248925
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
    var_18 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((arr_1 [i_0]) ^ (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))) : (arr_1 [i_0])))));
        arr_4 [i_0] |= ((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned char)254)))) / (((var_7) << (((1071644672U) - (1071644671U)))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_10 [(unsigned char)13] [i_0] = ((/* implicit */short) arr_1 [i_0]);
                    arr_11 [i_0] [i_1] [i_2] [i_2 - 1] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) ((arr_8 [i_0] [(_Bool)0] [i_2]) && (((/* implicit */_Bool) var_11))))), (arr_5 [i_1 + 1] [i_2 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_2] [(short)11] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (unsigned char)128)), (1071644672U)));
                                arr_18 [i_4 - 1] [i_1 - 1] [i_0] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) | (((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */unsigned long long int) -1632567257906243491LL)))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1071644691U)) ? (1632567257906243490LL) : (((/* implicit */long long int) ((/* implicit */int) (short)240)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
    {
        arr_21 [i_5] = ((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), ((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) 1048575U)) : (arr_0 [i_5])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_6 = 2; i_6 < 19; i_6 += 2) 
        {
            arr_25 [(unsigned short)9] [i_6] [i_5] &= ((/* implicit */int) ((-6473470828669011640LL) | (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5] [i_6 + 3])))));
            /* LoopNest 3 */
            for (signed char i_7 = 1; i_7 < 18; i_7 += 3) 
            {
                for (short i_8 = 1; i_8 < 21; i_8 += 2) 
                {
                    for (unsigned int i_9 = 3; i_9 < 18; i_9 += 3) 
                    {
                        {
                            arr_34 [i_6 - 2] = ((arr_27 [i_5] [i_5] [i_8 + 1] [i_6 + 1]) & (((/* implicit */unsigned long long int) 838655823U)));
                            arr_35 [12ULL] [i_8] = ((/* implicit */long long int) arr_19 [i_6 + 1]);
                            arr_36 [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_6 + 3])) || (((/* implicit */_Bool) arr_13 [i_8 + 1] [i_8] [i_8 - 1] [i_8 - 1]))));
                        }
                    } 
                } 
            } 
            arr_37 [i_5] [i_6] [i_6] = ((/* implicit */_Bool) (-(((/* implicit */int) var_13))));
        }
        arr_38 [(unsigned char)18] = ((/* implicit */_Bool) ((((max((4293918738U), (((/* implicit */unsigned int) -905664174)))) ^ (((/* implicit */unsigned int) var_7)))) & (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_11))))), (((unsigned char) var_3))))))));
        /* LoopSeq 2 */
        for (short i_10 = 2; i_10 < 21; i_10 += 2) 
        {
            arr_41 [i_5] [i_10] = ((/* implicit */long long int) ((((/* implicit */int) var_4)) & (((((/* implicit */int) ((_Bool) var_15))) - (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_5] [i_10 - 1])) || ((_Bool)0))))))));
            /* LoopNest 2 */
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                for (short i_12 = 0; i_12 < 22; i_12 += 3) 
                {
                    {
                        arr_47 [i_10] [i_10] = ((/* implicit */short) min((1048590U), (((/* implicit */unsigned int) min((((/* implicit */short) (_Bool)1)), ((short)-1))))));
                        arr_48 [i_5] [i_10] [i_10] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_10 - 2] [i_10 - 2]))))) ? (((/* implicit */unsigned long long int) min((var_16), (var_14)))) : (((((/* implicit */unsigned long long int) (-(var_16)))) ^ (((((/* implicit */_Bool) -525687964778234049LL)) ? (8000637872648930508ULL) : (((/* implicit */unsigned long long int) arr_33 [i_5] [i_10] [i_11] [i_12]))))))));
                    }
                } 
            } 
            arr_49 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) var_6);
            /* LoopNest 2 */
            for (long long int i_13 = 0; i_13 < 22; i_13 += 1) 
            {
                for (short i_14 = 0; i_14 < 22; i_14 += 3) 
                {
                    {
                        arr_55 [i_5] [i_10] [i_13] [i_14] [(unsigned short)3] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_42 [i_10 + 1] [i_13] [i_13] [i_13])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)149))) + (3223322604U))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) -1632567257906243480LL)) || (((/* implicit */_Bool) arr_29 [i_5])))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) arr_20 [i_5])) : (((/* implicit */int) var_11)))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            arr_58 [i_5] [i_5] [(short)0] [i_10] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) arr_53 [i_10])) || (((/* implicit */_Bool) -1632567257906243507LL))));
                            arr_59 [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */long long int) 4293918718U)) : (3873218725787613449LL)));
                            arr_60 [i_5] [i_10] [i_13] [i_14] [i_13] = ((/* implicit */unsigned char) ((long long int) (signed char)33));
                        }
                        /* vectorizable */
                        for (unsigned int i_16 = 1; i_16 < 18; i_16 += 1) 
                        {
                            arr_64 [i_5] [i_5] [i_13] [i_13] [i_5] [i_13] [i_14] = ((/* implicit */signed char) (-(((/* implicit */int) arr_45 [i_5] [i_10 + 1] [i_5] [i_10 + 1]))));
                            arr_65 [i_5] [i_10] [i_13] [i_14] [i_16] = ((/* implicit */int) var_10);
                        }
                        arr_66 [(unsigned char)14] [i_13] [i_13] = ((/* implicit */signed char) -1364750246);
                        arr_67 [i_13] [i_10] [(_Bool)1] [i_14] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_42 [i_5] [i_13] [(_Bool)1] [i_14]))));
                        arr_68 [i_5] [i_5] [i_5] [i_13] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_10 + 1] [i_10 - 1] [i_10] [i_10 - 2])) ? (((/* implicit */int) arr_13 [i_10 - 2] [i_10 - 2] [i_10] [i_10 + 1])) : (((/* implicit */int) arr_13 [i_10 + 1] [i_10 + 1] [19U] [i_10 - 1]))))) ? (min((11062275187008491219ULL), (((/* implicit */unsigned long long int) arr_13 [i_10 - 1] [i_10 - 1] [20] [i_10 - 2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)126), ((unsigned char)125)))))));
                    }
                } 
            } 
        }
        for (short i_17 = 0; i_17 < 22; i_17 += 3) 
        {
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 22; i_18 += 4) 
            {
                for (long long int i_19 = 0; i_19 < 22; i_19 += 1) 
                {
                    {
                        arr_77 [i_17] [i_5] [i_17] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((3456311461U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_18])))))) ? (arr_33 [i_5] [i_17] [i_17] [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_17] [i_18] [i_19])))));
                        arr_78 [i_17] [i_17] [i_18] = ((/* implicit */unsigned int) (+(((((arr_56 [i_19] [i_17] [i_17] [i_17] [i_5]) + (9223372036854775807LL))) << (((((/* implicit */int) var_15)) - (41)))))));
                    }
                } 
            } 
            arr_79 [i_17] = (((+(((/* implicit */int) var_6)))) | (((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_13)))))));
        }
        arr_80 [i_5] = min((1236276142), (295896820));
    }
    /* LoopNest 2 */
    for (short i_20 = 2; i_20 < 18; i_20 += 4) 
    {
        for (unsigned int i_21 = 2; i_21 < 18; i_21 += 3) 
        {
            {
                arr_87 [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)29532)) && (((/* implicit */_Bool) 1048577U))));
                arr_88 [i_20] [10ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) arr_54 [i_20] [i_21] [i_20 - 2] [i_21] [i_20 + 1] [i_21])) ? (arr_54 [i_20] [i_21 - 1] [i_20] [i_21] [i_20 + 1] [i_20 - 2]) : (arr_54 [i_21] [i_21] [i_20] [i_21] [i_20 - 2] [i_20 + 2]))) : (((/* implicit */int) var_13))));
                arr_89 [i_20] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_84 [i_20] [i_20])), (var_5)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)21775))))) || (((((((/* implicit */int) arr_51 [i_20] [i_20] [i_21] [i_20])) ^ (((/* implicit */int) (signed char)32)))) >= (max((((/* implicit */int) (short)-20722)), (arr_6 [i_20 - 1] [i_21])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_22 = 0; i_22 < 20; i_22 += 1) 
    {
        for (short i_23 = 0; i_23 < 20; i_23 += 1) 
        {
            {
                arr_94 [i_23] = ((/* implicit */unsigned int) var_13);
                arr_95 [i_23] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)32260)) / (((/* implicit */int) var_11))))) ? (min((((/* implicit */long long int) var_14)), (0LL))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) (unsigned char)158)))))))) ? (((/* implicit */int) arr_2 [i_23] [i_22])) : (((((/* implicit */int) arr_26 [i_22])) * (((/* implicit */int) arr_26 [i_22]))))));
                arr_96 [i_22] [i_23] [i_23] = arr_56 [18U] [18U] [18U] [2LL] [18U];
                arr_97 [(signed char)13] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_22]))) != ((+(min((arr_32 [i_23] [i_22] [i_23] [i_22] [i_22] [i_22] [i_22]), (((/* implicit */unsigned int) (unsigned char)255))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) max((((/* implicit */short) (signed char)53)), ((short)26644))))) >= (((max((((/* implicit */long long int) (unsigned char)134)), (2702213273938364780LL))) / (((/* implicit */long long int) (+(((/* implicit */int) var_15)))))))));
}
