/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229536
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
    var_13 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)146))))))) ? (((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_10)) - (107))))))) : (((/* implicit */int) var_4)));
    var_14 = ((/* implicit */signed char) ((((/* implicit */int) max((var_11), (((/* implicit */short) ((unsigned char) var_12)))))) | (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) <= (((long long int) var_7)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (+(((/* implicit */int) min((arr_3 [i_0 + 1]), (arr_3 [i_0 - 2])))))))));
        var_16 = ((/* implicit */unsigned char) ((_Bool) min((((((/* implicit */int) (unsigned char)151)) & (((/* implicit */int) (unsigned char)165)))), ((+(((/* implicit */int) arr_0 [i_0])))))));
    }
}
