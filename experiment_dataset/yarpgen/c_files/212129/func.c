/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212129
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
    var_19 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) -5311755239284317422LL)) : (0ULL)))) ? (((/* implicit */unsigned long long int) var_8)) : (((var_11) * (((/* implicit */unsigned long long int) var_13)))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
    var_20 = ((/* implicit */int) var_4);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (494057023U) : (((/* implicit */unsigned int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_16)))) : (((((/* implicit */unsigned int) arr_1 [i_0])) * (494057023U)))))) ? (((((/* implicit */_Bool) min((2079440243348237905ULL), (((/* implicit */unsigned long long int) (unsigned char)168))))) ? (max((16902169622477563550ULL), (((/* implicit */unsigned long long int) (_Bool)0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (2097151U) : (((/* implicit */unsigned int) arr_1 [i_0]))))))) : (((/* implicit */unsigned long long int) ((int) arr_1 [i_0 + 1])))));
        var_21 *= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_10)) ? (min((var_9), (arr_1 [i_0]))) : (arr_1 [i_0 + 1]))), (((/* implicit */int) (unsigned char)196))));
    }
}
