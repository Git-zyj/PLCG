/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3514
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
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((unsigned long long int) (-9223372036854775807LL - 1LL))))));
    var_13 &= ((/* implicit */unsigned int) ((var_11) << ((((+(min((7LL), (var_4))))) - (7LL)))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned int) ((((arr_2 [i_1]) + (9223372036854775807LL))) << (((/* implicit */int) ((((/* implicit */_Bool) (-(-3714150748700198371LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 9631071994598303559ULL)) ? (((/* implicit */long long int) arr_4 [2ULL] [i_0])) : (arr_2 [i_0])))))))));
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 4463478779287662006ULL)) ? (((/* implicit */unsigned long long int) 922567960U)) : (4389456576512ULL)))))) || ((!(((/* implicit */_Bool) var_0))))));
            }
        } 
    } 
}
