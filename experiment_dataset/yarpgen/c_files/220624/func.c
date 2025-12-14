/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220624
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
    var_20 = ((((/* implicit */_Bool) (+((~(-763743351933269771LL)))))) ? (((/* implicit */unsigned long long int) var_3)) : (((max((10702015240532961784ULL), (((/* implicit */unsigned long long int) var_7)))) & (((/* implicit */unsigned long long int) (~(var_1)))))));
    var_21 = (~(763743351933269760LL));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                var_22 = ((((/* implicit */_Bool) ((arr_0 [i_1 + 3]) | (arr_0 [i_1 + 1])))) ? (((/* implicit */unsigned long long int) ((763743351933269788LL) ^ (-763743351933269788LL)))) : (((((/* implicit */_Bool) 763743351933269796LL)) ? (135107988821114880ULL) : (((/* implicit */unsigned long long int) 763743351933269787LL)))));
                var_23 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]);
                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((-(-1614864356855457834LL)))))) ? (arr_6 [i_1]) : ((+(((((/* implicit */_Bool) arr_1 [i_0])) ? (0ULL) : (((/* implicit */unsigned long long int) -9223372036854775800LL))))))));
            }
        } 
    } 
    var_25 -= ((/* implicit */unsigned long long int) (~((~(min((547776654515479111LL), (763743351933269787LL)))))));
}
