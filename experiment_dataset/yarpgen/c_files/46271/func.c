/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46271
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
    var_18 = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) var_7)) ? (var_2) : (var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (18100553828757365734ULL)))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0]))));
        var_19 = (~(((((/* implicit */long long int) 4221738096U)) | (var_13))));
    }
    for (unsigned int i_1 = 1; i_1 < 15; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) min(((~(var_2))), (((/* implicit */unsigned long long int) 3347751148U))));
        arr_8 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((unsigned int) (signed char)-105))) == (((unsigned long long int) arr_5 [i_1 - 1]))));
    }
}
