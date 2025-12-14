/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30048
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
    for (short i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_14 += ((/* implicit */unsigned long long int) ((8388607U) != (((/* implicit */unsigned int) ((/* implicit */int) min((min(((signed char)82), (var_11))), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_2)))))))))));
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) 8388607U))));
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        arr_4 [i_1] = arr_2 [(_Bool)1];
        arr_5 [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) 4286578689U)) ? (arr_1 [i_1]) : (arr_1 [i_1]))), (min((8388606U), (8388612U)))));
    }
    var_16 = min((((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (signed char)-15)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-15))))) : (((/* implicit */unsigned long long int) min((30U), (8388601U)))))), (((/* implicit */unsigned long long int) 2147483647)));
}
