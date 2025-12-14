/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24677
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 9; i_2 += 1) 
                {
                    for (long long int i_3 = 4; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)7)) + (((((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) >> (((((((/* implicit */int) (unsigned short)65528)) % (((/* implicit */int) var_2)))) - (10400)))))));
                            /* LoopSeq 3 */
                            for (unsigned int i_4 = 1; i_4 < 7; i_4 += 1) 
                            {
                                arr_14 [i_0] [i_1] [i_2 + 1] [i_3] [i_1] = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
                                var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((arr_7 [i_0] [i_1] [i_2]) | (((/* implicit */long long int) ((/* implicit */int) var_18)))))) && (((/* implicit */_Bool) arr_0 [i_2 - 1])))) ? (max((((/* implicit */unsigned long long int) arr_12 [i_3] [i_3] [8] [i_3 - 2] [i_4 + 4] [i_2])), (10577931743443676880ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)46914))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((var_0) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))))), (((/* implicit */unsigned long long int) arr_2 [i_4] [i_4]))));
                            }
                            for (long long int i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
                            {
                                var_21 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65507)) * (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) max((arr_0 [i_0]), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] [i_5])))) : (((((/* implicit */int) var_10)) * (((/* implicit */int) (unsigned short)65535))))))), (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)18622)), (arr_8 [i_5] [(short)1] [i_2 + 1] [i_1])))) ? (4097382715516575649ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_2 + 1] [i_3 - 4])))))));
                                var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [0] [i_2 - 1] [i_1] [i_5])) ? (3405494150986395803LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5] [i_1] [i_2 + 2] [i_2] [i_1] [i_0])))))) ? (((/* implicit */unsigned long long int) (~((+(1642146357)))))) : ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) - (var_0)))))));
                                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (-(max((((4294967295U) | (((/* implicit */unsigned int) arr_19 [i_5] [i_1] [i_1] [i_0] [i_1] [i_0])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (arr_19 [i_0] [i_1] [i_2 - 1] [i_3] [0LL] [i_0]) : (((/* implicit */int) arr_4 [i_0] [i_0]))))))))))));
                                arr_20 [i_0] [i_1] [i_2 + 1] [1ULL] [i_3] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) max((arr_13 [i_3 - 2] [i_5] [8ULL] [i_2 + 1] [i_0] [i_3]), (arr_13 [i_3 - 4] [i_3 - 4] [i_1] [i_2 + 1] [i_0] [i_5]))))) & (((long long int) 4246190164592525535LL))));
                            }
                            /* vectorizable */
                            for (long long int i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
                            {
                                arr_23 [i_0] [i_0] [i_0] [i_3 - 4] [i_6] = ((/* implicit */unsigned char) ((((-501135736) + (2147483647))) << (((((/* implicit */int) var_16)) - (2496)))));
                                var_24 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_14))));
                            }
                            /* LoopSeq 2 */
                            for (signed char i_7 = 2; i_7 < 9; i_7 += 3) 
                            {
                                arr_27 [(_Bool)1] [i_1] [i_2 - 1] [i_2 - 1] [i_0] = ((((/* implicit */_Bool) 1798799146)) || (((/* implicit */_Bool) (signed char)58)));
                                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((max((min((((/* implicit */unsigned long long int) var_19)), (arr_10 [(signed char)2] [i_1] [i_1]))), (((/* implicit */unsigned long long int) arr_26 [i_0] [i_0] [i_2] [2U] [i_7] [i_3 + 1] [i_1])))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_8 [i_0] [i_1] [i_3] [i_7 - 2]), (((/* implicit */int) arr_22 [i_0] [7] [7] [7] [i_7]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3 - 1]))))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_17 [i_1] [(_Bool)1])), (var_7))))))))))));
                                arr_28 [i_0] [i_2] [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (((/* implicit */int) (unsigned short)65533))))) ? (((((/* implicit */_Bool) arr_19 [i_1] [i_0] [i_0] [i_2 + 2] [i_3 - 3] [i_7])) ? (arr_19 [(short)6] [i_0] [i_2] [i_0] [i_3 - 2] [i_7]) : (arr_19 [i_0] [i_0] [i_0] [i_1] [i_3 - 2] [i_7]))) : (((((/* implicit */_Bool) arr_19 [i_1] [i_0] [i_1] [i_2] [i_3 - 2] [i_3 - 3])) ? (arr_19 [i_0] [i_0] [i_1] [i_3] [i_3 - 2] [i_3 - 3]) : (arr_19 [i_2 + 2] [i_0] [i_3] [i_0] [i_3 - 4] [i_3])))));
                                var_26 *= ((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [i_1] [i_3 - 3] [i_7 + 1])) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) arr_9 [i_1])))) >> (((((/* implicit */int) ((short) min((arr_12 [i_7] [i_0] [i_2] [i_2] [(unsigned short)5] [i_0]), (((/* implicit */unsigned int) arr_24 [i_1])))))) - (208)))));
                                var_27 = ((/* implicit */signed char) max((min((arr_10 [i_1] [i_3] [i_3 - 4]), (((/* implicit */unsigned long long int) arr_0 [i_3 - 3])))), (((/* implicit */unsigned long long int) ((unsigned short) arr_1 [i_3 + 1])))));
                            }
                            for (signed char i_8 = 1; i_8 < 9; i_8 += 1) 
                            {
                                var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) max((arr_25 [i_3 - 4] [i_1] [(short)4] [i_8 - 1] [(short)4]), (((/* implicit */unsigned short) arr_16 [i_8] [i_0] [i_0] [i_2 - 1] [i_8 - 1] [i_2]))))) ? (((/* implicit */int) arr_24 [i_1])) : (((((/* implicit */int) arr_9 [i_1])) - (((/* implicit */int) ((var_11) > (arr_1 [i_0])))))))))));
                                var_29 = ((/* implicit */_Bool) max((((/* implicit */long long int) arr_19 [i_0] [i_0] [i_2] [(short)7] [i_3 - 4] [i_8])), (((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)28144))) + (arr_7 [i_0] [(_Bool)1] [0ULL]))) + (((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_0] [i_0])))))))));
                                var_30 ^= ((/* implicit */unsigned short) (+(var_12)));
                            }
                            var_31 = ((/* implicit */signed char) max((((max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_1])), (arr_1 [1]))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)46914)) : (33554431)))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [i_3] [i_3 - 2] [i_1] [i_2 + 1] [i_1] [i_0]))) | (-3851955849494360634LL))))));
                            var_32 ^= ((/* implicit */unsigned char) ((min((arr_5 [i_3 - 1] [i_2 + 2]), (((/* implicit */unsigned long long int) var_18)))) << (((min((arr_5 [i_3 - 1] [i_2 - 1]), (arr_5 [i_3 - 1] [i_2 - 1]))) - (18259851655783323266ULL)))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((max((((/* implicit */long long int) arr_6 [i_0] [i_1] [i_1] [i_1])), (max((-3405494150986395784LL), (((/* implicit */long long int) arr_29 [(_Bool)1] [(_Bool)1] [3U] [(_Bool)1] [3U])))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) (_Bool)1))))) ? (arr_7 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((((/* implicit */int) arr_0 [0ULL])) * (((/* implicit */int) arr_13 [i_0] [i_0] [(unsigned short)4] [i_1] [i_1] [i_1]))))))))))));
                var_34 = (!(((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))) > (((/* implicit */int) arr_0 [i_1])))));
            }
        } 
    } 
    var_35 = ((/* implicit */int) var_17);
}
