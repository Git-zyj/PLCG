/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208575
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_16 [i_4] [i_3] [i_1] [i_1] [i_1] [i_0] [i_0] = (i_1 % 2 == zero) ? (((/* implicit */unsigned short) ((((((/* implicit */int) ((unsigned short) var_9))) << (((((arr_11 [i_4] [i_1] [i_1] [i_1]) >> (((((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_0])) - (830))))) - (2698551912489894ULL))))) / (((/* implicit */int) max((var_7), (var_5))))))) : (((/* implicit */unsigned short) ((((((/* implicit */int) ((unsigned short) var_9))) << (((((((arr_11 [i_4] [i_1] [i_1] [i_1]) >> (((((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_0])) - (830))))) - (2698551912489894ULL))) - (18445661510528241513ULL))))) / (((/* implicit */int) max((var_7), (var_5)))))));
                                var_12 = ((/* implicit */short) arr_8 [i_0] [i_1] [i_2] [i_3]);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        arr_20 [i_5] [i_1] [i_2] [i_5] [i_1] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0 - 1] [i_2 + 1] [i_5] [i_5]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 2) 
                        {
                            arr_25 [i_6] [i_6] [i_2] [i_5] [i_6] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (arr_13 [i_0 - 1] [i_0 - 1] [i_2]) : (arr_13 [i_0 - 1] [i_1] [5ULL])));
                            var_13 *= ((/* implicit */unsigned int) arr_0 [i_0 + 1]);
                            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((arr_6 [i_0 + 1]) / (((/* implicit */int) arr_23 [i_6 + 2] [i_2 - 1] [i_0 + 1] [i_0 - 1])))))));
                        }
                    }
                    for (int i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        arr_28 [i_1] [i_1] [i_2] [(unsigned short)21] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) && (((/* implicit */_Bool) var_6)))))) != (((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [i_0])))))));
                        arr_29 [i_1] [i_2] [i_0] [i_1] = ((/* implicit */int) var_5);
                        arr_30 [18LL] &= ((/* implicit */unsigned int) arr_17 [(unsigned char)16] [i_1] [(unsigned char)16]);
                        var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(arr_22 [i_0 + 1] [i_0 + 1])))) / (((max((var_6), (((/* implicit */unsigned long long int) var_10)))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)29235)) * (((/* implicit */int) (unsigned char)127)))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 4; i_8 < 21; i_8 += 4) 
                    {
                        var_16 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_15 [i_0] [i_0 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_8 - 1] [i_1] [i_1] [i_0 + 1])) + (arr_34 [i_8 - 4] [i_1] [i_8] [i_8])));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        for (unsigned long long int i_10 = 1; i_10 < 20; i_10 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) (+(((/* implicit */int) arr_31 [i_10] [i_9] [i_2] [i_0] [i_0]))));
                                arr_41 [i_1] [i_1] [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */int) max((var_8), (((/* implicit */unsigned short) arr_12 [i_0] [i_1] [i_2] [i_9] [i_10] [i_0]))))) >> (((((/* implicit */int) arr_23 [i_9] [i_2] [i_2 - 3] [i_1])) - (31120)))))) : ((-(((((/* implicit */_Bool) arr_2 [i_9])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_0]))))))));
                                var_19 &= ((/* implicit */_Bool) ((arr_33 [i_0] [i_1] [i_2 - 1] [i_9]) + (((((/* implicit */_Bool) arr_39 [i_0 + 1] [i_1] [i_2] [(unsigned short)10] [i_10 - 1])) ? (arr_33 [i_0] [i_1] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)50818))));
    var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) ? (((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (var_6))))) >= (((/* implicit */unsigned long long int) var_0))));
}
