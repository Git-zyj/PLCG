/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222318
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    for (unsigned short i_4 = 1; i_4 < 10; i_4 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)104))) - (797991584465034615ULL)));
                            arr_15 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((arr_8 [i_2]) != (((((/* implicit */_Bool) arr_7 [i_4] [i_3] [i_2])) ? (((/* implicit */int) arr_10 [i_4] [i_2] [i_2] [i_2] [i_0])) : (((/* implicit */int) arr_5 [i_1] [i_0]))))));
                            var_14 ^= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2])) && (((/* implicit */_Bool) arr_5 [i_0] [i_3])))))) / (((((/* implicit */_Bool) var_4)) ? (arr_14 [i_4] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_3])))))));
                        }
                    } 
                } 
            } 
            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 - 1] [(unsigned char)12])) ? ((-(arr_1 [i_0]))) : (((/* implicit */unsigned long long int) (-(var_3))))));
        }
        arr_16 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) - (((((/* implicit */_Bool) var_0)) ? (arr_14 [i_0] [i_0 - 1]) : (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0]))))));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((/* implicit */int) arr_13 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [(short)2]))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_6 [i_0] [(unsigned short)8])) : (((/* implicit */int) arr_3 [i_0 + 1] [5U])))) : (((((/* implicit */int) arr_6 [i_0] [(_Bool)1])) / (arr_2 [i_0] [(short)11])))));
        /* LoopSeq 1 */
        for (unsigned char i_5 = 1; i_5 < 12; i_5 += 3) 
        {
            arr_20 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [9U] [i_5 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_7 [i_5] [i_5 - 1] [i_0 - 1])) : (((/* implicit */int) arr_7 [i_5 - 1] [i_5 - 1] [i_0 - 1]))));
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_5 - 1] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_5 + 1] [i_5]))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */long long int) var_8)) : (arr_14 [i_0] [i_5 - 1])))));
        }
    }
    for (unsigned int i_6 = 1; i_6 < 20; i_6 += 2) 
    {
        arr_25 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_6])) ? (((((/* implicit */_Bool) arr_23 [i_6])) ? (((arr_22 [i_6]) * (arr_22 [i_6 + 2]))) : (((((/* implicit */_Bool) arr_22 [(signed char)15])) ? (((/* implicit */unsigned long long int) var_9)) : (var_6))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_6 - 1])) ? (((/* implicit */int) arr_24 [i_6])) : (((/* implicit */int) arr_24 [i_6]))))) ? (((((/* implicit */_Bool) arr_21 [i_6])) ? (((/* implicit */unsigned long long int) arr_23 [i_6 + 2])) : (arr_22 [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_6 + 2])))))));
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((797991584465034615ULL) | (17648752489244516984ULL)))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_24 [17U])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_21 [i_6])))))) : ((~(((arr_22 [i_6]) | (((/* implicit */unsigned long long int) arr_21 [i_6 - 1]))))))));
    }
    var_19 = ((/* implicit */_Bool) var_4);
    var_20 = ((/* implicit */unsigned long long int) (~(0U)));
}
