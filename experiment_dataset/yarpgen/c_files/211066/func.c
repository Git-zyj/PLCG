/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211066
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) ((arr_0 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_16)))))));
        arr_2 [i_0] = arr_0 [i_0] [i_0];
        var_19 = max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), ((+(min((var_16), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))))));
    }
    var_20 = max((var_1), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((-3697914862128514220LL) / (((/* implicit */long long int) ((/* implicit */int) var_12))))))))));
}
