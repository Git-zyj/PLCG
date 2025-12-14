/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42651
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
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [i_0])))) | (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        arr_3 [(_Bool)1] = ((/* implicit */_Bool) max(((~(((/* implicit */int) arr_1 [i_0])))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))));
    }
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_6))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((min((990447161), (((/* implicit */int) var_9)))), (((/* implicit */int) ((unsigned short) var_11)))))) ^ (((unsigned long long int) var_4))));
    var_18 = ((/* implicit */signed char) ((var_13) ? ((~(max((990447161), (990447149))))) : (((/* implicit */int) var_13))));
}
