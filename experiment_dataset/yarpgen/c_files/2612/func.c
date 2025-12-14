/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2612
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (var_12) : (((/* implicit */unsigned long long int) -1)))) / (((/* implicit */unsigned long long int) max((arr_1 [10ULL] [10ULL]), (((/* implicit */unsigned int) (_Bool)1)))))))) ? (((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [i_0] [i_1 + 1])))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2)) ? (((/* implicit */unsigned int) var_8)) : (var_14)))))) : (((/* implicit */unsigned long long int) 2))));
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((((/* implicit */unsigned int) -1)), (var_16))))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) * (((((/* implicit */_Bool) arr_2 [23LL] [i_1 - 1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1 - 1]))))));
                arr_6 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */long long int) 1)) + (arr_5 [i_0] [i_0]))))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) ((min((var_11), (((/* implicit */unsigned long long int) (signed char)-8)))) << (((/* implicit */int) ((signed char) var_18)))));
                                var_23 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 2)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_0))))) : (max((arr_13 [i_0] [i_1 - 1] [i_2] [i_3] [i_4] [i_3 - 1]), (((/* implicit */long long int) arr_0 [i_2]))))))));
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_3), (var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1]))) : (max((((/* implicit */unsigned int) arr_4 [i_4] [i_3 - 1])), (((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_0])) ? (arr_16 [i_0] [i_0] [i_0] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))))));
                                arr_17 [i_0] [i_0] [i_2] [i_0] [(short)8] [i_3] [12ULL] |= ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) -83614578)) & (arr_3 [16U] [16U]))) >> ((((~(var_4))) - (2157925023U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_1 [i_3] [i_1 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_3 - 1] [i_2])) ? (((/* implicit */int) arr_4 [i_3] [i_3])) : (((/* implicit */int) arr_11 [i_2] [i_3 - 1] [i_2] [2]))))) : (max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])), (var_3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [12LL] [4U] [12LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1 + 1] [i_2] [i_2] [(_Bool)1]))) : (arr_1 [i_0] [i_1])))) ? (((((/* implicit */_Bool) 83614565)) ? (((/* implicit */long long int) -1)) : (-3233314247259682765LL))) : (((((/* implicit */_Bool) arr_16 [24LL] [i_3 - 1] [i_2] [i_1] [24LL])) ? (arr_5 [(short)6] [(short)6]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [(short)8] [i_1])))))))));
                                arr_18 [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */long long int) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))))) : ((-(379386659581963831LL)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        arr_23 [i_5] = ((/* implicit */unsigned short) var_7);
        var_25 = ((((/* implicit */_Bool) min((min((arr_8 [i_5] [i_5] [i_5]), (((/* implicit */unsigned long long int) arr_3 [i_5] [i_5])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_5] [i_5])) ? (-1854059821305928098LL) : (((/* implicit */long long int) 26)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_5] [i_5])) ? (((/* implicit */int) arr_21 [i_5] [i_5])) : (((/* implicit */int) arr_21 [i_5] [i_5]))))) : (((((/* implicit */_Bool) 1854059821305928102LL)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (arr_12 [i_5] [i_5] [i_5] [i_5])))) : (var_5))));
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((signed char)116), ((signed char)127)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_5]), (arr_0 [i_5]))))) : (max((var_5), (((/* implicit */unsigned long long int) arr_0 [i_5]))))));
        var_27 = ((/* implicit */signed char) max((((/* implicit */unsigned int) arr_20 [i_5] [i_5])), (((((/* implicit */_Bool) ((unsigned long long int) -2))) ? (arr_7 [i_5] [(_Bool)1] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5] [i_5])))))));
        var_28 += ((/* implicit */unsigned short) var_4);
    }
    var_29 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) var_6))))))));
    var_30 = ((/* implicit */long long int) ((var_11) <= (((/* implicit */unsigned long long int) var_8))));
}
