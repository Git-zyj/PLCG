/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195514
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_10 = ((/* implicit */_Bool) var_4);
        var_11 ^= ((/* implicit */short) arr_0 [i_0]);
    }
    var_12 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) -1617552623)), (min((var_3), (var_6))))) << (((var_0) - (11205523788216845836ULL)))));
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) 1444888494U))));
    var_14 = ((/* implicit */long long int) min((((/* implicit */unsigned int) 1392114163)), (max((((/* implicit */unsigned int) min((-1392114163), (((/* implicit */int) var_4))))), (min((((/* implicit */unsigned int) (unsigned short)0)), (0U)))))));
}
