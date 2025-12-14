/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203295
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (~(var_11))))));
        var_16 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
    }
    var_17 = ((/* implicit */int) max((((/* implicit */long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_13))))), ((-(var_2)))))), (var_3)));
    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? ((((_Bool)0) ? (-6682587760207257626LL) : (((/* implicit */long long int) -1163066227)))) : (((2782591280984384711LL) % (((/* implicit */long long int) 2147483647)))))))));
}
