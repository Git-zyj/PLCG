/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52248
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
    var_11 ^= ((/* implicit */signed char) min((((unsigned long long int) max((var_7), (((/* implicit */unsigned short) (signed char)14))))), (((/* implicit */unsigned long long int) var_3))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_12 = ((/* implicit */short) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0]))))) : (min((((/* implicit */long long int) (short)-21995)), (var_0))))), (((/* implicit */long long int) (-(min((var_5), (((/* implicit */unsigned int) (short)24911)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((var_5) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-24887)))));
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -21LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) 4294967295U))));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_1] [i_1])), (min((8998603604225972301LL), (((/* implicit */long long int) var_6))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_1 [i_1] [i_1]))))))) : (max((((/* implicit */long long int) arr_5 [i_1] [i_1])), (arr_4 [i_1] [i_1])))));
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) var_6))));
        arr_7 [i_1] &= ((/* implicit */_Bool) arr_5 [i_1] [i_1]);
        arr_8 [i_1] = ((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_4 [i_1] [i_1]) : (var_0))), (((/* implicit */long long int) var_3)))), (arr_4 [i_1] [i_1])));
    }
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)29)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_5)))) : (((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) > (((/* implicit */unsigned int) var_4))))))))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */unsigned long long int) var_3)), (((unsigned long long int) (short)24907)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16820)))));
}
