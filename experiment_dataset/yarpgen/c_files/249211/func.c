/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249211
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
    var_14 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483627)) ? (((/* implicit */int) var_2)) : (1250869623)))) ? (var_0) : (((/* implicit */int) ((_Bool) (_Bool)1))))));
    var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)26534)) : (((/* implicit */int) (unsigned short)20429))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 975466660U)))) & (((((/* implicit */_Bool) var_12)) ? (6704455250379596371ULL) : (((/* implicit */unsigned long long int) var_9))))))));
    var_16 = var_7;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0])))))));
        arr_2 [i_0] = ((/* implicit */int) (unsigned char)247);
    }
}
