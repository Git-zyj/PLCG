/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53032
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
    var_10 &= ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_0]))))));
                var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) 13990440371779673514ULL))))), (max((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1] [i_0])), (((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-14))))))))))));
                var_12 = ((/* implicit */unsigned int) ((var_0) + ((((-(0ULL))) - (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 503316480U))))))));
                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0]))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    var_14 = max((max((((/* implicit */unsigned long long int) var_1)), (0ULL))), (((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) (short)0)))))));
                    var_15 = ((/* implicit */int) max((((/* implicit */long long int) (!((!(var_8)))))), (((long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) (short)-2509)))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [(unsigned short)2] [i_1] [i_2] [22LL] [i_2] [i_2] |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_1 [i_0])), (((arr_7 [i_3] [i_2] [i_1] [i_0]) & (arr_7 [i_0] [i_0] [i_0] [i_0])))));
                        arr_11 [i_0] [i_0] [i_2] [i_3] |= ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) ((-6260623640076812288LL) <= (-4441669645607943209LL))))) : (var_6)));
                        var_16 *= ((/* implicit */unsigned int) (-(((max((((/* implicit */long long int) arr_9 [i_0] [i_0] [i_1] [i_1] [i_0])), (-4441669645607943197LL))) << (((((/* implicit */int) ((unsigned short) arr_7 [i_0] [i_1] [i_2] [i_3]))) - (54843)))))));
                    }
                    for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        var_17 = ((/* implicit */short) var_8);
                        var_18 = ((/* implicit */long long int) (((-((+(8312134436642824577LL))))) < (((/* implicit */long long int) (-(((/* implicit */int) arr_8 [(_Bool)1] [i_1] [i_2] [i_4] [i_2] [i_4])))))));
                    }
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_9)) >> (((arr_9 [i_0] [i_1] [i_1] [i_1] [i_0]) - (3112603233U)))))) & (((4441669645607943215LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                }
            }
        } 
    } 
}
