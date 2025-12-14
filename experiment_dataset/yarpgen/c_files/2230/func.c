/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2230
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
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_20 ^= ((/* implicit */_Bool) max((min((((/* implicit */long long int) ((-2) != (-11)))), (((long long int) (unsigned char)174)))), (((/* implicit */long long int) arr_0 [i_0 - 1]))));
        arr_2 [(unsigned char)18] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)48613))) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) var_0))))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) (-(-11))))));
    }
    var_21 = ((/* implicit */unsigned short) ((short) ((_Bool) (unsigned char)13)));
    var_22 *= ((/* implicit */unsigned short) min((((/* implicit */int) ((short) ((_Bool) var_3)))), (-11)));
    var_23 = ((/* implicit */unsigned int) var_6);
    var_24 = ((/* implicit */unsigned short) var_5);
}
