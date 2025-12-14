/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241704
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
    var_15 = ((/* implicit */_Bool) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4179425273U)) ? (((/* implicit */int) (unsigned short)1553)) : (((/* implicit */int) (_Bool)1))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) -6704136476557925853LL)) || (((/* implicit */_Bool) 27ULL))))) < (((/* implicit */int) (unsigned short)32767))));
    }
}
