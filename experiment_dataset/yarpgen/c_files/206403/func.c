/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206403
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
    var_15 = ((/* implicit */long long int) (~(var_9)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((((/* implicit */short) (signed char)9)), ((short)(-32767 - 1)))), (arr_0 [i_0])))) ? ((~(((/* implicit */int) (short)32767)))) : (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114))) | (var_0))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */int) (short)16384)) : (((/* implicit */int) (signed char)-112))));
        var_18 = min((((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) >> (((/* implicit */int) var_8))))), (((((/* implicit */_Bool) (short)-32757)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_0))));
    }
}
