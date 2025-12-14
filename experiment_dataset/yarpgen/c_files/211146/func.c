/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211146
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
    var_14 -= ((/* implicit */unsigned char) var_1);
    var_15 = ((/* implicit */unsigned long long int) (unsigned char)103);
    var_16 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))) % (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_7)))))), (var_12)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_17 *= ((/* implicit */short) 1639510393U);
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (((~(0ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */unsigned char) (_Bool)1))))) : ((~(((/* implicit */int) (_Bool)1))))))))))));
        arr_3 [(_Bool)1] = (+((+(4294967295U))));
    }
}
