/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229173
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
    var_15 = ((/* implicit */int) max((var_5), (((/* implicit */unsigned short) (_Bool)1))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (~(((long long int) (~(((/* implicit */int) (_Bool)1))))))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (long long int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_0] [i_0])))))));
                /* LoopSeq 3 */
                for (short i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) 4294967295U)))));
                    /* LoopSeq 1 */
                    for (long long int i_4 = 2; i_4 < 16; i_4 += 3) 
                    {
                        arr_15 [i_4 - 2] [i_4 - 2] [i_2] [i_2 - 1] [i_2] [i_0] [i_0] = ((/* implicit */long long int) (short)-32753);
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_7 [i_0] [i_4])) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) % (((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_3] [i_0] [i_0] [(unsigned short)12]))))))))));
                        var_20 += ((/* implicit */signed char) ((short) arr_4 [i_2] [i_2 + 1] [i_2 + 1]));
                    }
                }
                for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
                {
                    arr_20 [i_5] [i_2] [i_0] [i_2] [i_2] [i_0] = ((unsigned long long int) ((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) (short)-718)) : (((/* implicit */int) arr_7 [i_0] [i_0]))));
                    arr_21 [i_5] [i_5] [i_5] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_1]))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
                {
                    var_21 -= ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        var_22 -= (~(1U));
                        arr_27 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (arr_14 [i_0] [9LL] [9LL] [i_2] [9LL] [i_6] [i_2])));
                        var_23 -= ((/* implicit */unsigned short) ((arr_8 [i_2 - 1] [i_1] [i_2 - 1] [i_6]) ? (((/* implicit */int) (signed char)-77)) : (((/* implicit */int) arr_16 [i_6] [i_2 - 1] [i_2 + 1] [i_6]))));
                    }
                }
            }
            for (long long int i_8 = 2; i_8 < 16; i_8 += 2) 
            {
                arr_31 [i_0] [(unsigned short)3] [i_0] |= ((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [2ULL] [i_8])) || (((/* implicit */_Bool) (unsigned char)235))))), (arr_29 [i_8 - 1] [i_8 - 2] [i_8 + 1]))))));
                var_24 = ((/* implicit */unsigned int) max((((signed char) (signed char)63)), (((/* implicit */signed char) ((_Bool) ((unsigned int) (_Bool)1))))));
                arr_32 [i_0] [i_0] [i_8 + 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((((/* implicit */int) (short)32759)) / (((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) (_Bool)1)))))));
            }
            /* vectorizable */
            for (unsigned int i_9 = 1; i_9 < 14; i_9 += 1) 
            {
                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((5373025240556855505ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2))))))));
                var_26 = ((/* implicit */short) arr_9 [i_9] [i_1] [i_9]);
            }
            /* vectorizable */
            for (unsigned short i_10 = 0; i_10 < 17; i_10 += 4) 
            {
                arr_39 [i_0] [i_1] [i_10] [4ULL] = ((/* implicit */unsigned short) (_Bool)1);
                /* LoopSeq 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_27 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)49)) * (((/* implicit */int) arr_26 [i_0]))));
                    arr_43 [i_0] [i_1] [10] [i_11] [i_0] [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_10] [i_0] [i_0] [i_0]))));
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1532958706U)) ? (((4294967292U) ^ (1790415261U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                    var_29 -= ((/* implicit */signed char) arr_19 [11LL] [i_1] [i_10] [i_11]);
                }
                for (long long int i_12 = 1; i_12 < 14; i_12 += 4) 
                {
                    var_30 ^= ((/* implicit */signed char) (((_Bool)1) ? (arr_14 [i_0] [i_0] [i_0] [i_0] [8ULL] [i_0] [i_0]) : (((/* implicit */long long int) arr_24 [i_12] [i_10]))));
                    var_31 |= ((/* implicit */_Bool) (short)-1);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 4) 
                    {
                        var_32 = (!(((/* implicit */_Bool) arr_23 [i_10] [i_1] [i_0] [i_12 - 1])));
                        var_33 = ((/* implicit */int) ((long long int) (_Bool)1));
                    }
                    for (long long int i_14 = 0; i_14 < 17; i_14 += 1) 
                    {
                        var_34 += ((/* implicit */unsigned long long int) (_Bool)1);
                        arr_51 [(_Bool)1] [i_0] [i_0] [(short)7] [i_0] [i_12] [i_12] = ((/* implicit */unsigned int) (unsigned short)0);
                        arr_52 [i_0] [i_0] [i_12] [(unsigned char)1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */int) arr_18 [i_0] [i_12])) : (arr_13 [(short)2] [i_1] [i_12] [i_12])))) / (((-660085242268932920LL) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [15LL] [i_0])))))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        arr_57 [i_0] [i_0] [(signed char)2] [i_12] [i_1] [i_0] [i_0] = (~(arr_0 [i_12] [i_12 - 1]));
                        arr_58 [i_12] [i_12] [i_10] [i_1] [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_12] [i_12 - 1] [i_12 + 2] [i_12])) + (((/* implicit */int) arr_11 [i_12] [i_12 - 1] [i_12 + 2] [i_12]))));
                        var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)53677)))))));
                        arr_59 [i_10] [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned long long int) ((short) ((unsigned long long int) 2378939464U)));
                        var_36 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [i_12] [i_12 + 3] [i_12] [i_12 + 3]))));
                    }
                    arr_60 [i_0] [i_1] [i_12] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                    var_37 = ((/* implicit */long long int) min((var_37), (arr_12 [i_1])));
                }
                var_38 = ((/* implicit */_Bool) 1916027821U);
                var_39 = ((/* implicit */_Bool) 0U);
                /* LoopSeq 2 */
                for (unsigned char i_16 = 2; i_16 < 16; i_16 += 3) 
                {
                    arr_63 [i_0] [i_0] [i_0] [i_16] = ((/* implicit */long long int) 3539364075U);
                    /* LoopSeq 3 */
                    for (signed char i_17 = 0; i_17 < 17; i_17 += 4) 
                    {
                        arr_68 [i_0] [i_1] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_25 [(_Bool)1] [i_1] [i_16 - 1] [i_16 + 1] [i_16 - 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) 8330613575091504599LL)) || ((_Bool)1)))) : (((/* implicit */int) ((unsigned char) arr_30 [i_10] [i_1])))));
                        arr_69 [i_16] [i_16] [i_10] [i_16 - 2] [i_17] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_55 [i_16]))));
                        var_40 ^= ((/* implicit */signed char) 8330613575091504599LL);
                        var_41 = ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)));
                    }
                    for (unsigned int i_18 = 0; i_18 < 17; i_18 += 4) 
                    {
                        arr_73 [i_16] [(unsigned short)7] = ((/* implicit */int) 8330613575091504599LL);
                        var_42 -= ((/* implicit */signed char) (~(arr_61 [0U] [i_10] [i_16 - 1] [i_16 - 1] [i_18] [0U])));
                        var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) (unsigned char)32))));
                        var_44 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                        var_45 -= ((((((/* implicit */_Bool) arr_53 [i_0] [14ULL] [14ULL] [i_16] [i_18] [i_18])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_17 [i_10] [i_1] [i_10] [i_16]))) > (((/* implicit */long long int) ((((/* implicit */_Bool) 8U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)114))) : (2382252749U)))));
                    }
                    for (unsigned short i_19 = 3; i_19 < 13; i_19 += 4) 
                    {
                        var_46 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_16] [i_16] [i_16] [i_19])))))));
                        arr_76 [i_0] [i_1] [i_16] [i_16 - 2] [i_19 + 2] [i_19 + 1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)64)))) >> (((((/* implicit */int) arr_40 [i_19 + 1] [i_19] [i_19 - 1] [i_19 - 1] [i_19 + 2] [i_19 + 1])) - (30334)))));
                        var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) (~(((/* implicit */int) ((arr_35 [i_0] [(_Bool)1] [i_0]) || (((/* implicit */_Bool) (short)15445))))))))));
                        var_48 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)43))));
                    }
                    var_49 += ((/* implicit */unsigned int) ((unsigned short) arr_8 [i_1] [i_16 - 1] [14LL] [i_0]));
                    arr_77 [(unsigned short)2] [i_1] [i_10] [(unsigned short)2] [i_16] [i_16 + 1] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)78))));
                }
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    var_50 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [3LL] [i_1] [3LL] [i_20])))))));
                    arr_81 [i_0] [i_20] [i_20] [i_20] = ((/* implicit */long long int) (((_Bool)1) && (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                    arr_82 [(signed char)16] [i_0] [(signed char)16] [i_10] [i_20] &= ((/* implicit */unsigned char) (short)28708);
                }
            }
            var_51 = ((/* implicit */short) ((((/* implicit */_Bool) (short)17355)) && (((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (-370070267))))));
            /* LoopSeq 1 */
            for (unsigned short i_21 = 1; i_21 < 15; i_21 += 4) 
            {
                var_52 = ((/* implicit */signed char) max((((/* implicit */int) (signed char)3)), ((-(((/* implicit */int) (_Bool)1))))));
                arr_87 [7ULL] [(_Bool)0] [(signed char)9] [(_Bool)0] = ((/* implicit */_Bool) (~(((/* implicit */int) max((arr_35 [i_21] [i_21 - 1] [i_21 - 1]), (arr_35 [(unsigned short)5] [i_21 - 1] [i_21 - 1]))))));
                var_53 |= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) arr_9 [i_21 - 1] [i_21 + 2] [i_0])) | (((/* implicit */int) arr_9 [i_21 + 1] [i_21 - 1] [i_0])))));
                /* LoopSeq 4 */
                for (signed char i_22 = 3; i_22 < 15; i_22 += 1) 
                {
                    var_54 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) 3378014042U)) * (arr_19 [i_22] [i_22] [i_22 - 2] [i_21 - 1]))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned short)20037), (((/* implicit */unsigned short) (_Bool)1))))) >> (((max((((/* implicit */unsigned long long int) 23234727145204923LL)), (2594112444429158431ULL))) - (2594112444429158402ULL))))))));
                    var_55 = (+((((!((_Bool)1))) ? (((/* implicit */int) arr_72 [i_0] [i_21 + 2] [i_21 + 1] [i_22 - 2] [i_21] [(_Bool)1] [i_0])) : (((/* implicit */int) arr_16 [i_0] [i_21 + 2] [i_0] [i_0])))));
                    var_56 = ((/* implicit */unsigned long long int) max((var_56), (((/* implicit */unsigned long long int) (short)-8273))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (long long int i_23 = 0; i_23 < 17; i_23 += 2) 
                    {
                        arr_95 [i_22] = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [2LL] [i_1])) * ((-(((/* implicit */int) arr_35 [i_22] [i_1] [i_1]))))));
                        var_57 = ((/* implicit */unsigned int) max((var_57), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)63))) < (-9036993956837441599LL))))));
                    }
                    for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                    {
                        arr_100 [i_22] [i_1] [i_1] [i_1] [i_21] [(signed char)3] [i_21] = ((/* implicit */unsigned long long int) (unsigned char)15);
                        arr_101 [i_0] [2ULL] [i_0] [i_24] &= ((/* implicit */_Bool) arr_34 [i_1] [i_1]);
                        arr_102 [i_0] [13ULL] [13ULL] [i_21] [i_22] [i_22] [7ULL] = ((/* implicit */long long int) arr_47 [12LL] [i_22]);
                    }
                    for (unsigned short i_25 = 0; i_25 < 17; i_25 += 1) 
                    {
                        var_58 = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2966269000U)))))));
                        var_59 = ((/* implicit */int) (-(0ULL)));
                        arr_105 [i_0] [i_22] [i_21] [i_22] [i_25] = ((/* implicit */unsigned char) ((unsigned long long int) arr_67 [i_0] [i_0] [i_22] [i_22 - 3] [i_0]));
                        arr_106 [i_22] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_79 [i_1] [i_1] [i_22] [i_1] [i_22 + 2])) && (((/* implicit */_Bool) arr_79 [i_0] [i_0] [i_22] [(_Bool)1] [i_22 - 1])))))) + (arr_79 [i_0] [i_1] [i_22] [i_22] [i_22 - 2])));
                    }
                    for (signed char i_26 = 1; i_26 < 16; i_26 += 4) 
                    {
                        var_60 = ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) (unsigned short)65535)))));
                        arr_111 [i_22] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (-(17488431369487388409ULL)))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (5544362897163209913LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)112))))) : (((/* implicit */long long int) ((((/* implicit */int) ((signed char) (_Bool)1))) ^ (((((/* implicit */_Bool) 6306620424006053073ULL)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (signed char)63)))))))));
                        arr_112 [i_22] [(unsigned short)5] [i_22] = 1358464129U;
                        arr_113 [i_22] [i_22] [i_21 - 1] [i_21 - 1] [i_26 - 1] = ((/* implicit */unsigned int) arr_8 [i_22] [i_21 + 2] [i_1] [i_22]);
                        var_61 += ((/* implicit */_Bool) max(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)6))));
                    }
                    arr_114 [i_0] [i_0] [i_0] [i_0] [i_22] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((_Bool) arr_49 [i_22] [i_21])) && (((/* implicit */_Bool) (+(arr_46 [i_22] [i_22] [i_22]))))))), ((~(1095684098U)))));
                }
                for (unsigned long long int i_27 = 0; i_27 < 17; i_27 += 4) /* same iter space */
                {
                    arr_117 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((short) arr_25 [i_0] [i_21] [i_0] [i_0] [i_0]));
                    var_62 = ((/* implicit */unsigned int) (~((~(688577986)))));
                    var_63 = ((/* implicit */int) max((((long long int) (signed char)5)), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)40333)))))));
                }
                /* vectorizable */
                for (unsigned long long int i_28 = 0; i_28 < 17; i_28 += 4) /* same iter space */
                {
                    var_64 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_42 [i_21 + 1] [(signed char)6] [(signed char)6] [i_28])) : (((/* implicit */int) arr_119 [i_28] [i_21 + 2]))));
                    arr_121 [(short)13] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)-84);
                }
                for (unsigned long long int i_29 = 0; i_29 < 17; i_29 += 4) /* same iter space */
                {
                    var_65 = ((/* implicit */unsigned short) (+(((unsigned int) arr_80 [i_21 + 1] [i_21 + 2] [i_21 - 1] [i_21 + 1] [i_29]))));
                    var_66 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) (_Bool)1)), (1095684083U))), (((/* implicit */unsigned int) ((arr_94 [i_0] [i_0] [2U] [i_0]) ? (((/* implicit */int) arr_91 [i_0])) : (((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_84 [i_21 + 1] [i_21] [i_21 + 1]))) <= (3199283203U))))) : (3199283203U)));
                    var_67 -= ((/* implicit */_Bool) arr_99 [i_21 - 1] [i_1] [i_1] [i_21 - 1] [i_29]);
                    var_68 ^= ((/* implicit */unsigned int) (_Bool)1);
                    var_69 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1328698265U)) ? (-812608646) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) (_Bool)1))))))) > (1793079396U)));
                }
                var_70 = ((/* implicit */signed char) min((var_70), (((signed char) max((((/* implicit */long long int) arr_13 [(signed char)14] [i_1] [i_0] [(signed char)8])), (arr_70 [i_0] [i_1] [14ULL] [i_0] [i_1]))))));
            }
        }
        for (signed char i_30 = 0; i_30 < 17; i_30 += 1) /* same iter space */
        {
            var_71 ^= ((/* implicit */signed char) (+((-(arr_90 [i_0] [i_0] [6U] [i_30] [(signed char)0])))));
            var_72 = ((/* implicit */signed char) ((int) (_Bool)1));
        }
    }
}
