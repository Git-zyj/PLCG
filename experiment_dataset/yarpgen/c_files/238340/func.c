/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238340
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) max((((int) ((int) arr_1 [i_0]))), (max((((/* implicit */int) (_Bool)0)), ((~(var_8)))))));
        var_16 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_2))) + (9223372036854775807LL))) << (((((((arr_0 [i_0] [i_0]) + (9223372036854775807LL))) << (((((arr_0 [i_0] [i_0]) + (7814665051372525907LL))) - (25LL))))) - (2817413970964499852LL)))));
        arr_5 [i_0] = ((/* implicit */int) ((((var_10) & (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))) != (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
        var_17 = ((((/* implicit */long long int) (+((~(((/* implicit */int) var_4))))))) & ((~(var_10))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        arr_9 [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) var_14))))) > (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 3409346824U)) : (arr_0 [i_1] [i_1])))));
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_6);
        arr_11 [i_1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)0))));
    }
    var_18 ^= ((/* implicit */signed char) var_0);
}
