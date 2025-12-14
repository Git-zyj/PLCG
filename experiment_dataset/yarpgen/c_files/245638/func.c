/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245638
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((unsigned char) var_12)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) arr_7 [i_0] [i_1] [8U]);
                    arr_8 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((0U), (0U)))) ? ((-(0U))) : (((((/* implicit */_Bool) arr_1 [i_1] [i_1 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 1]))) : (4294967273U)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_6 [i_1] [i_1 - 4] [i_1]))) ? (((/* implicit */int) ((unsigned char) arr_0 [i_1 - 2]))) : (((/* implicit */int) ((short) arr_13 [i_0] [(signed char)6] [i_2] [i_3] [i_4])))));
                                arr_15 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((unsigned long long int) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [4ULL] [i_1]))) : (min((((/* implicit */unsigned long long int) ((4294967295U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_1])))))), (3946949955591374485ULL)))));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_10 [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 4] [i_1 - 4]) / (arr_10 [i_1 - 1] [i_1] [4] [i_1 - 1] [i_1 - 4] [4])))) ? ((+(arr_10 [i_0] [i_1] [i_2] [i_1] [i_4] [(unsigned short)3]))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [6U] [i_3] [i_4])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        for (short i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */int) ((long long int) ((((/* implicit */long long int) arr_24 [i_7] [(unsigned short)5] [i_7])) / (arr_22 [i_6] [i_7]))));
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((unsigned short) max((((((/* implicit */_Bool) arr_2 [i_8] [i_6] [i_6])) ? (19U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_9]))))), (((/* implicit */unsigned int) arr_13 [i_5] [i_5] [i_5] [i_5] [i_5]))))))));
                                arr_26 [i_8] [i_8] [i_7] [i_5] [i_5] = ((/* implicit */unsigned short) min((4294967295U), (((/* implicit */unsigned int) 2042608249))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 1; i_10 < 7; i_10 += 3) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3946949955591374472ULL)) ? (1158153873) : (-1)))) ? (((((/* implicit */_Bool) -1846294956)) ? (0U) : (((/* implicit */unsigned int) 1994570875)))) : (((((/* implicit */_Bool) arr_3 [(short)3] [(short)3] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_5] [(unsigned short)9] [(unsigned short)9]))) : (arr_24 [i_7] [i_6] [i_7])))))), (-6960266974298643341LL)));
                                arr_31 [i_7] [i_6] = ((/* implicit */short) (+(((/* implicit */int) arr_5 [i_7] [i_6] [(_Bool)1] [(unsigned char)0]))));
                                var_21 = ((/* implicit */unsigned short) arr_30 [i_5] [i_5] [i_5]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (signed char i_13 = 0; i_13 < 10; i_13 += 4) 
                        {
                            {
                                arr_36 [1] [i_6] [i_7] [i_7] [(unsigned char)3] = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_10 [i_5] [(signed char)0] [i_7] [(unsigned short)8] [i_13] [(signed char)6])), (((((/* implicit */_Bool) arr_10 [1U] [i_7] [i_7] [i_6] [i_5] [i_5])) ? (8ULL) : (((/* implicit */unsigned long long int) arr_10 [i_5] [i_6] [i_7] [i_6] [i_13] [i_6]))))));
                                var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)13217)), (((long long int) arr_4 [i_13] [i_5]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
