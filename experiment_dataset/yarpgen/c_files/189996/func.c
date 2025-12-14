/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189996
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
    var_17 = ((/* implicit */unsigned int) (~((~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_0)))))));
    var_18 = ((/* implicit */short) var_4);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        var_19 += ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
        var_20 &= (((+(min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (var_9))))) << (((((((arr_0 [i_0] [i_0]) ? (var_9) : (var_9))) << (((((/* implicit */int) arr_2 [(short)8])) - (160))))) - (3699453244137799659ULL))));
        var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_16))))) ? (((/* implicit */int) (!(arr_0 [i_0] [i_0])))) : (((/* implicit */int) arr_0 [i_0] [i_0])))) - (((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned int) arr_2 [i_0]))))) ? (((((/* implicit */int) var_15)) - (((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2])))) : (((/* implicit */int) ((_Bool) var_14)))))));
    }
}
