/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236618
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    var_15 ^= ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_10))))) & (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (var_2))));
                    var_16 = 1238074158U;
                    var_17 &= ((/* implicit */signed char) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_11))) >= (1189500648U)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 2; i_3 < 9; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 4; i_4 < 11; i_4 += 1) 
        {
            for (unsigned char i_5 = 1; i_5 < 9; i_5 += 4) 
            {
                {
                    var_18 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) 4294967295U))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)3))))) : (((arr_15 [i_5 + 3] [i_4 - 3] [i_3 + 2]) / (arr_15 [i_5 + 3] [i_4 - 4] [i_3 - 1])))));
                    arr_18 [i_5] [i_5] [(unsigned short)5] = ((/* implicit */unsigned long long int) ((arr_13 [i_4] [i_5 + 1]) % (1189500648U)));
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)252)) ? (arr_15 [i_3 - 1] [i_4 - 2] [(short)11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3607))))))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_6 = 2; i_6 < 10; i_6 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 1; i_7 < 10; i_7 += 4) 
                        {
                            arr_24 [i_3 - 2] [i_4] [(_Bool)1] [i_3 - 2] [i_7 + 1] [(_Bool)1] = ((/* implicit */long long int) min((arr_12 [i_6 - 1] [i_3]), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (signed char)-29))) || ((_Bool)0))))));
                            arr_25 [i_3] [(short)4] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_4)) ? (arr_5 [i_4] [i_4] [i_4]) : (8795860258948853316ULL)))))) ? ((-(((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)3))))) : (((/* implicit */int) (short)0))))));
                            arr_26 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_5] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) 3105466648U))))) ? (((((/* implicit */_Bool) arr_1 [i_4 - 3])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_6)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) (unsigned char)48))))) ? (((((/* implicit */_Bool) var_14)) ? (1189500653U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)241))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)37800)) && (((/* implicit */_Bool) arr_21 [i_5 + 3])))))))))));
                            var_20 += ((/* implicit */unsigned short) min((((/* implicit */int) ((arr_16 [i_7 + 2] [i_7] [i_7] [i_4 - 2]) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (-1)));
                            var_21 = ((/* implicit */unsigned char) ((2097151U) != (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_6])) << (((((/* implicit */int) (short)-7031)) + (7034))))))));
                        }
                        var_22 = ((((/* implicit */_Bool) 18446744073709551611ULL)) ? (3105466647U) : (max((((/* implicit */unsigned int) (short)-3608)), ((-(1189500648U))))));
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) < (((/* implicit */int) arr_2 [i_6]))))), (arr_17 [i_4 - 3] [i_5] [i_5 + 1]))))))));
                        arr_27 [i_3] [i_4 - 4] [i_5 + 1] [i_5 - 1] [i_5 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)253)), (arr_3 [i_3 + 3])))) ? (((/* implicit */int) ((unsigned char) (unsigned char)236))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (arr_0 [i_3]) : (((/* implicit */int) arr_20 [i_3] [i_3] [i_3] [i_6]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-3619)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) max((var_11), (((/* implicit */unsigned char) (_Bool)1))))) : (((((/* implicit */_Bool) 62549340)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) arr_22 [i_3 + 3] [i_4 - 2] [(_Bool)1] [i_5] [i_6]))))))));
                    }
                    for (unsigned long long int i_8 = 2; i_8 < 10; i_8 += 4) /* same iter space */
                    {
                        arr_30 [i_4] [(short)10] = ((/* implicit */unsigned short) (+(3105466636U)));
                        arr_31 [i_3] [i_4] [i_3] [i_5 - 1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1963649316)) ? (((/* implicit */int) (short)6886)) : (((/* implicit */int) (short)25007))))), (((((/* implicit */_Bool) var_14)) ? (arr_5 [i_4] [i_5 + 3] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254)))))))) ? (((/* implicit */int) (short)-9230)) : (((((/* implicit */_Bool) arr_11 [(unsigned char)0] [i_8])) ? (((/* implicit */int) (short)1779)) : (arr_12 [i_3 + 1] [i_4 + 1])))));
                    }
                    for (long long int i_9 = 1; i_9 < 10; i_9 += 3) 
                    {
                        arr_34 [(short)4] [i_4] [(short)4] [i_9] = ((/* implicit */short) ((unsigned int) (short)3607));
                        arr_35 [i_3] [i_3] [i_3] [i_4] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_3] [i_9] [i_5 - 1] [i_9] [i_9] [i_5 - 1])) ? (((/* implicit */int) (short)-6446)) : (((/* implicit */int) (unsigned char)75))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) (short)-32404)) ? (790490782U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32405)))))))) || (((_Bool) var_10))));
                        arr_36 [i_3] [i_4 + 1] [i_9 + 1] [11ULL] [(unsigned short)11] [i_9 + 1] = ((/* implicit */unsigned char) ((arr_16 [i_3] [i_4] [i_5] [i_9]) << (((var_9) - (4094807973440543743ULL)))));
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 3; i_10 < 11; i_10 += 3) 
                        {
                            arr_40 [i_4] [i_5 - 1] [i_10 - 3] &= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (short)6453)) ? (((/* implicit */int) arr_29 [i_9 + 1])) : (((/* implicit */int) (unsigned char)15)))), (((/* implicit */int) var_10))));
                            var_24 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) & (7117145492629644603LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (9223372036854775807LL))), (((/* implicit */long long int) (_Bool)1))));
                        }
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 2) 
                    {
                        arr_43 [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0))))))))));
                        var_25 = ((/* implicit */long long int) max((var_25), ((~(max((((/* implicit */long long int) (signed char)7)), (-1LL)))))));
                    }
                }
            } 
        } 
    } 
    var_26 ^= ((/* implicit */int) var_1);
}
