/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200586
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
    var_17 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_5), (((/* implicit */short) (signed char)-59)))))) : (8799376676228571260LL));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) max((((/* implicit */unsigned int) -6)), (((((/* implicit */_Bool) (+(((/* implicit */int) (short)19847))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned short)17] [i_0]))) : (var_16))))))));
        var_19 = ((/* implicit */int) var_15);
    }
    var_20 += ((/* implicit */short) (~(((((/* implicit */_Bool) var_15)) ? (var_0) : (((/* implicit */unsigned long long int) ((long long int) 7243476213155948840LL)))))));
}
