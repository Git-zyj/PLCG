/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219907
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
    var_20 &= min(((~(((/* implicit */int) ((unsigned char) var_4))))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)42))))));
    var_21 *= 1177725885056643913ULL;
    var_22 ^= ((/* implicit */long long int) -1460717667);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_23 ^= ((/* implicit */unsigned short) 4294967295U);
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_1 [i_0 + 1])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3121572207132404072LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (4294967295U)))) ? (var_14) : (((/* implicit */int) var_12))))) : ((-(max((((/* implicit */long long int) arr_0 [i_0])), (var_2)))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 20; i_1 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */long long int) (short)-32765);
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) 8712731762769625300LL))) != (((/* implicit */int) arr_1 [i_1 + 3])))))));
        var_27 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) 8712731762769625300LL)) : (4849639234398580973ULL))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        var_28 = ((/* implicit */int) min((arr_3 [i_2]), (((/* implicit */unsigned long long int) var_2))));
        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (max((((((/* implicit */_Bool) 4294967295U)) ? (1760278887571152218ULL) : (((/* implicit */unsigned long long int) 458062342)))), (((((/* implicit */_Bool) 1244622488)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (1177725885056643929ULL))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)44)))))));
    }
    var_30 = ((/* implicit */short) 2147483647);
}
