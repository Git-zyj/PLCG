/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41983
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) min((max((((/* implicit */unsigned short) (short)-18088)), ((unsigned short)53538))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned short)53522), (((/* implicit */unsigned short) var_10))))) || (((/* implicit */_Bool) arr_1 [i_0])))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            var_15 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) max(((unsigned short)65525), (((/* implicit */unsigned short) (unsigned char)125))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) -1))))) : (((/* implicit */int) (unsigned short)42618))))));
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22915))) - (arr_1 [i_1 - 1])))) ? (max((((/* implicit */unsigned long long int) (signed char)34)), (arr_1 [i_1 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_10))))));
        }
        for (unsigned long long int i_2 = 1; i_2 < 24; i_2 += 2) 
        {
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_2 + 1]))) * ((-(arr_1 [i_0])))))) ? (((/* implicit */int) (short)32767)) : ((((_Bool)0) ? (((/* implicit */int) (signed char)34)) : (((/* implicit */int) (signed char)127))))));
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((arr_4 [i_2]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19255)))))) & (-1630463203981407593LL))))));
        }
        arr_9 [i_0] [i_0] = ((/* implicit */signed char) max((arr_1 [i_0]), (((((/* implicit */_Bool) -1LL)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)224)))))));
        arr_10 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-35))) / (434293517U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) -1630463203981407606LL)))) : (arr_1 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [i_0] [i_0])), (-3312077672171048917LL)))) && (((/* implicit */_Bool) min((((/* implicit */long long int) arr_7 [i_0] [(signed char)15])), (arr_0 [i_0]))))))) : (((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_0))))), (arr_3 [i_0] [i_0]))))));
    }
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        for (unsigned char i_4 = 3; i_4 < 23; i_4 += 1) 
        {
            {
                var_18 |= 3668783146U;
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 3668783140U)) && (((/* implicit */_Bool) min((((/* implicit */long long int) max((arr_15 [i_4]), ((signed char)35)))), (max((((/* implicit */long long int) (unsigned char)230)), (var_6))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) max((min((min(((unsigned short)53535), ((unsigned short)31902))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)121)) || (((/* implicit */_Bool) (signed char)35))))))), (((/* implicit */unsigned short) var_2))));
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 15; i_5 += 2) 
    {
        for (unsigned short i_6 = 4; i_6 < 14; i_6 += 3) 
        {
            for (unsigned short i_7 = 1; i_7 < 17; i_7 += 1) 
            {
                {
                    arr_25 [i_6] = ((/* implicit */signed char) min((7435237808107474717LL), (((/* implicit */long long int) (_Bool)0))));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) min(((signed char)124), ((signed char)114)))) || (((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11)))))))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        arr_29 [i_5] [i_6] [i_7] [17ULL] = ((/* implicit */int) (signed char)10);
                        arr_30 [i_8] [i_6] [5LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)39)) && (((/* implicit */_Bool) ((unsigned short) var_8)))));
                        arr_31 [i_5 + 3] [i_6] [i_8] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) var_0)))));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)254)) % (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_5] [i_6])) || (((/* implicit */_Bool) (unsigned short)42612)))))));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_20 [i_6 + 3] [i_6 + 1] [i_6 + 1])) | (((/* implicit */int) arr_20 [i_6 + 4] [i_6 - 4] [i_6 - 4]))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_10 = 1; i_10 < 17; i_10 += 3) 
                        {
                            var_24 ^= min((min((((626184130U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-96))))), (max((((/* implicit */unsigned int) (_Bool)1)), (2298084647U))))), (((/* implicit */unsigned int) min((((/* implicit */int) (short)-4059)), (min((((/* implicit */int) (_Bool)0)), (-1680980935)))))));
                            arr_39 [i_5] [i_6] [i_10] [i_5] = (short)4067;
                            arr_40 [i_5] [(short)4] [i_6] [i_10] [2] [3] [i_10 - 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(var_8)))) & (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54187))) | (3668783165U)))))) % (min((((/* implicit */unsigned long long int) (signed char)-20)), (arr_6 [i_5] [i_6])))));
                            var_25 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) min(((short)4059), (((/* implicit */short) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : ((+(16155172435280964405ULL))))));
                            arr_41 [i_5 + 1] [i_6] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_20 [i_6] [5] [16ULL])) ? (arr_26 [i_5] [(short)11] [i_5] [i_7] [i_7] [i_5]) : (9223372036854775807LL))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_3)), (3078750296U))))))) ? (max((arr_33 [i_7 - 1] [i_6 + 2]), (((/* implicit */unsigned long long int) arr_15 [i_10])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)42633), ((unsigned short)50141))))) : (max((626184121U), (((/* implicit */unsigned int) (_Bool)0)))))))));
                        }
                        for (unsigned short i_11 = 3; i_11 < 16; i_11 += 2) 
                        {
                            arr_44 [i_5] [(unsigned char)10] [i_7] [i_5] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) ((max((arr_33 [i_5 + 1] [i_5 + 1]), (((/* implicit */unsigned long long int) var_7)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)21)))))) > (((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */int) (unsigned short)42621)) : (((/* implicit */int) (short)-29824))))));
                            arr_45 [i_5 + 1] [i_6 + 3] [(signed char)16] [(_Bool)1] [i_9] [(unsigned char)5] = ((/* implicit */_Bool) arr_42 [i_5 + 2] [i_5 + 3] [i_5 + 3] [i_5] [i_5 + 3] [i_5] [i_5 + 3]);
                            arr_46 [i_5] [(short)7] [i_5] [i_6] [i_7 + 1] [(unsigned char)5] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) 14061364226535841248ULL)) ? (((/* implicit */int) (short)-11600)) : (((/* implicit */int) (unsigned char)251))));
                            arr_47 [i_9] = ((/* implicit */unsigned short) (+(((arr_28 [i_5 + 3] [i_5 + 3] [i_6 + 1] [i_7 + 1]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50132)))))));
                            var_26 = ((/* implicit */unsigned char) min((-6012690488374469100LL), (min((0LL), (arr_0 [i_6])))));
                        }
                        arr_48 [i_5] [i_6] [i_7] = ((/* implicit */signed char) (+(min((((/* implicit */long long int) (signed char)-104)), (arr_21 [i_7 - 1] [i_6 - 2])))));
                        var_27 = ((/* implicit */unsigned char) -1842087259);
                        arr_49 [i_5] [i_5] [i_9] = (-(min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)15395))) | (-6012690488374469099LL)))), (min((0ULL), (((/* implicit */unsigned long long int) (short)29824)))))));
                    }
                    arr_50 [(signed char)5] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (0U))), (((/* implicit */unsigned int) (signed char)-18))))) ? (0ULL) : (((unsigned long long int) ((signed char) (unsigned short)2)))));
                }
            } 
        } 
    } 
}
