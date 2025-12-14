/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30658
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
    for (long long int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        var_20 |= ((/* implicit */short) ((0ULL) != (12ULL)));
        var_21 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) != (((((/* implicit */_Bool) arr_2 [3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (18446744073709551594ULL))))) ? (max((((657777022841649731LL) - (((/* implicit */long long int) ((/* implicit */int) var_3))))), (arr_1 [i_0]))) : ((+(arr_1 [i_0])))));
    }
    var_22 += ((/* implicit */long long int) max(((~((~(1659946502U))))), (((/* implicit */unsigned int) ((((/* implicit */int) max((var_17), (var_12)))) | (((/* implicit */int) var_16)))))));
    var_23 |= ((/* implicit */unsigned int) var_6);
}
