/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53274
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
    for (signed char i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) var_3))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned char) ((signed char) (-(((((/* implicit */int) (short)-31374)) + (var_4))))));
                        var_13 -= ((/* implicit */int) (!(((/* implicit */_Bool) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_2)))))));
                    }
                    for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        var_14 &= ((/* implicit */int) ((_Bool) arr_1 [i_0]));
                        arr_15 [i_4] = ((/* implicit */_Bool) min(((((~(var_9))) & (((/* implicit */int) arr_11 [i_2] [i_2] [7LL] [i_2])))), (((/* implicit */int) var_8))));
                        /* LoopSeq 2 */
                        for (long long int i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_5] [(signed char)5] [(unsigned short)14] [i_1] [i_0] = ((/* implicit */unsigned short) max((5743592003325111515LL), (((/* implicit */long long int) (unsigned char)7))));
                            arr_20 [i_0] [i_0] = ((/* implicit */unsigned char) (+(var_9)));
                            arr_21 [i_0] [i_1] [i_1] [11U] [i_2] [(unsigned char)14] [i_5] = ((/* implicit */unsigned char) var_3);
                        }
                        /* vectorizable */
                        for (long long int i_6 = 0; i_6 < 15; i_6 += 1) /* same iter space */
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)3] [i_0] = var_7;
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((_Bool) arr_1 [i_6])) ? (((/* implicit */int) (!(((/* implicit */_Bool) -5743592003325111517LL))))) : ((~(((/* implicit */int) (signed char)39)))))))));
                        }
                        arr_26 [i_0] [i_2] [i_2] [i_4] [i_4] = ((/* implicit */_Bool) max(((+(((/* implicit */int) var_8)))), (((((/* implicit */_Bool) (~(arr_17 [i_4])))) ? ((-(918781525))) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)103)), (arr_11 [i_0] [i_1] [2] [i_4]))))))));
                    }
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        var_16 = ((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1]);
                        var_17 = var_8;
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_14 [(unsigned char)6] [i_0 - 3])))))));
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_19 = ((/* implicit */_Bool) ((signed char) ((short) (unsigned char)255)));
                            arr_32 [4LL] [5LL] [4LL] [i_2] [i_8] [4LL] [i_8] = arr_17 [i_1];
                            arr_33 [i_0] [13LL] [i_2] [i_8] [13LL] [i_8] = ((/* implicit */long long int) ((((((/* implicit */int) (short)1921)) * (((/* implicit */int) (signed char)-1)))) != (((/* implicit */int) ((((/* implicit */int) (unsigned short)40760)) <= (((/* implicit */int) (short)16352)))))));
                        }
                        for (unsigned int i_9 = 2; i_9 < 14; i_9 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-1899)))))));
                            arr_36 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((arr_5 [i_9 - 2] [(_Bool)0]) <= (arr_5 [i_9 - 1] [i_0])));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_35 [i_0] [(unsigned short)12] [9ULL] [i_7] [i_9]))))) && (((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) (unsigned short)22649)) : (var_4))))));
                        }
                        var_22 = ((/* implicit */unsigned long long int) var_10);
                    }
                    for (long long int i_10 = 0; i_10 < 15; i_10 += 1) 
                    {
                        var_23 += ((/* implicit */short) max(((~(((/* implicit */int) var_6)))), (((/* implicit */int) arr_34 [i_0] [(signed char)5]))));
                        /* LoopSeq 3 */
                        for (short i_11 = 2; i_11 < 14; i_11 += 4) 
                        {
                            arr_43 [i_10] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (unsigned short)37293)), (var_0)));
                            arr_44 [i_2] [(_Bool)1] [i_2] [i_10] [i_2] [i_2] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_30 [i_2] [i_10] [i_11 + 1]))))) * (((/* implicit */int) ((((/* implicit */long long int) arr_4 [9U] [i_2] [i_2])) >= (arr_7 [i_1] [i_1] [i_10]))))))));
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (short)15427)), (345876334)))) ? ((~(arr_18 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11 + 1]))) : (((/* implicit */unsigned int) max((((/* implicit */int) arr_28 [i_0] [i_1] [(unsigned short)8] [i_10])), (arr_17 [i_0]))))));
                        }
                        for (short i_12 = 0; i_12 < 15; i_12 += 3) 
                        {
                            var_25 = ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0 + 2] [i_0] [i_1] [i_2] [i_0] [i_10] [i_12])) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) (signed char)7))))) ? (((/* implicit */int) arr_39 [i_0 - 3] [i_0 + 2] [i_0 - 1])) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)48)) || (((/* implicit */_Bool) 794985947U)))))));
                            arr_47 [i_0] [10U] [i_0] [i_0] [i_1] |= ((/* implicit */unsigned char) ((_Bool) var_6));
                            arr_48 [i_10] [i_10] [(short)7] [i_10] [i_10] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_11 [i_0] [i_0] [(signed char)4] [i_0 + 1])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [(unsigned char)3] [i_0] [i_0 + 1])))))));
                            var_26 = min((((/* implicit */unsigned int) ((int) (+(((/* implicit */int) arr_29 [i_0] [12U] [i_2] [i_2] [(signed char)3] [i_0] [i_0])))))), (3221225472U));
                            arr_49 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */short) arr_45 [(short)8] [i_1] [i_10] [i_12]);
                        }
                        for (unsigned int i_13 = 0; i_13 < 15; i_13 += 4) 
                        {
                            var_27 = ((/* implicit */_Bool) var_2);
                            arr_52 [i_1] [i_10] = ((/* implicit */unsigned int) var_10);
                            arr_53 [i_10] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_35 [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 - 1])))) | (((/* implicit */int) (signed char)39))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 0; i_14 < 15; i_14 += 4) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_14] [i_1] [i_2] [i_1] [i_1]))) ^ (var_0)))) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_45 [i_0] [i_0] [i_14] [i_14])) ^ (524286U))))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 + 1])) / (((/* implicit */int) arr_11 [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0 - 2])))))));
                                var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (unsigned char)67))));
                                arr_59 [i_0] [12U] [12U] [12U] [i_15] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)62534)) : (((/* implicit */int) (signed char)4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_4))))) : (min((arr_58 [i_15] [i_14] [i_2] [i_1] [i_0] [i_1] [i_0]), (((/* implicit */unsigned long long int) var_2)))))) << (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32481)) ? (528482304) : (((/* implicit */int) (signed char)74))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0] [i_0] [i_0 + 1] [i_0 + 1]))) : (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_1])) << (((((/* implicit */int) (short)4092)) - (4072))))))))));
                                arr_60 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(min((arr_5 [i_2] [i_2]), (5110314861143920950ULL)))))) && (((_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */int) var_6)))))));
                                var_30 += ((/* implicit */signed char) var_10);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_31 = max((((/* implicit */int) var_5)), (min((((/* implicit */int) var_5)), (var_10))));
    var_32 = ((/* implicit */unsigned short) (~(((((/* implicit */int) var_6)) | (((/* implicit */int) ((unsigned short) var_2)))))));
}
