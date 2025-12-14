/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226709
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
    var_13 = ((/* implicit */short) var_5);
    var_14 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (4294967295U) : (4294967295U)))) ? (-5290429742959655633LL) : (min((-5290429742959655633LL), ((-9223372036854775807LL - 1LL)))))));
    var_15 = ((/* implicit */unsigned int) var_11);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */_Bool) (+(min((((((/* implicit */_Bool) (short)25391)) ? ((-9223372036854775807LL - 1LL)) : ((-9223372036854775807LL - 1LL)))), (783378279578769788LL)))));
        var_16 ^= ((/* implicit */signed char) var_0);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_17 = ((/* implicit */int) ((((((/* implicit */long long int) ((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ^ (5290429742959655632LL))) & (((((/* implicit */_Bool) ((var_3) ^ (arr_1 [i_1])))) ? (((4770183965898087774LL) << (((((((/* implicit */int) arr_4 [11ULL])) + (25))) - (12))))) : ((~(11LL)))))));
            var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_9) : (arr_1 [i_0])))) ? ((+((-9223372036854775807LL - 1LL)))) : (((((long long int) var_3)) - (max((-783378279578769789LL), (((/* implicit */long long int) var_12))))))));
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) (_Bool)1))))))));
            arr_6 [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((short) arr_1 [i_0]))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_11))))));
        }
    }
}
