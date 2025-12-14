/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32401
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
    var_11 = var_1;
    var_12 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) min((((/* implicit */signed char) var_3)), (var_5)))) : (((/* implicit */int) ((signed char) 7816652548529503232ULL))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [i_0] = (+(min((0ULL), (((/* implicit */unsigned long long int) (_Bool)1)))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) min((var_4), (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_0 [23ULL])))) : ((+(4294967295U)))))));
    }
}
