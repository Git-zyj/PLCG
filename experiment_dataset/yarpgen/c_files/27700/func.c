/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27700
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
    var_18 ^= var_15;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                var_19 ^= ((((/* implicit */_Bool) max((arr_1 [i_1 + 2]), (arr_1 [i_1 + 2])))) ? (((0ULL) * (18446744073709551615ULL))) : (((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (17699324217974289352ULL) : (5404720689989868707ULL))));
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (((~(((unsigned long long int) arr_4 [14ULL] [0ULL])))) != (((unsigned long long int) 18446744073709551615ULL)))))));
                arr_5 [16ULL] [16ULL] [i_1] = ((unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) 281472829227008ULL)) && (((/* implicit */_Bool) 18446744073709551615ULL)))))));
                var_21 = 18446744073709551615ULL;
                var_22 = var_10;
            }
        } 
    } 
}
