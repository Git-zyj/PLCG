/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245994
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
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) min((max((((/* implicit */unsigned int) var_5)), (var_0))), (((/* implicit */unsigned int) var_5))))) : (min((var_10), (var_10))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 += ((/* implicit */_Bool) arr_3 [i_4]);
                                var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) 10130551751254581239ULL)) ? (8316192322454970376ULL) : (10130551751254581255ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)18))) : (((arr_4 [(unsigned char)3] [(unsigned char)4] [(unsigned char)3]) ? (10130551751254581240ULL) : (((/* implicit */unsigned long long int) 2261359582U))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((var_2) / (var_10)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_7 [i_0] [i_2] [(short)2] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_2])) ? (((/* implicit */int) (signed char)-88)) : (((/* implicit */int) (unsigned char)242))))))), (max((((/* implicit */unsigned long long int) 2261359582U)), (min((((/* implicit */unsigned long long int) (_Bool)1)), (10130551751254581255ULL)))))));
                    var_17 += ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)69)), (8316192322454970372ULL)));
                }
                for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    var_18 = ((/* implicit */unsigned short) arr_12 [5LL] [i_1] [i_0]);
                    var_19 = ((/* implicit */_Bool) var_7);
                }
                /* LoopNest 3 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 2; i_7 < 8; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3304741599U)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (8316192322454970381ULL)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_10 [i_8] [i_7] [(_Bool)1] [i_1] [i_0])) : (((/* implicit */int) arr_10 [i_0] [2] [i_6] [(_Bool)1] [i_8])))) : (((arr_13 [(unsigned short)7] [(unsigned short)7] [i_7]) ? (arr_14 [i_8] [i_6] [i_1] [7LL]) : (((/* implicit */int) var_11)))))), (((/* implicit */int) arr_0 [i_0]))));
                                var_21 = ((/* implicit */unsigned int) var_7);
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) arr_5 [i_0 - 1] [i_0 + 1] [i_0 - 1]))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    for (long long int i_10 = 4; i_10 < 9; i_10 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) 2033607694U)), (10130551751254581255ULL))), (6564298794355645083ULL)));
                            var_24 = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_8 [i_9] [i_1] [(_Bool)1] [i_1] [i_1])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_9] [i_0 - 1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_19 [5] [i_9] [i_0 - 1] [i_10] [i_10 - 1]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [(unsigned char)8] [(unsigned char)8] [i_9])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_5), (var_5))))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_9] [i_0])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 &= ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (short i_11 = 2; i_11 < 22; i_11 += 2) 
    {
        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
        {
            {
                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_11] [i_11] [i_11])) ? (var_10) : (var_10)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_11] [2])) ? (((/* implicit */int) max((((/* implicit */signed char) var_4)), (var_9)))) : (((/* implicit */int) var_9))))) : (((((((/* implicit */_Bool) arr_30 [i_11 - 1] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_26 [22LL]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_12] [i_12 + 1] [i_12])))))));
                var_27 += ((((((/* implicit */_Bool) arr_27 [i_12 + 1] [i_12 + 1] [i_11 + 1])) || (((/* implicit */_Bool) arr_27 [i_12 + 1] [i_12 + 1] [i_11 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_9)), (arr_27 [i_12 + 1] [i_12 + 1] [i_11 + 1]))))) : (((((/* implicit */_Bool) 10130551751254581235ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46267))) : (10130551751254581238ULL))));
            }
        } 
    } 
}
