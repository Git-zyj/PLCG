/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50809
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
    for (long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_16 = max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))))), (((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_14))))));
        var_17 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)33))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (((!((!(((/* implicit */_Bool) (signed char)-33)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((unsigned int) (!(((/* implicit */_Bool) var_14))))))))));
    }
    var_19 -= ((/* implicit */unsigned char) (+(((/* implicit */int) var_4))));
}
