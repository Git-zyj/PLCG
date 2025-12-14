/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224713
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) < (0U))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (max((18446744073709551601ULL), (((/* implicit */unsigned long long int) (short)32758))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-10333))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (max((((/* implicit */unsigned long long int) 1913949913U)), (7646229325872017044ULL))))));
        arr_3 [i_0] [13] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) (short)-30570)), (((30ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 4) 
    {
        arr_6 [i_1 - 1] [i_1 - 2] = ((/* implicit */short) arr_5 [i_1]);
        arr_7 [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_1 + 2])) ? (((/* implicit */unsigned long long int) -2147483643)) : (arr_4 [i_1 - 1] [i_1 - 1]))) * (arr_5 [i_1 + 2])));
    }
    var_11 = ((/* implicit */unsigned int) ((((max((12617075682169126793ULL), (((/* implicit */unsigned long long int) var_9)))) / (((/* implicit */unsigned long long int) var_4)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
}
