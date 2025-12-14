/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202831
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
    var_16 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((var_6), (var_6))))) & (var_15)))), (((((/* implicit */unsigned long long int) var_0)) ^ (max((((/* implicit */unsigned long long int) var_6)), (var_1)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 10; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [(short)7] [i_0] [i_2 - 2] [i_3] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((((/* implicit */_Bool) (unsigned char)77)) && (((((/* implicit */_Bool) (unsigned char)193)) && (((/* implicit */_Bool) var_10))))))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [12] [i_4] = max((max((((((/* implicit */_Bool) var_11)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))), (((/* implicit */unsigned long long int) max((arr_5 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */long long int) arr_4 [i_0] [i_3]))))))), (((/* implicit */unsigned long long int) var_10)));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    arr_18 [i_5] [i_1] [i_5] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_5])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_16 [i_5] [i_5])))));
                    arr_19 [i_0] [i_5] [i_5] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_3 [i_5] [i_1])))) ? (arr_3 [i_1] [i_0]) : (arr_3 [i_0] [i_5])));
                }
                for (int i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_7 = 3; i_7 < 12; i_7 += 1) 
                    {
                        arr_24 [(unsigned char)10] [(unsigned char)10] [(unsigned char)10] [i_7 - 2] [i_7] [(short)0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)193))))) || (((/* implicit */_Bool) arr_15 [i_7] [i_1] [i_7] [i_7]))));
                        arr_25 [6ULL] [6ULL] [6ULL] [i_7 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_7 - 2] [i_6] [i_0] [i_0] [i_0]))) >= (var_15))) ? (arr_8 [i_0] [i_0] [i_6] [i_7 + 1]) : (((/* implicit */int) arr_11 [i_7 - 2]))));
                    }
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_6] [i_0] [i_0] [i_0])) : (arr_20 [i_0])));
                }
                arr_26 [i_1] = ((/* implicit */unsigned int) (short)13587);
            }
        } 
    } 
}
