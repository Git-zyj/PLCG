/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249975
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
    var_17 = ((/* implicit */signed char) min((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) != (var_3))))) ^ (var_5))), (((/* implicit */unsigned int) var_2))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 - 1])) - (((/* implicit */int) arr_0 [i_0 - 1]))))) + (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1]))))))) : (arr_1 [i_0])));
        var_19 *= ((/* implicit */_Bool) max((min((arr_1 [12]), (((/* implicit */unsigned long long int) var_13)))), (((((/* implicit */unsigned long long int) max((7311154200094321890LL), (((/* implicit */long long int) (signed char)12))))) * (arr_1 [12LL])))));
    }
}
