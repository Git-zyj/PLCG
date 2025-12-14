/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231296
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 4; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_2] = ((/* implicit */unsigned char) min((min((arr_3 [i_0] [i_2 - 2] [i_2 - 3]), (arr_3 [i_0] [i_2 - 4] [i_2 - 3]))), (((short) arr_3 [i_0] [i_2 + 1] [i_2 + 1]))));
                    arr_9 [i_0] [i_0] = ((/* implicit */short) min((max((18446744073709551615ULL), (min((arr_5 [i_2 - 3]), (((/* implicit */unsigned long long int) arr_7 [i_0])))))), (((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((((/* implicit */_Bool) 5099950176314403200ULL)) ? (2095386062271322849ULL) : (((/* implicit */unsigned long long int) -7260197704439790028LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)32767), (((/* implicit */short) (unsigned char)0))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        arr_12 [i_3] [6U] = (~(max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_10 [i_3] [5U]))), (((/* implicit */unsigned long long int) (unsigned char)255)))));
        var_10 = ((/* implicit */unsigned int) var_2);
        var_11 = ((/* implicit */unsigned long long int) ((long long int) ((((((/* implicit */_Bool) 144115188075855872ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) - (arr_2 [i_3]))));
        arr_13 [i_3] [1U] = ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) arr_6 [i_3] [i_3] [i_3] [i_3]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) + (var_1)))) : (((unsigned long long int) arr_3 [i_3] [i_3] [i_3])));
    }
}
