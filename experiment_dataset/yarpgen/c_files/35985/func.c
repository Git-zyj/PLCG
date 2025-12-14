/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35985
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
    var_12 = ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) & (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)230))) : (11882482746080374469ULL));
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) var_6))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 4; i_0 < 24; i_0 += 3) 
    {
        var_14 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 4])) ? (((/* implicit */int) arr_0 [i_0 - 4] [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2]))));
        arr_2 [i_0 - 4] = ((/* implicit */short) arr_1 [i_0]);
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0])) : (((/* implicit */int) arr_0 [i_0 - 3] [i_0 - 4])))))));
    }
}
