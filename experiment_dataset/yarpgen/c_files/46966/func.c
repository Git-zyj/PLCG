/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46966
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
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) (-(max((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_1])))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) var_12))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) ? (((arr_3 [i_2]) >> (((var_1) - (15038628075725033507ULL))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))));
                                var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_10 [i_0] [i_0]))));
                                var_21 = ((/* implicit */unsigned int) ((var_10) | (var_10)));
                            }
                        } 
                    } 
                    arr_15 [15ULL] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_0] [i_0]))));
                    var_22 = ((/* implicit */short) ((unsigned char) ((arr_12 [i_2] [i_1] [i_1] [i_0]) >> (((((/* implicit */int) var_14)) - (155))))));
                }
                for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        var_23 = ((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_6]))) ^ (arr_13 [i_5] [i_1])))));
                        var_24 = ((/* implicit */unsigned long long int) (+((-(min((arr_0 [i_5] [i_5]), (((/* implicit */unsigned int) (unsigned char)250))))))));
                        arr_21 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1715670867)) ? (((/* implicit */long long int) arr_8 [i_6])) : (((((/* implicit */_Bool) 5188971117464962481LL)) ? (5188971117464962489LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    }
                    for (signed char i_7 = 1; i_7 < 24; i_7 += 4) 
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_7 - 1] [i_7] [i_7 + 1] [i_7 + 1] [i_7]))) + (((min((((/* implicit */unsigned long long int) var_12)), (arr_23 [i_0]))) << (((var_4) + (893934785)))))));
                        var_26 = ((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)37)), (((((/* implicit */int) arr_18 [i_7 - 1] [i_7 - 1] [(_Bool)0] [i_7 - 1])) << (((/* implicit */int) (unsigned char)8))))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        var_27 = var_1;
                        var_28 = ((/* implicit */short) arr_24 [i_0] [i_0] [i_1] [i_1] [i_5] [i_8]);
                        arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_3 [i_5]) / (arr_3 [i_5])))) ? (arr_3 [i_5]) : (min((arr_3 [i_0]), (arr_3 [i_1])))));
                        var_29 = ((/* implicit */_Bool) ((arr_23 [i_0]) / (((/* implicit */unsigned long long int) max((arr_8 [i_0]), (((/* implicit */int) var_14)))))));
                    }
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_8 [i_0])), (6089237777375355803ULL))), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_1] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (1U)));
                    var_31 = ((/* implicit */unsigned char) arr_3 [i_5]);
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (unsigned int i_10 = 1; i_10 < 22; i_10 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */int) arr_13 [i_1] [i_10 + 3]);
                                arr_31 [i_0] = ((/* implicit */unsigned char) arr_12 [i_0] [i_1] [i_5] [i_9]);
                                var_33 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((_Bool) arr_14 [i_0] [i_0] [(unsigned char)23] [i_0] [i_10 + 1]))), (min((15054776764309761690ULL), (((/* implicit */unsigned long long int) arr_13 [i_10 + 1] [i_1]))))));
                            }
                        } 
                    } 
                }
                var_34 = ((/* implicit */long long int) ((((/* implicit */int) var_17)) < (((/* implicit */int) ((unsigned char) arr_16 [i_0])))));
            }
        } 
    } 
    var_35 = ((/* implicit */_Bool) var_14);
}
