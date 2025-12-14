/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24196
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [5LL] [5LL])) ? (arr_2 [i_0] [i_1 + 1]) : (arr_2 [i_0] [i_1 + 1])))) ? (((((/* implicit */_Bool) arr_2 [(unsigned char)7] [i_1 - 1])) ? (var_4) : (((/* implicit */unsigned long long int) arr_4 [i_1 + 1] [5LL] [i_0])))) : (((/* implicit */unsigned long long int) ((arr_4 [i_1 + 1] [6LL] [i_1 + 1]) - (arr_4 [i_1 + 1] [7U] [i_0])))));
                /* LoopSeq 3 */
                for (long long int i_2 = 3; i_2 < 9; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_2 [2U] [i_4])))) ? (max((((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_12 [5LL] [i_1] [5U] [i_3] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_3]))))), (((/* implicit */long long int) (+(arr_11 [i_0] [i_0] [i_0] [i_0])))))) : (((long long int) arr_10 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [i_1]))));
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((unsigned long long int) arr_6 [i_0] [i_1 + 1] [i_0])))));
                                var_17 = ((((/* implicit */_Bool) max((arr_9 [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_1 [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1 - 1] [i_2 - 3]))) : (min((arr_5 [i_1 + 1] [i_2 - 2]), (arr_5 [i_1 + 1] [i_2 - 2]))));
                                arr_15 [i_0] [i_1 - 1] [i_2] [i_1 - 1] [i_4] = ((/* implicit */long long int) var_0);
                            }
                        } 
                    } 
                    var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_12 [i_2] [i_1] [i_0] [i_0] [i_0])) ? (-6954352858151300056LL) : (4899290801776595108LL)))))) ? (arr_1 [3ULL]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_5 [i_1 - 1] [i_1 - 1]))))));
                    var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_0))))) ? (min((arr_9 [i_1] [i_1 + 1]), (arr_9 [i_1 + 1] [i_1 - 1]))) : (((var_4) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [0ULL] [i_1 + 1])))))));
                    var_20 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((arr_4 [i_0] [1LL] [3U]), (((/* implicit */long long int) var_7))))) ? (max((-6954352858151300056LL), (var_6))) : (var_6))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [9LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_11 [i_0] [i_1 + 1] [i_2] [i_2])))) ? (((arr_4 [i_0] [i_1 + 1] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) <= (arr_4 [i_0] [5LL] [i_2])))))))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    var_21 = ((unsigned long long int) arr_11 [i_0] [i_0] [i_1] [i_0]);
                    arr_19 [5U] [5U] [3ULL] [i_5] = ((/* implicit */unsigned long long int) ((unsigned int) 0U));
                }
                for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    var_22 = var_13;
                    var_23 ^= ((/* implicit */long long int) arr_21 [i_0]);
                    var_24 &= ((/* implicit */unsigned int) arr_20 [i_0]);
                }
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    for (long long int i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        {
                            var_25 = arr_26 [i_8];
                            var_26 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (+(arr_4 [i_0] [i_0] [i_0])))) ? (arr_4 [i_1 + 1] [i_1 - 1] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_14))))));
                            var_27 = min((arr_20 [i_0]), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 6954352858151300056LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_8]))) : (arr_2 [i_7] [2ULL]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */long long int) var_0);
}
