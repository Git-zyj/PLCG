/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33982
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
    var_15 = ((/* implicit */unsigned short) var_10);
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) ((signed char) arr_2 [i_0 + 1]))), (((((/* implicit */int) (signed char)124)) - (-1109472710)))))) - (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) - (2218268707U)))), ((-(2786142657079913476ULL)))))));
        var_17 = ((int) (_Bool)1);
        /* LoopSeq 1 */
        for (signed char i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            arr_5 [i_0] [i_0 + 1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 1881938725)) ? ((~(var_12))) : (((/* implicit */long long int) arr_3 [i_0 + 1] [i_0 + 1])))) / (((/* implicit */long long int) arr_3 [i_1] [i_1 - 3]))));
            arr_6 [i_0] [i_0] [i_1 - 3] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((unsigned int) (short)-17438))) ? (((2786142657079913452ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17443))))) : (((/* implicit */unsigned long long int) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)-17438)))))))));
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-17438)) | (((/* implicit */int) (unsigned short)11832))));
        }
    }
    for (short i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) ((((var_11) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-126))))) ^ (((/* implicit */long long int) ((unsigned int) (_Bool)1)))));
        arr_9 [i_2] = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)24)), (max(((~(((/* implicit */int) var_13)))), (-28676754)))));
        var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_1 [i_2]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1936180150382542888LL))))) : (((/* implicit */int) ((unsigned char) var_14)))));
    }
}
