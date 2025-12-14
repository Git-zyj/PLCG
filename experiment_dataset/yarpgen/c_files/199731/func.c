/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199731
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [4] = ((/* implicit */_Bool) var_10);
        var_20 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 - 1])) | (((/* implicit */int) arr_1 [i_0 - 1]))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (-(arr_0 [i_0 - 1])));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [1U])))))) | ((~(var_0)))));
        arr_8 [i_1] &= ((((/* implicit */_Bool) -2147483633)) ? (((((/* implicit */unsigned long long int) arr_6 [i_1])) + (0ULL))) : (((/* implicit */unsigned long long int) -1283717922)));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 11; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_14 [i_1] [(signed char)7])) - ((-2147483647 - 1))));
                        arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_12 [i_1] [i_2 - 1]))));
                        arr_18 [i_4] [i_3] [i_2] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_2 - 1] [i_2 + 1]))));
                    }
                    var_22 ^= ((/* implicit */signed char) (~(((/* implicit */int) arr_11 [i_1] [i_1]))));
                }
            } 
        } 
        arr_19 [i_1] = ((/* implicit */short) -1283717922);
    }
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_7 = 1; i_7 < 14; i_7 += 4) 
                {
                    arr_27 [i_5] [(signed char)4] [i_5] = ((/* implicit */signed char) (-(min((var_0), (((/* implicit */unsigned long long int) (signed char)-109))))));
                    arr_28 [i_5] [i_6] [i_5] = ((/* implicit */long long int) max(((-(max((((/* implicit */int) (_Bool)0)), (1174236408))))), (((/* implicit */int) (short)23899))));
                    arr_29 [i_5] [i_6] = ((/* implicit */int) arr_24 [i_5] [i_6] [12LL]);
                }
                for (signed char i_8 = 2; i_8 < 11; i_8 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_9 = 1; i_9 < 11; i_9 += 3) 
                    {
                        var_23 = (+(-1283717922));
                        var_24 = ((/* implicit */unsigned int) min((((var_5) / (arr_26 [i_5]))), (max((((((/* implicit */int) var_17)) % (((/* implicit */int) var_11)))), (((/* implicit */int) ((var_3) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-95))))))))));
                        arr_34 [i_5] [i_6] [i_8 - 1] [i_5] = ((/* implicit */int) (unsigned short)65515);
                        arr_35 [i_5] [i_8] [i_5] = ((/* implicit */long long int) ((unsigned int) -2147483613));
                    }
                    var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */int) max((((/* implicit */unsigned short) (short)23896)), (var_19)))), (((((/* implicit */int) arr_30 [i_5])) * (((/* implicit */int) arr_22 [i_5] [i_6] [i_8 + 2])))))))));
                }
                arr_36 [i_5] [5] [i_5] = ((/* implicit */unsigned int) ((int) arr_24 [i_5] [i_5] [(unsigned short)13]));
                /* LoopNest 3 */
                for (long long int i_10 = 1; i_10 < 13; i_10 += 3) 
                {
                    for (short i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        for (int i_12 = 0; i_12 < 15; i_12 += 1) 
                        {
                            {
                                arr_46 [i_5] [12U] [i_5] [i_11] [13] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) arr_32 [i_5] [i_6] [i_10] [i_11] [i_12] [i_12]))) % (((((/* implicit */_Bool) arr_33 [i_11] [i_6] [i_10 + 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_5] [i_5] [i_10])) * (((/* implicit */int) var_11))))) : (6ULL)))));
                                arr_47 [i_5] [i_5] [i_10 + 2] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_25 [i_5] [i_6] [i_10 + 2] [i_11])) ? (((/* implicit */int) ((arr_24 [i_5] [i_6] [i_10 + 2]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) : (((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */int) (unsigned short)29351)) : (((/* implicit */int) arr_39 [i_6] [i_10] [4LL] [i_12]))))))));
                            }
                        } 
                    } 
                } 
                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) 2147483634)) : (2591904157U)));
            }
        } 
    } 
    var_27 = ((/* implicit */int) min((((unsigned int) (-(var_8)))), (((/* implicit */unsigned int) ((min((var_16), (((/* implicit */int) (signed char)-110)))) | ((~(((/* implicit */int) var_15)))))))));
}
