/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27253
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) | ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) max((((var_15) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))), (((/* implicit */int) arr_1 [i_0])))))));
        var_20 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) arr_2 [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((4U) * (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? ((+(((/* implicit */int) (unsigned char)184)))) : (((/* implicit */int) arr_0 [i_0]))))) : (((var_13) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_2))))))));
    }
    var_21 = ((/* implicit */_Bool) (+((-(((/* implicit */int) (_Bool)1))))));
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)46193)), (9U)))) ? (min((((/* implicit */long long int) ((6291456U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)197)))))), (((((/* implicit */_Bool) 2256862332U)) ? (-26LL) : (9223372036854775807LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) == (((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46193)))))))))));
    var_23 = var_0;
    var_24 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-116)) - ((-(((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) var_1))))))));
}
