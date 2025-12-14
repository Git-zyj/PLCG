/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204406
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_20 -= ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (min((arr_1 [i_0]), (var_13)))))));
        var_21 -= max((((/* implicit */unsigned int) ((_Bool) arr_0 [i_0]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (432345564227567616ULL) : (arr_1 [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)28672)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : ((~(3543129314U))))));
    }
    var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 16690949533636917882ULL))));
    var_23 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) * (213519493103848470ULL)));
}
