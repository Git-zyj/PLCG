/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199119
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
    var_10 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 15ULL)) ? (4816783559255715837LL) : (((/* implicit */long long int) 1569896008U))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            arr_4 [i_0] [i_0] [9] = ((/* implicit */unsigned char) arr_3 [i_0] [i_1] [i_1]);
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1463454236U)) ? (((13306347414613565551ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((13306347414613565558ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-57)))))))));
        }
        var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) var_9))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 3; i_2 < 18; i_2 += 4) 
        {
            var_12 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_8 [i_2 + 1] [i_0] [i_0]))));
            arr_9 [i_2] [i_0] = (+(arr_3 [i_2] [i_2 - 3] [i_2 + 3]));
        }
    }
    /* LoopSeq 2 */
    for (int i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            var_13 = ((/* implicit */long long int) ((int) (-(((/* implicit */int) arr_11 [i_3])))));
            arr_15 [i_4] [(short)6] = ((/* implicit */unsigned char) (((((_Bool)1) ? ((+(arr_13 [16] [i_4] [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) % (((/* implicit */unsigned int) (((((-(((/* implicit */int) var_7)))) + (2147483647))) << (((((/* implicit */int) arr_8 [i_3] [6ULL] [i_4])) - (12))))))));
        }
        arr_16 [i_3] = ((min((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_14 [(unsigned char)14] [i_3]))))), (16218263U))) >= (((/* implicit */unsigned int) var_6)));
        var_14 = max((((((/* implicit */_Bool) ((unsigned int) 1ULL))) ? (max((var_5), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) arr_13 [i_3] [i_3] [i_3])))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(18446744073709551615ULL)))) ? (((/* implicit */int) arr_11 [i_3])) : ((-(((/* implicit */int) var_9))))))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 17; i_5 += 4) 
    {
        arr_19 [i_5] [i_5 + 1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_6)))) ? (var_8) : (((/* implicit */long long int) arr_0 [i_5]))));
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) 1332792230))));
        var_16 = ((/* implicit */signed char) (-(arr_0 [i_5 + 1])));
        arr_20 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_5 + 1])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5 - 1] [i_5 - 1] [i_5 - 1])))));
    }
}
