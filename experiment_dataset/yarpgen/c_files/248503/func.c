/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248503
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
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        var_20 += ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (unsigned char)77)))), (min(((+(880335545))), ((+(((/* implicit */int) (signed char)22))))))));
        var_21 -= ((/* implicit */signed char) ((min((arr_2 [i_0 + 2]), (((/* implicit */int) var_2)))) * (((((/* implicit */int) arr_1 [i_0 + 3])) * (arr_2 [i_0 + 1])))));
        var_22 = ((/* implicit */unsigned int) max((((var_9) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32761))))))), (((((/* implicit */int) ((((/* implicit */_Bool) (signed char)25)) && (((/* implicit */_Bool) var_14))))) < ((+(((/* implicit */int) var_10))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        var_23 = ((/* implicit */int) max((var_23), ((+(((((/* implicit */int) arr_7 [i_0 + 2] [i_0 + 2] [i_2])) ^ (((/* implicit */int) (signed char)127))))))));
                        var_24 *= ((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned short)61526)))) | (((/* implicit */int) min((arr_8 [i_0 + 2]), (arr_8 [i_0 - 1]))))));
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (!(((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_0)))))))));
                        var_26 *= (+(min((arr_4 [i_0 + 2]), (((/* implicit */unsigned long long int) var_19)))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (~(((((/* implicit */int) (short)30765)) + (((/* implicit */int) arr_9 [i_0 + 2] [i_0 + 3] [i_0 + 2])))))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_6 = 1; i_6 < 12; i_6 += 1) 
                {
                    for (short i_7 = 1; i_7 < 11; i_7 += 4) 
                    {
                        {
                            arr_23 [i_4] [i_7 + 1] = ((/* implicit */_Bool) (~(((((3324515397U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-124))))) | (((/* implicit */unsigned int) (~(((/* implicit */int) var_19)))))))));
                            arr_24 [i_4] [i_5] [i_6 - 1] [i_4] [i_6] [i_6 - 1] = ((/* implicit */short) (((+(((var_13) * (((/* implicit */unsigned long long int) arr_22 [(short)7])))))) <= (((/* implicit */unsigned long long int) (+((-(arr_11 [15U]))))))));
                            /* LoopSeq 4 */
                            for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) 
                            {
                                arr_28 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4146386904U)) || (((/* implicit */_Bool) 689713018U))));
                                arr_29 [i_4] = ((/* implicit */unsigned int) ((max((var_9), (((/* implicit */unsigned long long int) arr_3 [i_8] [i_6] [i_4])))) >> (((((/* implicit */int) (unsigned char)247)) >> (((((/* implicit */int) var_18)) - (69)))))));
                            }
                            for (unsigned char i_9 = 1; i_9 < 10; i_9 += 2) /* same iter space */
                            {
                                var_28 &= ((/* implicit */unsigned int) min((((/* implicit */int) max((((/* implicit */short) (signed char)3)), ((short)5154)))), (max((((/* implicit */int) (unsigned char)161)), ((~(((/* implicit */int) (signed char)16))))))));
                                var_29 = ((/* implicit */unsigned int) max((((var_13) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3286))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_7 + 1] [i_6 - 1] [i_6])) & (((/* implicit */int) var_18)))))));
                                var_30 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_15)))) | (((((/* implicit */int) var_16)) << (((((/* implicit */int) var_16)) - (21911)))))));
                            }
                            for (unsigned char i_10 = 1; i_10 < 10; i_10 += 2) /* same iter space */
                            {
                                arr_34 [i_4] [i_5] [i_4] [i_7 + 3] [i_7] [i_7 + 3] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)46)) ^ (((/* implicit */int) (unsigned short)19876)))) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) 1317206052U)) >= (16136870515411222048ULL))))));
                                var_31 += ((/* implicit */signed char) (~(min((2309873558298329567ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [(short)0] [i_5] [i_4])) + (((/* implicit */int) (unsigned char)46)))))))));
                            }
                            for (short i_11 = 2; i_11 < 13; i_11 += 4) 
                            {
                                var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_9 [i_5 + 1] [i_5 + 1] [i_11 - 2])) || ((_Bool)1))))))));
                                var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned short)19876), ((unsigned short)21317)))) || (((((/* implicit */_Bool) max((arr_9 [i_6] [i_6] [i_4]), ((unsigned short)6863)))) || (((/* implicit */_Bool) max((((/* implicit */short) var_19)), (var_7))))))));
                                var_34 |= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_14)))) && (((/* implicit */_Bool) var_9)))) && (((((/* implicit */_Bool) min((5254369115867547496ULL), (((/* implicit */unsigned long long int) 1809871483U))))) && ((!(((/* implicit */_Bool) var_3))))))));
                                var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_6 + 1] [i_6] [i_11]))))))))));
                                arr_37 [i_4] [i_4] [i_5] [(_Bool)1] [i_7] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((var_13) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3287)))))) > (((((arr_25 [9ULL] [i_5 + 1] [i_6] [i_5 + 1] [12U]) + (2147483647))) >> (((((/* implicit */int) arr_32 [i_6])) + (17072)))))))) - (max((max((((/* implicit */int) arr_10 [i_6 - 1] [i_4])), (arr_31 [i_4] [i_5] [i_6] [i_4] [i_11]))), (((/* implicit */int) ((3447591610122776488LL) != (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4] [(short)7] [i_6 + 1]))))))))));
                            }
                        }
                    } 
                } 
                arr_38 [(short)10] &= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
            }
        } 
    } 
}
