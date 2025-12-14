/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26966
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
    var_13 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((/* implicit */int) var_2))))) ? (((/* implicit */int) (unsigned short)65527)) : ((~(((/* implicit */int) var_2)))))), (((/* implicit */int) var_7))));
    var_14 = ((/* implicit */_Bool) (+(min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) -627813879)) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) (signed char)66))))))));
    var_15 |= ((/* implicit */short) min((((/* implicit */int) var_12)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 520192)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) var_11))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((+(arr_1 [(short)7]))) % (((/* implicit */int) var_6))))))))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) 1436185811038960111LL);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0 + 1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 281474976710652ULL)) ? (((/* implicit */int) var_2)) : (max((1243241572), (((/* implicit */int) var_5)))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) 11025484703861898851ULL)))))));
                                arr_16 [i_0] [i_1] [i_2] [i_2] [i_0] [i_4 - 1] [i_0] = ((/* implicit */signed char) max(((((!(((/* implicit */_Bool) arr_13 [i_4])))) ? (((/* implicit */int) arr_14 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0])) : ((~(((/* implicit */int) arr_2 [i_0] [i_0])))))), (max((((((/* implicit */_Bool) arr_0 [i_3] [i_4 + 1])) ? (((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [(unsigned char)2])) : (520192))), (((/* implicit */int) arr_5 [i_0]))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [10ULL] = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_0] [i_2] [i_2] [i_2])), (arr_5 [i_0])))) || ((!(((/* implicit */_Bool) arr_1 [i_1])))))) ? (((/* implicit */int) (unsigned short)59218)) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0 + 1] [i_0 + 2])) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((/* implicit */int) arr_7 [i_0 + 2] [i_0 - 1] [i_0 + 1]))))));
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_22 [i_0] [9LL] [(unsigned short)5] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_5])) : (((/* implicit */int) (signed char)14)))) - (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 2])) % (((/* implicit */int) arr_20 [i_0 - 1] [i_0 - 1] [i_1] [10] [i_2] [i_5]))))) : (((((/* implicit */_Bool) 17599882503001554311ULL)) ? ((~(var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17))))));
                        arr_23 [i_0] = ((/* implicit */unsigned short) var_5);
                        arr_24 [i_0] = ((/* implicit */short) (((-(1243241581))) < (((/* implicit */int) arr_3 [i_0 - 1]))));
                        /* LoopSeq 4 */
                        for (signed char i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_3 [i_2]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) var_3)) << (((((/* implicit */int) var_5)) + (15425)))))));
                            arr_27 [i_0 + 2] [i_0] [i_1] [i_0] [i_5] [i_5] [i_0 + 2] = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0 - 1] [i_0] [i_2] [i_0])) ? (arr_4 [i_0] [(unsigned short)2] [i_2]) : (((/* implicit */unsigned long long int) 262143LL)))))))) % (max((((/* implicit */int) var_12)), ((+(((/* implicit */int) arr_26 [(unsigned short)8] [i_1] [i_1] [i_1] [i_0]))))))))) : (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0 - 1] [i_0] [i_2] [i_0])) ? (arr_4 [i_0] [(unsigned short)2] [i_2]) : (((/* implicit */unsigned long long int) 262143LL)))))))) * (max((((/* implicit */int) var_12)), ((+(((/* implicit */int) arr_26 [(unsigned short)8] [i_1] [i_1] [i_1] [i_0])))))))));
                            arr_28 [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0] = ((/* implicit */signed char) (((~(((/* implicit */int) arr_12 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [4LL])))) | (((((/* implicit */_Bool) 7217397466694066988LL)) ? (((/* implicit */int) arr_21 [i_5] [i_0] [i_0] [i_0 + 1])) : (((/* implicit */int) arr_7 [i_0] [(short)9] [i_6]))))));
                        }
                        for (unsigned short i_7 = 3; i_7 < 12; i_7 += 2) 
                        {
                            arr_31 [i_0] = ((/* implicit */long long int) var_6);
                            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_12)))) | (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_1)), (arr_20 [i_7 + 1] [i_7] [i_7 + 1] [(unsigned char)5] [i_7] [i_7])))) ? (((/* implicit */int) (!(var_3)))) : (((/* implicit */int) (short)-17597))))) : (((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) arr_14 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0])) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2]))) : (arr_10 [i_2]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))))))))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 4) 
                        {
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [i_0 - 1] [9LL] [i_8])))), (((/* implicit */int) arr_7 [6LL] [i_5] [i_8]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)29306)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))) : (var_0))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8)))))));
                            arr_34 [(unsigned char)8] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_0 + 1] [3ULL] [i_2] [i_5])) ? (((((/* implicit */int) arr_20 [i_0] [i_1] [i_2] [i_0 - 1] [i_1] [i_1])) | ((~(((/* implicit */int) var_12)))))) : (((/* implicit */int) var_12))));
                            arr_35 [i_2] [i_1] [(short)0] [i_5] [i_8] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */int) (!(var_3)))) : ((-(((/* implicit */int) arr_32 [i_0 - 1] [i_2] [i_5] [(signed char)9] [i_8]))))))) ? (((((/* implicit */_Bool) arr_13 [i_0])) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) var_11)))) : ((+(((/* implicit */int) max((var_10), (((/* implicit */short) var_2)))))))));
                            var_20 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) max((var_12), (((/* implicit */short) (unsigned char)179))))) ? (((((/* implicit */int) var_4)) - (((/* implicit */int) (unsigned short)61981)))) : (((/* implicit */int) arr_20 [(_Bool)1] [i_1] [i_1] [(_Bool)1] [i_5] [(_Bool)1]))))));
                            var_21 = ((/* implicit */unsigned char) var_8);
                        }
                        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            var_22 = ((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1]);
                            var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_2] [i_5] [i_0])) ? (((/* implicit */int) arr_25 [i_0 - 1] [i_1] [i_2] [i_5] [i_0])) : (((/* implicit */int) arr_25 [12ULL] [12ULL] [(_Bool)1] [i_9] [i_0])))))));
                            arr_40 [i_0] [i_1] [i_0] [2LL] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) max(((+(((((/* implicit */_Bool) -4992501462464711551LL)) ? (((/* implicit */int) var_6)) : (arr_1 [i_0 - 1]))))), ((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_38 [i_5])) : (((/* implicit */int) arr_33 [(unsigned short)3] [(unsigned short)3] [i_2] [i_5] [i_9]))))))));
                        }
                        var_24 |= (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_7)), ((unsigned short)65535)))));
                    }
                }
            } 
        } 
    } 
    var_25 = ((((/* implicit */_Bool) var_0)) ? (max((1850291547), (((/* implicit */int) (unsigned short)41586)))) : (((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))))) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) var_9)))));
}
