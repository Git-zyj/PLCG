/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45419
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_7 [11LL] [i_2] [i_2] [11LL] = ((/* implicit */unsigned long long int) (~(2106505595)));
                    arr_8 [i_0 + 1] [i_2] [i_2] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)987)) || (((/* implicit */_Bool) 511LL))))), (min((arr_6 [i_2] [i_2] [i_2] [i_0 + 3]), (arr_6 [i_2] [i_2] [i_2] [i_0])))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        arr_12 [6ULL] [i_2] [i_1] = ((/* implicit */unsigned long long int) 3393445448U);
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            var_15 ^= ((/* implicit */short) arr_3 [i_4] [i_4]);
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_13 [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))))) / (((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) var_13))))) ? (((/* implicit */long long int) ((arr_6 [i_1] [(short)6] [i_3] [i_3]) / (((/* implicit */int) arr_9 [i_0]))))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_2 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))))))));
                            arr_16 [i_4] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) (-(((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_9 [i_0 + 4])) : (((/* implicit */int) var_5)))) ^ (((/* implicit */int) arr_5 [i_2] [i_0 + 3] [i_2]))))));
                            arr_17 [i_0] [8LL] [i_0] [i_0 + 2] [i_0] &= ((/* implicit */unsigned long long int) ((((arr_3 [(_Bool)1] [i_0]) == (((/* implicit */long long int) ((arr_15 [i_0] [(short)6] [i_1] [2] [i_2] [i_3] [8ULL]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)41411))))))) || (((/* implicit */_Bool) min((((/* implicit */short) var_13)), (((short) (unsigned short)24125)))))));
                        }
                        arr_18 [i_0] [i_2] [i_2] [i_3] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned long long int) arr_2 [i_2]))))) ? (max((((/* implicit */unsigned long long int) var_1)), (var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)24125)) | (((/* implicit */int) (unsigned char)5))))))), ((-(var_10))));
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 13; i_5 += 2) 
                        {
                            arr_22 [i_2] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) arr_21 [i_0] [i_0 + 3] [i_0] [i_0 + 1] [i_0]);
                            arr_23 [i_2] [i_5] [i_3] [i_2] [i_1] [i_1] [i_2] = ((/* implicit */long long int) ((((arr_14 [i_0 + 3] [i_0 + 3] [i_0 + 4] [i_3]) && (((/* implicit */_Bool) arr_0 [i_2] [8U])))) ? (((/* implicit */int) (!(((var_3) == (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */int) arr_9 [i_0]))));
                            var_17 = ((/* implicit */unsigned char) (-(1957631600U)));
                        }
                        for (unsigned long long int i_6 = 2; i_6 < 12; i_6 += 3) 
                        {
                            arr_26 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned short)42466), (((/* implicit */unsigned short) arr_14 [i_6 - 2] [i_1] [i_2] [i_3]))))) ? (min((((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_2] [i_2]))) : (arr_3 [i_6 - 1] [i_3]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) var_4)) : (var_3)))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_3] [i_3])) : (((/* implicit */int) (unsigned char)100))))) : (((arr_14 [i_0] [i_2] [i_3] [i_0]) ? (-8369964315986324241LL) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_2] [12LL] [i_2] [i_3] [i_6 - 1])))))))));
                            var_18 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)46882))));
                            var_19 = ((/* implicit */unsigned int) min((min(((unsigned short)12720), (((/* implicit */unsigned short) (unsigned char)252)))), (max((((/* implicit */unsigned short) arr_11 [i_0])), (var_8)))));
                        }
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        var_20 = (-((~(((((/* implicit */_Bool) arr_13 [i_2])) ? (var_3) : (((/* implicit */int) var_0)))))));
                        /* LoopSeq 4 */
                        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            arr_31 [i_0 + 3] [i_1] [i_2] [i_7] [i_8] [i_8] = min(((+(((/* implicit */int) arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 4] [i_0 + 4])) && (((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1))))))));
                            var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 2047))));
                        }
                        for (unsigned short i_9 = 2; i_9 < 11; i_9 += 2) 
                        {
                            arr_34 [i_7] [i_1] [i_2] [i_9] [i_1] [i_7] = ((/* implicit */unsigned int) min((max((((var_1) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) -2048)) - (0U)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) + (((/* implicit */int) arr_19 [i_1] [i_7] [i_2] [i_1]))))) ? (((((/* implicit */int) var_12)) - (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_24 [i_0] [i_1] [i_7] [i_7] [(_Bool)1])))))));
                            var_22 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) 2305843009213693951LL)))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_4 [i_2]) : (((/* implicit */unsigned int) var_11))))), (((unsigned long long int) arr_11 [i_2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-28346)) & (((/* implicit */int) (_Bool)1)))))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 13; i_10 += 2) 
                        {
                            arr_38 [(short)8] [i_1] [i_1] [i_2] [i_7] [(unsigned short)0] = (((-(((((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0])) - (((/* implicit */int) var_6)))))) / (((((/* implicit */_Bool) (short)-14842)) ? (-1) : (((/* implicit */int) (unsigned short)22660)))));
                            arr_39 [i_0] [i_1] [i_2] [i_7] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) min(((short)-2220), ((short)-12545)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_0 - 1]))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_6 [i_10] [i_2] [i_2] [i_1])), (var_1)))) ? (((long long int) (unsigned char)77)) : (((/* implicit */long long int) arr_4 [i_0]))))));
                            var_23 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((arr_14 [i_0] [i_1] [i_2] [i_1]) || (((/* implicit */_Bool) min((var_8), (var_9))))))), ((-(min((var_2), (((/* implicit */unsigned long long int) arr_20 [i_0] [2ULL] [i_1] [i_7] [i_10]))))))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_24 ^= ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) | (((/* implicit */int) (unsigned short)62120))))) + (((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_7] [i_1] [i_2] [i_2] [i_7] [i_7]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5119471610613906286ULL)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned short)59652)))))));
                            var_25 ^= ((/* implicit */unsigned int) ((signed char) 0));
                            arr_44 [i_11] [i_7] [i_2] [i_2] [1U] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) min((var_5), ((_Bool)1)))) * (((arr_6 [i_0 + 4] [i_2] [i_0 + 2] [i_0 + 2]) - (arr_6 [i_0 - 1] [i_2] [i_0 + 1] [i_0 - 1])))));
                            var_26 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_40 [i_7])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_43 [i_0] [12ULL] [i_2])))) % (((((/* implicit */_Bool) arr_43 [i_11] [i_11] [i_11])) ? (((/* implicit */int) var_7)) : (var_11)))))) ? (min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) arr_32 [i_0] [i_1] [i_2] [i_2] [i_11])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_36 [i_1] [i_11] [i_2] [i_7] [i_7] [i_1])))))) : ((+((-2147483647 - 1))))));
                        }
                    }
                    for (long long int i_12 = 1; i_12 < 12; i_12 += 1) 
                    {
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) arr_0 [i_0 + 1] [i_1]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 1) 
                        {
                            var_28 ^= ((/* implicit */short) (!(((/* implicit */_Bool) min(((unsigned short)27297), (((/* implicit */unsigned short) (unsigned char)0)))))));
                            arr_50 [i_0] [i_0] [i_2] [i_2] [i_12 + 1] [i_12 + 1] [i_13] = ((/* implicit */unsigned long long int) arr_42 [i_0] [i_1] [i_2] [i_12] [i_13]);
                        }
                        var_29 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) == (16241935126462156466ULL)))))), ((-(((/* implicit */int) min(((unsigned char)177), ((unsigned char)78))))))));
                        /* LoopSeq 2 */
                        for (int i_14 = 1; i_14 < 10; i_14 += 4) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */unsigned long long int) 2147483647)) : (0ULL))) * (((/* implicit */unsigned long long int) ((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) var_13))))))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_49 [i_14] [(_Bool)1] [i_2] [(_Bool)1] [i_0])) ? (((/* implicit */int) arr_27 [(unsigned short)10] [i_14] [i_12] [i_2] [i_1] [(unsigned short)10])) : (var_11)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_48 [5LL] [i_2] [i_12])))))))))));
                            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */int) var_5)) | (((/* implicit */int) (unsigned char)139)))))));
                            arr_54 [i_12] [i_1] [i_2] [i_12 + 1] [10ULL] [10ULL] = ((/* implicit */unsigned char) arr_49 [i_0] [i_2] [i_2] [i_12 - 1] [i_14 + 1]);
                        }
                        for (int i_15 = 1; i_15 < 10; i_15 += 4) /* same iter space */
                        {
                            var_32 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_1] [i_1] [12LL] [i_2] [i_15] [i_0] [i_1]))) == (((((((/* implicit */_Bool) arr_29 [i_2] [i_2] [i_2] [i_2])) || (((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [i_0 + 3] [4ULL] [i_1] [i_2] [i_12] [i_12] [i_15]))))) : (((arr_49 [2ULL] [(unsigned char)4] [i_2] [i_2] [i_2]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_12])))))))));
                            arr_58 [i_0] [i_1] [i_2] [i_2] [i_15] = (+((~((((_Bool)0) ? (arr_3 [3] [i_0]) : (((/* implicit */long long int) arr_4 [(unsigned char)4])))))));
                        }
                    }
                }
                arr_59 [i_0] = ((/* implicit */unsigned short) 2867722640533443007ULL);
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned int) var_7);
}
