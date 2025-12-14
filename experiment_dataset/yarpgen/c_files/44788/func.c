/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44788
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
    var_17 = 648912176U;
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) ((short) (~(648912172U))));
        arr_4 [i_0] [i_0 - 2] = ((/* implicit */int) (_Bool)0);
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            /* LoopSeq 3 */
            for (signed char i_3 = 2; i_3 < 11; i_3 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 3) 
                {
                    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)51693)) ? (((((/* implicit */_Bool) 648912172U)) ? (((/* implicit */int) (unsigned short)65535)) : (arr_8 [i_3] [1U]))) : (((/* implicit */int) arr_1 [3U])))) >= (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)51693)) : (((/* implicit */int) var_10))))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)6)) : (arr_8 [i_1] [i_4]))) : ((+(((/* implicit */int) (signed char)6))))))));
                    arr_15 [i_1] [i_4] [i_1] [i_1] [9U] = ((/* implicit */long long int) (+(arr_6 [i_1])));
                    arr_16 [(unsigned char)10] [(signed char)10] [i_3] [i_4] [0ULL] = ((/* implicit */unsigned short) (_Bool)1);
                }
                for (unsigned int i_5 = 1; i_5 < 10; i_5 += 2) 
                {
                    arr_19 [(unsigned char)1] = ((/* implicit */unsigned int) ((3987147208091258834ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)93)))));
                    var_20 = ((/* implicit */unsigned short) ((_Bool) max((((/* implicit */int) (unsigned short)13843)), ((~(((/* implicit */int) (unsigned short)13842)))))));
                    var_21 *= ((/* implicit */_Bool) ((unsigned long long int) max((arr_8 [i_1] [i_5]), (((/* implicit */int) (signed char)3)))));
                    arr_20 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) (+((+(((((/* implicit */_Bool) 3596748370U)) ? (arr_18 [(_Bool)1] [(unsigned short)11] [i_3] [i_3]) : (arr_17 [i_1] [i_1] [i_1] [(_Bool)1] [i_3] [i_3])))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)13828)) < (((/* implicit */int) (unsigned short)13828)))))) + (3596748370U)))));
                    var_23 ^= ((/* implicit */signed char) ((_Bool) (short)0));
                    var_24 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)51693)) >= (((/* implicit */int) (_Bool)1)))) ? (arr_13 [i_3 + 1] [i_3 - 1] [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-9578)))))));
                    var_25 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4116461527U)) ? (3646055123U) : (((/* implicit */unsigned int) 589525524))))) ? (((long long int) arr_2 [i_3] [i_1])) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
                }
                /* LoopSeq 1 */
                for (short i_7 = 3; i_7 < 10; i_7 += 2) 
                {
                    arr_25 [i_3] [i_3] [i_3] [i_1] [i_1] = ((/* implicit */short) (signed char)3);
                    var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_1]))));
                    arr_26 [0U] [i_3] [i_7] = arr_5 [i_1] [i_2];
                }
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned short i_9 = 1; i_9 < 11; i_9 += 2) 
                {
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)1042)) ? (arr_29 [i_9] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13855))))), (((/* implicit */unsigned long long int) arr_17 [6ULL] [i_9 - 1] [i_9 - 1] [i_9] [6ULL] [i_2]))))) ? (571745937U) : (((/* implicit */unsigned int) ((-589525518) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_9] [i_1]))))))))));
                    var_28 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) (short)-22635)) | (589525525)))), (3933685407U)));
                }
                for (unsigned int i_10 = 1; i_10 < 11; i_10 += 2) 
                {
                    var_29 = 3933685407U;
                    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_14 [i_10] [i_10] [i_8] [i_2] [i_2] [i_10]), (((/* implicit */unsigned int) max((arr_28 [i_8] [i_10 + 1]), (((/* implicit */unsigned char) (signed char)14)))))))) ? (((/* implicit */unsigned long long int) -1372415863)) : (((unsigned long long int) ((((/* implicit */_Bool) arr_17 [(short)8] [(short)8] [(short)8] [0U] [(short)8] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (var_12))))));
                    arr_36 [i_1] [i_8] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) + (589525508)))), (3933685434U))) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (+(3933685407U))))))));
                    var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) max((((/* implicit */unsigned int) arr_32 [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_10])), (648912176U))))));
                    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_1] [i_1] [i_8] [i_10] [i_1])) || ((!(((/* implicit */_Bool) max((arr_22 [i_2] [i_2]), (((/* implicit */long long int) 589525525))))))))))));
                }
                var_33 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)130))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned short)0])) ? (((/* implicit */int) arr_2 [13ULL] [(unsigned short)6])) : (((/* implicit */int) (unsigned char)135))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1]))) : (4213562527573968575ULL)))));
                /* LoopSeq 2 */
                for (unsigned int i_11 = 2; i_11 < 11; i_11 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_12 = 0; i_12 < 12; i_12 += 2) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) arr_40 [10ULL] [i_1] [i_1]))));
                        arr_44 [i_1] [5ULL] [i_1] [i_1] [(short)11] [i_8] [8U] = ((/* implicit */int) ((((/* implicit */_Bool) min((((short) var_6)), (((/* implicit */short) (signed char)-42))))) ? (arr_23 [(short)6] [(_Bool)1] [(_Bool)1] [i_12] [i_12] [i_11]) : (((/* implicit */unsigned int) -589525508))));
                    }
                    for (int i_13 = 0; i_13 < 12; i_13 += 2) /* same iter space */
                    {
                        arr_48 [i_8] [i_11] [i_8] [(short)6] [i_8] = ((/* implicit */unsigned int) 8819181068511606148ULL);
                        var_35 += ((((/* implicit */unsigned int) (~(((((/* implicit */int) (signed char)127)) | (((/* implicit */int) (signed char)-119))))))) & (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (((unsigned int) arr_39 [i_1] [i_8] [i_1] [i_1])))));
                        var_36 = ((/* implicit */unsigned long long int) var_7);
                    }
                    arr_49 [i_11 - 1] [i_8] [i_8] [i_8] [i_8] [i_1] = ((/* implicit */long long int) (signed char)30);
                    /* LoopSeq 4 */
                    for (short i_14 = 0; i_14 < 12; i_14 += 2) /* same iter space */
                    {
                        var_37 = ((((((/* implicit */_Bool) 4294967295U)) ? (arr_34 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) max((-589525526), (2125221233)))))) | (((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) 3646055120U)))))));
                        var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1339543003571544803ULL)) ? (((/* implicit */unsigned int) -589525508)) : (((unsigned int) ((unsigned long long int) 1073725440U))))))));
                        var_39 -= ((/* implicit */unsigned short) arr_52 [i_1] [i_2] [i_2] [i_11 + 1] [i_14] [i_14]);
                        var_40 *= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 108086391056891904ULL)))) | ((~(0ULL)))))));
                        var_41 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                    }
                    for (short i_15 = 0; i_15 < 12; i_15 += 2) /* same iter space */
                    {
                        var_42 = max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) < (4226672933U)))), (((long long int) arr_0 [i_2])));
                        var_43 = ((/* implicit */signed char) ((max((arr_39 [i_1] [i_1] [5ULL] [5ULL]), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)32029))))))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_1] [i_11] [i_1] [i_1] [i_11] [i_11])))));
                        arr_55 [i_1] [i_2] [i_8] [i_8] [i_15] = ((/* implicit */short) max((((/* implicit */long long int) arr_46 [9U] [i_2] [i_2] [i_2] [i_2])), (2199019061248LL)));
                    }
                    for (short i_16 = 0; i_16 < 12; i_16 += 2) 
                    {
                        arr_59 [i_1] [i_8] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) var_7);
                        var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_58 [i_1])) < (((/* implicit */int) (unsigned short)1070))))) | (((arr_41 [i_1] [i_11 - 2] [i_11 + 1] [i_11 + 1] [i_11] [i_1] [i_1]) & (((/* implicit */int) arr_33 [i_11 - 2] [i_8] [(_Bool)1] [i_8] [i_8] [i_2])))))))));
                    }
                    for (signed char i_17 = 0; i_17 < 12; i_17 += 2) 
                    {
                        arr_62 [(short)2] [1] [i_8] [i_8] [i_17] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)-18220)), (((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_2] [i_8] [i_2]))) + (max((2847461920U), (arr_6 [i_1])))))));
                        var_45 += ((/* implicit */long long int) (_Bool)1);
                        var_46 = ((/* implicit */unsigned int) max((var_46), (((/* implicit */unsigned int) (signed char)-90))));
                        var_47 = ((/* implicit */unsigned long long int) max((var_47), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_43 [i_1] [i_1] [i_11] [i_11] [i_11] [i_11]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1070))) : (-2199019061249LL))) | (((/* implicit */long long int) ((/* implicit */int) ((648912176U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)125))))))))))));
                    }
                }
                for (unsigned int i_18 = 3; i_18 < 8; i_18 += 2) 
                {
                    var_48 = ((/* implicit */unsigned int) arr_27 [i_1]);
                    var_49 = ((/* implicit */unsigned long long int) max((var_49), (((/* implicit */unsigned long long int) min(((unsigned char)126), ((unsigned char)130))))));
                }
            }
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
            {
                var_50 = ((/* implicit */unsigned short) max((var_50), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)117)))))));
                var_51 = ((/* implicit */unsigned int) arr_53 [i_1] [i_2] [i_1]);
                arr_69 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_4);
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_20 = 1; i_20 < 10; i_20 += 3) 
            {
                var_52 = ((/* implicit */short) (~(((((/* implicit */_Bool) 2199019061248LL)) ? (((/* implicit */int) (signed char)90)) : (((/* implicit */int) arr_70 [i_1]))))));
                var_53 = ((/* implicit */unsigned int) ((-2199019061249LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34578)))));
                /* LoopSeq 1 */
                for (unsigned long long int i_21 = 0; i_21 < 12; i_21 += 2) 
                {
                    arr_74 [i_1] [i_2] [i_20] [i_21] [(short)4] = ((/* implicit */short) 16099118699644554034ULL);
                    arr_75 [i_21] [i_20] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_1] [i_1] [i_1] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)98))) : (arr_31 [i_1] [i_1] [i_2] [i_21] [i_21])));
                    /* LoopSeq 1 */
                    for (short i_22 = 2; i_22 < 11; i_22 += 2) 
                    {
                        var_54 = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)1042)) ^ (((/* implicit */int) (unsigned char)130)))) ^ (((/* implicit */int) (short)-8913))));
                        arr_79 [i_1] [i_2] [(unsigned short)5] [(short)11] [i_21] [6LL] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-8913)) >= (((/* implicit */int) (unsigned char)149)))))) ^ ((~(2347625374064997581ULL)))));
                        var_55 = ((/* implicit */unsigned char) min((var_55), (((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (signed char)-90))))))));
                        var_56 = ((/* implicit */short) 15627008333983595028ULL);
                    }
                    arr_80 [i_1] [i_1] [i_1] [8ULL] [8ULL] = ((/* implicit */unsigned int) ((int) arr_73 [11U] [i_20] [i_20] [i_21] [i_2]));
                }
            }
            for (unsigned int i_23 = 3; i_23 < 9; i_23 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_24 = 2; i_24 < 11; i_24 += 3) 
                {
                    var_57 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))) / (max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)-1)))))))));
                    var_58 ^= ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_61 [i_1] [i_2] [i_23 + 2] [i_24 - 2] [i_1] [i_24 - 2])) ^ (((((/* implicit */_Bool) arr_83 [i_2] [i_2] [i_2] [i_24 + 1])) ? (((/* implicit */int) (unsigned char)187)) : (124569920)))))) : (((unsigned int) (~(((/* implicit */int) (short)3043))))));
                }
                for (short i_25 = 0; i_25 < 12; i_25 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_26 = 1; i_26 < 10; i_26 += 2) 
                    {
                        arr_95 [i_1] [i_2] [i_2] [i_2] [i_2] [i_1] |= ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)28))));
                        arr_96 [i_23] [i_26 + 1] = ((/* implicit */signed char) arr_61 [i_1] [i_2] [i_23] [i_25] [i_23] [i_26]);
                        var_59 ^= ((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */short) arr_21 [i_1] [i_1] [i_1])), (var_1)))) << (((((((/* implicit */_Bool) -2199019061249LL)) ? (457009761U) : (510058842U))) - (457009738U)))));
                        arr_97 [(unsigned short)11] [i_1] [i_2] [i_23 - 1] [i_23] [i_26] = ((/* implicit */unsigned int) (((+(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)149))) ^ (9223372036854775802LL))))) <= (((((/* implicit */_Bool) 18319212399944342784ULL)) ? (11LL) : (((/* implicit */long long int) ((/* implicit */int) (short)16383)))))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
                    {
                        var_60 = ((/* implicit */_Bool) max((var_60), (((/* implicit */_Bool) arr_42 [i_1] [8ULL] [i_1] [i_2] [i_27]))));
                        var_61 = ((/* implicit */_Bool) arr_6 [i_1]);
                    }
                    var_62 -= ((/* implicit */_Bool) 2661650336U);
                }
                var_63 = ((/* implicit */unsigned int) max((var_63), (((/* implicit */unsigned int) (signed char)90))));
                var_64 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_81 [(short)5] [i_2] [i_1]))));
            }
            var_65 = ((/* implicit */unsigned int) ((_Bool) arr_90 [i_2] [i_2] [4ULL] [i_1]));
        }
        arr_101 [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_77 [i_1] [(short)7] [2ULL] [2ULL] [i_1])) & (((/* implicit */int) (short)-23274))));
        var_66 -= ((/* implicit */unsigned long long int) 1643992761);
    }
}
