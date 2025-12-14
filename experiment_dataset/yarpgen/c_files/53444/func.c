/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53444
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
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) min((((var_1) / (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) | (((/* implicit */int) var_7)))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) var_11);
    }
    var_12 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) ((var_4) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) var_7)) ? (1434738646623476525ULL) : (((/* implicit */unsigned long long int) -1)))) : (((/* implicit */unsigned long long int) var_9))))));
}
