/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244186
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [8ULL] = ((/* implicit */int) ((min(((+(18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8648566534309564245LL)) ? (((/* implicit */int) (unsigned short)3830)) : (-832475958)))))) >= (((/* implicit */unsigned long long int) ((unsigned int) (signed char)123)))));
                    var_10 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned short)0)) ? (arr_2 [i_0] [i_1 + 2] [i_2 + 1]) : (arr_2 [i_0] [i_1 + 2] [i_2 - 1])))));
                    /* LoopSeq 4 */
                    for (int i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        arr_10 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) 2147483647);
                        arr_11 [i_0] [i_1 + 1] [i_2] [i_3 + 2] = ((/* implicit */short) ((var_2) == (min((((/* implicit */unsigned int) min(((unsigned short)128), (((/* implicit */unsigned short) arr_5 [i_0] [i_1 + 1]))))), (((((/* implicit */_Bool) (signed char)108)) ? (arr_0 [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)131)))))))));
                        var_11 = ((/* implicit */int) (~(((arr_8 [i_2 - 3] [(unsigned short)11] [i_2] [i_3 - 1] [i_1 + 1] [i_2]) % (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)107)) * (((/* implicit */int) (signed char)-109)))))))));
                    }
                    for (short i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        var_12 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-97)) | (((/* implicit */int) (unsigned char)219))))) : (var_1)))) ? (var_1) : (((/* implicit */unsigned int) ((int) var_9)))));
                        var_13 |= ((/* implicit */long long int) var_6);
                    }
                    for (unsigned int i_5 = 2; i_5 < 16; i_5 += 1) /* same iter space */
                    {
                        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_5 [i_1 - 2] [i_2 - 1])), (var_2)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 0U))))), ((unsigned char)235)))) : (((/* implicit */int) (!(((((/* implicit */int) (unsigned short)65408)) == (((/* implicit */int) (signed char)126))))))))))));
                        arr_18 [i_1 + 1] [i_2] [i_2] = ((/* implicit */signed char) (short)14899);
                        var_15 = ((/* implicit */short) max((((((_Bool) -5229090161766891141LL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3631739930466271887LL)))))) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) (!(((((/* implicit */unsigned int) ((/* implicit */int) (short)16352))) == (arr_2 [i_0] [i_0] [i_0]))))))));
                    }
                    for (unsigned int i_6 = 2; i_6 < 16; i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_6] [i_1] [i_2 - 3] [i_6] = ((/* implicit */long long int) var_3);
                        var_16 = ((/* implicit */unsigned long long int) min((var_16), ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_6])) ? (((/* implicit */unsigned int) -1664609608)) : (arr_12 [i_0] [i_1 + 2] [(unsigned char)15] [i_6] [i_2 - 3])))) : (((((/* implicit */_Bool) ((short) (_Bool)0))) ? (max((var_7), (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [(short)11] [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1559))) & (arr_2 [i_0] [i_0] [(_Bool)1]))))))))));
                    }
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 0U)) : (4704592524434084394ULL))))));
                    arr_23 [i_1] = ((/* implicit */int) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_16 [i_1] [i_1] [i_1 + 1] [i_2] [i_2] [i_2]))))), (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31))) : (arr_12 [i_2 - 2] [i_1 + 1] [i_1] [i_1 - 3] [i_0]))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)9)))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-319431883) + (((/* implicit */int) (_Bool)1))))) ? (((641532568136878044LL) / (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (min((min((var_4), (var_4))), (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((var_2) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16)))))))))));
    var_19 = ((/* implicit */long long int) (signed char)-31);
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 12; i_7 += 1) 
    {
        for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) (signed char)81);
                arr_28 [i_7] [i_7] = ((/* implicit */unsigned char) arr_13 [i_7] [i_8] [i_7] [i_7] [i_7]);
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 1; i_9 < 10; i_9 += 3) 
                {
                    for (signed char i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)218)) ? (((unsigned long long int) arr_17 [i_9 + 2] [i_9 + 2] [i_9] [i_9 + 1] [i_9] [i_9 + 1])) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_9 + 2] [i_8] [i_9]))))))))));
                            arr_35 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3519438389U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)127))))) ? (((/* implicit */int) arr_24 [i_10])) : (((/* implicit */int) arr_26 [i_7] [i_8])))), (((/* implicit */int) arr_14 [i_7] [i_8] [i_8] [i_7]))));
                            arr_36 [i_7] [(short)8] [i_9] [4] = ((/* implicit */unsigned char) (~(-20)));
                            var_22 += ((/* implicit */signed char) arr_16 [i_7] [i_8] [i_8] [i_9] [i_9] [i_9]);
                            arr_37 [i_7] [0] [i_9] [i_10] = ((/* implicit */int) ((((/* implicit */long long int) (+(((((/* implicit */int) (unsigned char)202)) << (((/* implicit */int) arr_16 [i_7] [i_7] [i_7] [i_10] [i_8] [i_10]))))))) - (min((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-112))) : (9223372036854775807LL))), (arr_27 [i_9] [i_9] [i_9 - 1])))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_11 = 2; i_11 < 10; i_11 += 2) 
                {
                    arr_41 [i_7] [i_8] [i_11 + 2] = var_5;
                    arr_42 [i_7] [i_8] [i_8] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-32)) + (2147483647))) >> (((int) arr_9 [i_7] [i_7] [i_11] [i_8]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_20 [i_8] [i_11])))) ? (arr_40 [i_11 - 1] [i_11 - 1] [i_11 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) : (((((/* implicit */unsigned long long int) arr_15 [i_7] [i_8] [(unsigned short)0] [i_11 - 1] [i_11] [i_11 - 1])) - (arr_8 [i_7] [i_8] [i_8] [i_8] [11LL] [i_11 + 1])))));
                }
            }
        } 
    } 
}
