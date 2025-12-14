/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224753
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
    var_16 = ((/* implicit */int) ((short) min((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_15))))));
    var_17 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)4081))))) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_18 = ((/* implicit */long long int) arr_0 [i_0]);
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4067)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)19))));
        arr_2 [i_0 + 1] [(unsigned short)5] = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
    }
}
