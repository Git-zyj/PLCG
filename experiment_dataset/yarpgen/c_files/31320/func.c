/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31320
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_1 [i_0]))))) : (min((157786787715277880ULL), (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
        var_15 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) * (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (arr_0 [3ULL] [19ULL])))))), (((((/* implicit */_Bool) 18446744073709551606ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_0 [(unsigned short)14] [(unsigned short)14])))) : ((~(9676371986891264268ULL)))))));
    }
    var_16 = ((((/* implicit */_Bool) min((var_2), ((~(var_2)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (short)6652)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (unsigned short)42850))))))) : (157786787715277880ULL));
}
