/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240969
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 8513737527512517047LL)) ? ((~(((/* implicit */int) (short)-19007)))) : ((+(((/* implicit */int) (_Bool)1)))))), (((int) (~(((/* implicit */int) arr_2 [i_1])))))));
                        arr_12 [10] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) min((min((arr_7 [i_0]), (arr_7 [i_0]))), (((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_7 [i_0])))));
                        var_17 = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_1] [(signed char)12] [i_1] [i_0])) | ((+((~(((/* implicit */int) var_13))))))));
                        var_18 ^= 268433408;
                        var_19 = ((/* implicit */unsigned long long int) (+(min((((/* implicit */int) arr_9 [i_1] [i_1] [i_1])), (-295177991)))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
                    {
                        arr_15 [i_2] [i_2] = ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_2])), (3664701121U)))))) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) (-((-(-1670108348)))))));
                        var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) 268433421)) ? (3664701121U) : (((/* implicit */unsigned int) -1670108348))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            var_21 += ((/* implicit */short) max((((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_1] [i_1] [i_6]))))) ? ((~(arr_10 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */unsigned long long int) -386169776)) : (arr_0 [i_2] [i_2])))) ? (((arr_18 [i_5] [i_5]) | (arr_13 [i_0] [i_0] [(signed char)4] [i_6]))) : (((/* implicit */unsigned int) -2066480675))))));
                            arr_21 [i_0] [(_Bool)1] [(short)1] [8ULL] [8ULL] [8ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((946822141), (((/* implicit */int) (short)1581))))), (min((((/* implicit */long long int) (signed char)103)), (-1LL)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (605039245)))) ? (arr_20 [i_6] [i_5] [i_2] [(unsigned char)19] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_2] [(unsigned char)8] [i_2]))))))));
                            arr_22 [i_0] [i_6] [i_5] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */long long int) min(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)62))))) + (((((/* implicit */long long int) ((/* implicit */int) (short)-22762))) - (2992323297354362719LL))))), (((/* implicit */long long int) (((~(1069545056))) ^ (max((-268433400), (((/* implicit */int) arr_1 [i_0])))))))));
                            var_22 = ((/* implicit */_Bool) arr_7 [i_2]);
                        }
                        arr_23 [i_0] [i_0] [i_2] [i_5] &= ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) (short)-3058))))) | (arr_19 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2] [i_5])));
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned short) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_24 = ((/* implicit */int) (-(arr_7 [i_1])));
                            var_25 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) == (((/* implicit */int) arr_6 [i_0] [i_2] [i_1] [i_0])))))) >= (((((/* implicit */_Bool) 683261535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)70))) : (10577348627201973567ULL)))));
                        }
                        for (unsigned short i_9 = 1; i_9 < 21; i_9 += 1) 
                        {
                            var_26 = ((/* implicit */signed char) (-(((/* implicit */int) arr_31 [i_9 - 1] [i_9] [i_9 - 1] [i_9 - 1] [i_9 + 1]))));
                            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (unsigned short)508))));
                        }
                        for (short i_10 = 1; i_10 < 21; i_10 += 4) 
                        {
                            var_28 = (+(((/* implicit */int) (unsigned short)65055)));
                            var_29 += ((/* implicit */unsigned short) (-(arr_26 [i_0] [i_1] [i_2] [i_7] [(unsigned short)1])));
                            var_30 ^= ((/* implicit */signed char) arr_13 [i_0] [i_1] [i_1] [i_10 - 1]);
                        }
                        arr_35 [i_0] [i_0] [i_2] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_19 [i_7] [i_1] [i_2] [i_7] [i_7] [i_7] [(short)14]) : (((/* implicit */long long int) ((((/* implicit */_Bool) -505092427)) ? (790261962U) : (arr_26 [9ULL] [i_0] [i_1] [i_2] [9ULL]))))));
                    }
                    var_31 = ((/* implicit */long long int) ((unsigned int) (_Bool)1));
                    var_32 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [i_0] [i_0] [i_0] [i_0] [i_0]))) - (2503717070917520859LL))), (((/* implicit */long long int) (unsigned char)123)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_11 = 2; i_11 < 11; i_11 += 4) /* same iter space */
    {
        var_33 += min((min((66571993088ULL), (((/* implicit */unsigned long long int) (signed char)31)))), (((/* implicit */unsigned long long int) (unsigned short)4092)));
        /* LoopSeq 1 */
        for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_13 = 0; i_13 < 12; i_13 += 1) 
            {
                var_34 &= ((/* implicit */unsigned int) arr_17 [i_11] [i_12] [i_13] [i_13]);
                var_35 = ((/* implicit */int) (((+(arr_37 [i_11 + 1]))) & (arr_41 [i_12] [i_12] [i_12])));
            }
            for (unsigned short i_14 = 2; i_14 < 8; i_14 += 4) 
            {
                arr_48 [i_11] [i_11] [i_11 - 1] = ((/* implicit */unsigned int) (short)6638);
                var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_31 [i_11] [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_11]), (((/* implicit */short) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)65040), ((unsigned short)537))))) : ((+((+(1243385161860767679ULL)))))));
                var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) ((unsigned short) ((unsigned char) -853887226))))));
                arr_49 [(signed char)9] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)38255), (((/* implicit */unsigned short) arr_46 [i_11]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_11] [i_14 - 1])))))) : (arr_37 [i_11 - 1])))) ? (((/* implicit */int) arr_44 [i_12] [i_12] [i_12] [(signed char)9])) : (((/* implicit */int) (unsigned short)58501))));
            }
            for (int i_15 = 0; i_15 < 12; i_15 += 1) 
            {
                var_38 += ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_3)), (arr_30 [i_11] [i_11 - 1] [i_11] [i_11] [i_11 - 2] [i_11 - 2] [i_11]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (signed char)26)), ((unsigned char)182))))));
                /* LoopSeq 4 */
                for (signed char i_16 = 0; i_16 < 12; i_16 += 3) 
                {
                    arr_55 [i_16] [i_15] [i_12] = ((((/* implicit */_Bool) (short)-16277)) ? (((((/* implicit */_Bool) -479638812)) ? ((+(528303383762611537ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)233)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_16] [i_15] [i_11 + 1] [i_11 + 1]))));
                    arr_56 [i_11] [i_12] [i_15] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (short)18009)))));
                }
                for (unsigned char i_17 = 0; i_17 < 12; i_17 += 2) 
                {
                    var_39 = ((/* implicit */_Bool) max((((12277995746088125333ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2310))))), (((/* implicit */unsigned long long int) -1109190265))));
                    var_40 = ((/* implicit */long long int) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_34 [i_11] [i_11] [i_17] [i_15] [i_11] [i_11])) ^ (arr_57 [i_11 + 1] [i_11] [i_11 + 1] [i_11 - 2])))), (((18446744073709551608ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))))));
                    var_41 -= ((/* implicit */unsigned char) (~(arr_40 [i_12] [(unsigned char)8] [i_17])));
                }
                for (unsigned int i_18 = 0; i_18 < 12; i_18 += 3) 
                {
                    var_42 += ((((/* implicit */_Bool) 17445139762398708918ULL)) ? (((/* implicit */int) (short)-23433)) : (1109190265));
                    var_43 &= ((/* implicit */short) arr_8 [i_11 - 1] [i_12] [i_12]);
                }
                for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 2) 
                {
                    var_44 = ((/* implicit */int) arr_4 [i_11 - 2]);
                    var_45 |= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_4 [i_12]), (((/* implicit */unsigned long long int) var_11)))))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) -1109190256)) : (arr_37 [i_11 - 2])))) / (((unsigned long long int) var_10))))));
                }
                var_46 = (-2147483647 - 1);
                var_47 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(arr_45 [i_12] [i_15])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [8ULL] [i_12] [i_11 - 2]))) : (((arr_3 [i_11 - 1]) ? (14856789616640109820ULL) : (((/* implicit */unsigned long long int) arr_26 [i_11] [i_11] [i_11] [i_11] [i_11])))))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0)))))));
                arr_65 [i_15] [(unsigned char)8] [(signed char)11] = ((/* implicit */short) -1109190265);
            }
            var_48 = ((/* implicit */unsigned int) max((var_48), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_28 [i_11] [i_11] [i_11 + 1] [i_11] [i_11 + 1] [i_12]), (arr_28 [i_11] [i_11 + 1] [i_11] [i_11] [i_11 - 2] [i_11])))) ? (((((/* implicit */_Bool) arr_29 [i_11] [i_11] [i_11] [(signed char)12] [i_11] [i_11])) ? (arr_62 [i_11 + 1] [i_11 - 2] [i_11 - 2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_12] [i_12] [i_11])) ? (-1667196650) : (((/* implicit */int) arr_2 [i_11]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1466223109)) ? (((/* implicit */int) (signed char)-80)) : ((-(((/* implicit */int) (unsigned short)12))))))))))));
            var_49 = ((/* implicit */unsigned short) -553121986);
        }
        arr_66 [i_11] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((unsigned long long int) arr_44 [i_11] [i_11 - 1] [i_11 + 1] [i_11]))) ? (((((/* implicit */_Bool) var_3)) ? (1896892752U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_11 - 2] [i_11] [i_11 - 1]))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-13176))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4969835715129135505LL)) && (((/* implicit */_Bool) 32505856)))))));
        var_50 *= max((arr_29 [i_11] [i_11] [i_11 - 2] [i_11 - 2] [i_11 - 2] [i_11]), ((+(329520781807879450ULL))));
    }
    /* vectorizable */
    for (long long int i_20 = 2; i_20 < 11; i_20 += 4) /* same iter space */
    {
        arr_69 [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_32 [i_20 - 1] [i_20 - 2])) : (((/* implicit */int) var_4))));
        /* LoopSeq 2 */
        for (signed char i_21 = 0; i_21 < 12; i_21 += 1) 
        {
            var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_60 [i_20 - 1] [i_21])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_20 - 1]))) : (((((/* implicit */_Bool) 8064)) ? (70368743129088ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14168)))))));
            var_52 = ((/* implicit */unsigned int) (_Bool)1);
            var_53 = ((/* implicit */unsigned short) max((var_53), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_68 [i_20 - 2])) ? (((/* implicit */int) arr_68 [i_20 - 1])) : (((/* implicit */int) arr_68 [i_20 - 1])))))));
        }
        for (unsigned short i_22 = 0; i_22 < 12; i_22 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_23 = 1; i_23 < 11; i_23 += 1) 
            {
                arr_77 [i_23] [i_23] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (short)14167))) ? ((+(((/* implicit */int) (signed char)-104)))) : (((/* implicit */int) (unsigned short)3997))));
                var_54 = ((/* implicit */unsigned short) (~(arr_54 [i_23 + 1] [i_23 + 1] [i_23 - 1] [i_23 - 1])));
                var_55 = ((/* implicit */signed char) (unsigned char)74);
                /* LoopSeq 2 */
                for (long long int i_24 = 0; i_24 < 12; i_24 += 3) 
                {
                    var_56 = ((/* implicit */unsigned long long int) ((int) 2161727821137838080ULL));
                    var_57 |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_72 [i_20 + 1])) - (arr_54 [i_20 - 1] [i_20] [i_20] [i_20 + 1])));
                }
                for (unsigned int i_25 = 0; i_25 < 12; i_25 += 1) 
                {
                    arr_83 [i_20] [i_23] [i_23 + 1] [i_25] [i_25] = ((/* implicit */int) (short)16478);
                    var_58 = ((/* implicit */unsigned short) arr_63 [i_20] [1] [i_20 - 1] [i_20] [8U]);
                }
                /* LoopNest 2 */
                for (int i_26 = 0; i_26 < 12; i_26 += 4) 
                {
                    for (unsigned short i_27 = 0; i_27 < 12; i_27 += 3) 
                    {
                        {
                            arr_90 [i_27] [1U] [i_23] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_88 [i_26] [i_23 - 1] [i_23 - 1] [i_20 - 2] [i_20 - 2] [i_20 - 1] [i_20]))));
                            arr_91 [i_20] [i_22] [i_22] [2LL] [(signed char)6] [i_26] [i_22] &= ((/* implicit */_Bool) arr_79 [i_20 - 2] [i_23 - 1] [i_23 - 1] [i_23 - 1]);
                        }
                    } 
                } 
            }
            arr_92 [i_20] = (~(14856789616640109820ULL));
        }
    }
    for (long long int i_28 = 2; i_28 < 11; i_28 += 4) /* same iter space */
    {
        arr_95 [i_28] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
        var_59 = ((/* implicit */_Bool) min(((~((+(17203358911848783937ULL))))), (((/* implicit */unsigned long long int) min((((unsigned short) arr_53 [i_28 + 1] [10ULL] [i_28 - 1] [i_28 + 1])), (((/* implicit */unsigned short) arr_89 [i_28 - 1] [i_28] [i_28] [i_28] [i_28] [i_28 + 1] [i_28])))))));
    }
}
