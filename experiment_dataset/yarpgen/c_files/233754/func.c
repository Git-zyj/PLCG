/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233754
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
    var_17 = ((/* implicit */signed char) max((var_17), (var_3)));
    var_18 ^= ((/* implicit */unsigned char) ((max((((7412065424834893617ULL) << (((var_7) - (1504009478736281842ULL))))), (((/* implicit */unsigned long long int) var_2)))) <= (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */signed char) (_Bool)1);
                    var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_10))))))))) & ((~(((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (1961233461U)))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3]))) + (arr_18 [i_3] [i_6])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_6]))) : (arr_13 [i_7] [(unsigned char)3] [10U])))));
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (11965728919210965860ULL) : (((/* implicit */unsigned long long int) arr_17 [i_7] [i_6] [i_4] [i_3]))))) ? (((arr_18 [i_3] [i_3]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4] [i_4] [i_3]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)1339)))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [1ULL]))) - (var_5)))) ? (((((/* implicit */_Bool) arr_18 [(unsigned char)11] [i_7])) ? (0LL) : (((/* implicit */long long int) arr_0 [(unsigned short)18])))) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [(short)11] [i_4] [i_4])))))));
                                var_23 = ((/* implicit */long long int) (+((+(((/* implicit */int) ((short) (_Bool)0)))))));
                                arr_23 [i_4] [i_6] [(_Bool)1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_14)) ? (((11965728919210965860ULL) << (((/* implicit */int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_9 [i_6])) : (((/* implicit */int) (_Bool)1))))))) / (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4]))) : (arr_21 [i_7]))))))));
                                var_24 = ((/* implicit */unsigned long long int) 0U);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned short) ((_Bool) min((((((arr_16 [(unsigned short)14] [i_4] [i_4] [i_4]) + (2147483647))) >> (((((/* implicit */int) var_0)) + (144))))), (((/* implicit */int) max((((/* implicit */short) arr_15 [i_3] [4U] [i_5])), ((short)12418)))))));
                    /* LoopNest 2 */
                    for (short i_8 = 2; i_8 < 14; i_8 += 2) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) (+(max((arr_3 [i_8 + 2]), (((/* implicit */unsigned int) arr_28 [i_3] [i_3] [i_5] [i_3] [i_8 + 1] [i_8] [i_3]))))));
                                var_27 -= ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_9]))) : ((-(8367939819181647592LL))));
                                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((856015341U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 750990171)) ? (((/* implicit */unsigned long long int) var_5)) : (6481015154498585756ULL))) != (max((((/* implicit */unsigned long long int) (unsigned char)233)), (1ULL))))))) : (((((/* implicit */_Bool) ((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [1U] [i_5] [i_8] [(_Bool)1])))))) ? (1961233461U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
