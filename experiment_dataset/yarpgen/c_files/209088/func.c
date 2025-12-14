/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209088
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
    var_18 ^= ((/* implicit */unsigned char) var_11);
    var_19 = ((/* implicit */short) var_16);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_1 [15U])) ? (max((arr_1 [i_0]), (var_16))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))), (((0U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))));
        arr_2 [i_0] = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_1 [i_0]));
    }
    for (unsigned char i_1 = 3; i_1 < 21; i_1 += 4) 
    {
        var_21 &= ((/* implicit */_Bool) ((((((/* implicit */long long int) var_10)) >= (min((((/* implicit */long long int) var_4)), (arr_3 [i_1] [i_1]))))) ? (max((((/* implicit */long long int) arr_5 [i_1])), (max((arr_3 [(unsigned char)20] [i_1]), (((/* implicit */long long int) arr_4 [i_1 + 2])))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_4 [19])) : (((/* implicit */int) arr_5 [i_1]))))), (min((var_12), (((/* implicit */unsigned int) var_7)))))))));
        var_22 = ((/* implicit */unsigned short) arr_5 [i_1 - 3]);
        arr_6 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_6)), (var_15)));
    }
    var_23 = ((/* implicit */_Bool) min((var_7), (((/* implicit */int) min((var_9), (var_9))))));
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        var_24 = ((/* implicit */unsigned short) max((((/* implicit */int) max((min((((/* implicit */short) arr_7 [i_2] [i_2])), (arr_8 [i_2]))), (((/* implicit */short) ((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_7 [i_2] [i_2])))))))), (((((/* implicit */_Bool) max((arr_8 [i_2]), (((/* implicit */short) var_6))))) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((/* implicit */int) min((arr_8 [i_2]), (((/* implicit */short) arr_7 [i_2] [i_2])))))))));
        arr_9 [i_2] = ((/* implicit */unsigned long long int) max((arr_8 [i_2]), (((/* implicit */short) arr_7 [i_2] [i_2]))));
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            for (unsigned int i_4 = 2; i_4 < 22; i_4 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_5 = 1; i_5 < 22; i_5 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))) != (arr_15 [i_2] [i_2] [i_5 + 3])))) ^ (((/* implicit */int) arr_14 [i_3]))));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [12ULL] [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_3])) & (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) arr_16 [i_5] [i_2] [i_2] [i_2] [i_2])) ? (arr_13 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5 + 3])))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) arr_15 [(unsigned short)24] [i_3] [i_3]))));
                        arr_20 [i_2] [i_2] = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_6]))) : (arr_15 [i_2] [i_4] [i_6]));
                    }
                    arr_21 [2U] |= ((/* implicit */unsigned int) arr_14 [i_4]);
                }
            } 
        } 
    }
}
