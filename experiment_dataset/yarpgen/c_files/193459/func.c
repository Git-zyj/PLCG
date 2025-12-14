/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193459
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
    var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) var_2))));
    var_11 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 8598334529409909862LL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)(-32767 - 1)))))), (max((((/* implicit */unsigned int) ((((/* implicit */long long int) var_5)) >= (var_6)))), (var_2)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        var_12 = ((/* implicit */int) var_3);
        var_13 = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0 - 2])) < (((/* implicit */int) arr_1 [i_0 - 3]))));
        var_14 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
    }
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((unsigned int) (short)28))))) + (max((((/* implicit */long long int) ((((/* implicit */_Bool) 942470239U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)14505))))), (var_6)))));
}
