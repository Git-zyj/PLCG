/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44501
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
    var_16 = ((/* implicit */int) var_15);
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_2))) ^ (max((((4237900895131661120LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)139))))), (((/* implicit */long long int) min((var_0), (((/* implicit */unsigned int) (unsigned char)112))))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned char)2)))) | (((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) == (arr_5 [i_2] [i_2] [i_2]))))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_8 [i_0] [6U] [2]) > (((/* implicit */int) var_6))))))));
                    var_19 ^= ((((min((var_0), (((/* implicit */unsigned int) (signed char)-124)))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) ? ((~(((/* implicit */int) max((((/* implicit */unsigned short) var_15)), (arr_6 [i_0] [i_0] [i_0])))))) : ((((_Bool)0) ? (((/* implicit */int) ((((/* implicit */int) (signed char)123)) != (((/* implicit */int) (signed char)127))))) : (((/* implicit */int) (signed char)75)))));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_5 [i_0 + 1] [i_0] [i_0 + 1]), (((/* implicit */unsigned long long int) arr_4 [i_0 - 1]))))) || (((/* implicit */_Bool) arr_4 [i_0 + 1]))));
                    var_21 = ((/* implicit */short) ((((var_14) - (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 - 1] [10LL] [i_0] [i_0 - 1]))))) >= (((/* implicit */long long int) ((/* implicit */int) arr_9 [18ULL] [18ULL] [i_1] [i_1])))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 3; i_3 < 18; i_3 += 1) 
                    {
                        var_22 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_15)) & (((/* implicit */int) var_6)))) << (((((((/* implicit */_Bool) -933286799)) ? (((/* implicit */int) (unsigned char)154)) : (933286798))) - (129)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0] [16LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))) : (arr_5 [i_0] [i_1] [i_3 - 2])))) ? ((~(((/* implicit */int) (short)30944)))) : (((arr_8 [i_0] [(unsigned char)6] [i_2]) << (((933286802) - (933286802))))))) : ((~(((((/* implicit */int) (unsigned char)111)) << (((/* implicit */int) var_2))))))));
                        var_23 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-111)) : (arr_10 [i_2] [i_2] [i_2] [i_2] [i_2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-124))) > (min((7185134126466332198ULL), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [13] [i_0] [i_0])))))))) : (min((3225346868085464720ULL), (((/* implicit */unsigned long long int) (signed char)110))))));
                        arr_13 [i_0] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */int) (unsigned char)255)) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)30919)), ((unsigned short)3678)))) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) (short)30908))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        arr_16 [i_0] [i_1] [(signed char)13] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-30918)) || (((/* implicit */_Bool) -933286789))));
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            arr_19 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_14 [(unsigned char)3]);
                            var_24 = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1])) << (((((/* implicit */int) (signed char)-122)) + (122)))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_15 [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1])) + (2147483647))) << (((((/* implicit */int) (signed char)-122)) + (122))))));
                            arr_20 [i_0] [i_4] [i_4] [i_2] [(unsigned char)12] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (8187653641135075533LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0 - 1] [i_0 + 1])))));
                            arr_21 [(short)7] [i_1] [i_1] [i_0] [i_4] [i_4] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((9223372036854775796LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-25)))))) - (arr_5 [i_0] [i_0 - 1] [(short)2])));
                        }
                        for (int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((arr_23 [i_6] [i_6]) != (((((/* implicit */_Bool) arr_3 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_4]))) : (11502633175334630444ULL))))))));
                            arr_26 [i_0] = ((/* implicit */unsigned long long int) ((signed char) arr_14 [i_0 + 1]));
                            var_26 = ((/* implicit */_Bool) var_4);
                            arr_27 [i_0] [(signed char)13] [i_0] [i_4] [i_6] = ((/* implicit */_Bool) (unsigned char)81);
                        }
                        var_27 = ((/* implicit */int) max((var_27), (((((/* implicit */_Bool) arr_24 [i_0] [i_4] [i_0 - 1] [i_0] [(_Bool)1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_24 [i_4] [i_4] [i_0 - 1] [i_4] [i_4]))))));
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned int) var_14);
}
