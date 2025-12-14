/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245798
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)99)) || (((/* implicit */_Bool) arr_0 [i_0 + 1]))))), (arr_0 [i_0 + 1])))));
        var_19 = ((/* implicit */unsigned int) max((arr_0 [i_0]), ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_1 [i_0 - 1])) : (max((arr_0 [5]), (((/* implicit */unsigned long long int) arr_1 [i_0]))))))));
    }
    var_20 = ((/* implicit */unsigned int) min((var_20), (var_5)));
}
