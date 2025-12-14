/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237228
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
    var_18 = ((/* implicit */int) var_14);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) max(((unsigned char)119), ((unsigned char)136)))) == (((/* implicit */int) arr_6 [i_0] [i_0 + 1] [i_0]))))) % ((~(((/* implicit */int) (short)-10298))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 2; i_2 < 16; i_2 += 2) 
                {
                    var_20 = ((/* implicit */int) (unsigned char)95);
                    /* LoopSeq 2 */
                    for (signed char i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */_Bool) max((var_21), (var_7)));
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_14 [i_0] [15] [i_1] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_9 [i_0 - 1]))));
                            arr_15 [(_Bool)1] [i_4] [(unsigned short)6] [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1] [i_2 + 1])) && (((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1] [i_2]))))) >= (-650384118)));
                            var_22 *= ((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_8 [i_0 - 1])) && (((/* implicit */_Bool) 834426524U))))));
                            arr_16 [i_2 - 2] [i_0] [i_0] [i_2 - 2] [i_4] = ((/* implicit */int) arr_6 [i_0] [i_2] [i_0]);
                            var_23 = ((/* implicit */int) 1701141972U);
                        }
                        for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            arr_21 [i_0] [4U] [(short)2] [4] [i_0] [i_3] [i_5] = ((/* implicit */signed char) max((((/* implicit */int) max(((unsigned short)28277), (((/* implicit */unsigned short) arr_20 [i_0] [i_0 + 1] [i_0 + 1] [i_2 + 1] [i_3 - 1]))))), (((((/* implicit */int) arr_19 [i_0] [(unsigned short)6] [i_1] [i_0] [i_3 - 2])) << (((12969941439304574503ULL) - (12969941439304574502ULL)))))));
                            var_24 -= ((/* implicit */short) ((((/* implicit */int) max((arr_12 [i_3 + 1] [i_0 + 1]), (arr_12 [i_3 - 2] [i_0 - 1])))) | (((/* implicit */int) min((arr_0 [i_0 - 1]), (arr_0 [i_0 + 1]))))));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0 + 1])) && (((/* implicit */_Bool) (unsigned short)28290))));
                            arr_25 [i_0] [i_1] [i_2] [i_0] [i_6] [i_6] [i_1] = ((/* implicit */signed char) (_Bool)1);
                            var_26 -= ((/* implicit */unsigned long long int) -8LL);
                            var_27 = ((/* implicit */unsigned int) arr_22 [(unsigned char)9] [(unsigned char)9] [i_2 + 1] [i_2 + 2] [(unsigned short)1]);
                        }
                        arr_26 [i_0] [i_1] [i_2 + 2] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)37250))))) - (((4294967295U) / (3736833597U))))), (((((/* implicit */_Bool) arr_4 [i_2 + 2] [i_2 - 2])) ? (((/* implicit */unsigned int) (+(var_5)))) : (arr_1 [i_3 + 1] [i_0 + 1])))));
                        var_28 = ((/* implicit */_Bool) 8388607);
                    }
                    for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        arr_31 [i_0 + 1] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((((((((/* implicit */int) arr_20 [i_0] [i_2 + 1] [i_0 - 1] [i_7] [7ULL])) - (((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) arr_17 [i_0] [i_0]))))))) + (2147483647))) >> (((((((/* implicit */unsigned long long int) 13LL)) - (arr_8 [i_7]))) - (5941542619914489860ULL)))))) : (((/* implicit */_Bool) ((((((((((/* implicit */int) arr_20 [i_0] [i_2 + 1] [i_0 - 1] [i_7] [7ULL])) - (((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) arr_17 [i_0] [i_0]))))))) - (2147483647))) + (2147483647))) >> (((((((/* implicit */unsigned long long int) 13LL)) - (arr_8 [i_7]))) - (5941542619914489860ULL))))));
                        arr_32 [i_0] [i_0 + 1] [i_0] [i_0] = ((/* implicit */int) max(((unsigned short)40090), (min((arr_18 [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_2 + 2] [i_2]), (arr_18 [i_0] [(signed char)12] [i_0 - 1] [i_0 + 1] [i_2 + 2] [i_2])))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_8 = 1; i_8 < 17; i_8 += 3) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_29 *= ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) 13LL)) || (((/* implicit */_Bool) (unsigned char)139))))), (((((/* implicit */int) (!(arr_2 [i_0])))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)2077)))))))));
                                var_30 = max(((+(arr_37 [(signed char)10] [i_2] [i_2 + 2] [i_8 - 1] [i_8]))), (min((((/* implicit */unsigned long long int) (unsigned short)47727)), (arr_37 [i_1] [i_1] [i_1] [i_8 - 1] [i_1]))));
                                arr_39 [i_0] [i_0 - 1] [i_1] [10U] [i_8] [i_9] = ((/* implicit */unsigned int) (unsigned char)122);
                                arr_40 [i_0 + 1] [i_1] [i_2] [8] [i_0] = ((/* implicit */unsigned int) arr_10 [i_8]);
                            }
                        } 
                    } 
                }
                for (signed char i_10 = 2; i_10 < 15; i_10 += 1) 
                {
                    arr_43 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)140)), ((unsigned short)65518)));
                    var_31 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)40311)) && (((/* implicit */_Bool) 3227094769U))))), (((((/* implicit */int) arr_12 [i_0] [i_1])) | (((/* implicit */int) arr_35 [i_0 - 1]))))));
                    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) max((min((5481615553400648393ULL), (((/* implicit */unsigned long long int) arr_22 [i_0 + 1] [i_1] [i_1] [i_10 + 2] [17ULL])))), (((/* implicit */unsigned long long int) (+(arr_22 [i_0 + 1] [i_1] [(unsigned char)13] [i_10 + 3] [12U])))))))));
                }
                arr_44 [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(arr_1 [i_0] [i_0 + 1])))), (arr_8 [i_0 + 1])));
                var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [(signed char)4])) ? (((/* implicit */int) arr_35 [i_0 - 1])) : (((/* implicit */int) arr_35 [i_0 - 1]))))) || (((/* implicit */_Bool) arr_35 [i_0 + 1]))));
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 16; i_11 += 2) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            arr_50 [i_0] [i_0] [i_11 + 2] [i_1] [i_0 + 1] [i_0] = ((/* implicit */int) min((((/* implicit */long long int) max((((/* implicit */unsigned short) arr_3 [i_0 - 1] [i_0])), ((unsigned short)17808)))), (((((/* implicit */_Bool) min((11LL), (((/* implicit */long long int) (_Bool)1))))) ? (max((9191100482081395987LL), (((/* implicit */long long int) arr_12 [i_1] [i_12])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 6891995582469204910LL))))))))));
                            var_34 |= (unsigned short)43898;
                        }
                    } 
                } 
            }
        } 
    } 
    var_35 = ((/* implicit */_Bool) ((-716606960) % (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) -8507087042796257884LL)))))));
    var_36 = ((/* implicit */unsigned short) var_6);
}
