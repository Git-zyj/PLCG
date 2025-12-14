/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240245
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
    var_20 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_14)), (var_6)))), (var_19))) & (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_0))))), (min((((/* implicit */unsigned short) var_1)), (var_3)))))))));
    var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) var_6))))), (min((var_0), (((/* implicit */long long int) var_5))))))), (min((((/* implicit */unsigned long long int) var_10)), (min((var_19), (((/* implicit */unsigned long long int) var_14))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0 - 1] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_3 [i_0 + 2])) : (((/* implicit */int) arr_1 [i_1])))) : (((/* implicit */int) arr_4 [i_0] [i_0 - 1])))), (min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 2])))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
                            {
                                arr_15 [i_3] [i_3] [i_3] [i_1] [i_3] [i_0 + 1] = ((/* implicit */_Bool) max((0), (((/* implicit */int) (short)32767))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */int) min((arr_7 [i_0 + 1]), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_10)), (arr_1 [i_0 + 1]))))));
                                arr_17 [i_0 + 1] [i_3] = ((/* implicit */short) max((((/* implicit */long long int) min((min((arr_12 [i_3] [i_3] [i_2] [i_1] [i_3]), (((/* implicit */unsigned short) arr_10 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */unsigned short) max((((/* implicit */short) arr_13 [i_4] [i_3] [i_2] [i_0 - 1] [i_0 - 1])), (var_17))))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_0)))))));
                            }
                            for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
                            {
                                arr_20 [i_0 + 1] [i_1] [i_0 + 1] [i_2] [i_5] &= ((/* implicit */short) ((((/* implicit */_Bool) (-((+(var_16)))))) || (((/* implicit */_Bool) min((((((/* implicit */int) arr_18 [i_0] [i_1])) / (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) var_15)))))));
                                arr_21 [i_3] [i_1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_18 [i_3] [i_3])) + (2147483647))) >> (((max((var_16), (var_16))) - (7053900313346703425LL))))))));
                            }
                            arr_22 [i_3] [i_2] [i_3] = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned short) min((arr_19 [i_0] [i_0] [i_0] [i_0]), (arr_14 [i_0 - 1] [i_3] [i_1] [i_1] [i_2] [i_3] [i_2])))), (min((((/* implicit */unsigned short) arr_14 [i_0 + 2] [i_3] [i_2] [i_3] [i_0] [i_0] [i_3])), (arr_1 [i_2]))))), (min((min((var_14), (((/* implicit */unsigned short) var_8)))), (((/* implicit */unsigned short) min((arr_13 [i_0] [i_0] [i_2] [i_3] [i_0 + 2]), (((/* implicit */signed char) var_1)))))))));
                            arr_23 [i_0] [i_3] [i_0 - 1] [i_0 + 2] = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) ((_Bool) var_17))), (max((arr_8 [i_3] [i_2] [i_3]), (((/* implicit */unsigned long long int) arr_11 [i_3] [i_1] [i_2] [i_2])))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((var_15), (var_15)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) (+(((((/* implicit */long long int) ((((/* implicit */int) var_17)) & (((/* implicit */int) var_15))))) / (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_6)))))));
}
