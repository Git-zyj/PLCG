/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223284
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
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) var_4))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        arr_3 [i_0] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) >> (((/* implicit */int) var_12))))) : (arr_1 [i_0 + 3])));
        var_14 |= ((/* implicit */_Bool) (short)-32765);
        var_15 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 + 2])) / (((/* implicit */int) arr_0 [i_0 - 2]))));
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1])) - (((/* implicit */int) (short)-32739))))) ? ((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [(short)7])) : (((/* implicit */int) (short)32767))))))), (var_7)));
        arr_6 [i_1] = (i_1 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (7293502620756687981LL) : (arr_4 [i_1]))), (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-101)) + (2147483647))) >> (((arr_4 [i_1]) + (493822410270241351LL))))))))) ? (((((((/* implicit */_Bool) var_4)) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))) << (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)0)))) - (222))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7293502620756687972LL)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) arr_2 [i_1])))) : ((+(((/* implicit */int) var_8)))))))))) : (((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (7293502620756687981LL) : (arr_4 [i_1]))), (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-101)) + (2147483647))) >> (((((arr_4 [i_1]) + (493822410270241351LL))) + (4761990381961707542LL))))))))) ? (((((((/* implicit */_Bool) var_4)) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))) << (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)0)))) - (222))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7293502620756687972LL)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) arr_2 [i_1])))) : ((+(((/* implicit */int) var_8))))))))));
    }
    for (int i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_16 [11LL] [11LL] [i_4] [i_3] = ((/* implicit */long long int) arr_12 [i_4]);
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_3]))) | (min((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))))))))));
            }
            arr_17 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_12 [i_3]), (((/* implicit */short) var_12))))) ? (((((/* implicit */_Bool) arr_11 [i_3])) ? (12664426786155225918ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2]))))) : (((/* implicit */unsigned long long int) min((arr_11 [i_2]), (arr_11 [i_2]))))));
        }
        var_18 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) <= (801756335U)));
        var_19 |= ((/* implicit */unsigned short) (+(min((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (var_7)))))));
        var_20 &= ((/* implicit */long long int) (unsigned char)213);
    }
    for (short i_5 = 1; i_5 < 16; i_5 += 1) 
    {
        var_21 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)30715))) ^ (-7820430386702982259LL)));
        arr_21 [i_5] = ((/* implicit */unsigned short) 4294967295U);
        arr_22 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_19 [i_5])) ^ (((/* implicit */int) arr_14 [i_5] [i_5 + 1] [i_5 - 1] [i_5]))));
    }
    /* LoopSeq 3 */
    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
    {
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) arr_24 [i_6]))));
        arr_27 [i_6] [i_6] = ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) (-(((/* implicit */int) var_4))))))), (((_Bool) max((1165464559), (((/* implicit */int) (short)256)))))));
        arr_28 [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) 2222130184607492778LL))));
        /* LoopNest 3 */
        for (short i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            for (unsigned char i_8 = 0; i_8 < 24; i_8 += 2) 
            {
                for (unsigned short i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    {
                        arr_38 [(unsigned char)23] [i_7] [i_7] [i_9] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_23 [i_6] [i_8]))));
                        arr_39 [i_9] [i_9] [i_9] [i_6] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_37 [i_6] [i_7] [(unsigned char)10] [i_7] [i_6] [i_7]))))))) << (((((((var_12) ? (((/* implicit */int) (unsigned char)23)) : (arr_31 [i_6] [i_6]))) | (((/* implicit */int) var_4)))) + (519968296)))));
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 0; i_10 < 24; i_10 += 1) 
                        {
                            var_23 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) -229421290))) <= (((int) arr_23 [i_6] [i_7]))));
                            var_24 = ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_23 [i_6] [i_6])), (((((/* implicit */_Bool) arr_32 [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_6] [i_6] [i_8] [i_8] [i_10]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_34 [i_6] [i_10] [(short)15] [i_9] [(short)15]))) & (arr_40 [i_6] [(short)21] [i_8] [i_8] [i_10])))))));
                            var_25 = ((/* implicit */int) max((((/* implicit */long long int) ((short) var_10))), (arr_26 [i_6] [1LL])));
                            arr_44 [i_9] [i_9] = ((((unsigned long long int) (unsigned char)255)) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((-1846053958), (((/* implicit */int) (unsigned char)0)))) >= (((((/* implicit */_Bool) arr_34 [7ULL] [i_9] [i_8] [i_7] [i_6])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_43 [i_7] [i_7])))))))));
                            var_26 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max((((/* implicit */long long int) 45669009)), (arr_40 [i_10] [(unsigned char)17] [i_7] [i_7] [i_6])))))) - (((((/* implicit */_Bool) ((((/* implicit */int) arr_34 [i_10] [i_9] [i_8] [i_7] [i_6])) + (((/* implicit */int) var_10))))) ? (min((var_6), (((/* implicit */unsigned long long int) (unsigned short)33652)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [(_Bool)1])))))));
                        }
                        for (signed char i_11 = 0; i_11 < 24; i_11 += 3) 
                        {
                            arr_47 [i_6] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_7] [i_8])) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)255))))) : (max((((/* implicit */long long int) var_4)), (max((-2222130184607492779LL), (((/* implicit */long long int) var_9))))))));
                            var_27 |= ((/* implicit */unsigned short) ((((-66946447) | (((/* implicit */int) (unsigned char)255)))) >= (((/* implicit */int) (unsigned char)18))));
                        }
                        var_28 -= ((/* implicit */unsigned char) ((max((arr_41 [i_8] [i_6] [i_8] [i_6] [i_8]), (((/* implicit */unsigned long long int) var_11)))) >= (((/* implicit */unsigned long long int) 571957152676052992LL))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_12 = 0; i_12 < 19; i_12 += 1) 
    {
        var_29 = ((/* implicit */signed char) ((((/* implicit */int) arr_32 [i_12])) | (((/* implicit */int) var_5))));
        var_30 = ((/* implicit */signed char) 9);
    }
    for (long long int i_13 = 0; i_13 < 14; i_13 += 3) 
    {
        var_31 = ((/* implicit */int) (short)0);
        var_32 = ((/* implicit */short) ((arr_50 [i_13] [i_13]) ? (((/* implicit */long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) arr_50 [i_13] [17LL]))))) : (((long long int) -307469371))));
        arr_54 [i_13] [i_13] = ((/* implicit */unsigned char) var_7);
    }
    var_33 = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
}
