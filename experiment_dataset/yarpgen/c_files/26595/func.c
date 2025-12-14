/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26595
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
    var_16 = ((/* implicit */unsigned short) var_12);
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_0 - 2]), (arr_0 [i_0 + 4])))) ? (((/* implicit */int) (unsigned char)142)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)170)))))));
                    arr_9 [i_1] = ((/* implicit */long long int) (~(min((arr_3 [i_1] [i_0]), (((/* implicit */unsigned int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 7; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) min(((unsigned short)28), (((/* implicit */unsigned short) arr_6 [i_0 + 2] [i_2] [i_4 + 3]))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 + 2] [i_4 + 1] [i_4 - 1]))) ^ (arr_10 [i_0 + 4] [i_4] [i_3] [i_4 - 1] [i_4 - 1] [i_4 - 1])))));
                                var_18 = ((/* implicit */unsigned int) 2093995650);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_0 + 4] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) arr_11 [i_0 - 1] [i_2] [i_0] [i_0 + 2])) << (((((/* implicit */int) arr_11 [i_0] [i_2] [i_0] [i_0 + 4])) - (46504))))));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_19 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((unsigned char) max((((/* implicit */int) arr_0 [i_6])), (1387973653))))), (24LL)));
                            var_20 = ((/* implicit */unsigned char) 10U);
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            arr_27 [i_0] [i_0] [i_1] [i_7] [i_5] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 + 3])) ^ (((((/* implicit */_Bool) -3LL)) ? (((/* implicit */int) arr_8 [i_2] [i_1])) : (((/* implicit */int) arr_2 [3ULL] [i_1]))))))) ? (((/* implicit */long long int) max(((+(19028596))), (((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_11 [i_1] [i_7] [i_7] [(signed char)10]))))))) : (min((min((((/* implicit */long long int) arr_8 [i_0] [i_0])), (22LL))), (20LL)))));
                            arr_28 [i_7] [i_1] [i_7] [i_5] = ((/* implicit */long long int) 19028585);
                        }
                        for (unsigned int i_8 = 2; i_8 < 10; i_8 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((unsigned int) arr_24 [i_0] [i_8 + 1] [8U] [i_0 + 4] [i_8] [i_0 + 2]))));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) min((((/* implicit */long long int) (signed char)-64)), (12LL))))));
                            arr_31 [i_0] [i_1] [i_2] [i_2] [i_8 - 2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_24 [i_0] [i_0] [i_1] [i_2] [i_5] [i_8 - 1])) - (-31LL)));
                            var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_25 [i_0 + 1] [i_8 + 1] [i_8 - 2] [i_8] [i_8])) ? (arr_25 [i_0 + 3] [i_8 + 1] [7] [i_8] [(unsigned short)5]) : (arr_25 [i_0 - 2] [i_8 - 1] [i_8 + 1] [i_8] [i_8 - 2]))) >> (((((/* implicit */int) min((var_8), ((unsigned short)65535)))) - (26418)))));
                        }
                        /* vectorizable */
                        for (unsigned int i_9 = 2; i_9 < 10; i_9 += 1) /* same iter space */
                        {
                            var_24 &= ((unsigned short) (unsigned char)2);
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_9 - 2] [i_2] [i_2] [i_0])) == (((/* implicit */int) arr_5 [i_0]))));
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (-(var_14))))));
                        }
                        var_27 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((unsigned char) (-(19028587))))), (4294967281U)));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 1) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 2) 
                        {
                            arr_41 [i_0] [i_1] [i_2] [(unsigned char)9] = arr_34 [i_0 + 1] [i_0] [i_0] [i_0 - 1] [i_0 - 2];
                            arr_42 [i_0 + 4] [i_1] [i_10] [i_11] = ((/* implicit */unsigned int) var_14);
                            arr_43 [(unsigned short)8] [i_1] [i_2] [i_10] [i_2] = (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_33 [i_0 - 1] [i_1] [i_2] [i_2] [i_11] [i_10] [i_2])) : (((/* implicit */int) var_8)))), (max((((/* implicit */int) var_2)), (19028581)))))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 11; i_12 += 2) 
                        {
                            arr_46 [i_10] = ((_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned char) arr_15 [i_0 - 3] [i_0 - 3] [i_10] [i_0 - 3])), (var_3))))));
                            var_28 = ((/* implicit */_Bool) -19028585);
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (-(max((((/* implicit */unsigned int) var_0)), (4294967283U))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_13 = 1; i_13 < 10; i_13 += 1) 
                        {
                            var_30 ^= ((/* implicit */unsigned int) ((signed char) var_7));
                            arr_49 [i_0] [i_1] [i_2] [i_10] [i_13] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(-664683773280011070LL)))) ? (((((/* implicit */_Bool) -2303021167825190098LL)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_10] [i_13])))));
                            arr_50 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */long long int) arr_2 [i_0 - 3] [i_0 + 1]);
                        }
                        for (unsigned short i_14 = 1; i_14 < 9; i_14 += 2) 
                        {
                            var_31 = var_11;
                            arr_53 [(unsigned char)10] [(unsigned char)10] = ((/* implicit */long long int) var_10);
                        }
                        arr_54 [4LL] [i_10] [i_10] [i_2] [i_0 + 1] [i_0 + 1] = ((/* implicit */long long int) (unsigned char)8);
                        var_32 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((23LL) << (((((/* implicit */int) (unsigned short)32768)) - (32758)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) ((signed char) var_4)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30185)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_2]))) : (-9223372036854775790LL)))) ? (((/* implicit */long long int) arr_12 [i_0] [i_1] [i_1] [i_1] [i_2] [i_1])) : (((((/* implicit */_Bool) var_10)) ? (9223372036854775788LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60287)))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_15 = 3; i_15 < 8; i_15 += 2) 
                    {
                        var_33 = ((unsigned char) (unsigned short)35367);
                        arr_57 [i_0] [i_15] [i_2] [i_15] = ((/* implicit */signed char) var_13);
                        arr_58 [i_0] [i_1] [i_0] [i_2] [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))))));
                        var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_0 + 2] [i_0 + 1] [i_1] [i_2] [i_15] [i_15] [i_15 + 3])) ? (((((/* implicit */int) (unsigned short)35359)) * (((/* implicit */int) arr_21 [i_15])))) : (((/* implicit */int) var_1))));
                    }
                    /* vectorizable */
                    for (unsigned int i_16 = 3; i_16 < 10; i_16 += 1) 
                    {
                        var_35 &= ((/* implicit */unsigned short) (-(arr_25 [i_1] [i_16 - 3] [2ULL] [i_16] [i_16])));
                        /* LoopSeq 1 */
                        for (unsigned char i_17 = 3; i_17 < 8; i_17 += 2) 
                        {
                            arr_63 [3ULL] [i_1] [i_17] [i_16 - 2] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -19028583)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)217))) : (4512779158768050208ULL)))) ? ((+(((/* implicit */int) arr_61 [i_0] [i_1] [i_1] [i_17] [i_16 + 1] [i_17 - 3])))) : (((((/* implicit */_Bool) arr_29 [i_0] [i_0] [2ULL] [i_0])) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_16]))))));
                            arr_64 [i_17] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 21U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_12)))) : ((~(13933964914941501412ULL)))));
                            var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_56 [i_2] [i_1] [i_2] [i_16 - 2] [i_17 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_0 + 4] [i_0 + 4] [i_0 - 2] [i_17 + 1] [i_17]))) : ((~(1216642576U))))))));
                            var_37 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)241)) + (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)35335)) : (-19028564)))));
                            arr_65 [i_17] [i_1] [i_1] = ((/* implicit */unsigned int) -19028586);
                        }
                        /* LoopSeq 2 */
                        for (signed char i_18 = 0; i_18 < 11; i_18 += 1) 
                        {
                            var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((((long long int) arr_21 [i_2])) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30202))))))));
                            var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_16 - 3] [i_1] [(_Bool)1])) ? ((~(2064384U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)19)))));
                        }
                        for (unsigned char i_19 = 2; i_19 < 10; i_19 += 1) 
                        {
                            var_40 = ((/* implicit */unsigned long long int) ((unsigned int) ((((-1) + (2147483647))) >> (((arr_56 [i_2] [i_2] [i_2] [i_2] [i_2]) - (1249927150))))));
                            arr_70 [8LL] [i_1] [i_1] [i_2] [i_16] [i_19] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)16180)))))));
                            arr_71 [i_0 - 1] [i_1] [i_2] [i_0 - 1] [i_16 - 3] [i_0 - 1] [i_19] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
                        }
                    }
                }
            } 
        } 
    } 
}
