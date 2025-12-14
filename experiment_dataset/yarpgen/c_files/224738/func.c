/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224738
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
    var_16 *= ((/* implicit */short) min((((((/* implicit */_Bool) var_1)) ? (min((0ULL), (((/* implicit */unsigned long long int) -2147483646)))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_8)), (var_10)))))), (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
    var_17 = ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_18 += ((/* implicit */unsigned short) ((4064037311U) & (1710364153U)));
                var_19 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)93)) ? (((/* implicit */int) (_Bool)0)) : (1395248874))))));
                var_20 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [12ULL])) > (((arr_2 [20U] [i_1]) & (((/* implicit */int) (short)-30298))))));
            }
        } 
    } 
}
