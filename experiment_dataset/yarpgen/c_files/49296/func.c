/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49296
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [18U]))) : (arr_0 [i_0]))))));
        var_21 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_0 [i_0]))))));
    }
    var_22 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (((_Bool)1) ? (5279386225936167581ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
}
