/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240694
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */_Bool) var_8);
                var_20 = ((/* implicit */int) max((var_20), (var_4)));
                /* LoopSeq 3 */
                for (int i_2 = 1; i_2 < 23; i_2 += 1) 
                {
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26187))) : (1617540935U)))), (arr_7 [i_0] [i_1] [i_2] [10]))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (short)-3196)) ^ (((/* implicit */int) (_Bool)0))))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_15 [(_Bool)1] [i_1] [i_2] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) (unsigned char)199)), (arr_14 [i_2 + 1] [i_3 + 1] [i_2] [(_Bool)1] [i_2 + 1] [i_2]))) << (((((/* implicit */int) (unsigned char)102)) >> (((arr_14 [i_2 + 1] [i_3 - 1] [i_2] [i_3] [i_4] [i_2]) - (2207228025U)))))));
                                arr_16 [i_0] [i_0] [i_0] [i_3] [(short)10] |= ((/* implicit */unsigned int) arr_12 [i_4]);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) (+(((((2037247975943285168LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19265))))) ^ (var_14)))));
                    var_23 ^= ((/* implicit */_Bool) min((((min((((/* implicit */unsigned int) arr_12 [i_0])), (arr_8 [i_0] [i_1] [i_0] [i_0]))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_11 [i_0] [i_0] [i_2] [i_0])))))), (((/* implicit */unsigned int) (unsigned char)116))));
                    var_24 = ((/* implicit */unsigned short) (unsigned char)147);
                }
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_25 -= ((/* implicit */long long int) ((short) (unsigned short)52817));
                    arr_20 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (((((/* implicit */_Bool) (unsigned char)180)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_5]))) : (var_18)))));
                    arr_21 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (arr_14 [(_Bool)1] [i_1] [(_Bool)1] [i_1 + 2] [(_Bool)1] [i_0]) : (arr_14 [i_5] [(short)18] [(short)18] [i_1 + 2] [(short)18] [22U])));
                    /* LoopNest 2 */
                    for (short i_6 = 1; i_6 < 23; i_6 += 2) 
                    {
                        for (short i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            {
                                var_26 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(19)))) ? (((/* implicit */int) (unsigned char)80)) : (arr_18 [i_6 + 1] [i_0] [i_5])));
                                var_27 *= ((/* implicit */short) var_9);
                                var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_1 + 1] [19LL] [i_6] [i_6 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_11 [i_1 + 1] [i_1] [i_1] [i_6 - 1])))))));
                            }
                        } 
                    } 
                    arr_26 [i_1] [i_0] = ((/* implicit */short) ((((int) -2037247975943285165LL)) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (-1865419919909005091LL))))));
                }
                for (unsigned char i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 2; i_9 < 23; i_9 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_10 = 0; i_10 < 24; i_10 += 4) 
                        {
                            var_29 ^= ((/* implicit */unsigned int) var_8);
                            var_30 -= ((/* implicit */long long int) min((((((/* implicit */_Bool) max((arr_3 [(unsigned char)8] [i_1]), (arr_2 [i_0])))) ? (((((/* implicit */int) var_5)) / (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) (unsigned short)37748)) : (((/* implicit */int) (_Bool)1)))))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)0)))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_11 = 0; i_11 < 24; i_11 += 2) /* same iter space */
                        {
                            var_31 = ((/* implicit */int) var_18);
                            arr_36 [i_0] [(unsigned char)2] [i_11] [i_9] [(unsigned char)2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)101)) : (arr_35 [i_11] [i_9] [i_9] [i_9] [(short)2] [i_9 + 1] [i_9 - 1])));
                        }
                        for (unsigned short i_12 = 0; i_12 < 24; i_12 += 2) /* same iter space */
                        {
                            var_32 = ((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_9] [i_8])) != (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_34 [i_0] [i_1] [i_1] [7LL])) : (((/* implicit */int) arr_2 [i_0]))))), ((-(arr_23 [i_0] [i_1] [i_8] [i_9])))))));
                            var_33 = ((/* implicit */unsigned int) min((var_33), (min((min((((/* implicit */unsigned int) (-(-156938848)))), (arr_8 [(short)11] [i_1] [i_1] [i_1 + 1]))), (((/* implicit */unsigned int) var_1))))));
                        }
                        arr_40 [i_1] [i_9] [i_8] [(short)15] = ((/* implicit */int) arr_39 [i_0] [i_1] [i_8] [i_8] [i_9 - 2]);
                        arr_41 [i_0] [i_1] [i_0] [i_9] [i_0] [i_0] = ((/* implicit */_Bool) max((min((((((/* implicit */int) var_9)) + (((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_0] [(unsigned char)17])))), (((int) var_13)))), (((/* implicit */int) (_Bool)0))));
                        /* LoopSeq 1 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_34 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-586)) : (((/* implicit */int) arr_39 [i_0] [i_1] [i_8] [i_9] [i_13]))))) ? (-2037247975943285170LL) : (((/* implicit */long long int) min((arr_24 [i_0] [i_0] [i_8] [i_9] [i_0]), (((/* implicit */int) (unsigned char)32))))))), (((/* implicit */long long int) (+(((/* implicit */int) var_1)))))));
                            var_35 = max(((!(((/* implicit */_Bool) (short)7364)))), ((!(((/* implicit */_Bool) (unsigned short)16876)))));
                        }
                    }
                    for (unsigned char i_14 = 1; i_14 < 22; i_14 += 1) 
                    {
                        arr_46 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((-5090724980957652965LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) (short)-604)) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [2LL] [i_1] [(unsigned char)23] [i_0]))) : (-6446994733184393263LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_14 [i_0] [i_1] [i_8] [i_8] [i_8] [i_14]), (((/* implicit */unsigned int) arr_37 [i_14] [i_0] [i_0]))))) && ((!(((/* implicit */_Bool) 2037247975943285163LL)))))))) : (min(((~(arr_7 [i_1] [i_1] [i_8] [i_14]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)182)) == (((/* implicit */int) (unsigned char)0)))))))));
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_0] [i_1] [i_1] [i_14] [(unsigned short)13])) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [17])), ((unsigned short)8172)))) : (((((/* implicit */_Bool) arr_42 [i_14] [(short)22] [i_14] [(short)22] [i_14] [i_14 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_15))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_0]))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)32166)) ? (((/* implicit */int) arr_17 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)0))))) | ((~(arr_0 [i_0] [i_0])))))));
                    }
                    arr_47 [i_0] [i_1] [i_1] = ((((((((/* implicit */_Bool) 435829128U)) ? (((/* implicit */int) (short)23322)) : (((/* implicit */int) arr_44 [i_1] [i_1])))) + (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) <= (6606664025264329947LL)))))) > (211888));
                    var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) (unsigned char)105))));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_15 = 0; i_15 < 13; i_15 += 2) 
    {
        var_38 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_15] [i_15] [i_15] [i_15])))))) >= (min((((/* implicit */long long int) arr_9 [i_15])), (min((2280320812558614530LL), (((/* implicit */long long int) 1437655469U))))))));
        var_39 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_13 [i_15])) ? (((/* implicit */int) arr_5 [i_15] [i_15] [i_15])) : (((/* implicit */int) arr_19 [i_15] [i_15] [i_15] [i_15])))), (((/* implicit */int) arr_13 [i_15]))))) || (((((long long int) arr_4 [i_15] [i_15] [(short)21])) != (((/* implicit */long long int) ((var_10) ? (((/* implicit */int) arr_13 [i_15])) : (arr_24 [i_15] [i_15] [i_15] [i_15] [i_15]))))))));
        var_40 -= ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) ((_Bool) var_0))), (min((((/* implicit */unsigned int) (unsigned char)97)), (2147221504U))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((arr_8 [9ULL] [i_15] [i_15] [i_15]) >= (((/* implicit */unsigned int) max((1080068211), (-475254023))))))))));
        /* LoopNest 3 */
        for (short i_16 = 0; i_16 < 13; i_16 += 3) 
        {
            for (int i_17 = 0; i_17 < 13; i_17 += 4) 
            {
                for (long long int i_18 = 0; i_18 < 13; i_18 += 1) 
                {
                    {
                        var_41 += ((/* implicit */short) var_1);
                        var_42 = ((/* implicit */unsigned char) (unsigned short)34647);
                        arr_57 [i_15] [i_16] [i_16] [i_18] [i_16] |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((arr_28 [(short)19] [i_15] [i_15] [i_15]), (((/* implicit */short) (_Bool)1))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_12)) * (((/* implicit */int) arr_49 [i_18] [i_15]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_18)))));
                        var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? ((+(arr_4 [i_18] [i_18] [i_17]))) : (var_0))))));
                        arr_58 [3] [i_16] = ((/* implicit */long long int) (~(max(((+(((/* implicit */int) var_8)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_31 [i_18] [i_18] [i_16] [i_18] [i_18])) : (arr_27 [i_15] [i_16] [i_17] [i_18])))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 2) 
    {
        var_44 ^= ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_19 [i_19] [i_19] [i_19] [i_19])), (2838324854U)))) ? (((/* implicit */long long int) min((arr_18 [i_19] [i_19] [i_19]), (((/* implicit */int) arr_28 [i_19] [i_19] [i_19] [i_19]))))) : (max((-6354106307661051200LL), (((/* implicit */long long int) -816787954)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5090724980957652964LL)) ? (arr_23 [i_19] [i_19] [i_19] [1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31512)))))) ? (((((/* implicit */_Bool) (unsigned short)34015)) ? (((/* implicit */int) (short)-32754)) : (((/* implicit */int) (unsigned char)255)))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned char)234)) : (var_11))))))));
        arr_61 [i_19] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_19] [i_19] [i_19] [i_19])) ? (((/* implicit */int) arr_19 [i_19] [i_19] [i_19] [i_19])) : (((/* implicit */int) arr_44 [i_19] [i_19]))))) ? (((((/* implicit */int) var_7)) | (((/* implicit */int) var_15)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)2)))))))), (2115542763U)));
    }
}
