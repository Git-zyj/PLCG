/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247265
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
    var_10 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 3528135560U)) : (var_7));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned short) arr_3 [9]);
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    var_12 = ((/* implicit */int) ((var_0) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1754071996))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */unsigned long long int) arr_4 [i_0])) : (24ULL)));
                        var_14 = ((/* implicit */unsigned long long int) (-((+(arr_6 [i_2] [(unsigned short)8] [i_0])))));
                        arr_12 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2] = (!(((/* implicit */_Bool) arr_3 [i_0 - 1])));
                        var_15 = ((/* implicit */short) (_Bool)1);
                        arr_13 [i_2] [19ULL] [i_2] = ((/* implicit */_Bool) arr_11 [i_2] [i_2]);
                    }
                }
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((1754071996) / (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-78))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_1)) : (18446744073709551586ULL)))));
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) arr_15 [i_4] [i_5]);
                        arr_19 [i_0] [i_0 + 1] [i_0 + 1] [i_4] [i_0] = ((/* implicit */_Bool) var_8);
                        arr_20 [i_4] [(_Bool)1] [i_4] = ((/* implicit */unsigned int) var_3);
                    }
                    for (int i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        arr_23 [i_0] [i_1] [i_6] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4] [i_4])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned long long int) 345252426U)) : (arr_14 [i_0 - 1] [i_1] [i_4] [i_6])));
                        arr_24 [i_6] [i_4] [i_1] [i_1] [10ULL] &= ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_15 [i_1] [i_1])) : (((/* implicit */int) var_8))))) : (((unsigned long long int) arr_22 [i_1] [i_1] [i_4] [i_4] [i_6] [i_6])));
                    }
                    arr_25 [i_0 - 1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned long long int) ((unsigned char) var_6));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_22 [i_7] [14] [i_0 + 1] [i_0 + 1] [i_7] [i_0 + 1]) << (((var_9) - (3218547499289325439ULL)))))) && (((3528135560U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)73)))))));
                    arr_28 [i_7] [(short)20] [i_7] = ((/* implicit */_Bool) max((3528135560U), (((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_7] [i_1])) / (((/* implicit */int) (unsigned char)51)))))));
                }
                /* LoopSeq 2 */
                for (signed char i_8 = 0; i_8 < 23; i_8 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 23; i_9 += 2) 
                    {
                        for (long long int i_10 = 0; i_10 < 23; i_10 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (+(arr_22 [i_8] [i_1] [i_8] [i_1] [i_1] [i_1]))))) || (((/* implicit */_Bool) ((((((/* implicit */int) (short)-30911)) + (2147483647))) << (((18446744073709551615ULL) - (18446744073709551615ULL))))))));
                                arr_35 [i_0] [i_0] [i_8] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551591ULL)) ? (((/* implicit */int) (short)8)) : (1840891692)));
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (~(var_4))))));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_34 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) / (arr_34 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1])))) ? (min((5919707459807840729ULL), (16306952123014808002ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-71))))))))));
                                var_21 *= ((/* implicit */unsigned char) var_0);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                arr_40 [i_0] [i_12] [i_0 - 1] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-56))));
                                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) -1840891692)) ? (((((unsigned long long int) 1840891692)) / (((/* implicit */unsigned long long int) (+(var_4)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_37 [i_0] [i_0] [i_8] [i_0] [i_12])), (var_1)))) ? ((+(var_1))) : (((/* implicit */int) arr_7 [i_0 + 1] [i_1] [i_8] [16U])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (signed char i_13 = 2; i_13 < 22; i_13 += 3) 
                    {
                        arr_43 [i_0] [i_1] [i_13] [i_1] [i_8] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) min((((/* implicit */short) (signed char)-74)), (var_8)))), (max((294873793U), (((/* implicit */unsigned int) var_1))))))) == ((-(((((/* implicit */_Bool) arr_38 [i_13] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) (short)30910))) : (var_3)))))));
                        arr_44 [i_0 - 1] [i_13] [i_13] [i_0 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_14 [i_13 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]), (arr_14 [i_13 + 1] [i_8] [i_1] [i_0 + 1]))))));
                        var_23 = min(((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_9 [i_8]))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)30910)) ? (((/* implicit */int) arr_0 [(unsigned char)21])) : (((/* implicit */int) (_Bool)1))))) & (((long long int) var_5))))));
                        var_24 *= ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) -822048154)), (13461990220263389031ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_34 [i_0] [i_1] [i_8] [(unsigned short)21] [i_13] [(unsigned char)21])) ? (((/* implicit */unsigned long long int) var_4)) : (0ULL))) >= (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 + 1] [i_1]))) + (var_0))))))))));
                    }
                    for (signed char i_14 = 0; i_14 < 23; i_14 += 4) 
                    {
                        var_25 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)73))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-89))) : (min((6ULL), (((/* implicit */unsigned long long int) (unsigned short)65535))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) != (((((/* implicit */_Bool) var_5)) ? (18446744073709551601ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_8])))))))) : (((/* implicit */int) arr_15 [i_8] [16LL]))));
                        arr_47 [i_14] [i_8] [i_8] [9ULL] [i_1] [i_0] &= ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-30911))));
                    }
                    for (signed char i_15 = 0; i_15 < 23; i_15 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) var_0))));
                        var_27 ^= ((/* implicit */_Bool) arr_48 [i_0] [i_1] [i_0] [i_1] [i_15]);
                    }
                    for (short i_16 = 2; i_16 < 21; i_16 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)1))));
                        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) (short)10549))));
                        arr_53 [i_0] [(signed char)0] [8] [i_0] = ((/* implicit */int) min(((+(((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))), (((/* implicit */unsigned int) (unsigned short)65535))));
                    }
                    arr_54 [i_0 - 1] [i_0 - 1] [i_8] = ((/* implicit */int) min(((short)-128), (((/* implicit */short) arr_2 [i_0 - 1]))));
                    var_30 = ((short) (signed char)-73);
                }
                for (short i_17 = 0; i_17 < 23; i_17 += 1) 
                {
                    arr_57 [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 525668279)) ? (-1672356766) : (((/* implicit */int) (unsigned short)65535)))))))));
                    arr_58 [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_39 [i_0] [i_1] [i_0 + 1] [i_17] [14] [i_0 + 1])) ? (((/* implicit */int) (unsigned char)226)) : (arr_39 [(unsigned short)12] [i_1] [i_0 + 1] [1] [i_1] [i_1])))));
                    var_31 = ((/* implicit */short) (!(((((/* implicit */_Bool) var_2)) && (arr_31 [i_0 + 1] [(unsigned short)15] [i_17])))));
                }
            }
        } 
    } 
    var_32 = var_1;
    var_33 = ((/* implicit */unsigned long long int) var_1);
}
