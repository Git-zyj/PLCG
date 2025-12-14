/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37723
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) >> (((((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) 16560293992032150267ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23507))) : (2997742913621887077ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15449001160087664539ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-241))))))) - (23479ULL)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                var_12 *= ((/* implicit */short) ((((/* implicit */_Bool) ((int) max((((/* implicit */short) arr_5 [i_0] [(short)1] [5LL])), (var_7))))) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (0ULL)));
                var_13 = ((/* implicit */int) (!(((_Bool) -1LL))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (!(((((/* implicit */_Bool) ((2130184943798267245ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_3))))))))))));
}
