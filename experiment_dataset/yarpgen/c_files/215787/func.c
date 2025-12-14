/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215787
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
    var_12 = (~(var_11));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_6 [i_0] = (((!(((/* implicit */_Bool) min((-1940909385397792819LL), (((/* implicit */long long int) 2871030390U))))))) ? (((((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0]))))) | (4294967295U))) : (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)-24)), ((-(((/* implicit */int) (unsigned char)31))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 22; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) min((var_13), (max(((~(2251782633816064LL))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)220))))) : (((((/* implicit */_Bool) var_9)) ? (-2251782633816074LL) : (576320014815068160LL)))))))));
                            var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) (unsigned char)55)))), (((/* implicit */int) ((signed char) max((arr_5 [i_1] [i_1] [i_3]), (((/* implicit */long long int) (unsigned char)35)))))))))));
                            arr_12 [i_0] [i_1] [i_1] [i_0] [i_1] = (((!(((/* implicit */_Bool) arr_3 [i_0])))) ? (((((((/* implicit */long long int) ((/* implicit */int) (signed char)-49))) ^ (var_11))) >> (((((/* implicit */int) arr_9 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1])) - (73))))) : (var_6));
                            arr_13 [i_3] [i_3] [(unsigned short)6] [i_3] [i_0] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_1 [i_2 + 1]) / (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((9151314442816847872LL) & (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4] [i_1] [i_0])))))) ? (arr_4 [i_0] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_0])), ((unsigned char)36)))))))) ? (min((((((/* implicit */_Bool) var_9)) ? (arr_7 [i_0] [i_0] [i_4]) : (var_7))), (max((((/* implicit */long long int) var_4)), (-2251782633816074LL))))) : (((/* implicit */long long int) arr_16 [i_0] [22U] [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        for (signed char i_6 = 4; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) max(((+(max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 491520U)))))), (arr_4 [i_6] [i_6]))))));
                                arr_21 [i_0] [i_1] [i_1] [i_5] [i_1] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_19 [i_6 + 2] [i_0] [i_6] [i_6] [i_6 - 1]), (arr_19 [i_6 - 2] [i_0] [i_0] [i_6] [i_6 + 1])))) ? ((~(536862720U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_6 - 4] [i_6 - 4] [i_6] [i_6 - 4] [i_6 - 3] [i_6 + 2])))));
                                var_17 &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_19 [i_0] [i_6] [i_6 + 3] [i_5] [i_6])) ? (arr_19 [i_0] [i_1] [i_6 + 3] [i_5] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_6 - 4] [i_5] [i_6] [i_0]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_6 + 3] [i_1] [3U] [i_1])))))));
                                var_18 = ((/* implicit */signed char) (~((+((+(((/* implicit */int) (unsigned char)27))))))));
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_1] [i_4] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_5 [i_0] [i_1] [i_4]), (arr_5 [i_0] [i_1] [i_4])))) ? (((/* implicit */int) arr_9 [15U] [i_1] [i_4] [i_1] [i_4])) : (((/* implicit */int) ((((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)212))) : (805306368U))) < (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_17 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)124))))))))));
                }
            }
        } 
    } 
}
