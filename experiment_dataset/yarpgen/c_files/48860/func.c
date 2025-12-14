/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48860
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_5), (arr_0 [i_0] [i_0])))) ? (((arr_0 [i_0] [i_0]) % (((/* implicit */long long int) 1078342649U)))) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (var_7) : (519840495U)))))))))));
        var_17 = ((/* implicit */long long int) ((((_Bool) arr_2 [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) arr_1 [i_0]))));
        var_18 = ((/* implicit */signed char) (((!((!(((/* implicit */_Bool) arr_3 [i_0])))))) ? (min((var_3), (((/* implicit */unsigned long long int) arr_3 [i_0])))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [i_0])) + (2147483647))) << (((((((/* implicit */int) arr_1 [i_0])) + (84))) - (11))))))));
    }
    var_19 = ((/* implicit */int) var_11);
}
