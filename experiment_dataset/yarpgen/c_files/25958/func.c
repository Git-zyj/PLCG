/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25958
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) 4294967295U)) ? (4294967276U) : (15U));
        arr_4 [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0] [i_0]))) ? (((((/* implicit */_Bool) ((int) arr_1 [i_0] [i_0]))) ? (((var_9) ^ (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) << (((9223372036854775794LL) - (9223372036854775794LL)))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-1))))) ? (((/* implicit */int) ((unsigned short) var_13))) : (var_1))))));
    }
    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) var_14)), ((short)31744)))) - (((/* implicit */int) ((var_1) > (var_6)))))))));
    var_16 = ((/* implicit */unsigned long long int) var_10);
    var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((((/* implicit */long long int) 1105702425U)), (4LL)))) ? (((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */long long int) 2093622064U)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_5)))) ? (((((/* implicit */_Bool) 0ULL)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
}
