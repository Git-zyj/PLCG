/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20515
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (arr_0 [i_0] [i_0])))) ? (((4055409479U) / (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))) ? (max((max((9238277412830164603ULL), (var_8))), (((/* implicit */unsigned long long int) (unsigned short)37839)))) : (((/* implicit */unsigned long long int) (((~(340383894U))) >> (((var_8) - (3993444054920171991ULL))))))));
        var_12 *= ((/* implicit */long long int) (((+(((/* implicit */int) var_9)))) | (((((15798441397895335516ULL) > (((/* implicit */unsigned long long int) 239557834U)))) ? ((~(((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))))));
    }
    for (long long int i_1 = 2; i_1 < 22; i_1 += 2) 
    {
        var_13 = ((/* implicit */unsigned long long int) var_9);
        var_14 *= ((/* implicit */short) (-(max((((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))), (((unsigned int) arr_2 [(unsigned char)11]))))));
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) 239557834U)) ? (min((3652561572282311280ULL), (((/* implicit */unsigned long long int) -2291081346582085834LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1 + 1])) / (((/* implicit */int) var_10)))))));
        var_16 *= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37839))) - (9208466660879387037ULL))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) * (min((((/* implicit */unsigned long long int) 1225531013U)), (9238277412830164575ULL)))))));
    }
    var_17 *= ((/* implicit */_Bool) var_6);
}
