/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4123
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
    var_14 = ((/* implicit */_Bool) var_11);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_15 = ((max((((/* implicit */int) (short)-14095)), (((((/* implicit */int) arr_4 [i_2])) ^ (((/* implicit */int) (short)-8905)))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))));
                    var_16 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_5 [i_1] [i_1 - 1] [i_1 - 1]) ? (((/* implicit */int) var_13)) : (arr_7 [i_1] [i_1 - 1] [i_1 + 1]))))));
                    var_17 = ((/* implicit */unsigned char) (short)-8905);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        arr_10 [(unsigned char)3] [(unsigned short)2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_0] [i_3]) ? (min((arr_7 [i_1 + 1] [i_1 + 1] [i_3]), (((/* implicit */int) (signed char)32)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) == (arr_0 [i_0]))))))) + (max((arr_6 [i_1 + 1] [i_1] [i_1]), (arr_6 [i_1 + 1] [i_0] [i_0])))));
                        var_18 = ((/* implicit */unsigned char) ((arr_6 [i_0] [i_2] [i_0]) + (((/* implicit */unsigned long long int) arr_0 [i_0]))));
                    }
                    for (short i_4 = 4; i_4 < 8; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (short)0))))), (((((/* implicit */_Bool) -26435196)) ? (arr_7 [i_1 + 1] [i_4 - 1] [i_4 - 2]) : (arr_7 [i_1 + 1] [i_4 - 3] [i_4 - 3])))));
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0])) || (((/* implicit */_Bool) arr_11 [i_2] [i_1] [i_2])))))));
                    }
                    var_21 = ((/* implicit */unsigned int) arr_8 [i_2] [1LL] [i_1] [i_0]);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_16 [i_5] = (unsigned char)206;
        var_22 = var_5;
        var_23 += ((/* implicit */short) arr_13 [i_5]);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (short)0))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 17; i_9 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((max((arr_19 [(unsigned short)12] [i_7] [i_6] [i_5]), (((/* implicit */unsigned long long int) arr_18 [i_7] [i_8])))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_9])) ? (((/* implicit */int) arr_23 [i_7])) : (((/* implicit */int) var_11))))))))));
                                arr_26 [i_5] [i_5] = ((/* implicit */long long int) arr_22 [i_9] [i_6] [i_9] [i_8]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_27 [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_0))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_10 = 0; i_10 < 16; i_10 += 2) 
    {
        var_26 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_18 [i_10] [i_10]), (((/* implicit */unsigned short) arr_22 [i_10] [i_10] [i_10] [i_10]))))) && (((/* implicit */_Bool) max((min((arr_20 [i_10] [i_10] [i_10]), (((/* implicit */long long int) arr_13 [i_10])))), (((/* implicit */long long int) arr_13 [i_10])))))));
        arr_30 [i_10] = ((/* implicit */unsigned int) arr_14 [i_10]);
        arr_31 [i_10] = ((/* implicit */short) (signed char)1);
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 16; i_11 += 1) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    arr_37 [i_10] [i_10] [i_10] = ((/* implicit */_Bool) arr_28 [i_11]);
                    arr_38 [i_11] = ((/* implicit */_Bool) (((-(arr_21 [i_10] [i_12] [i_11] [i_10]))) - (((arr_21 [i_12] [i_11] [i_11] [i_10]) + (arr_21 [i_10] [i_10] [i_11] [i_12])))));
                }
            } 
        } 
        arr_39 [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)135)), (((((/* implicit */int) arr_22 [i_10] [i_10] [i_10] [i_10])) & (((/* implicit */int) arr_23 [i_10]))))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_17 [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_10]))) : (var_5))))) : (((/* implicit */int) arr_29 [i_10]))));
    }
}
