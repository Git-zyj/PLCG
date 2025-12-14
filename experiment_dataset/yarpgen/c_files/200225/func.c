/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200225
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
    for (short i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_10))));
        var_17 += ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_0 [2LL])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [(unsigned char)6])))));
    }
    var_18 *= ((/* implicit */short) var_4);
    var_19 = max((var_15), (((/* implicit */unsigned int) var_9)));
}
