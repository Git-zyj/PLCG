/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240786
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
    for (int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_11 [i_1] [i_1] [i_0] [(unsigned short)8] [i_0] = ((/* implicit */unsigned short) ((((var_8) ? (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_1 + 2] [i_2 + 1])) : (((/* implicit */int) arr_4 [i_0] [i_1 - 2])))) | (((/* implicit */int) arr_4 [i_0] [i_1 + 1]))));
                            var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) (((~(((/* implicit */int) ((var_3) <= (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))) & (((/* implicit */int) ((((/* implicit */int) arr_6 [i_2 + 1] [i_2 - 1] [12])) != (arr_5 [i_0 + 1] [i_0 + 1] [i_1 + 3] [i_2 - 1])))))))));
                            /* LoopSeq 4 */
                            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                            {
                                var_11 = ((/* implicit */int) var_7);
                                var_12 = ((/* implicit */unsigned int) var_5);
                                arr_14 [i_0] [(unsigned char)7] = max((((/* implicit */int) ((short) 9007199254740991ULL))), (((arr_13 [i_0 - 1] [i_0]) | (1879048192))));
                                arr_15 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((max((arr_5 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]), (arr_5 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1]))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)122)) && (((/* implicit */_Bool) 0)))))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) 
                            {
                                var_13 &= min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [(signed char)14] [i_1 + 1])) ? (((/* implicit */int) arr_12 [i_0 + 1] [i_1 + 2] [i_1 + 3] [i_1] [i_2 + 1] [i_1 + 2])) : (((/* implicit */int) (signed char)-123))))), (((((2530252637U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)130))))) ? (((unsigned int) arr_16 [(short)6])) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
                                arr_18 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */signed char) arr_17 [i_3] [8U] [i_0] [i_3] [(short)0] [i_3] [i_3]);
                                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)137)), ((unsigned short)55435))))) : (min((3324642941U), (((/* implicit */unsigned int) (unsigned char)137))))));
                                var_15 = ((/* implicit */short) max((((var_7) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)60))))), (((/* implicit */unsigned int) ((511347106U) == (((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)1)))))))));
                            }
                            for (signed char i_6 = 2; i_6 < 11; i_6 += 1) 
                            {
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) -4))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_1 [i_2] [i_0])) != (((((/* implicit */_Bool) arr_19 [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)130))) : (arr_2 [i_0 - 1] [i_2]))))))) : ((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (17757688837783867053ULL)))))));
                                var_17 &= ((/* implicit */int) ((short) (unsigned char)118));
                            }
                            for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 1) 
                            {
                                arr_25 [(unsigned short)3] [i_1] [i_0] [i_0] [i_7] = ((/* implicit */unsigned short) min((((/* implicit */int) var_6)), ((~(((/* implicit */int) var_8))))));
                                var_18 = ((/* implicit */int) ((unsigned long long int) (!(((/* implicit */_Bool) (signed char)92)))));
                                arr_26 [i_0] [i_3] [i_2 - 1] [i_1] [13U] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)104)), (var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((arr_19 [i_2 + 1]) / (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) min((((/* implicit */unsigned long long int) var_4)), (17757688837783867051ULL))))));
                            }
                        }
                    } 
                } 
                var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (3423841599U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 + 1] [i_1] [i_1 + 2] [i_1 + 1] [i_1 - 2] [i_1 + 2])))))) ? (((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((((/* implicit */_Bool) (short)29656)) ? (arr_10 [i_0] [10] [i_1 + 1]) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)148)) % (((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41625))) ^ (511347079U))))));
                var_21 = ((/* implicit */unsigned int) arr_0 [i_1 - 1]);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
}
