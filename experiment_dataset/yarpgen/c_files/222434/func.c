/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222434
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
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) arr_0 [i_0 + 1]);
        arr_3 [i_0 - 1] [i_0 - 1] = ((/* implicit */signed char) min((1915349016U), (((/* implicit */unsigned int) var_5))));
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */long long int) max((2379618278U), (var_9)))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_0) : (((/* implicit */long long int) 2379618279U))))) ? (((/* implicit */long long int) ((1073741824U) * (2379618279U)))) : (var_10))))))));
    }
    var_16 = ((/* implicit */unsigned long long int) ((min((2379618279U), (((/* implicit */unsigned int) (_Bool)1)))) > (var_9)));
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) max(((_Bool)1), ((_Bool)1))))))))));
}
