/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44510
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
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) arr_1 [i_0 + 1])))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (unsigned char)203);
        var_16 = ((/* implicit */short) arr_3 [i_0] [(unsigned char)7]);
    }
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) max((var_6), ((unsigned char)196))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_7)))) ^ (max((((/* implicit */unsigned long long int) var_4)), (var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)193))))))));
}
