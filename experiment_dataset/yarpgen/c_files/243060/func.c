/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243060
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
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) max((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((816376336153453821LL), (((/* implicit */long long int) var_7))))))))));
        var_15 = max((((((long long int) (signed char)-120)) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_0)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) ((unsigned short) var_0))) : ((-(((/* implicit */int) var_3))))))));
        var_16 = ((/* implicit */unsigned int) min(((+(1152921504606842880ULL))), (((/* implicit */unsigned long long int) var_0))));
    }
    var_17 += ((/* implicit */unsigned int) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_0) / (var_1)))) <= (min((18446744073709551615ULL), (18ULL))))))));
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_8))));
}
