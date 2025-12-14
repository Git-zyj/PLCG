/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239004
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
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_0))));
    var_19 = var_12;
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 + 2])) : (((/* implicit */int) arr_2 [i_0 + 2]))))) && (((/* implicit */_Bool) arr_2 [i_0 + 2]))));
        var_20 = ((/* implicit */int) (-(((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-97)) + (2147483647))) << (((((((/* implicit */int) arr_2 [i_0 + 3])) + (117))) - (25)))))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 2])))))));
        var_21 = ((/* implicit */unsigned int) max((max((max((9223372036854775802LL), (((/* implicit */long long int) arr_2 [i_0])))), (((((/* implicit */_Bool) (short)-32760)) ? (-8409423124641951122LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))))), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) + (((/* implicit */int) ((4294967295U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))))));
    }
    var_22 = ((/* implicit */unsigned long long int) var_9);
}
