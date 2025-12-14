/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233689
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
    var_10 = ((/* implicit */signed char) max((((((/* implicit */_Bool) 8058134131766790785ULL)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_1))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1054613327)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0])))))))));
    }
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) var_2))));
    var_14 = ((/* implicit */_Bool) var_9);
}
