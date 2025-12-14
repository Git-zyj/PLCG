/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224483
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) >= (((var_0) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_10))))))));
    var_15 = ((/* implicit */signed char) (~(((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    arr_7 [i_1] = ((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_2 [i_0]))))))));
                    var_16 = ((/* implicit */unsigned short) var_10);
                }
                for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    arr_11 [8LL] [i_1] [i_3] = ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)24576))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 1; i_5 < 11; i_5 += 1) 
                        {
                            {
                                var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 281474976710528LL)) ? (((/* implicit */unsigned long long int) 2070879244)) : (8586445982689794831ULL)));
                                arr_17 [i_0] [i_1] [i_1] [i_3] [i_3] [i_5] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) max((((/* implicit */unsigned int) (_Bool)1)), (1047658992U))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_1] [i_5 + 1] [i_5]))) | (((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_3]))) ^ (-281474976710525LL))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24585)))));
                                var_18 = ((/* implicit */_Bool) (unsigned char)1);
                                var_19 = ((/* implicit */unsigned long long int) ((var_9) >= (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_12)))))))));
                                var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (unsigned short)24576)) : (((/* implicit */int) (signed char)-94))));
                            }
                        } 
                    } 
                    var_21 = 1805672755556376609LL;
                    arr_18 [i_3] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) max((arr_9 [i_3] [i_1] [i_1] [i_0]), (arr_9 [i_0] [i_1] [i_0] [i_3]))))));
                    arr_19 [i_1] [i_1] = ((/* implicit */signed char) ((short) (unsigned char)255));
                }
                arr_20 [1] [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((13LL), (((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_1])))))))), (arr_12 [i_0] [i_1] [i_0] [i_1] [i_1])));
                var_22 = ((/* implicit */_Bool) (unsigned char)255);
                /* LoopNest 3 */
                for (long long int i_6 = 2; i_6 < 10; i_6 += 1) 
                {
                    for (int i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_23 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)41)) ? (312987783U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40945)))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_3 [i_0])))) : (((/* implicit */int) ((arr_25 [i_0] [(unsigned short)11] [(unsigned short)11] [i_6] [i_7] [i_7] [(_Bool)1]) >= (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_0] [i_1] [i_8])))))));
                                arr_27 [i_6] [4LL] [i_0] [i_0] [i_0] [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)19))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 &= ((/* implicit */unsigned short) var_11);
    /* LoopNest 2 */
    for (short i_9 = 0; i_9 < 13; i_9 += 1) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 3) 
        {
            {
                var_25 ^= ((/* implicit */signed char) arr_31 [i_9] [i_9] [i_10]);
                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)44)) ? (((/* implicit */int) (unsigned short)24576)) : (((/* implicit */int) (_Bool)0))));
                var_27 = ((/* implicit */long long int) (unsigned short)41225);
            }
        } 
    } 
}
