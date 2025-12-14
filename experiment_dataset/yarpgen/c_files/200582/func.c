/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200582
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
    var_16 = ((((/* implicit */_Bool) var_15)) ? (max((((/* implicit */long long int) var_13)), (var_2))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned long long int) var_13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (max((var_8), (((/* implicit */unsigned int) var_13))))))));
    var_17 = var_5;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [(_Bool)1])), (((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (var_14))) % (var_4)))));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */unsigned int) min((arr_0 [(_Bool)1]), (((/* implicit */int) arr_2 [5LL]))))) : (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [4LL]))))), (min((4294967288U), (((/* implicit */unsigned int) arr_0 [(_Bool)1]))))))))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned int) arr_0 [(unsigned short)9]))))))) ? (min((max((var_12), (((/* implicit */long long int) arr_0 [i_0])))), (((/* implicit */long long int) arr_0 [i_0])))) : (((/* implicit */long long int) (-(2147483647))))));
    }
}
