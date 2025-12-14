/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216223
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
    var_16 = ((/* implicit */unsigned int) ((int) ((unsigned char) (~(640167798)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((long long int) var_8))), (max((((/* implicit */unsigned long long int) max((arr_0 [i_0]), (((/* implicit */unsigned int) var_14))))), (max((((/* implicit */unsigned long long int) 3728899997U)), (var_4)))))));
        arr_3 [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_11), (arr_1 [i_0])))) ? (max((3728899997U), (((/* implicit */unsigned int) arr_2 [i_0])))) : (((/* implicit */unsigned int) max((var_1), (var_3))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (566067296U)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_7)) : (var_4))))) : (((/* implicit */unsigned long long int) 3728899966U))));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)1151))))) : (((566067307U) >> (((((/* implicit */int) var_10)) - (89)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (-(566067319U)))))) : (var_4))))));
    }
}
