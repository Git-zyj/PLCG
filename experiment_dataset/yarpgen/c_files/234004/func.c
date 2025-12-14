/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234004
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
    var_20 = ((/* implicit */unsigned long long int) var_18);
    var_21 = ((/* implicit */short) var_6);
    var_22 -= ((/* implicit */unsigned int) min((((unsigned short) (-(34359738360LL)))), (((/* implicit */unsigned short) max((var_12), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)-72)) || (((/* implicit */_Bool) var_2))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (+(min((-851418236), (((/* implicit */int) (signed char)-120)))))))));
                                var_24 -= ((/* implicit */int) (((~(var_2))) > (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                                var_25 -= ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_2 [i_0] [i_0]))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_3] [i_3])) | (-918355369)))) ? (((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1] [i_4 + 1] [i_1 - 1] [i_4 + 2])) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)26310))))))));
                                arr_12 [i_0] [i_1] [i_1] [0ULL] [i_3] [i_4] [i_4 + 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)91)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_1 - 1]))))) ? (((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) arr_5 [i_1 - 1]))))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_1] = ((/* implicit */int) min((((/* implicit */long long int) max((var_15), (((/* implicit */unsigned char) var_4))))), ((((_Bool)1) ? ((-9223372036854775807LL - 1LL)) : (var_16)))));
                arr_14 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_6);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((((/* implicit */_Bool) max((((/* implicit */long long int) max(((unsigned short)9126), (((/* implicit */unsigned short) (signed char)119))))), (var_2)))) ? (max((((/* implicit */unsigned long long int) arr_10 [i_5])), ((~(var_14))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20510)))))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                {
                    arr_25 [i_5] [i_5] [i_6] [i_5] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_9 [i_5] [i_6] [i_5] [i_7])) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)120)), (var_1)))) : (((((/* implicit */_Bool) arr_24 [i_5] [i_6] [(_Bool)0] [(_Bool)0])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)104))))))));
                    var_27 -= ((((/* implicit */_Bool) min((var_17), (arr_23 [i_5] [i_5] [i_6] [(signed char)0])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) : (((long long int) var_6)));
                    /* LoopSeq 3 */
                    for (short i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        arr_28 [i_5] [i_5] = min((min((((/* implicit */int) (unsigned short)46063)), (arr_22 [i_5] [i_6] [i_7]))), (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-104))))) >= (((((/* implicit */_Bool) (unsigned short)52386)) ? (((/* implicit */int) arr_26 [i_5] [i_5] [i_6] [i_5] [i_8] [i_8])) : (((/* implicit */int) (unsigned short)46889))))))));
                        var_28 = max((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))), (var_19));
                        var_29 -= ((/* implicit */unsigned int) min((max((arr_26 [i_5] [i_6] [i_7] [i_5] [i_8] [i_8]), (((/* implicit */short) (_Bool)1)))), (arr_26 [i_5] [i_6] [i_7] [i_6] [i_7] [i_6])));
                    }
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_32 [i_5] [i_5] [i_7] [i_6] [i_5] [i_5] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_7 [i_6] [i_5]))))));
                        arr_33 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)98)) == (((/* implicit */int) (unsigned char)0))));
                        arr_34 [i_5] [i_6] [i_7] [i_6] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_15 [i_5])));
                    }
                    /* vectorizable */
                    for (long long int i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        var_30 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-2147483647 - 1))) ^ (var_13)));
                        arr_37 [i_5] [i_6] [i_5] [i_10] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)46889)) >> (((((/* implicit */int) var_0)) - (173)))))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) ^ (916467090852390143ULL)))));
                        var_31 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (unsigned short)46063))))));
                        var_32 -= ((/* implicit */unsigned short) ((((int) (unsigned short)19451)) - ((+(((/* implicit */int) arr_16 [i_6]))))));
                    }
                    var_33 = ((/* implicit */short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (-(0ULL))))))), (min((max((8189744258122197223LL), (((/* implicit */long long int) var_15)))), (((/* implicit */long long int) ((unsigned char) arr_35 [i_5] [i_6] [i_5] [i_5])))))));
                    var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((long long int) var_2)))));
                }
            } 
        } 
    }
    for (int i_11 = 0; i_11 < 22; i_11 += 1) 
    {
        var_35 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (-(arr_38 [i_11])))) ? (arr_38 [(unsigned short)10]) : (max((((/* implicit */unsigned long long int) var_0)), (arr_38 [i_11]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_39 [i_11]))))));
        var_36 = ((/* implicit */long long int) (-((((-(((/* implicit */int) (signed char)-72)))) * (((((/* implicit */int) (unsigned short)13150)) / (((/* implicit */int) (unsigned short)65535))))))));
    }
}
