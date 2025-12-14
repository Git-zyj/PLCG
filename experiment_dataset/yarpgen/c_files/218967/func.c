/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218967
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
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (short i_3 = 4; i_3 < 13; i_3 += 3) 
                    {
                        var_12 *= ((max((((var_2) << (((16220456802152782241ULL) - (16220456802152782204ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_10)))))) << (((/* implicit */int) (_Bool)0)));
                        var_13 = ((/* implicit */unsigned int) max(((+(((/* implicit */int) var_5)))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [(_Bool)1] [i_2]))))) ? ((+(((/* implicit */int) arr_4 [4ULL] [(signed char)3])))) : (67107840)))));
                        /* LoopSeq 2 */
                        for (int i_4 = 3; i_4 < 15; i_4 += 3) 
                        {
                            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */int) var_1)) << (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17141)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [i_4] [i_4] [i_3] [i_2] [i_1] [i_0]))))) ? (((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) arr_0 [i_2])))) : (((/* implicit */int) var_1)))))))));
                            arr_12 [i_4] [i_3] [i_2] [i_1] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0 + 2]))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (11548996259131198806ULL))) : (((/* implicit */unsigned long long int) ((int) var_0))))))));
                        }
                        for (signed char i_5 = 4; i_5 < 16; i_5 += 2) 
                        {
                            var_15 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((1732897943U) << (((((/* implicit */int) (unsigned char)156)) - (139)))))), (((((/* implicit */_Bool) ((short) (_Bool)0))) ? ((+(2226287271556769375ULL))) : (min((17000706076309833666ULL), (16220456802152782241ULL)))))));
                            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((long long int) min((arr_8 [i_0 + 2] [i_0 + 4]), (((((/* implicit */_Bool) 2226287271556769363ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (9223372036854775807LL)))))))));
                        }
                    }
                    for (int i_6 = 4; i_6 < 15; i_6 += 4) 
                    {
                        var_17 = ((/* implicit */signed char) ((min((var_2), (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)0))))) << (((/* implicit */int) arr_9 [11U] [i_6 - 1] [16U] [i_6] [i_0]))));
                        arr_19 [16] [3ULL] [i_2] [i_0] [i_6 - 1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)0))))), (((((/* implicit */_Bool) arr_1 [(short)4] [i_1 + 1])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                        arr_20 [i_0] [(unsigned char)8] [0ULL] [6LL] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_15 [i_2] [i_2 - 1] [i_6] [i_6] [i_6 - 2] [i_6 - 3])) ? (((/* implicit */unsigned long long int) arr_15 [i_2] [i_2 - 1] [i_2] [i_6] [i_6 - 4] [i_6])) : (arr_3 [i_2] [i_2 - 1] [i_2]))) << (((((((arr_7 [i_6] [i_0]) + (2147483647))) << (((((((/* implicit */int) arr_10 [i_0] [i_2 - 1])) << (((((/* implicit */int) arr_10 [i_0] [i_0])) - (3516))))) - (902144))))) - (646248854)))));
                        arr_21 [i_0] [i_0] [i_0] [i_0] [i_0 + 2] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) arr_14 [i_0] [i_1 + 1] [i_0 - 2] [i_6 + 2] [(signed char)16] [i_6 - 1] [i_0])) << (((var_8) + (727891990216075802LL))))));
                    }
                    for (unsigned short i_7 = 2; i_7 < 15; i_7 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) (+((((((~(((/* implicit */int) (signed char)10)))) + (2147483647))) << (((((((-2931651711716534407LL) + (9223372036854775807LL))) << (((((/* implicit */int) (_Bool)1)) - (1))))) - (6291720325138241400LL)))))));
                        arr_26 [(signed char)0] [i_1 - 1] [16ULL] [i_7] [i_7] [(signed char)3] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_7 + 1] [i_1 + 1] [i_2 - 1] [i_7] [(unsigned char)7] [i_2 - 1])) ? (arr_7 [i_0 + 3] [i_1 - 1]) : (arr_7 [i_0 + 3] [i_1 + 1]))));
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((unsigned char) ((unsigned int) arr_13 [16LL] [i_2] [i_7] [i_7] [i_7 - 2]))))));
                        arr_27 [i_0] [i_1] [i_2] [i_7] = ((/* implicit */unsigned long long int) (+((-9223372036854775807LL - 1LL))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        var_20 = ((/* implicit */long long int) arr_2 [i_0 + 2]);
                        arr_30 [i_8] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_2 - 1] [(unsigned short)4] [(signed char)4] [i_2 - 1] [i_2] [i_2]))) + (var_10)))) ? (((((/* implicit */_Bool) arr_7 [i_0 + 3] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((var_8) / (((/* implicit */long long int) var_11))))) : (min((((/* implicit */unsigned long long int) var_9)), (var_0))))) : (((arr_13 [(signed char)7] [i_1] [i_1 - 1] [i_1] [i_1]) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) arr_18 [i_0] [i_1])) : (32505856ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551599ULL)) ? (var_8) : (((/* implicit */long long int) arr_7 [i_0] [13ULL])))))))));
                        arr_31 [i_2] [16] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_11 [i_0] [i_1 - 1] [i_2] [i_8] [i_1 + 1] [i_0 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(signed char)8] [(signed char)0] [16LL] [(short)6] [i_1 + 1] [i_0 + 4]))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((var_8) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_11 [i_0] [2ULL] [(unsigned char)11] [i_2] [i_1 - 1] [i_0 + 1])) + (27825))) - (32))))))));
                        var_21 = ((/* implicit */long long int) ((signed char) var_7));
                    }
                    arr_32 [7U] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_3 [(unsigned char)2] [i_0] [i_0 + 3]) << (((arr_3 [11ULL] [14LL] [i_0]) - (13507955195434347085ULL)))))) ? ((-(((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [(signed char)3] [i_0 + 4] [i_1]))) : (var_0))))) : (max((((/* implicit */unsigned long long int) (unsigned char)31)), (((unsigned long long int) var_6))))));
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) << (((var_3) - (1307780180))))) << (((((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_4 [i_0] [i_2])))) - (28685)))))), (((((/* implicit */_Bool) (signed char)108)) ? (min((((/* implicit */unsigned long long int) var_8)), (2226287271556769372ULL))) : (((/* implicit */unsigned long long int) var_6)))))))));
                    /* LoopNest 2 */
                    for (short i_9 = 1; i_9 < 14; i_9 += 3) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 17; i_10 += 4) 
                        {
                            {
                                var_23 -= ((/* implicit */_Bool) ((unsigned short) (unsigned short)65513));
                                arr_37 [(signed char)12] [i_10] [i_2] [8] [i_9] = ((/* implicit */unsigned int) max((18148423897190189546ULL), (min((((/* implicit */unsigned long long int) ((unsigned int) arr_16 [4U] [i_1] [i_2] [(_Bool)1]))), (min((2226287271556769369ULL), (((/* implicit */unsigned long long int) arr_23 [i_0] [(signed char)9] [1LL] [1LL] [i_10]))))))));
                                var_24 = ((/* implicit */long long int) (_Bool)1);
                                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) var_4))));
                            }
                        } 
                    } 
                    arr_38 [i_0] [12ULL] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_5)) + (2147483647))) << (((var_6) - (2733906152U))))))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) var_11);
    var_27 = ((/* implicit */unsigned int) var_9);
    var_28 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) max((9223372036854775807LL), (((/* implicit */long long int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_6)) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
}
