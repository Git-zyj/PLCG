/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221843
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
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    arr_6 [i_2] = ((/* implicit */short) arr_1 [i_1]);
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_1] [i_2]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [(signed char)2] [(short)24] [i_0] [i_0])) : (((/* implicit */int) var_11))))) ? (arr_3 [i_0] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [(unsigned char)12] [i_0] [i_2] [(signed char)20] [i_4]))))))));
                                arr_14 [(unsigned short)15] [i_1] [i_1] [i_1] [i_1] [i_2] = ((/* implicit */short) arr_13 [i_1] [(unsigned short)9] [i_2] [i_2] [i_1] [i_0]);
                                var_19 = ((/* implicit */unsigned int) var_9);
                                var_20 *= ((/* implicit */short) var_8);
                            }
                        } 
                    } 
                }
                for (int i_5 = 2; i_5 < 23; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_6 = 2; i_6 < 24; i_6 += 2) 
                    {
                        for (short i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) max((arr_19 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_15)), (arr_11 [13] [i_0] [i_0] [i_5] [i_6 - 2] [i_0] [i_7])))) ? (((/* implicit */int) var_10)) : (max((((/* implicit */int) var_2)), (var_9))))))));
                                arr_22 [i_6] [i_6] [(_Bool)1] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_13 [(unsigned char)18] [i_5 - 2] [i_5] [(unsigned char)18] [i_5 - 1] [i_5 - 2])) ? (arr_11 [i_5] [i_5 - 2] [(_Bool)1] [i_5] [i_5 - 1] [i_5] [i_5 + 2]) : (arr_11 [i_5] [i_5 - 2] [(signed char)10] [i_5] [i_5 - 1] [i_5] [i_5 + 2]))), (((/* implicit */unsigned long long int) var_5))));
                                var_22 += ((/* implicit */_Bool) arr_17 [i_6 - 1] [i_6 - 1] [i_5 - 2] [i_6 + 1]);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) arr_21 [i_0] [i_0] [(short)6] [i_1] [i_0] [i_5] [i_5]);
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    arr_26 [i_8] = ((/* implicit */short) var_11);
                    arr_27 [i_0] = arr_0 [21LL] [(signed char)23];
                }
                arr_28 [i_0] &= ((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) arr_12 [i_1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 2; i_9 < 17; i_9 += 2) 
    {
        for (short i_10 = 3; i_10 < 18; i_10 += 2) 
        {
            {
                var_24 = ((/* implicit */long long int) max((min((13325940342631393173ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) min((arr_20 [i_9 - 2] [(short)20] [i_9 + 2] [i_9] [i_10 + 1] [i_10 - 2] [i_10]), (arr_20 [i_9 + 1] [i_9 + 1] [i_9 - 2] [(signed char)12] [i_10 + 1] [i_10 - 1] [i_10 - 3]))))));
                arr_34 [i_9 + 1] [i_10] = ((/* implicit */signed char) var_5);
            }
        } 
    } 
}
