/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193540
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
    var_11 = ((/* implicit */int) max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) min((7576818792841587065LL), (((/* implicit */long long int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)1))) : ((-(var_10)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_12 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (short)-16))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [(unsigned char)14])) <= (((/* implicit */int) var_6))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_0 [0ULL])))))));
        var_13 &= arr_1 [(unsigned short)0];
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (unsigned short)16172))));
        var_15 = ((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) arr_0 [i_0])))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_0])) : ((~(((/* implicit */int) var_8))))));
    }
}
