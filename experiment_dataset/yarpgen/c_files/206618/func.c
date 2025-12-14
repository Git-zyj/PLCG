/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206618
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
    var_12 = ((/* implicit */unsigned long long int) (short)-24700);
    var_13 = ((/* implicit */unsigned int) min((((var_2) | (((/* implicit */long long int) ((((/* implicit */_Bool) 2055477143)) ? (1337306818U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)39)))))))), (((/* implicit */long long int) 2888285918U))));
    var_14 = ((/* implicit */unsigned short) (+(((unsigned int) ((var_0) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))))));
    var_15 = ((/* implicit */unsigned int) ((var_0) << (((max((var_0), (((/* implicit */unsigned long long int) var_6)))) - (12690555771180700076ULL)))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 4; i_2 < 20; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_3 - 2] [i_1] [i_2 - 4] [i_3] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 0)) ? (max((((/* implicit */unsigned long long int) var_2)), (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) / (arr_2 [i_3])))))), (((/* implicit */unsigned long long int) var_7))));
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 11836248041682290635ULL)))))))) : (((unsigned int) arr_4 [i_1]))));
                                arr_14 [i_0 - 3] [i_1] [i_2 + 2] [12LL] [i_2 + 2] = ((/* implicit */signed char) (((-((~(var_11))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) max((arr_12 [(unsigned char)19] [10]), (arr_8 [i_4] [i_3] [i_2] [i_1] [i_0 - 1]))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((_Bool) ((var_0) / (((/* implicit */unsigned long long int) arr_1 [i_0 - 1]))))))));
                    arr_15 [i_0 + 1] [i_0 + 1] [(unsigned short)4] = ((/* implicit */unsigned int) min(((-(arr_7 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2]))), (((/* implicit */long long int) (-(316797198U))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        for (long long int i_6 = 3; i_6 < 22; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) ((227827658) - (((/* implicit */int) (signed char)-107))));
                                var_19 = ((/* implicit */int) (unsigned short)37572);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned short i_7 = 3; i_7 < 22; i_7 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        for (signed char i_9 = 0; i_9 < 23; i_9 += 2) 
                        {
                            {
                                arr_28 [13] [13] [13] [i_1] [13] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) 2566981692927041232LL)) && (((/* implicit */_Bool) (unsigned short)54588)))))));
                                var_20 = (short)26789;
                                var_21 = ((/* implicit */long long int) (-(((/* implicit */int) arr_21 [i_0 + 2] [i_1] [i_9]))));
                                var_22 -= ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) 1407885541)) % (var_4)))));
                            }
                        } 
                    } 
                    var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0 + 2] [i_0 + 1] [i_1] [i_1] [i_0 + 1] [i_0 + 2])) && (((/* implicit */_Bool) arr_11 [i_0 + 1] [i_1] [i_7 + 1] [i_7 - 2] [i_7] [i_0]))));
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (-(arr_7 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]))))));
                }
                for (short i_10 = 1; i_10 < 22; i_10 += 4) 
                {
                    var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(arr_10 [i_10] [i_10] [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_10 + 1]))))));
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_23 [i_0 - 3] [i_10 + 1] [i_10] [i_10]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3251)))))) ? (((((_Bool) 9223372036854775807LL)) ? (arr_19 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [0ULL] [i_10 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)122))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(signed char)14] [i_1] [(signed char)14] [i_0 - 3] [i_0])))));
                    var_27 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_1] [i_10 - 1] [i_10 + 1])) ? (((/* implicit */unsigned long long int) arr_7 [i_0 - 1] [i_1] [i_10] [i_10 + 1])) : (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_1] [i_0 - 2] [i_10 + 1])) ? (arr_7 [i_0 - 2] [5U] [i_0 - 2] [i_10 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)145))))))));
                }
                arr_32 [i_0] [i_1] = ((/* implicit */short) (-(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [i_1])));
            }
        } 
    } 
}
