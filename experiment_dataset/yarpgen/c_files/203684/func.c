/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203684
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? (((int) -495349602)) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_1 [i_0])))))));
        arr_5 [i_0] = ((/* implicit */short) var_16);
    }
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-2457)) ? (1987519923) : (((/* implicit */int) var_7))))), (((unsigned int) (signed char)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (1152886320234758144ULL)));
}
