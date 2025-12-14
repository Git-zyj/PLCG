/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240419
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
    var_11 = ((/* implicit */unsigned long long int) (~((~((~(((/* implicit */int) (unsigned short)48714))))))));
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (((~((~(var_9))))) << (((var_6) - (5184735650979858189LL))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_13 ^= (-(((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) var_2)))));
        var_14 = ((/* implicit */unsigned long long int) var_6);
    }
    var_15 = ((/* implicit */unsigned long long int) ((long long int) 1784780734220513136LL));
}
