/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48044
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_0] [(unsigned char)10] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_0 [(short)11])), (((((/* implicit */_Bool) arr_4 [1U] [(short)2] [i_1 - 1])) ? (arr_4 [i_0] [11] [i_1 + 1]) : (arr_4 [i_2] [14ULL] [i_1 - 1])))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) arr_14 [12] [i_1 - 1] [i_2] [12] [i_0]))));
                            var_16 = ((/* implicit */long long int) max(((!(((/* implicit */_Bool) (unsigned char)86)))), (((arr_10 [i_3] [i_4] [i_3] [i_1 - 1] [i_1 - 1] [i_3]) != (((/* implicit */unsigned long long int) 2416065664U))))));
                        }
                        for (unsigned char i_5 = 1; i_5 < 13; i_5 += 2) 
                        {
                            arr_20 [i_3] [i_1] [i_2] [i_5 + 3] [i_1] = ((/* implicit */unsigned char) 1878901631U);
                            arr_21 [i_2] [(unsigned char)14] [(unsigned char)12] [i_3] [i_5] [i_0] [i_2] |= ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_5] [i_5] [i_5] [i_0]))))), (arr_4 [i_0] [i_5 + 2] [i_1 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0])) ? (arr_11 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
                            arr_22 [i_5 + 2] [i_3] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_9 [i_5] [i_3] [(signed char)12] [i_0])) < (((/* implicit */int) arr_9 [i_1] [i_2] [i_3] [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5 - 1] [i_2] [(signed char)0]))) : (min((((/* implicit */unsigned long long int) arr_18 [i_5] [i_5 + 3] [i_3] [i_1 + 1])), (((arr_16 [i_0] [i_1] [i_5]) & (((/* implicit */unsigned long long int) arr_3 [i_0]))))))));
                        }
                    }
                    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        var_17 |= ((arr_3 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-48))));
                        arr_25 [i_0] [i_1] [i_2] [i_6] |= ((/* implicit */long long int) (~(((-139806292) - (130048)))));
                        arr_26 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_6])))))))) ? (arr_17 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2]) : (((((/* implicit */_Bool) arr_10 [i_2] [i_1 + 1] [i_2] [i_6] [i_6] [i_6])) ? ((-(((/* implicit */int) arr_7 [(unsigned char)0] [i_1] [i_2] [i_6])))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_18 [i_6] [i_2] [i_1] [i_0])) : (((/* implicit */int) (signed char)5))))))));
                        arr_27 [i_0] = ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_2] [i_6]);
                    }
                    arr_28 [(unsigned char)0] [i_1 + 1] [(signed char)14] = ((/* implicit */long long int) var_6);
                }
            } 
        } 
    } 
    var_18 |= var_5;
}
