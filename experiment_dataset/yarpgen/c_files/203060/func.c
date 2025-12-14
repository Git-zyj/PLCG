/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203060
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_11)) ? (18417595445897506505ULL) : (((/* implicit */unsigned long long int) 16U)))) : (min((13711059738497253882ULL), (((/* implicit */unsigned long long int) (unsigned char)161))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)448)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) | (((/* implicit */int) arr_0 [i_0 + 1]))));
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (!(var_5))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 2) 
    {
        var_14 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (unsigned short)65088)) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65093))) ^ (-3450663886569567352LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 - 1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (unsigned short)0)) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_5 [i_1 - 2])))))))));
        arr_6 [8] = arr_5 [i_1];
    }
    var_15 = ((/* implicit */unsigned char) ((short) var_2));
}
