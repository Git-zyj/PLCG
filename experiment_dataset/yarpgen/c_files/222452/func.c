/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222452
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
    for (long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) max((arr_2 [i_0 + 1]), (var_5)))) : (((/* implicit */int) ((var_10) != (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1]))))))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) ((arr_0 [i_0 + 1]) == (arr_0 [i_0 + 1]))))));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 + 1])))) > (((/* implicit */int) (_Bool)1)))))));
    }
    var_15 = ((/* implicit */short) max((((/* implicit */long long int) var_2)), (var_6)));
}
