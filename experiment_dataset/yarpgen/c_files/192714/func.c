/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192714
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
    var_15 += ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) ((var_1) >> (((((/* implicit */int) var_12)) - (26581)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)42702)) >= (((/* implicit */int) (unsigned short)55414))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2481821943U))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0]))))))));
                arr_4 [i_1] = ((long long int) ((((/* implicit */_Bool) ((arr_2 [i_1]) >> (((arr_3 [i_0]) - (8378632165325120566LL)))))) ? (((/* implicit */long long int) ((unsigned int) (unsigned short)22838))) : ((-(var_3)))));
                arr_5 [i_0] = ((/* implicit */short) ((int) ((arr_0 [i_1] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) (unsigned char)201))))) >= (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) var_14)))))))) >> (((((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-84))) : (1796577864U))) - (4294967199U)))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 9; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_17 ^= ((/* implicit */unsigned int) ((long long int) 7328378781451694210ULL));
                                var_18 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1LL))));
                                arr_16 [i_4] [i_1] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) 831118413)) ? (((/* implicit */int) (signed char)-83)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned char)123)))))));
                            }
                        } 
                    } 
                    var_19 -= ((/* implicit */long long int) ((unsigned short) ((arr_12 [i_0]) >> (((var_13) - (5281989533063018008LL))))));
                    var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (arr_14 [i_0] [i_1] [i_0] [i_1] [i_1] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)49)))));
                }
                for (unsigned char i_5 = 2; i_5 < 8; i_5 += 4) 
                {
                    var_21 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((arr_18 [i_5]) ? (444778362) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)22803)))) : (((unsigned int) -3652110859519795750LL))))));
                    var_22 = ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) var_6))) >> (((var_1) - (803896914U)))))) ? (((/* implicit */long long int) (+(((8388607) / (((/* implicit */int) (signed char)-60))))))) : (((long long int) ((14787457673768877464ULL) - (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_1] [i_0]))))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        arr_24 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0] [i_7])) ? (((/* implicit */unsigned long long int) 262143)) : (arr_9 [i_0] [i_7])));
                        /* LoopSeq 4 */
                        for (unsigned short i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            arr_27 [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-23)) ? (arr_9 [i_0] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)116))))) - (((/* implicit */unsigned long long int) ((var_5) - (arr_10 [i_0] [i_8] [i_0] [i_7] [i_0]))))));
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_6] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) 170060142482091252LL))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                            var_23 = ((arr_2 [i_0]) >> (((var_13) - (5281989533063017996LL))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((unsigned char) ((unsigned int) arr_18 [i_0]))))));
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_6] [i_7] [i_9])) ? (arr_7 [i_0] [i_6] [i_7] [i_9]) : (arr_7 [i_0] [i_0] [i_0] [i_0])));
                        }
                        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 1) 
                        {
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((signed char) ((var_6) >= (((/* implicit */unsigned long long int) arr_3 [i_6]))))))));
                            var_28 = ((unsigned int) (signed char)-50);
                        }
                        for (int i_11 = 1; i_11 < 9; i_11 += 3) 
                        {
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */int) (signed char)-26)) : (((/* implicit */int) (signed char)-87)))))));
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_34 [i_11 + 1] [i_11] [i_11] [i_11 + 1] [i_11] [i_11] [i_6])) || (((/* implicit */_Bool) var_0))));
                        }
                        var_31 = ((/* implicit */signed char) ((long long int) ((12173305518554454492ULL) >> (((var_6) - (5874343576354074678ULL))))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        arr_40 [i_0] [i_1] [i_6] [i_12] [i_12] = ((((/* implicit */long long int) ((/* implicit */int) (signed char)-79))) / (-773683866978041097LL));
                        var_32 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) arr_20 [i_1] [i_6] [i_12]))) >= (((((/* implicit */_Bool) (short)-32752)) ? (var_8) : (14864355473676965238ULL)))));
                        arr_41 [i_1] [i_1] [i_1] [i_6] |= ((/* implicit */unsigned char) ((((((/* implicit */int) ((short) ((long long int) 2405462133533755933LL)))) + (2147483647))) >> (((((((var_5) + (9223372036854775807LL))) >> (((var_13) - (5281989533063017979LL))))) - (3308492LL)))));
                        arr_42 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) ((((unsigned long long int) 14864355473676965212ULL)) >> (((((unsigned long long int) arr_11 [i_0] [i_0] [i_1] [i_6] [i_12])) - (8951948590318653835ULL)))));
                        arr_43 [i_6] [i_6] [i_6] [i_12] = ((/* implicit */unsigned char) ((unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_34 [i_0] [i_0] [i_6] [i_12] [i_12] [i_1] [i_6])) : (((/* implicit */int) var_11)))) >= (((/* implicit */int) var_12)))));
                    }
                    /* vectorizable */
                    for (unsigned int i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        var_33 = (!(((/* implicit */_Bool) arr_15 [i_6] [i_6] [i_1] [i_6] [i_13])));
                        arr_46 [i_6] [i_1] [i_6] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) var_3))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)111))) >= (var_6))))));
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-108)) >= (((/* implicit */int) (signed char)119))));
                        arr_47 [i_6] = ((/* implicit */unsigned long long int) (!((_Bool)0)));
                        arr_48 [i_6] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((arr_17 [i_13]) >> (((((/* implicit */int) ((unsigned char) var_0))) - (109)))));
                    }
                    arr_49 [i_6] [i_6] = ((/* implicit */long long int) (((+((-(arr_29 [i_0] [i_1] [i_6] [i_6] [i_6]))))) >> (((((((unsigned long long int) -953706640)) >> (((((/* implicit */int) var_0)) >> (((((/* implicit */int) (unsigned char)138)) - (113))))))) - (18446744072755844945ULL)))));
                    arr_50 [i_6] = ((/* implicit */unsigned long long int) (~(((((unsigned int) arr_8 [i_0] [i_6])) >> (((/* implicit */int) ((((/* implicit */long long int) 31U)) >= (arr_2 [i_0]))))))));
                }
            }
        } 
    } 
}
