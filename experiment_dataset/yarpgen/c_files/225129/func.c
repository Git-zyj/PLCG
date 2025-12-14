/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225129
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
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_12))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_19 += ((/* implicit */long long int) ((short) arr_0 [i_0]));
        var_20 = ((/* implicit */short) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((853677889U) - (853677889U)))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) 6054705424495102226LL)) ? (((/* implicit */int) (short)-1)) : (-591373371)));
        var_22 = ((/* implicit */unsigned long long int) ((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
    }
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((var_9) + (((/* implicit */long long int) ((/* implicit */int) (short)9642)))))))) ? ((+(((long long int) var_14)))) : (var_5)));
    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((((/* implicit */_Bool) min((var_3), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) >= (var_13))))) : ((((_Bool)1) ? (4294967295U) : (var_8))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((_Bool) var_10))))))))));
}
