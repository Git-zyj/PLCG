/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200243
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)38970)) : (1158969301)))) ? (((((/* implicit */int) var_5)) + (((/* implicit */int) var_13)))) : (((-1158969313) - (767743313))))))))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)38988))));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 903314650)) ? (14) : (((/* implicit */int) (unsigned char)255))))) ? (((arr_0 [(_Bool)1]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) >> (((/* implicit */int) arr_1 [i_0 + 1])))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        arr_8 [17] [7] = ((/* implicit */int) arr_0 [i_1]);
        var_16 = ((/* implicit */unsigned long long int) (-((-(-767743313)))));
    }
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */long long int) max((max((((/* implicit */unsigned int) var_2)), (var_1))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)162)) != (((/* implicit */int) var_3)))))))) > ((+(max((((/* implicit */long long int) (_Bool)1)), (var_0))))))))));
}
