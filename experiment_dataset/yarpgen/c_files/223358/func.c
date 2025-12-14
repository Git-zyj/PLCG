/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223358
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
    var_18 = ((/* implicit */unsigned char) var_11);
    var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_13)), (((unsigned int) min((var_16), (((/* implicit */short) var_14)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((4193645261U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)144)))));
        arr_3 [i_0] = ((/* implicit */short) -32620667);
    }
}
