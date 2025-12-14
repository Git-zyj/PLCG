/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223506
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
    for (short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        var_17 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0]) < (((/* implicit */unsigned int) 550842236)))))) < (((1911638964524763630ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (arr_0 [i_0])))) ? (((arr_1 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_0 [i_0]))) : (((var_10) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_1 [i_0]))))) ^ (((((/* implicit */_Bool) var_13)) ? (134217728U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)216)))))));
    }
    var_19 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) ^ (((/* implicit */int) (_Bool)1))))) ^ (((((/* implicit */_Bool) var_4)) ? (1911638964524763630ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-121))))) ? ((((_Bool)1) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-107))) : (var_12))))))));
}
