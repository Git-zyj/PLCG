/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32510
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (+(6279064159909749436ULL))))));
        var_16 |= ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
        arr_2 [i_0] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
    }
    var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
    var_18 *= ((/* implicit */short) (~(var_1)));
    var_19 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
}
