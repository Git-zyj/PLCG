/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3128
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
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) == (var_9)))) + (((/* implicit */int) ((((/* implicit */int) (signed char)-37)) != (var_2))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (18294352994105594125ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11))))) : ((+(var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (18294352994105594125ULL)))) ? (((/* implicit */int) ((_Bool) arr_1 [i_0]))) : (((((/* implicit */int) var_11)) / (((/* implicit */int) (signed char)-38))))))) / ((+((+(var_4)))))));
        var_16 = ((/* implicit */_Bool) 0ULL);
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 20; i_1 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) var_8))));
        arr_5 [i_1 + 2] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])) >= (var_4)))) == ((+(((/* implicit */int) (signed char)-38))))));
    }
    for (long long int i_2 = 2; i_2 < 20; i_2 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                {
                    arr_13 [(signed char)4] [i_3] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((max((((/* implicit */unsigned long long int) (signed char)-22)), (18294352994105594144ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118))) == (var_12))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) arr_11 [i_6] [(_Bool)1] [i_6] [i_6]);
                                var_20 -= ((/* implicit */unsigned long long int) max(((+((((_Bool)1) ? (arr_4 [i_2] [i_5]) : (((/* implicit */int) var_7)))))), (((int) (-(((/* implicit */int) var_7)))))));
                                var_21 = ((/* implicit */_Bool) (+((((((_Bool)1) ? (((/* implicit */int) (unsigned short)31110)) : (arr_3 [i_2]))) | (-720330648)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_22 *= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)31110)) >> (((arr_21 [i_2] [i_3] [i_4] [i_7]) - (3347458962717329908ULL)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-36))))) : (152391079603957508ULL)))));
                                var_23 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_7 [i_4] [i_2 - 2])))), (((((/* implicit */_Bool) (signed char)104)) ? (720330647) : (((((/* implicit */_Bool) -183213740)) ? (((/* implicit */int) (unsigned short)19220)) : (((/* implicit */int) (unsigned char)143))))))));
                                var_24 = ((/* implicit */short) ((max((((/* implicit */int) ((unsigned char) var_4))), (((((-720330624) + (2147483647))) >> (((((/* implicit */int) (signed char)-29)) + (37))))))) ^ ((((~(((/* implicit */int) var_10)))) >> (((((/* implicit */int) var_7)) - (128)))))));
                                var_25 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)18481))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2]))) : (-9223372036854775784LL))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) < (arr_24 [i_2 + 1])))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)47035))))) : ((+(6428939748562768346ULL)))));
                                var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 - 2])) ? (((/* implicit */int) arr_15 [i_2] [i_2 - 2])) : (((/* implicit */int) arr_7 [i_2 - 1] [i_2 + 1]))))) ? (((/* implicit */int) (unsigned char)97)) : (((/* implicit */int) (unsigned short)31133))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */_Bool) var_2);
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */int) var_1)), (arr_4 [i_2] [i_2])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_2] [8ULL] [i_2 - 2] [8ULL] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_9 [i_2] [i_2] [i_2 + 1])))))) ? ((((+(((/* implicit */int) arr_14 [i_2] [i_2 - 1] [i_2])))) << (((/* implicit */int) arr_15 [(_Bool)1] [i_2 + 1])))) : (((/* implicit */int) ((_Bool) arr_21 [i_2] [i_2] [i_2] [i_2 + 1])))));
    }
    var_30 = ((/* implicit */long long int) ((((unsigned long long int) ((short) (unsigned short)49806))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) max((var_3), (((/* implicit */unsigned short) (_Bool)1))))))))));
    var_31 = ((/* implicit */unsigned short) var_1);
    var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (+(((/* implicit */int) var_0)))))));
}
