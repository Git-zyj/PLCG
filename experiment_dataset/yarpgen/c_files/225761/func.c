/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225761
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
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                arr_8 [i_0] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) ((-130993208) <= (((/* implicit */int) (_Bool)1)))))));
                var_19 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(0ULL)))) ? (((/* implicit */int) arr_5 [i_1 + 2] [i_0])) : ((~(((/* implicit */int) var_14))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 17592186044415ULL)) ? (((/* implicit */unsigned long long int) -130993224)) : (8392389610334780994ULL))), (((((/* implicit */_Bool) var_18)) ? (((unsigned long long int) 18446726481523507200ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))));
    var_21 = ((/* implicit */unsigned long long int) var_3);
}
