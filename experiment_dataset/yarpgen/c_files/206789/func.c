/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206789
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
    /* vectorizable */
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_10 = ((/* implicit */_Bool) var_6);
        var_11 = ((((unsigned long long int) 14153727902412422574ULL)) << (((((/* implicit */int) var_4)) - (15619))));
        var_12 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_1))));
        var_13 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & ((~(var_8)))));
    }
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5)))))));
    var_15 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)6540)) / (((/* implicit */int) var_0))))), (var_8)));
    var_16 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 16183512827708172398ULL)) ? (-8379069653911822711LL) : (5915275917965747980LL)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_5))));
}
