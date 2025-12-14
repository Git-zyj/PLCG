/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248608
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        arr_4 [(_Bool)1] = ((/* implicit */unsigned long long int) ((-22) ^ (((((/* implicit */int) (signed char)110)) | (((/* implicit */int) (short)-13428))))));
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-9)))))));
        var_18 = ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (11907527587511331649ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1]))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (((-(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)0)))))) % (((((/* implicit */_Bool) min((arr_5 [i_1]), (((/* implicit */unsigned long long int) arr_6 [i_1]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)35))) <= (11907527587511331623ULL)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [15LL]))))))))))));
        var_20 = ((/* implicit */unsigned short) min(((+(min((11907527587511331623ULL), (((/* implicit */unsigned long long int) arr_3 [i_1])))))), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (unsigned short)65535)))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) 1239332476U);
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (((-(12754436667697483779ULL))) > (((/* implicit */unsigned long long int) (+(arr_2 [i_1])))))))));
            arr_11 [i_1] [(_Bool)1] = arr_6 [i_2];
        }
        /* vectorizable */
        for (unsigned int i_3 = 4; i_3 < 10; i_3 += 2) 
        {
            var_22 -= arr_10 [i_3 - 4] [i_1] [i_1];
            var_23 = ((/* implicit */unsigned long long int) ((arr_10 [i_1] [3U] [i_3 - 4]) | (arr_10 [(_Bool)1] [i_3] [i_3 + 3])));
        }
        /* vectorizable */
        for (unsigned short i_4 = 1; i_4 < 10; i_4 += 2) 
        {
            arr_17 [i_4] [i_4] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((4294967295U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [4LL]))))))));
            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_1]))))) >= (((((/* implicit */_Bool) (signed char)0)) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) 5317227300255577325LL)))))))));
        }
    }
    var_26 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((var_6) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) 1574035989U)) ? (var_2) : (2960843156U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 5448463141155034851LL)) && (((/* implicit */_Bool) var_6)))))))), (((/* implicit */unsigned int) var_3))));
    var_27 = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) ((var_14) ^ (4294967264U)))))), ((((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)90))) : (0U))) < ((-(var_5)))))));
    /* LoopSeq 2 */
    for (short i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        arr_20 [i_5] = max(((-(max((2147483647), (((/* implicit */int) (_Bool)1)))))), (((arr_18 [i_5]) ^ (arr_18 [i_5]))));
        var_28 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((0ULL), (6539216486198219971ULL))))))) + (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_5])) && (((/* implicit */_Bool) (short)-17331))))) > (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)144))))))))));
        var_29 = ((/* implicit */short) min((((arr_18 [i_5]) - (arr_18 [i_5]))), (((((/* implicit */int) arr_19 [i_5] [i_5])) + (((/* implicit */int) arr_19 [i_5] [i_5]))))));
        arr_21 [i_5] [i_5] = ((((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (arr_2 [i_5]))), (((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5] [i_5]))) : (arr_2 [i_5])))))) || (((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)65528)) + (1702763272))), (((/* implicit */int) (_Bool)0))))));
    }
    /* vectorizable */
    for (short i_6 = 3; i_6 < 23; i_6 += 3) 
    {
        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (arr_22 [i_6] [i_6])))) ? ((-(arr_22 [i_6 + 1] [i_6 + 1]))) : (((arr_22 [i_6] [i_6]) - (arr_22 [i_6] [i_6])))));
        var_31 = ((/* implicit */int) max((var_31), ((+((+(((/* implicit */int) (short)(-32767 - 1)))))))));
        var_32 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)24)) | (((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            for (unsigned int i_8 = 2; i_8 < 20; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 24; i_10 += 2) 
                        {
                            {
                                arr_35 [i_6] = ((/* implicit */_Bool) (signed char)7);
                                arr_36 [(short)3] [(short)3] [(short)3] [i_6] [i_9] [i_6] = ((609540543U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_6 - 1]))));
                                var_33 -= ((/* implicit */short) (((-(2147483647))) > (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 4065091630U)))))));
                                var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)4)) ? (1773072369) : (((/* implicit */int) (signed char)109))))) ? (((/* implicit */int) (unsigned char)68)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)8)))))));
                                var_35 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 58338795)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_9] [i_10]))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967280U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-14392)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        for (short i_12 = 0; i_12 < 24; i_12 += 1) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))));
                                arr_42 [i_6] [i_7] [i_8] [i_11] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_28 [i_6 + 1] [i_6] [i_8 + 2] [i_6 + 1])) == (((/* implicit */int) arr_28 [i_6 - 1] [i_8] [i_8 - 2] [i_8]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
