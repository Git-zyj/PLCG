/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37673
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
    var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-16))));
    var_13 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)53)) ? ((((((_Bool)0) ? (var_3) : (((/* implicit */int) var_1)))) % (var_3))) : (((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_14 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) arr_0 [i_0])))))) : (((var_8) << (((((/* implicit */int) arr_0 [i_0])) - (129))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((arr_2 [i_0]) && (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) >= (((/* implicit */int) arr_0 [i_0]))))))));
        var_15 ^= ((/* implicit */int) ((unsigned short) var_9));
        var_16 = max(((+(((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_0 [i_0]))))))), (((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)50308))) ? ((((_Bool)1) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) min(((_Bool)1), (var_4)))))));
    }
    var_17 = ((/* implicit */unsigned char) var_10);
}
