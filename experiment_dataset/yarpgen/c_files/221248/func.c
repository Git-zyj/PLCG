/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221248
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) 31LL);
        arr_4 [i_0] &= ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) arr_0 [i_0])))));
    }
    var_16 = ((/* implicit */int) var_0);
    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)71))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) var_1)))))) >= (((unsigned long long int) var_4))));
}
