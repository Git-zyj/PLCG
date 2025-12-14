/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32089
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
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3370))) : (4294967288U)));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((short) ((unsigned int) min((((/* implicit */signed char) arr_3 [i_0])), (arr_4 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2 + 1] [i_2] [i_3] = max((((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [(signed char)11] [(short)12])) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) arr_1 [i_1])))), (((/* implicit */int) var_6))))), ((((!(((/* implicit */_Bool) 787479857)))) ? (arr_11 [i_0] [i_2 + 2] [i_2 - 1] [i_1] [i_2 - 1] [i_2 + 2]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)37017)) : (((/* implicit */int) var_0))))))));
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                            {
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (-(((((/* implicit */_Bool) -787479855)) ? (min((var_3), (((/* implicit */unsigned long long int) 787479868)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] [i_1]))))))))))));
                                var_22 = ((/* implicit */unsigned int) min(((unsigned short)3370), (((/* implicit */unsigned short) ((((var_17) >> (((787479857) - (787479846))))) != (((/* implicit */int) arr_7 [i_4] [i_3] [i_2] [i_0])))))));
                            }
                            for (unsigned short i_5 = 1; i_5 < 24; i_5 += 4) 
                            {
                                arr_17 [i_0] [i_1] [i_1] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_11)))) ? ((-(((/* implicit */int) arr_16 [(signed char)7] [i_1] [i_1] [i_1] [i_1])))) : (((/* implicit */int) max((((_Bool) 974574875)), (((((/* implicit */_Bool) 4294967288U)) && (((/* implicit */_Bool) -974574875)))))))));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3370)) ? (((/* implicit */int) arr_4 [i_2 + 2])) : (((/* implicit */int) arr_4 [i_2 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)3370)))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) (signed char)96))))) ? (((unsigned long long int) -974574875)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_14) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3370)))))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 |= ((/* implicit */long long int) var_19);
    var_25 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned int) 974574875)), (109912554U)))) ? (1599706263U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (signed char i_6 = 0; i_6 < 14; i_6 += 4) 
    {
        for (unsigned long long int i_7 = 4; i_7 < 12; i_7 += 1) 
        {
            {
                arr_24 [i_7] [i_7 - 1] = ((/* implicit */unsigned char) ((min((arr_9 [i_6] [i_6] [i_7 - 3] [8U]), (arr_9 [i_6] [i_7 - 4] [i_7] [i_6]))) ? (((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_16 [4ULL] [4ULL] [i_7] [i_7 - 3] [i_7 - 3]))))))) : ((~(((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */unsigned int) arr_15 [i_6] [i_6] [i_6] [i_6] [i_6] [i_7 - 4] [i_6])) : (var_10)))))));
                arr_25 [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) var_5)) <= (var_7))) && (((/* implicit */_Bool) ((int) arr_22 [i_6] [i_7 + 2] [i_7 + 1]))))))) / (1377897003U)));
                arr_26 [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) (~(3709542320U)));
            }
        } 
    } 
}
