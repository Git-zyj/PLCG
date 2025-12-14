/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39842
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_16 ^= ((/* implicit */_Bool) (unsigned char)143);
                                arr_11 [i_0] [i_1] [i_3] [i_1] [i_4] = ((/* implicit */unsigned long long int) (signed char)-118);
                                var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((arr_5 [i_0] [i_2] [i_0] [i_4]), (((/* implicit */int) var_11))))) || (arr_6 [i_0] [i_0] [i_4 - 1]))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0] [i_1] [(_Bool)1] [i_3] [i_4] [i_4])) >> (((min((((/* implicit */unsigned int) (signed char)-35)), (2022157279U))) - (2022157253U)))))) : (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) 5338143360532237334ULL)))) - ((-(4194303LL)))))));
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min((((/* implicit */int) arr_9 [i_4] [i_3] [i_2] [i_1] [i_0] [i_0])), (((((/* implicit */_Bool) arr_10 [i_4 - 1] [i_4 - 2] [i_4 - 2] [i_4 + 1] [i_4 - 2])) ? (((var_11) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_3] [i_4 - 1] [i_1])) : (((/* implicit */int) var_13)))) : (((((/* implicit */int) var_11)) * (((/* implicit */int) (unsigned char)144)))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_16 [i_0] [i_1] [(_Bool)0] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)9167))));
                            /* LoopSeq 2 */
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                var_19 = (-(((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_5] [i_0] [i_6] [i_7]))))) * ((+(2044353043))))));
                                var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_5] [i_6])) ? (var_7) : (((/* implicit */unsigned long long int) -2044353043)))) - (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0])) ? (((/* implicit */int) (short)-9171)) : (((/* implicit */int) arr_4 [i_0]))))) / (((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))))));
                                var_21 += ((/* implicit */signed char) min((((/* implicit */int) arr_1 [i_0] [i_1])), (((((/* implicit */int) min((((/* implicit */short) arr_6 [(_Bool)1] [i_1] [i_5])), (arr_2 [i_0])))) >> (((((((/* implicit */_Bool) arr_3 [i_0] [(short)9] [i_0])) ? (((/* implicit */int) var_4)) : (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) + (8279)))))));
                            }
                            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                            {
                                var_22 -= ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_19 [i_0] [i_1] [(signed char)1] [i_6] [(signed char)1])) : (((/* implicit */int) arr_2 [i_0])))), (((((/* implicit */int) (short)-9167)) ^ (((/* implicit */int) var_12)))))), (max((((((/* implicit */_Bool) 18255657541466413656ULL)) ? (((/* implicit */int) (signed char)57)) : (2044353043))), ((((_Bool)0) ? (((/* implicit */int) (signed char)-46)) : (((/* implicit */int) (short)-9151))))))));
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_15)))) ? (((arr_8 [i_0] [i_1] [i_5] [i_6] [i_8] [i_5]) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_5] [i_1] [i_1]))))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) 4144374411U)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_5])) : (2044353043))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_5] [i_1] [i_1])) : (arr_14 [i_0] [(_Bool)1] [i_5] [i_6] [i_8] [i_5]))))))));
                                arr_21 [(_Bool)1] [i_8] [i_5] [i_6] [i_8] = ((/* implicit */long long int) var_0);
                            }
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned char i_9 = 0; i_9 < 11; i_9 += 2) 
                            {
                                arr_26 [i_9] [(signed char)2] [i_1] [(signed char)2] = ((/* implicit */_Bool) ((((var_10) > (((/* implicit */int) var_13)))) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) ((3740583020711425787ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                                arr_27 [i_6] [i_1] [i_0] &= ((/* implicit */_Bool) arr_13 [i_0] [i_1]);
                                var_24 = ((/* implicit */_Bool) max((var_24), ((!(((((/* implicit */_Bool) arr_7 [2LL] [i_5] [i_6])) && (((/* implicit */_Bool) var_7))))))));
                            }
                            for (int i_10 = 0; i_10 < 11; i_10 += 3) 
                            {
                                arr_32 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_1] [i_0] [i_6] [i_10])) ? (((/* implicit */unsigned long long int) max((((var_8) ? (1296171479U) : (((/* implicit */unsigned int) -1646847762)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_0] [2ULL] [(_Bool)1] [i_0] [i_0])) ? (((/* implicit */int) (short)-9167)) : (var_10))))))) : (((min((var_7), (((/* implicit */unsigned long long int) arr_4 [i_1])))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_25 [i_0]), (var_8)))))))));
                                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (((/* implicit */int) min((((/* implicit */signed char) var_2)), (var_9))))))) ? ((+(((/* implicit */int) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */int) arr_19 [i_0] [i_1] [i_5] [i_6] [i_10])) : (arr_14 [i_0] [i_1] [i_1] [i_5] [i_5] [i_10]))))))));
                            }
                        }
                    } 
                } 
                arr_33 [i_0] [6ULL] = ((/* implicit */unsigned long long int) (short)7327);
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), ((+(((var_7) + (((/* implicit */unsigned long long int) 2044353043))))))));
    var_27 = ((/* implicit */unsigned int) 10144046608864605181ULL);
    var_28 = max((((((/* implicit */_Bool) min((((/* implicit */int) (short)25745)), (var_15)))) && (((/* implicit */_Bool) var_1)))), (var_2));
}
