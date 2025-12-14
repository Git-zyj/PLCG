/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217250
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
    for (unsigned int i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) != (min((((/* implicit */unsigned int) arr_2 [i_0 - 2])), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (536805376U)))))));
        var_16 = ((/* implicit */int) arr_2 [i_0 + 2]);
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((min((((/* implicit */long long int) arr_2 [i_0])), (arr_1 [i_0]))) == (arr_1 [i_0])))) == (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (arr_0 [i_0]))))) == (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (8444249301319680LL))))))));
        var_17 = ((/* implicit */long long int) arr_2 [i_0]);
    }
    var_18 += ((/* implicit */unsigned short) var_5);
}
