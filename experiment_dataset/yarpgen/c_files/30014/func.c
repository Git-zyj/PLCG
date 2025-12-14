/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30014
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
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 5019922966835424263LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0])))))) : (((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) (short)-1))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_0 [(short)4]))) : (min((arr_0 [(unsigned short)7]), (arr_0 [i_0])))))));
        var_20 = ((/* implicit */int) max((var_17), (arr_0 [i_0])));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0]) <= (arr_1 [i_0]))))) % (((((/* implicit */_Bool) (signed char)102)) ? (arr_1 [i_0]) : (arr_0 [i_0])))));
    }
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) 11702370227344621095ULL))));
}
