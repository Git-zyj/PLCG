/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209222
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) (-(min((((/* implicit */long long int) arr_0 [(unsigned short)15])), (((((/* implicit */_Bool) arr_1 [6ULL] [2LL])) ? (((/* implicit */long long int) var_1)) : (arr_1 [i_0] [i_0])))))));
        var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59047)) ? (-669033819) : (((/* implicit */int) (unsigned short)6488))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6502))) : (12530659625072635036ULL))) != (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)59047)) : (((/* implicit */int) (_Bool)1))))), (min((((/* implicit */long long int) (unsigned short)59047)), (-7809547595007261175LL))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_17 = (!(((/* implicit */_Bool) (signed char)91)));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) 128999186501135626LL))));
    }
    var_19 = min((((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */unsigned int) (unsigned short)24027)), (622946220U))))), (max((((/* implicit */unsigned long long int) min(((short)13696), (((/* implicit */short) var_8))))), (((var_13) >> (((var_13) - (7386977033741205415ULL))))))));
}
