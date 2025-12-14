/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54333
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_20 = ((/* implicit */int) (!(((18446744073709551615ULL) != (((/* implicit */unsigned long long int) 1965148876U))))));
        var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) (signed char)11))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_1] [i_1])) ^ (((/* implicit */int) ((((/* implicit */int) (signed char)7)) > (((/* implicit */int) (signed char)20)))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_0 [(short)3] [i_1]);
        var_23 = max((max((min((((/* implicit */unsigned long long int) (signed char)-10)), (arr_5 [i_1] [i_1]))), (((/* implicit */unsigned long long int) arr_4 [i_1])))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (signed char)28)) >= (((/* implicit */int) (_Bool)1)))))))));
        var_24 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)50526)) / (((/* implicit */int) var_6))))) && (((((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])) >= (arr_5 [i_1] [i_1])))));
    }
    var_25 -= ((/* implicit */short) (!(((/* implicit */_Bool) var_11))));
}
