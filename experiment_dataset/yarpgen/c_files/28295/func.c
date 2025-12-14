/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28295
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_19))))), (var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)1958))) : (((((/* implicit */_Bool) max((((/* implicit */short) (signed char)20)), ((short)2047)))) ? (((((/* implicit */_Bool) (short)-1958)) ? (67108863LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)15)))))))));
    var_21 = ((/* implicit */long long int) min((var_21), (max((min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)28))) : (-766947204467801762LL))), (((/* implicit */long long int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) (short)1958))))))), (var_0)))));
    var_22 = ((/* implicit */short) var_5);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 - 3] [i_0 - 3])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)24237))) < (0ULL)))) : (((/* implicit */int) arr_0 [i_0 + 1])))))));
        arr_2 [i_0] = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_1 [(short)15] [i_0 - 3])));
        var_24 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(234417799U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)61651)) && (((/* implicit */_Bool) (unsigned short)14154))))) : (((/* implicit */int) arr_1 [i_0 - 1] [11LL]))));
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]))))) ? (((/* implicit */int) arr_1 [i_0] [i_0 - 3])) : (((/* implicit */int) ((((/* implicit */int) (short)-21)) <= (((/* implicit */int) arr_0 [i_0 + 1]))))))))));
    }
}
