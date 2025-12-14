/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38195
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
    for (long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)30087)) : (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) min((3646796119350857419LL), (((/* implicit */long long int) arr_1 [i_0]))))) : (min((((/* implicit */unsigned long long int) -7030604036327102280LL)), (var_16))))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((var_13), (arr_0 [i_0])))))))));
        var_20 ^= ((/* implicit */unsigned int) max((((/* implicit */int) max((min((var_1), (((/* implicit */unsigned short) arr_1 [i_0])))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 6530102643635241529ULL)))))))), ((-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_17))))))));
        var_21 *= (+(7551835210634367027ULL));
        var_22 = ((/* implicit */signed char) var_6);
        var_23 = ((/* implicit */_Bool) max(((signed char)0), (((/* implicit */signed char) ((_Bool) var_12)))));
    }
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((max((((/* implicit */unsigned short) (signed char)13)), (var_1))), (((/* implicit */unsigned short) (_Bool)1))))) / ((+(1836799409)))));
    var_25 = ((/* implicit */long long int) var_3);
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_11)), ((~(((/* implicit */int) var_3))))))) ? (((/* implicit */long long int) (~(((((/* implicit */int) var_12)) << (((var_16) - (12417346638983961183ULL)))))))) : (((((/* implicit */_Bool) (-(3526333105U)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_6))))) : (((6648868846426340642LL) >> (((768634190U) - (768634132U)))))))));
}
