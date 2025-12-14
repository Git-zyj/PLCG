/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224740
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
    var_19 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) var_10))));
    var_20 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)53)))))) * (max((4996583803737443370ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_21 = ((/* implicit */long long int) max((((var_16) ? (var_2) : (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned int) max((((/* implicit */short) var_8)), ((short)-32765))))));
        var_22 += ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (4294967295U) : (var_5)))) >= (-27LL))))) % ((-(4294967288U)))));
        arr_3 [i_0] = ((/* implicit */long long int) max((((((37LL) == (((/* implicit */long long int) ((/* implicit */int) (short)32765))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)53)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)7))) != (var_13))))));
    }
}
