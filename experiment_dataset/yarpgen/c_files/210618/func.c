/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210618
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
    for (short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? ((~(var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_8))))))));
        arr_3 [i_0 - 1] [i_0 + 2] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((int) -1555632440))) ? (((((/* implicit */_Bool) (short)23911)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-11))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-122)), (var_6))))))));
    }
    var_17 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))))))), (var_14)));
}
