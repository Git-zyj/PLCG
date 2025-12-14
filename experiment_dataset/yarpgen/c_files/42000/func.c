/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42000
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
    var_19 = ((/* implicit */long long int) ((int) ((((/* implicit */int) var_15)) ^ (((var_17) | (var_9))))));
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((((((5210971295269272883LL) / (((/* implicit */long long int) -997328819)))) & (((/* implicit */long long int) (-(((/* implicit */int) var_7))))))), (((/* implicit */long long int) var_11)))))));
    var_21 -= ((/* implicit */long long int) ((((/* implicit */int) (!(((var_12) < (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) << (((((long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13))))) - (16548LL)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_22 -= ((/* implicit */long long int) ((((((/* implicit */int) arr_2 [i_0 + 3] [i_0 + 2])) + (2147483647))) << (((((/* implicit */int) ((_Bool) arr_1 [i_0 + 3]))) - (1)))));
        var_23 = ((/* implicit */unsigned short) var_12);
        var_24 = ((/* implicit */signed char) arr_2 [i_0] [i_0 - 1]);
    }
    var_25 = ((/* implicit */_Bool) ((long long int) min((((/* implicit */int) var_13)), (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)20418)))))));
}
