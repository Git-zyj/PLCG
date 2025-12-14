/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212138
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
    var_13 ^= ((/* implicit */unsigned int) var_2);
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_2))));
    var_15 = ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)6646))))))))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_1 [4LL])) | (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) 4168883287U)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [9U]))))))) ? (((/* implicit */int) arr_0 [11ULL])) : (((/* implicit */int) arr_1 [(_Bool)1])))))));
        var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [(unsigned short)4])) : (((/* implicit */int) arr_1 [18ULL]))))) || ((!(((/* implicit */_Bool) arr_1 [(_Bool)1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [18U]))) : (var_5)));
    }
}
