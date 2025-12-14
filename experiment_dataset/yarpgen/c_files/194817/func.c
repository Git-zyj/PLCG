/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194817
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
    var_15 = ((/* implicit */unsigned long long int) var_13);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (!(var_1))))));
        var_17 = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)42)) : (((/* implicit */int) var_13)))))))), (((((/* implicit */int) var_14)) ^ ((~(((/* implicit */int) var_13))))))));
    }
    var_18 |= ((/* implicit */unsigned long long int) var_2);
}
