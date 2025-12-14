/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204281
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
    var_18 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) > (6ULL)));
    var_19 = ((/* implicit */short) var_17);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((6ULL) ^ (2745922268060774386ULL));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))), (((((/* implicit */_Bool) 6ULL)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))))));
    }
    var_21 = ((/* implicit */unsigned long long int) (signed char)11);
}
